/*
 * XREFs of MiWriteComplete @ 0x14040E620
 * Callers:
 *     MiGatherPagefilePages @ 0x1403C0730 (MiGatherPagefilePages.c)
 *     MiGatherMappedPages @ 0x14040CB20 (MiGatherMappedPages.c)
 *     MiStoreWriteModifiedCompleteApc @ 0x14040E600 (MiStoreWriteModifiedCompleteApc.c)
 * Callees:
 *     MiWriteCompletePfn @ 0x14020D42C (MiWriteCompletePfn.c)
 *     MiSetStoreVirtualPagefileValue @ 0x140226180 (MiSetStoreVirtualPagefileValue.c)
 *     MiTransferSoftwarePte @ 0x1402280C0 (MiTransferSoftwarePte.c)
 *     MiReleaseControlAreaWaiters @ 0x14022F630 (MiReleaseControlAreaWaiters.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiRetardMdl @ 0x14023EDE8 (MiRetardMdl.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1402C2260 (ObFastDereferenceObjectDeferDelete.c)
 *     MiClearPageFileReservation @ 0x1402CC084 (MiClearPageFileReservation.c)
 *     MmUnmapLockedPages @ 0x1403285B0 (MmUnmapLockedPages.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     MiDecrementModifiedWriteCount @ 0x14035A754 (MiDecrementModifiedWriteCount.c)
 *     FsRtlReleaseFileForModWrite @ 0x14035B210 (FsRtlReleaseFileForModWrite.c)
 *     MiStoreModifiedWriteCompletePfn @ 0x140386C54 (MiStoreModifiedWriteCompletePfn.c)
 *     CcNotifyOfMappedWriteComplete @ 0x1403A6780 (CcNotifyOfMappedWriteComplete.c)
 *     MiIsRetryIoStatus @ 0x1403BF170 (MiIsRetryIoStatus.c)
 *     MmIsWriteErrorFatal @ 0x1403BF1B8 (MmIsWriteErrorFatal.c)
 *     MiMakePagefileWriterEntryAvailable @ 0x1403BF26C (MiMakePagefileWriterEntryAvailable.c)
 *     MiStoreCheckCompleteWriteBatch @ 0x1403C056C (MiStoreCheckCompleteWriteBatch.c)
 *     MiUnlockPartitionMappedWriter @ 0x14040AAF0 (MiUnlockPartitionMappedWriter.c)
 *     MiLockPartitionMappedWriter @ 0x14040AB54 (MiLockPartitionMappedWriter.c)
 *     MiFreeModWriterEntry @ 0x14040ABB0 (MiFreeModWriterEntry.c)
 *     MiReleaseWriteInProgressCharges @ 0x14040AC14 (MiReleaseWriteInProgressCharges.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14042F3F0 (KiQueryUnbiasedInterruptTime.c)
 *     MI_PAGEFILE_WRITE @ 0x14046C52C (MI_PAGEFILE_WRITE.c)
 *     MiStoreDecrementOutstandingWrites @ 0x1404838B0 (MiStoreDecrementOutstandingWrites.c)
 *     MiSetDeleteOnClose @ 0x1404D3D60 (MiSetDeleteOnClose.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     MiNotifyUserOfLostData @ 0x140666988 (MiNotifyUserOfLostData.c)
 *     Feature_Servicing_Mm_StoreModWriteDelay__private_IsEnabledNoReportingNoInline @ 0x14066781C (Feature_Servicing_Mm_StoreModWriteDelay__private_IsEnabledNoReportingNoInline.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

LONG __fastcall MiWriteComplete(_QWORD *P, int *a2, int a3)
{
  struct _MDL *v3; // rsi
  int v4; // ebx
  signed int v5; // eax
  __int64 v7; // r14
  _QWORD *v8; // r15
  int v9; // edi
  unsigned __int8 v10; // cf
  ULONG_PTR v11; // r13
  int v12; // eax
  int UnbiasedInterruptTime; // eax
  struct _KEVENT *v14; // r9
  unsigned __int64 v15; // r12
  struct _KEVENT *v16; // rdx
  int v17; // ecx
  ULONG_PTR v18; // rax
  __int64 v19; // r12
  int v20; // ecx
  int v21; // r12d
  BOOL v22; // eax
  BOOL IsRetryIoStatus; // eax
  char v24; // cl
  int v25; // eax
  __int64 v26; // r10
  __int64 v27; // rdx
  unsigned __int64 v28; // rsi
  _QWORD *v29; // r13
  unsigned int v30; // r12d
  int v31; // eax
  unsigned __int64 v32; // rax
  __int64 v33; // rsi
  int v34; // eax
  unsigned int v35; // eax
  int v36; // eax
  char v37; // r9
  __int64 *v38; // rax
  _QWORD *v39; // rcx
  unsigned __int8 *v40; // rbx
  KIRQL v41; // al
  unsigned __int8 v42; // cl
  unsigned __int8 v43; // dl
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *v45; // rcx
  bool v46; // zf
  BOOL v47; // eax
  BOOL v48; // esi
  KIRQL v49; // al
  unsigned __int8 v50; // cl
  LONG result; // eax
  struct _KEVENT *v52; // [rsp+30h] [rbp-39h]
  unsigned __int64 v53; // [rsp+38h] [rbp-31h] BYREF
  __int64 v54; // [rsp+40h] [rbp-29h]
  PRKEVENT Event; // [rsp+48h] [rbp-21h]
  unsigned __int64 v56; // [rsp+50h] [rbp-19h]
  int v57; // [rsp+58h] [rbp-11h]
  unsigned __int64 v58; // [rsp+60h] [rbp-9h]
  LONG *p_LockNV; // [rsp+68h] [rbp-1h]
  __int64 v60; // [rsp+70h] [rbp+7h]
  ULONG_PTR v61; // [rsp+D0h] [rbp+67h]
  unsigned __int8 v62; // [rsp+D0h] [rbp+67h]
  int v63; // [rsp+D8h] [rbp+6Fh] BYREF
  int v64; // [rsp+E0h] [rbp+77h]
  signed int v65; // [rsp+E8h] [rbp+7Fh]

  v64 = a3;
  v3 = (struct _MDL *)P[12];
  v4 = 0;
  v5 = *((_DWORD *)P + 11);
  v7 = P[7];
  v8 = P;
  v9 = 0;
  v63 = 0;
  v10 = _bittest16(&v3->MdlFlags, 9u);
  v65 = v5;
  if ( v10 )
    MiRetardMdl((__int64)v3);
  if ( (v3->MdlFlags & 1) != 0 )
    MmUnmapLockedPages(v3->MappedSystemVa, v3);
  v11 = *a2;
  v12 = *((_DWORD *)v8 + 10);
  v57 = v11;
  if ( (v12 & 0x20) != 0 )
  {
    LOBYTE(P) = 1;
    v54 = v8[8];
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(P);
    MI_PAGEFILE_WRITE((_DWORD)v8, UnbiasedInterruptTime, 5, 0, v11);
    v15 = (unsigned int)v14;
    v52 = v14;
    v16 = 0LL;
  }
  else
  {
    v16 = (struct _KEVENT *)v8[9];
    v4 = 128;
    v15 = v8[10];
    v14 = 0LL;
    v52 = v16;
    v63 = 128;
    v54 = 0LL;
  }
  v56 = (unsigned __int64)&v3[1];
  v17 = (int)v14;
  LOBYTE(v17) = (v65 & 0xFFF) != 0;
  v58 = (unsigned __int64)&v3[1] + 8 * v17 + 8 * (v65 >> 12);
  if ( v15 )
  {
    v18 = v8[8];
    v61 = v18;
    if ( (v15 & 1) != 0 )
    {
      v15 &= ~1uLL;
    }
    else
    {
      CcNotifyOfMappedWriteComplete(*(_QWORD *)(v18 + 40), v8[11], v65, v11);
      v18 = v61;
    }
    FsRtlReleaseFileForModWrite((PFILE_OBJECT)v18, (struct _ERESOURCE *)v15);
    v19 = (__int64)v52;
    ObFastDereferenceObjectDeferDelete((__int64 *)&v52[2].Header.WaitListHead.Blink, v61, 1666411853LL);
    v14 = 0LL;
    if ( (v11 & 0x80000000) == 0LL )
      goto LABEL_13;
    v16 = v52;
  }
  else if ( (v11 & 0x80000000) == 0LL )
  {
    goto LABEL_25;
  }
  v20 = (int)v14;
  v21 = (*((_DWORD *)v8 + 10) >> 1) & 1;
  LOBYTE(v20) = v16 != 0LL;
  v22 = MmIsWriteErrorFatal(v20, v21, v11);
  v14 = 0LL;
  if ( v22 )
  {
    if ( !v52 )
      KeBugCheckEx(0x7Au, 0x20uLL, v11, (ULONG_PTR)v3, 0LL);
    if ( ((__int64)v52[2].Header.WaitListHead.Flink & 0x10) == 0 )
    {
      IsRetryIoStatus = MiIsRetryIoStatus(v11, v65);
      v14 = 0LL;
      if ( IsRetryIoStatus && v21 && v58 > (unsigned __int64)&v3[1].Size )
      {
        v4 |= 1u;
        v63 = v4;
      }
      else
      {
        v9 = 1;
      }
    }
  }
  else
  {
    v19 = (__int64)v52;
    v4 |= 1u;
    v63 = v4;
    if ( !v52 )
    {
      *(_DWORD *)(v7 + 724) = v11;
LABEL_13:
      Event = 0LL;
      goto LABEL_27;
    }
  }
  *(_DWORD *)(v7 + 728) = v11;
LABEL_25:
  v19 = (__int64)v52;
  Event = v14;
  if ( v9 )
  {
    MiSetDeleteOnClose(v52, 1LL);
    v14 = 0LL;
  }
LABEL_27:
  v24 = v9;
  v25 = *((_DWORD *)v8 + 10);
  v26 = v54;
  v27 = v8[11] >> 12;
  v60 = v27;
  v53 = (unsigned __int64)v14;
  p_LockNV = &v14->Header.LockNV;
  if ( (v25 & 0x20) != 0 )
  {
    LOBYTE(v9) = v9 | 2;
    p_LockNV = (LONG *)&v53;
    if ( (*(_WORD *)(v54 + 172) & 0x800) == 0 )
      LOBYTE(v9) = v24;
  }
  v28 = (unsigned __int64)v14;
  if ( v56 < v58 )
  {
    v29 = (_QWORD *)v56;
    v30 = (unsigned int)v14;
    while ( 1 )
    {
      v31 = *((_DWORD *)v8 + 10);
      if ( (v31 & 0x20) != 0 )
      {
        if ( (v31 & 0x40) != 0 )
        {
          v53 = *(_QWORD *)(v8[9] + 8LL * v30 + 96);
          MiClearPageFileReservation((unsigned __int64)&v53);
        }
        else
        {
          if ( (*(_BYTE *)(v26 + 172) & 0x40) != 0 )
            v32 = MiSetStoreVirtualPagefileValue(v7, CLFS_LSN_NULL_EXT, 4u);
          else
            v32 = MiTransferSoftwarePte(CLFS_LSN_NULL_EXT, v26, (_KPROCESS *)((unsigned int)v27 + v30), 1);
          v53 = v32;
        }
      }
      if ( *v29 == qword_140E37138 )
      {
        if ( (v8[5] & 0x40) == 0 )
          v28 = v53;
        goto LABEL_54;
      }
      v56 = 48LL * *v29 - 0x220000000000LL;
      v33 = v56;
      v62 = MiLockPageInline(v56);
      if ( (v4 & 1) == 0 && (v4 & 0x80u) == 0 )
      {
        if ( (*(_BYTE *)(v33 + 34) & 0x10) != 0 )
          v4 |= 2u;
        else
          v4 &= ~2u;
      }
      v34 = *((_DWORD *)v8 + 10);
      v4 &= 0xFFFFFFF3;
      v63 = v4;
      if ( (v34 & 0x40) != 0 )
      {
        MiStoreModifiedWriteCompletePfn(v33, &v63);
      }
      else
      {
        if ( (v9 & 2) == 0 || (v4 & 2) != 0 || (v4 & 1) != 0 )
          goto LABEL_53;
        if ( (*(_QWORD *)(v33 + 24) & 0x4000000000000000LL) == 0 )
        {
          v4 = v63 | 8;
          v63 |= 8u;
          goto LABEL_53;
        }
      }
      v4 = v63;
LABEL_53:
      v28 = MiWriteCompletePfn(v33, v4, p_LockNV);
      MiUnlockPage(v56, v62);
LABEL_54:
      if ( v28 )
      {
        MiReleasePageFileInfo(v7, v28, 0);
        v28 = 0LL;
      }
      LODWORD(v27) = v60;
      ++v29;
      v26 = v54;
      ++v30;
      if ( (unsigned __int64)v29 >= v58 )
      {
        LODWORD(v11) = v57;
        v19 = (__int64)v52;
        break;
      }
    }
  }
  v35 = *((_DWORD *)v8 + 12);
  if ( v35 )
    MiReleaseWriteInProgressCharges(v7, v35, (v8[5] & 0x20) == 0);
  v36 = *((_DWORD *)v8 + 10);
  if ( (v36 & 0x20) != 0 )
  {
    if ( (v36 & 0x1Cu) < 8 )
      --*(_DWORD *)(v7 + 740);
    MiMakePagefileWriterEntryAvailable(v8);
    if ( *(_BYTE *)(v7 + 721) != v37 )
      Event = (PRKEVENT)(v7 + 968);
    if ( (v8[5] & 0x40) != 0 )
    {
      MiStoreDecrementOutstandingWrites(v7);
      if ( !*(_BYTE *)(v7 + 722) )
        MiStoreCheckCompleteWriteBatch(v7);
    }
  }
  else
  {
    if ( (v9 & 1) != 0 )
      MiNotifyUserOfLostData(v19, (unsigned int)v11);
    v38 = MiDecrementModifiedWriteCount(v19, 0);
    if ( v38 )
      MiReleaseControlAreaWaiters(v38);
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 672));
    v39 = (_QWORD *)v8[12];
    if ( v39 != v8 + 13 )
      ExFreePoolWithTag(v39, 0);
    if ( (v8[5] & 1) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      MiLockPartitionMappedWriter(v7, (__int64)CurrentThread);
      v45 = *(_QWORD **)(v7 + 688);
      if ( *v45 != v7 + 680 )
        __fastfail(3u);
      *v8 = v7 + 680;
      v8[1] = v45;
      *v45 = v8;
      *(_QWORD *)(v7 + 688) = v8;
      if ( *(_BYTE *)(v7 + 720) )
      {
        *(_BYTE *)(v7 + 720) = 0;
        KeSetEvent((PRKEVENT)(v7 + 696), 0, 0);
      }
      MiUnlockPartitionMappedWriter(v7, (__int64)CurrentThread);
    }
    else
    {
      *v8 = 0LL;
      MiFreeModWriterEntry(v8, 1u);
    }
  }
  v40 = (unsigned __int8 *)(v7 + (-(__int64)(v54 != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 1051);
  if ( (v11 & 0x80000000) != 0LL )
  {
    v47 = MiIsRetryIoStatus(v11, v65);
    v48 = v47;
    if ( v64 )
    {
      if ( (unsigned int)Feature_Servicing_Mm_StoreModWriteDelay__private_IsEnabledNoReportingNoInline() && !v19
        || (v9 & 1) != 0
        || v48 )
      {
        goto LABEL_113;
      }
    }
    else if ( (_DWORD)v11 != -1073741740 )
    {
      if ( !v47 )
        goto LABEL_113;
      v49 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 1044));
      v50 = *v40;
      v43 = v49;
      if ( !*v40 )
      {
        *(_WORD *)v40 = 4112;
        goto LABEL_107;
      }
      if ( v50 > 1u )
        *v40 = v50 >> 1;
      if ( v40[2] )
        goto LABEL_107;
      v46 = v40[1]-- == 1;
      if ( !v46 )
        goto LABEL_107;
      goto LABEL_106;
    }
    *(_BYTE *)(v7 + 1080) = 1;
    goto LABEL_113;
  }
  if ( v19 )
    *(_BYTE *)(v7 + 1080) = 0;
  if ( *v40 )
  {
    v41 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 1044));
    v42 = *v40;
    v43 = v41;
    if ( !*v40 )
      goto LABEL_107;
    if ( v40[2] )
    {
      if ( v42 > 1u )
      {
        v40[2] = 0;
LABEL_96:
        *v40 = 0;
      }
LABEL_107:
      MiReleaseSpinLockExclusive((_DWORD *)(v7 + 1044), v43);
      goto LABEL_113;
    }
    v46 = v40[1]-- == 1;
    if ( !v46 )
      goto LABEL_107;
    if ( v42 > 1u )
      goto LABEL_96;
LABEL_106:
    v40[2] = 1;
    goto LABEL_107;
  }
LABEL_113:
  result = (int)Event;
  if ( Event )
    return KeSetEvent(Event, 0, 0);
  return result;
}

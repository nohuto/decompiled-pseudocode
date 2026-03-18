/*
 * XREFs of MiWriteComplete @ 0x14036B660
 * Callers:
 *     MiGatherMappedPages @ 0x140369B20 (MiGatherMappedPages.c)
 *     MiStoreWriteModifiedCompleteApc @ 0x14036B640 (MiStoreWriteModifiedCompleteApc.c)
 *     MiGatherPagefilePages @ 0x14039C8C8 (MiGatherPagefilePages.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x14020F410 (MiReleaseControlAreaWaiters.c)
 *     MiClearPageFileReservation @ 0x140213DEC (MiClearPageFileReservation.c)
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x140240FA0 (ObFastDereferenceObjectDeferDelete.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     MmUnmapLockedPages @ 0x14028D9C0 (MmUnmapLockedPages.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiIsRetryIoStatus @ 0x1402CBFE0 (MiIsRetryIoStatus.c)
 *     MmIsWriteErrorFatal @ 0x1402CC028 (MmIsWriteErrorFatal.c)
 *     CcNotifyOfMappedWriteComplete @ 0x1402CC554 (CcNotifyOfMappedWriteComplete.c)
 *     MiStoreCheckCompleteWriteBatch @ 0x1402D001C (MiStoreCheckCompleteWriteBatch.c)
 *     MiMakePagefileWriterEntryAvailable @ 0x1402D1954 (MiMakePagefileWriterEntryAvailable.c)
 *     MiStoreModifiedWriteCompletePfn @ 0x1402E4620 (MiStoreModifiedWriteCompletePfn.c)
 *     MiRetardMdl @ 0x1402F323C (MiRetardMdl.c)
 *     MiDecrementModifiedWriteCount @ 0x140370FD4 (MiDecrementModifiedWriteCount.c)
 *     FsRtlReleaseFileForModWrite @ 0x140372004 (FsRtlReleaseFileForModWrite.c)
 *     MiWriteCompletePfn @ 0x14039D574 (MiWriteCompletePfn.c)
 *     MiSetStoreVirtualPagefileValue @ 0x14039D920 (MiSetStoreVirtualPagefileValue.c)
 *     MiTransferSoftwarePte @ 0x14039F300 (MiTransferSoftwarePte.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1404251D0 (KiQueryUnbiasedInterruptTime.c)
 *     MiFreeModWriterEntry @ 0x14043A49C (MiFreeModWriterEntry.c)
 *     MiReleaseWriteInProgressCharges @ 0x14043A500 (MiReleaseWriteInProgressCharges.c)
 *     MiUnlockPartitionMappedWriter @ 0x140469EA0 (MiUnlockPartitionMappedWriter.c)
 *     MiLockPartitionMappedWriter @ 0x140469F04 (MiLockPartitionMappedWriter.c)
 *     MI_PAGEFILE_WRITE @ 0x14046AD44 (MI_PAGEFILE_WRITE.c)
 *     MiStoreDecrementOutstandingWrites @ 0x1404840B0 (MiStoreDecrementOutstandingWrites.c)
 *     MiSetDeleteOnClose @ 0x1404D3B38 (MiSetDeleteOnClose.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     MiNotifyUserOfLostData @ 0x140672438 (MiNotifyUserOfLostData.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

LONG __fastcall MiWriteComplete(_QWORD *P, int *a2, int a3)
{
  struct _MDL *v3; // rsi
  int v4; // ebx
  signed int v5; // eax
  int v6; // edi
  __int64 v7; // r14
  _QWORD *v9; // r15
  unsigned __int8 v10; // cf
  ULONG_PTR v11; // r13
  int v12; // eax
  int UnbiasedInterruptTime; // eax
  struct _KEVENT *v14; // r9
  __int64 v15; // r12
  struct _KEVENT *v16; // rdx
  int v17; // ecx
  ULONG_PTR v18; // rax
  struct _KEVENT *v19; // r12
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
  __int64 v32; // rax
  __int64 v33; // rsi
  int v34; // eax
  unsigned int v35; // eax
  int v36; // eax
  _QWORD *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  _QWORD *v40; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *v42; // rcx
  unsigned __int8 *v43; // rbx
  KIRQL v44; // al
  unsigned __int8 v45; // cl
  unsigned __int8 v46; // dl
  bool v47; // zf
  BOOL v48; // eax
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
  __int64 *p_Lock; // [rsp+68h] [rbp-1h]
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
  v6 = 0;
  v7 = P[7];
  v9 = P;
  v63 = 0;
  v10 = _bittest16(&v3->MdlFlags, 9u);
  v65 = v5;
  if ( v10 )
    MiRetardMdl((__int64)v3);
  if ( (v3->MdlFlags & 1) != 0 )
    MmUnmapLockedPages(v3->MappedSystemVa, v3);
  v11 = *a2;
  v12 = *((_DWORD *)v9 + 10);
  v57 = v11;
  if ( (v12 & 0x20) != 0 )
  {
    LOBYTE(P) = 1;
    v54 = v9[8];
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(P, a2);
    MI_PAGEFILE_WRITE((_DWORD)v9, UnbiasedInterruptTime, 5, 0, v11);
    v15 = (unsigned int)v14;
    v52 = v14;
    v16 = 0LL;
  }
  else
  {
    v16 = (struct _KEVENT *)v9[9];
    v4 = 128;
    v15 = v9[10];
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
    v18 = v9[8];
    v61 = v18;
    if ( (v15 & 1) == 0 )
    {
      CcNotifyOfMappedWriteComplete(*(_QWORD *)(v18 + 40), v9[11], v65, v11);
      v18 = v61;
    }
    FsRtlReleaseFileForModWrite((PFILE_OBJECT)v18);
    v19 = v52;
    ObFastDereferenceObjectDeferDelete((__int64 *)&v52[2].Header.WaitListHead.Blink, v61);
    v14 = 0LL;
    if ( (v11 & 0x80000000) == 0LL )
      goto LABEL_12;
    v16 = v52;
  }
  else if ( (v11 & 0x80000000) == 0LL )
  {
    goto LABEL_24;
  }
  v20 = (int)v14;
  v21 = (*((_DWORD *)v9 + 10) >> 1) & 1;
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
        v6 = 1;
      }
    }
  }
  else
  {
    v19 = v52;
    v4 |= 1u;
    v63 = v4;
    if ( !v52 )
    {
      *(_DWORD *)(v7 + 724) = v11;
LABEL_12:
      Event = 0LL;
      goto LABEL_26;
    }
  }
  *(_DWORD *)(v7 + 728) = v11;
LABEL_24:
  v19 = v52;
  Event = v14;
  if ( v6 )
  {
    MiSetDeleteOnClose(v52, 1LL);
    v14 = 0LL;
  }
LABEL_26:
  v24 = v6;
  v25 = *((_DWORD *)v9 + 10);
  v26 = v54;
  v27 = v9[11] >> 12;
  v60 = v27;
  v53 = (unsigned __int64)v14;
  p_Lock = (__int64 *)&v14->Header.Lock;
  if ( (v25 & 0x20) != 0 )
  {
    LOBYTE(v6) = v6 | 2;
    p_Lock = (__int64 *)&v53;
    if ( (*(_WORD *)(v54 + 172) & 0x800) == 0 )
      LOBYTE(v6) = v24;
  }
  v28 = (unsigned __int64)v14;
  if ( v56 < v58 )
  {
    v29 = (_QWORD *)v56;
    v30 = (unsigned int)v14;
    while ( 1 )
    {
      v31 = *((_DWORD *)v9 + 10);
      if ( (v31 & 0x20) != 0 )
      {
        if ( (v31 & 0x40) != 0 )
        {
          v53 = *(_QWORD *)(v9[9] + 8LL * v30 + 96);
          MiClearPageFileReservation((__int64 *)&v53);
        }
        else
        {
          if ( (*(_BYTE *)(v26 + 172) & 0x40) != 0 )
            v32 = MiSetStoreVirtualPagefileValue(v7, CLFS_LSN_NULL_EXT, 4LL);
          else
            v32 = MiTransferSoftwarePte(CLFS_LSN_NULL_EXT, v26, (unsigned int)v27 + v30, 1LL);
          v53 = v32;
        }
      }
      if ( *v29 == qword_140E37378 )
      {
        if ( (v9[5] & 0x40) == 0 )
          v28 = v53;
        goto LABEL_53;
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
      v34 = *((_DWORD *)v9 + 10);
      v4 &= 0xFFFFFFF3;
      v63 = v4;
      if ( (v34 & 0x40) != 0 )
      {
        MiStoreModifiedWriteCompletePfn(v33, &v63);
      }
      else
      {
        if ( (v6 & 2) == 0 || (v4 & 2) != 0 || (v4 & 1) != 0 )
          goto LABEL_52;
        if ( (*(_QWORD *)(v33 + 24) & 0x4000000000000000LL) == 0 )
        {
          v4 = v63 | 8;
          v63 |= 8u;
          goto LABEL_52;
        }
      }
      v4 = v63;
LABEL_52:
      v28 = MiWriteCompletePfn(v33);
      MiUnlockPage(v56, v62);
LABEL_53:
      if ( v28 )
      {
        MiReleasePageFileInfo(v7, v28, 0LL);
        v28 = 0LL;
      }
      LODWORD(v27) = v60;
      ++v29;
      v26 = v54;
      ++v30;
      if ( (unsigned __int64)v29 >= v58 )
      {
        LODWORD(v11) = v57;
        v19 = v52;
        break;
      }
    }
  }
  v35 = *((_DWORD *)v9 + 12);
  if ( v35 )
    MiReleaseWriteInProgressCharges(v7, v35, (v9[5] & 0x20) == 0);
  v36 = *((_DWORD *)v9 + 10);
  if ( (v36 & 0x20) != 0 )
  {
    if ( (v36 & 0x1Cu) < 8 )
      --*(_DWORD *)(v7 + 740);
    MiMakePagefileWriterEntryAvailable(v9);
    if ( *(_BYTE *)(v7 + 721) )
      Event = (PRKEVENT)(v7 + 968);
    if ( (v9[5] & 0x40) != 0 )
    {
      MiStoreDecrementOutstandingWrites(v7);
      if ( !*(_BYTE *)(v7 + 722) )
        MiStoreCheckCompleteWriteBatch(v7);
    }
  }
  else
  {
    if ( (v6 & 1) != 0 )
      MiNotifyUserOfLostData(v19, (unsigned int)v11);
    v37 = (_QWORD *)MiDecrementModifiedWriteCount(v19, 0LL);
    if ( v37 )
      MiReleaseControlAreaWaiters(v37, v38, v39);
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 672));
    v40 = (_QWORD *)v9[12];
    if ( v40 != v9 + 13 )
      ExFreePoolWithTag(v40, 0);
    if ( (v9[5] & 1) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      MiLockPartitionMappedWriter(v7, CurrentThread);
      v42 = *(_QWORD **)(v7 + 688);
      if ( *v42 != v7 + 680 )
        __fastfail(3u);
      *v9 = v7 + 680;
      v9[1] = v42;
      *v42 = v9;
      *(_QWORD *)(v7 + 688) = v9;
      if ( *(_BYTE *)(v7 + 720) )
      {
        *(_BYTE *)(v7 + 720) = 0;
        KeSetEvent((PRKEVENT)(v7 + 696), 0, 0);
      }
      MiUnlockPartitionMappedWriter(v7, CurrentThread);
    }
    else
    {
      *v9 = 0LL;
      MiFreeModWriterEntry(v9);
    }
  }
  v43 = (unsigned __int8 *)(v7 + (-(__int64)(v54 != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 1051);
  if ( (v11 & 0x80000000) != 0LL )
  {
    v48 = MiIsRetryIoStatus(v11, v65);
    if ( v64 )
    {
      if ( !v19 || (v6 & 1) != 0 || v48 )
        goto LABEL_111;
    }
    else if ( (_DWORD)v11 != -1073741740 )
    {
      if ( !v48 )
        goto LABEL_111;
      v49 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 1044));
      v50 = *v43;
      v46 = v49;
      if ( !*v43 )
      {
        *(_WORD *)v43 = 4112;
        goto LABEL_106;
      }
      if ( v50 > 1u )
        *v43 = v50 >> 1;
      if ( v43[2] )
        goto LABEL_106;
      v47 = v43[1]-- == 1;
      if ( !v47 )
        goto LABEL_106;
      goto LABEL_105;
    }
    *(_BYTE *)(v7 + 1080) = 1;
  }
  else
  {
    if ( v19 )
      *(_BYTE *)(v7 + 1080) = 0;
    if ( *v43 )
    {
      v44 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 1044));
      v45 = *v43;
      v46 = v44;
      if ( !*v43 )
        goto LABEL_106;
      if ( v43[2] )
      {
        if ( v45 > 1u )
        {
          v43[2] = 0;
LABEL_95:
          *v43 = 0;
        }
LABEL_106:
        MiReleaseSpinLockExclusive((_DWORD *)(v7 + 1044), v46);
        goto LABEL_111;
      }
      v47 = v43[1]-- == 1;
      if ( !v47 )
        goto LABEL_106;
      if ( v45 > 1u )
        goto LABEL_95;
LABEL_105:
      v43[2] = 1;
      goto LABEL_106;
    }
  }
LABEL_111:
  result = (int)Event;
  if ( Event )
    return KeSetEvent(Event, 0, 0);
  return result;
}

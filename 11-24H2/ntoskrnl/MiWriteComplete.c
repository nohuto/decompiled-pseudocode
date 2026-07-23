/*
 * XREFs of MiWriteComplete @ 0x1402ED400
 * Callers:
 *     MiGatherMappedPages @ 0x1402EB8C0 (MiGatherMappedPages.c)
 *     MiStoreWriteModifiedCompleteApc @ 0x1402ED3E0 (MiStoreWriteModifiedCompleteApc.c)
 *     MiGatherPagefilePages @ 0x1402F9BC8 (MiGatherPagefilePages.c)
 * Callees:
 *     ObFastDereferenceObjectDeferDelete @ 0x1402090F0 (ObFastDereferenceObjectDeferDelete.c)
 *     MiTransferSoftwarePte @ 0x140215AA0 (MiTransferSoftwarePte.c)
 *     MiStoreModifiedWriteCompletePfn @ 0x140215DB8 (MiStoreModifiedWriteCompletePfn.c)
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiRetardMdl @ 0x140258D7C (MiRetardMdl.c)
 *     MiDecrementModifiedWriteCount @ 0x140259314 (MiDecrementModifiedWriteCount.c)
 *     FsRtlReleaseFileForModWrite @ 0x14025A8C4 (FsRtlReleaseFileForModWrite.c)
 *     MiIsRetryIoStatus @ 0x140260570 (MiIsRetryIoStatus.c)
 *     MmIsWriteErrorFatal @ 0x1402605B8 (MmIsWriteErrorFatal.c)
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiWriteCompletePfn @ 0x1402FA874 (MiWriteCompletePfn.c)
 *     MiSetStoreVirtualPagefileValue @ 0x1402FAC20 (MiSetStoreVirtualPagefileValue.c)
 *     MiClearPageFileReservation @ 0x14030714C (MiClearPageFileReservation.c)
 *     MiReleaseControlAreaWaiters @ 0x140338770 (MiReleaseControlAreaWaiters.c)
 *     CcNotifyOfMappedWriteComplete @ 0x14040B624 (CcNotifyOfMappedWriteComplete.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140419080 (KiQueryUnbiasedInterruptTime.c)
 *     MiFreeModWriterEntry @ 0x14042CCD0 (MiFreeModWriterEntry.c)
 *     MiReleaseWriteInProgressCharges @ 0x14042CD34 (MiReleaseWriteInProgressCharges.c)
 *     MiUnlockPartitionMappedWriter @ 0x140462DD0 (MiUnlockPartitionMappedWriter.c)
 *     MiLockPartitionMappedWriter @ 0x140462E34 (MiLockPartitionMappedWriter.c)
 *     MI_PAGEFILE_WRITE @ 0x1404637C0 (MI_PAGEFILE_WRITE.c)
 *     MiStoreCheckCompleteWriteBatch @ 0x14046FE3C (MiStoreCheckCompleteWriteBatch.c)
 *     MiMakePagefileWriterEntryAvailable @ 0x14046FFF8 (MiMakePagefileWriterEntryAvailable.c)
 *     MiStoreDecrementOutstandingWrites @ 0x14047F648 (MiStoreDecrementOutstandingWrites.c)
 *     MiSetDeleteOnClose @ 0x1404CCD3C (MiSetDeleteOnClose.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     MiNotifyUserOfLostData @ 0x140673608 (MiNotifyUserOfLostData.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

LONG __fastcall MiWriteComplete(_QWORD *P, int *a2, int a3)
{
  struct _MDL *v3; // rsi
  unsigned int v4; // ebx
  int v5; // eax
  int v6; // edi
  __int64 v7; // r14
  _DWORD *v9; // r15
  unsigned __int8 v10; // cf
  ULONG_PTR v11; // r13
  int v12; // eax
  int UnbiasedInterruptTime; // eax
  struct _KEVENT *v14; // r9
  unsigned __int64 v15; // r12
  struct _KEVENT *v16; // rdx
  __int64 v17; // r8
  int v18; // ecx
  struct _FILE_OBJECT *v19; // rax
  __int64 v20; // r12
  int v21; // ecx
  int v22; // r12d
  BOOL v23; // eax
  BOOL IsRetryIoStatus; // eax
  char v25; // cl
  int v26; // eax
  __int64 v27; // r10
  __int64 v28; // rdx
  unsigned __int64 v29; // rsi
  _QWORD *v30; // r13
  unsigned int v31; // r12d
  int v32; // eax
  unsigned __int64 v33; // rax
  __int64 v34; // rsi
  int v35; // eax
  unsigned int v36; // eax
  int v37; // eax
  __int64 *v38; // rax
  _DWORD *v39; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *v41; // rcx
  unsigned __int8 *v42; // rbx
  KIRQL v43; // al
  unsigned __int8 v44; // cl
  unsigned __int8 v45; // dl
  bool v46; // zf
  BOOL v47; // eax
  KIRQL v48; // al
  unsigned __int8 v49; // cl
  LONG result; // eax
  struct _KEVENT *v51; // [rsp+30h] [rbp-39h]
  unsigned __int64 v52; // [rsp+38h] [rbp-31h] BYREF
  __int64 v53; // [rsp+40h] [rbp-29h]
  PRKEVENT Event; // [rsp+48h] [rbp-21h]
  unsigned __int64 v55; // [rsp+50h] [rbp-19h]
  int v56; // [rsp+58h] [rbp-11h]
  unsigned __int64 v57; // [rsp+60h] [rbp-9h]
  struct _KEVENT *v58; // [rsp+68h] [rbp-1h]
  __int64 v59; // [rsp+70h] [rbp+7h]
  ULONG_PTR v60; // [rsp+D0h] [rbp+67h]
  unsigned __int8 v61; // [rsp+D0h] [rbp+67h]
  unsigned int v62; // [rsp+D8h] [rbp+6Fh] BYREF
  int v63; // [rsp+E0h] [rbp+77h]
  int v64; // [rsp+E8h] [rbp+7Fh]

  v63 = a3;
  v3 = (struct _MDL *)P[12];
  v4 = 0;
  v5 = *((_DWORD *)P + 11);
  v6 = 0;
  v7 = P[7];
  v9 = P;
  v62 = 0;
  v10 = _bittest16(&v3->MdlFlags, 9u);
  v64 = v5;
  if ( v10 )
    MiRetardMdl((__int64)v3);
  if ( (v3->MdlFlags & 1) != 0 )
    MmUnmapLockedPages(v3->MappedSystemVa, v3);
  v11 = *a2;
  v12 = v9[10];
  v56 = v11;
  if ( (v12 & 0x20) != 0 )
  {
    LOBYTE(P) = 1;
    v53 = *((_QWORD *)v9 + 8);
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(P);
    MI_PAGEFILE_WRITE((_DWORD)v9, UnbiasedInterruptTime, 5, 0, v11);
    v15 = (unsigned int)v14;
    v51 = v14;
    v16 = 0LL;
  }
  else
  {
    v16 = (struct _KEVENT *)*((_QWORD *)v9 + 9);
    v4 = 128;
    v15 = *((_QWORD *)v9 + 10);
    v14 = 0LL;
    v51 = v16;
    v62 = 128;
    v53 = 0LL;
  }
  v17 = (__int64)&v3[1];
  v55 = (unsigned __int64)&v3[1];
  v18 = (int)v14;
  LOBYTE(v18) = (v64 & 0xFFF) != 0;
  v57 = (unsigned __int64)&v3[1] + 8 * v18 + 8 * (v64 >> 12);
  if ( v15 )
  {
    v19 = (struct _FILE_OBJECT *)*((_QWORD *)v9 + 8);
    v60 = (ULONG_PTR)v19;
    if ( (v15 & 1) != 0 )
    {
      v15 &= ~1uLL;
    }
    else
    {
      CcNotifyOfMappedWriteComplete(
        v19->SectionObjectPointer,
        *((_QWORD *)v9 + 11),
        (unsigned int)v64,
        (unsigned int)v11);
      v19 = (struct _FILE_OBJECT *)v60;
    }
    FsRtlReleaseFileForModWrite(v19, (struct _ERESOURCE *)v15);
    v20 = (__int64)v51;
    ObFastDereferenceObjectDeferDelete((__int64 *)&v51[2].Header.WaitListHead.Blink, v60);
    v14 = 0LL;
    if ( (v11 & 0x80000000) == 0LL )
      goto LABEL_13;
    v16 = v51;
  }
  else if ( (v11 & 0x80000000) == 0LL )
  {
    goto LABEL_25;
  }
  v21 = (int)v14;
  v22 = (v9[10] >> 1) & 1;
  LOBYTE(v21) = v16 != 0LL;
  v23 = MmIsWriteErrorFatal(v21, v22, v11);
  v14 = 0LL;
  if ( v23 )
  {
    if ( !v51 )
      KeBugCheckEx(0x7Au, 0x20uLL, v11, (ULONG_PTR)v3, 0LL);
    if ( ((__int64)v51[2].Header.WaitListHead.Flink & 0x10) == 0 )
    {
      IsRetryIoStatus = MiIsRetryIoStatus(v11, v64);
      v14 = 0LL;
      if ( IsRetryIoStatus && v22 && v57 > (unsigned __int64)&v3[1].Size )
      {
        v4 |= 1u;
        v62 = v4;
      }
      else
      {
        v6 = 1;
      }
    }
  }
  else
  {
    v20 = (__int64)v51;
    v4 |= 1u;
    v62 = v4;
    if ( !v51 )
    {
      *(_DWORD *)(v7 + 724) = v11;
LABEL_13:
      Event = 0LL;
      goto LABEL_27;
    }
  }
  *(_DWORD *)(v7 + 728) = v11;
LABEL_25:
  v20 = (__int64)v51;
  Event = v14;
  if ( v6 )
  {
    MiSetDeleteOnClose(v51, 1LL);
    v14 = 0LL;
  }
LABEL_27:
  v25 = v6;
  v26 = v9[10];
  v27 = v53;
  v28 = *((_QWORD *)v9 + 11) >> 12;
  v59 = v28;
  v52 = (unsigned __int64)v14;
  v58 = v14;
  if ( (v26 & 0x20) != 0 )
  {
    LOBYTE(v6) = v6 | 2;
    v17 = 2048LL;
    v58 = (struct _KEVENT *)&v52;
    if ( (*(_WORD *)(v53 + 172) & 0x800) == 0 )
      LOBYTE(v6) = v25;
  }
  v29 = (unsigned __int64)v14;
  if ( v55 < v57 )
  {
    v30 = (_QWORD *)v55;
    v31 = (unsigned int)v14;
    while ( 1 )
    {
      v32 = v9[10];
      if ( (v32 & 0x20) != 0 )
      {
        if ( (v32 & 0x40) != 0 )
        {
          v52 = *(_QWORD *)(*((_QWORD *)v9 + 9) + 8LL * v31 + 96);
          MiClearPageFileReservation(&v52);
        }
        else
        {
          if ( (*(_BYTE *)(v27 + 172) & 0x40) != 0 )
            v33 = MiSetStoreVirtualPagefileValue(v7, CLFS_LSN_NULL_EXT, 4LL);
          else
            v33 = MiTransferSoftwarePte(CLFS_LSN_NULL_EXT, v27, (unsigned int)v28 + v31, 1);
          v52 = v33;
        }
        v14 = 0LL;
      }
      if ( *v30 == qword_140E374B8 )
      {
        if ( (v9[10] & 0x40) == 0 )
          v29 = v52;
        goto LABEL_55;
      }
      v55 = 48LL * *v30 - 0x220000000000LL;
      v34 = v55;
      v61 = MiLockPageInline(v55, v28, v17, (__int64)v14);
      if ( (v4 & 1) == 0 && (v4 & 0x80u) == 0 )
      {
        if ( (*(_BYTE *)(v34 + 34) & 0x10) != 0 )
          v4 |= 2u;
        else
          v4 &= ~2u;
      }
      v35 = v9[10];
      v4 &= 0xFFFFFFF3;
      v62 = v4;
      if ( (v35 & 0x40) != 0 )
      {
        MiStoreModifiedWriteCompletePfn(v34, (int *)&v62);
      }
      else
      {
        if ( (v6 & 2) == 0 || (v4 & 2) != 0 || (v4 & 1) != 0 )
          goto LABEL_54;
        if ( (*(_QWORD *)(v34 + 24) & 0x4000000000000000LL) == 0 )
        {
          v4 = v62 | 8;
          v62 |= 8u;
          goto LABEL_54;
        }
      }
      v4 = v62;
LABEL_54:
      v29 = MiWriteCompletePfn(v34, v4, v58);
      MiUnlockPage(v55, v61);
      v14 = 0LL;
LABEL_55:
      if ( v29 )
      {
        MiReleasePageFileInfo(v7, v29, 0LL, (__int64)v14);
        v14 = 0LL;
        v29 = 0LL;
      }
      v28 = v59;
      ++v30;
      v27 = v53;
      ++v31;
      if ( (unsigned __int64)v30 >= v57 )
      {
        LODWORD(v11) = v56;
        v20 = (__int64)v51;
        break;
      }
    }
  }
  v36 = v9[12];
  if ( v36 )
    MiReleaseWriteInProgressCharges(v7, v36, (v9[10] & 0x20) == 0);
  v37 = v9[10];
  if ( (v37 & 0x20) != 0 )
  {
    if ( (v37 & 0x1Cu) < 8 )
      --*(_DWORD *)(v7 + 740);
    MiMakePagefileWriterEntryAvailable(v9);
    if ( *(_BYTE *)(v7 + 721) )
      Event = (PRKEVENT)(v7 + 968);
    if ( (v9[10] & 0x40) != 0 )
    {
      MiStoreDecrementOutstandingWrites(v7);
      if ( !*(_BYTE *)(v7 + 722) )
        MiStoreCheckCompleteWriteBatch(v7);
    }
  }
  else
  {
    if ( (v6 & 1) != 0 )
      MiNotifyUserOfLostData(v20, (unsigned int)v11);
    v38 = MiDecrementModifiedWriteCount(v20, 0);
    if ( v38 )
      MiReleaseControlAreaWaiters(v38);
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 672));
    v39 = (_DWORD *)*((_QWORD *)v9 + 12);
    if ( v39 != v9 + 26 )
      ExFreePoolWithTag(v39, 0);
    if ( (v9[10] & 1) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      MiLockPartitionMappedWriter(v7, CurrentThread);
      v41 = *(_QWORD **)(v7 + 688);
      if ( *v41 != v7 + 680 )
        __fastfail(3u);
      *(_QWORD *)v9 = v7 + 680;
      *((_QWORD *)v9 + 1) = v41;
      *v41 = v9;
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
      *(_QWORD *)v9 = 0LL;
      MiFreeModWriterEntry(v9);
    }
  }
  v42 = (unsigned __int8 *)(v7 + (-(__int64)(v53 != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 1051);
  if ( (v11 & 0x80000000) != 0LL )
  {
    v47 = MiIsRetryIoStatus(v11, v64);
    if ( v63 )
    {
      if ( !v20 || (v6 & 1) != 0 || v47 )
        goto LABEL_113;
    }
    else if ( (_DWORD)v11 != -1073741740 )
    {
      if ( !v47 )
        goto LABEL_113;
      v48 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 1044));
      v49 = *v42;
      v45 = v48;
      if ( !*v42 )
      {
        *(_WORD *)v42 = 4112;
        goto LABEL_108;
      }
      if ( v49 > 1u )
        *v42 = v49 >> 1;
      if ( v42[2] )
        goto LABEL_108;
      v46 = v42[1]-- == 1;
      if ( !v46 )
        goto LABEL_108;
      goto LABEL_107;
    }
    *(_BYTE *)(v7 + 1080) = 1;
  }
  else
  {
    if ( v20 )
      *(_BYTE *)(v7 + 1080) = 0;
    if ( *v42 )
    {
      v43 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 1044));
      v44 = *v42;
      v45 = v43;
      if ( !*v42 )
        goto LABEL_108;
      if ( v42[2] )
      {
        if ( v44 > 1u )
        {
          v42[2] = 0;
LABEL_97:
          *v42 = 0;
        }
LABEL_108:
        MiReleaseSpinLockExclusive((_DWORD *)(v7 + 1044), v45);
        goto LABEL_113;
      }
      v46 = v42[1]-- == 1;
      if ( !v46 )
        goto LABEL_108;
      if ( v44 > 1u )
        goto LABEL_97;
LABEL_107:
      v42[2] = 1;
      goto LABEL_108;
    }
  }
LABEL_113:
  result = (int)Event;
  if ( Event )
    return KeSetEvent(Event, 0, 0);
  return result;
}

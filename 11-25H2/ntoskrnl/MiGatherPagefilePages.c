/*
 * XREFs of MiGatherPagefilePages @ 0x1403C0730
 * Callers:
 *     MiModifiedPageWriter @ 0x1403BFEE0 (MiModifiedPageWriter.c)
 * Callees:
 *     MiWriteCompletePfn @ 0x14020D42C (MiWriteCompletePfn.c)
 *     MiIsPfnOriginalPteLost @ 0x14020D7D0 (MiIsPfnOriginalPteLost.c)
 *     MiSetStoreVirtualPagefileValue @ 0x140226180 (MiSetStoreVirtualPagefileValue.c)
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiStoreWriteModifiedPages @ 0x1402CA294 (MiStoreWriteModifiedPages.c)
 *     MiUpdatePagefilePeakUsage @ 0x1402CB070 (MiUpdatePagefilePeakUsage.c)
 *     MiUpdatePfnBackingStore @ 0x1402CC130 (MiUpdatePfnBackingStore.c)
 *     MiMapPageFileHash @ 0x1402D1A18 (MiMapPageFileHash.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     MiPageToNode @ 0x140346EA0 (MiPageToNode.c)
 *     IoAsynchronousPageWrite @ 0x14035BA6C (IoAsynchronousPageWrite.c)
 *     MiMakePagefileWriterEntryAvailable @ 0x1403BF26C (MiMakePagefileWriterEntryAvailable.c)
 *     MiFindPageFileWriteCluster @ 0x1403D9914 (MiFindPageFileWriteCluster.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x1403DA050 (MiInvalidatePageFileBitmapsCache.c)
 *     MiSetPageFileAllocationBits @ 0x1403DB230 (MiSetPageFileAllocationBits.c)
 *     MiPageFileLargestBitmapsRun @ 0x1403DB268 (MiPageFileLargestBitmapsRun.c)
 *     MiReleaseWriteInProgressCharges @ 0x14040AC14 (MiReleaseWriteInProgressCharges.c)
 *     MiBuildReservationCluster @ 0x14040BF84 (MiBuildReservationCluster.c)
 *     MiFillNoReservationCluster @ 0x14040D3B0 (MiFillNoReservationCluster.c)
 *     MiWriteComplete @ 0x14040E620 (MiWriteComplete.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14042F3F0 (KiQueryUnbiasedInterruptTime.c)
 *     MI_PAGEFILE_WRITE @ 0x14046C52C (MI_PAGEFILE_WRITE.c)
 *     MiIsStoreVirtualPagefileFull @ 0x1404A3524 (MiIsStoreVirtualPagefileFull.c)
 *     MiPageFileNoFreeSpace @ 0x1404D09F4 (MiPageFileNoFreeSpace.c)
 *     MiTransferMemoryPagefileData @ 0x1404D2020 (MiTransferMemoryPagefileData.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     Feature_Servicing_Mm_StoreModWriteDelay__private_IsEnabledNoReportingNoInline @ 0x14066781C (Feature_Servicing_Mm_StoreModWriteDelay__private_IsEnabledNoReportingNoInline.c)
 */

__int64 __fastcall MiGatherPagefilePages(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // r12
  unsigned int v3; // ebx
  __int64 v4; // r15
  int v5; // eax
  __int64 result; // rax
  __int16 v7; // cx
  __int64 v8; // r10
  unsigned __int64 v9; // rsi
  _QWORD *v10; // r10
  bool v11; // zf
  unsigned int v12; // edi
  unsigned int v13; // eax
  unsigned int v14; // edi
  int v15; // esi
  KIRQL v16; // dl
  __int64 v17; // rsi
  int v18; // r9d
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // edi
  unsigned int v27; // eax
  unsigned int v28; // r10d
  _QWORD *v29; // rcx
  unsigned int v30; // r12d
  unsigned __int64 v31; // r15
  unsigned int v32; // esi
  __int64 v33; // rcx
  _QWORD *v34; // r12
  unsigned __int64 v35; // r15
  __int64 v36; // rsi
  unsigned __int8 v37; // di
  unsigned int v38; // edi
  unsigned int v39; // ebx
  ULONG_PTR *v40; // rsi
  ULONG_PTR v41; // rcx
  int v42; // eax
  unsigned int v43; // r12d
  int v44; // edi
  ULONG_PTR v45; // rcx
  __int64 v46; // rsi
  __int64 v47; // rcx
  __int64 UnbiasedInterruptTime; // rax
  int v49; // esi
  unsigned int v50; // esi
  int v51; // ecx
  unsigned __int64 v52; // rax
  int v53; // ecx
  struct _KTHREAD *v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  int v57; // eax
  NTSTATUS v58; // r15d
  int v59; // edx
  __int64 v60; // rcx
  NTSTATUS *v61; // rdi
  struct _MDL *v62; // rdx
  unsigned __int8 CurrentIrql; // si
  __int64 v64; // rcx
  KIRQL v65; // al
  unsigned int v66; // [rsp+60h] [rbp-39h]
  unsigned int v67; // [rsp+64h] [rbp-35h] BYREF
  unsigned int v68; // [rsp+68h] [rbp-31h]
  unsigned int v69; // [rsp+6Ch] [rbp-2Dh]
  unsigned int v70; // [rsp+70h] [rbp-29h] BYREF
  __int64 v71; // [rsp+78h] [rbp-21h]
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp-19h]
  __int64 v73; // [rsp+88h] [rbp-11h]
  __int64 v74; // [rsp+90h] [rbp-9h]
  __int64 v75; // [rsp+98h] [rbp-1h]
  KIRQL v77; // [rsp+108h] [rbp+6Fh]
  unsigned __int8 v78; // [rsp+108h] [rbp+6Fh]
  _QWORD *v79; // [rsp+110h] [rbp+77h] BYREF
  unsigned int v80; // [rsp+118h] [rbp+7Fh] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  v2 = a1;
  v70 = 0;
  v3 = 0;
  v74 = v1;
  v4 = *(_QWORD *)(v1 + 216);
  v5 = *(_DWORD *)(v1 + 12);
  v73 = v4;
  CurrentThread = KeGetCurrentThread();
  if ( !v5 )
    return MiPageFileNoFreeSpace(v1, a1);
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_DWORD *)(a1 + 112) = 131120;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  v7 = *(_WORD *)(v1 + 172);
  v75 = v2 + 104;
  v71 = v2 + 152;
  v8 = 88 * ((v7 & 0xF) + 48LL);
  if ( (v7 & 0x40) != 0 )
  {
    v9 = *(_QWORD *)(v8 + v4);
    v10 = 0LL;
    v79 = 0LL;
    v3 = v9 != 0 ? 2 : 0;
    if ( v9 )
      goto LABEL_15;
  }
  else
  {
    v10 = *(_QWORD **)(v8 + v4);
    v79 = v10;
  }
  if ( *(_DWORD *)(v4 + 1200) )
  {
LABEL_122:
    v65 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 200));
    *(_BYTE *)(v1 + 174) |= 1u;
    MiReleaseSpinLockExclusive((_DWORD *)(v1 + 200), v65);
    result = 2575857425LL;
    *(_QWORD *)v2 = 2575857425LL;
    goto LABEL_123;
  }
  if ( (*(_BYTE *)(v1 + 172) & 0x40) != 0 )
  {
    v9 = *(_QWORD *)(v4 + 4096);
    if ( v9 )
      v3 = 2;
  }
  else
  {
    v9 = *(_QWORD *)(v4 + 3968);
    if ( !v9 )
    {
      if ( (unsigned int)MiIsStoreVirtualPagefileFull(v4) )
      {
        v9 = *(_QWORD *)(88 * (*(unsigned int *)(v4 + 1204) + 48LL) + v4);
        if ( !v9 )
          v9 = *(_QWORD *)(v4 + 4096);
      }
    }
  }
LABEL_15:
  if ( !v10 )
  {
    if ( !v9 )
      goto LABEL_122;
    v11 = (*(_BYTE *)(v1 + 172) & 0x10) == 0;
    v79 = 0LL;
    if ( !v11 )
      goto LABEL_122;
  }
  if ( *(_DWORD *)(v4 + 1204) != -1 )
    v3 |= 4u;
  if ( (v3 & 2) == 0 && v9 && (*(_BYTE *)(v1 + 172) & 0x10) == 0 )
  {
    if ( !v10 || (*(_BYTE *)(v1 + 175) & 1) != 0 )
    {
      v13 = v3;
LABEL_28:
      v3 = v13 | 2;
      goto LABEL_30;
    }
    v12 = *(_DWORD *)(v1 + 104);
    if ( (unsigned int)MiPageFileLargestBitmapsRun(v1) >= v12 >> 2 )
    {
      v13 = v3;
      if ( v9 >= (unsigned __int64)(unsigned int)dword_140FC41FC >> 2 || v9 >= (unsigned __int64)v79 )
        goto LABEL_28;
    }
  }
LABEL_30:
  v14 = dword_140FC41FC;
  LODWORD(v79) = dword_140FC41FC;
  if ( (v3 & 2) != 0 )
  {
    if ( v9 < (unsigned int)dword_140FC41FC )
      v14 = v9;
    LODWORD(v79) = v14;
  }
  if ( *(_BYTE *)(v4 + 1048) )
  {
    v15 = 0;
    v16 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 1044));
    if ( *(_BYTE *)(v4 + 1050) )
    {
      *(_BYTE *)(v4 + 1050) = 0;
      v15 = 1;
      *(_BYTE *)(v4 + 1048) = 0;
    }
    else if ( *(_BYTE *)(v4 + 1048) )
    {
      v14 = *(unsigned __int8 *)(v4 + 1048);
      LODWORD(v79) = v14;
    }
    MiReleaseSpinLockExclusive((_DWORD *)(v4 + 1044), v16);
    if ( v15 )
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
  }
  if ( (*(_DWORD *)(v2 + 40) & 0x1Cu) < 8 )
  {
    if ( v14 > 0x100 )
      v14 = 256;
    LODWORD(v79) = v14;
  }
  v17 = (__int64)CurrentThread;
  v3 |= 1u;
  --CurrentThread->KernelApcDisable;
  if ( (v3 & 2) != 0 )
  {
    v11 = (*(_BYTE *)(v1 + 172) & 0x40) == 0;
    v80 = 0;
    if ( v11 )
    {
      MiFindPageFileWriteCluster(v1, &v80, &v79, 0LL);
      v18 = (int)v79;
    }
    else
    {
      v18 = (int)v79;
      if ( *(_DWORD *)(v1 + 12) < (unsigned int)v79 )
        v18 = *(_DWORD *)(v1 + 12);
    }
    if ( !v18 )
    {
      result = MiPageFileNoFreeSpace(v1, v2);
      goto LABEL_124;
    }
    v22 = MiFillNoReservationCluster(v4, v1, v71);
    v26 = v22;
    v66 = v80;
    v67 = v22;
  }
  else
  {
    v67 = v14;
    v27 = MiBuildReservationCluster(v71, v1, &v67, &v70);
    v26 = v67;
    v66 = v27;
    v80 = v27;
    v22 = v70;
  }
  if ( !v26 )
  {
    --*(_WORD *)(v17 + 486);
    result = (__int64)MiMakePagefileWriterEntryAvailable((_QWORD *)v2);
    v11 = (*(_WORD *)(v17 + 486))++ == 0xFFFF;
    if ( v11 )
    {
      result = v17 + 152;
      if ( *(_QWORD *)result != result )
        result = KiCheckForKernelApcDelivery();
    }
    goto LABEL_124;
  }
  v11 = (*(_BYTE *)(v1 + 172) & 0x40) == 0;
  v69 = v22 - 1;
  v70 = v22 - 1;
  v68 = v26;
  LODWORD(v79) = v26;
  if ( v11 )
  {
    v77 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 200));
    if ( (v3 & 2) != 0 )
    {
      MiFindPageFileWriteCluster(v1, &v80, &v79, 1LL);
      v66 = v80;
      v68 = (unsigned int)v79;
    }
    else
    {
      MiSetPageFileAllocationBits(v1, v66, v26);
      v28 = -1;
      v29 = (_QWORD *)(v2 + 152);
      v79 = (_QWORD *)(v2 + 152);
      if ( v2 + 152 < v71 + 8 * (unsigned __int64)v26 )
      {
        v30 = v66;
        v31 = v71 + 8LL * v26;
        do
        {
          if ( *v29 != qword_140E37138
            || (v29 = v79, _bittest64(*(const signed __int64 **)(*(_QWORD *)(v1 + 80) + 32LL), v30)) )
          {
            if ( v28 != -1 )
            {
              MiInvalidatePageFileBitmapsCache(v1, v28, v30 - v28, 0LL);
              v29 = v79;
              v28 = -1;
            }
          }
          else if ( v28 == -1 )
          {
            v28 = v30;
          }
          ++v29;
          ++v30;
          v79 = v29;
        }
        while ( (unsigned __int64)v29 < v31 );
        v4 = v73;
        v2 = a1;
      }
      *(_DWORD *)(v1 + 104) = v68 + *(_DWORD *)(v1 + 104) - (*(_DWORD *)(v1 + 104) >> 2);
    }
    MiUpdatePagefilePeakUsage(v1);
    MiReleaseSpinLockExclusive((_DWORD *)(v1 + 200), v77);
  }
  KiLeaveCriticalRegionUnsafe(v17, v23, v24, v25);
  v32 = v68;
  LODWORD(v71) = v3 & 0xFFFFFFFE;
  if ( v68 == v26 )
  {
    v38 = v69;
  }
  else
  {
    v33 = v2 + 104;
    v34 = (_QWORD *)(v2 + 104 + 8 * (v68 + 6LL));
    v35 = v33 + 8 * (v26 + 6LL);
    do
    {
      v36 = 48LL * *v34 - 0x220000000000LL;
      v37 = MiLockPageInline(v36);
      MiWriteCompletePfn(v36, 33, 0LL);
      MiUnlockPage(v36, v37);
      ++v34;
    }
    while ( (unsigned __int64)v34 < v35 );
    v32 = v68;
    v4 = v73;
    v38 = v68 - v67 + v69;
    v70 = v38;
    MiReleaseWriteInProgressCharges(v73, v67 - v68, 0LL);
    v1 = v74;
    v2 = a1;
  }
  v39 = v66;
  *(_DWORD *)(v2 + 144) = v32 << 12;
  *(_DWORD *)(v2 + 44) = v32 << 12;
  *(_DWORD *)(v2 + 48) = v38;
  v67 = v32;
  v40 = (ULONG_PTR *)(v2 + 152);
  v41 = *(_QWORD *)(v2 + 152);
  v69 = 0;
  LODWORD(v79) = 0;
  v73 = v2 + 152;
  v42 = MiPageToNode(v41);
  v43 = v68;
  v44 = v42 + 1;
  do
  {
    v45 = *v40;
    v46 = 48 * *v40 - 0x220000000000LL;
    if ( v45 != qword_140E37138 )
    {
      if ( v44 && v44 != (unsigned int)MiPageToNode(v45) + 1 )
        v44 = 0;
      v78 = MiLockPageInline(v46);
      if ( !(unsigned int)MiIsPfnOriginalPteLost(v46) )
      {
        if ( (*(_BYTE *)(v1 + 172) & 0x40) != 0 )
          *(_QWORD *)(v46 + 16) = MiSetStoreVirtualPagefileValue(v4, *(_QWORD *)(v46 + 16), 4u);
        else
          MiUpdatePfnBackingStore(v46, v1, v39);
      }
      MiUnlockPage(v46, v78);
    }
    ++v39;
    v40 = (ULONG_PTR *)(v73 + 8);
    v73 += 8LL;
    LODWORD(v79) = ++v69;
    v80 = v39;
  }
  while ( v69 < v43 );
  v47 = v75;
  *(_WORD *)(v75 + 8) = 8 * (dword_140FC41FC + 6);
  LOBYTE(v47) = 1;
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(v47);
  v49 = *(_DWORD *)(a1 + 40) >> 2;
  *(_QWORD *)(a1 + 80) = UnbiasedInterruptTime;
  v50 = v49 & 7;
  v51 = *(_DWORD *)(v4 + 908);
  v52 = *(_QWORD *)(v4 + 18688);
  if ( !v51 )
  {
    if ( v52 >= 0xA0 )
    {
      if ( v52 >= 0x120 )
        goto LABEL_98;
      *(_DWORD *)(v4 + 908) = 8;
    }
    else
    {
      *(_DWORD *)(v4 + 908) = 32;
    }
    v50 = 4;
    goto LABEL_98;
  }
  v53 = v51 - 1;
  if ( v52 < 0x420 )
    v50 = 4;
  *(_DWORD *)(v4 + 908) = v52 < 0x420 ? v53 : 0;
LABEL_98:
  v3 = v71;
  *(_DWORD *)(a1 + 40) = (4 * v50) | *(_DWORD *)(a1 + 40) & 0xFFFFFFE3;
  if ( v50 < 2 )
  {
    v54 = CurrentThread;
    --CurrentThread->SpecialApcDisable;
    ++*(_DWORD *)(v4 + 740);
    v11 = v54->SpecialApcDisable++ == -1;
    if ( v11 && ($727077A9B6E167EAE1398C74674DC5A5 *)v54->ApcState.ApcListHead[0].Flink != &v54->152 )
      KiCheckForKernelApcDelivery();
  }
  MI_PAGEFILE_WRITE(a1, *(_QWORD *)(a1 + 80), v50, ((v3 >> 1) & 1) == 0, -1);
  v57 = *(_DWORD *)(v4 + 896);
  if ( v57 == 512 )
    *(_QWORD *)(v4 + 888) -= *(_QWORD *)(v4 + 888) >> 9;
  else
    *(_DWORD *)(v4 + 896) = v57 + 1;
  *(_QWORD *)(v4 + 888) += v68;
  v58 = -1073741823;
  v59 = v66;
  *(_DWORD *)(a1 + 40) &= ~0x40u;
  *(_QWORD *)(a1 + 88) = (unsigned __int64)v66 << 12;
  if ( (*(_BYTE *)(v1 + 172) & 0x40) != 0 || (v3 & 6) == 4 )
  {
    result = MiStoreWriteModifiedPages(a1, v44, v55, v56);
    v58 = result;
    if ( (int)result >= 0 )
      goto LABEL_123;
    v59 = v66;
  }
  if ( (*(_BYTE *)(v1 + 172) & 0x40) != 0 )
  {
    Feature_Servicing_Mm_StoreModWriteDelay__private_IsEnabledNoReportingNoInline();
    v60 = 0LL;
    v61 = (NTSTATUS *)(a1 + 24);
    goto LABEL_114;
  }
  __incgsdword(0x2EACu);
  __addgsdword(0x2EA8u, v67);
  MiMapPageFileHash(v1, a1 + 104, 0LL, v59, v67);
  v61 = (NTSTATUS *)(a1 + 24);
  v62 = (struct _MDL *)(a1 + 104);
  if ( _bittest16((const signed __int16 *)(v1 + 172), 0xBu) )
  {
    MiTransferMemoryPagefileData(v1, v62, *(_QWORD *)(a1 + 88) >> 12, 0LL);
    *v61 = 0;
    *(_QWORD *)(a1 + 32) = *(unsigned int *)(a1 + 144);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v64) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v64);
    }
    goto LABEL_116;
  }
  v58 = IoAsynchronousPageWrite(
          *(struct _FILE_OBJECT **)(v1 + 24),
          v62,
          (LARGE_INTEGER *)(a1 + 88),
          (LARGE_INTEGER)MiWriteComplete,
          (void *)a1,
          v50,
          *(_DWORD *)(v1 + 168),
          0,
          0LL,
          (struct _IO_STATUS_BLOCK *)(a1 + 24),
          (IRP **)(a1 + 16));
  result = v58 & 0xC0000000;
  if ( (_DWORD)result == -1073741824 )
  {
    v60 = 0LL;
LABEL_114:
    *v61 = v58;
    *(_QWORD *)(a1 + 32) = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v60) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v60);
    }
LABEL_116:
    MiWriteComplete((PVOID)a1);
    if ( KiIrqlFlags )
    {
      LOBYTE(v19) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v19);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
LABEL_123:
  v17 = (__int64)CurrentThread;
LABEL_124:
  if ( (v3 & 1) != 0 )
    return (__int64)KiLeaveCriticalRegionUnsafe(v17, v19, v20, v21);
  return result;
}

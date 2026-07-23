/*
 * XREFs of MiGatherPagefilePages @ 0x1402F9BC8
 * Callers:
 *     MiModifiedPageWriter @ 0x14046F7B0 (MiModifiedPageWriter.c)
 * Callees:
 *     MiMakePageFilePte @ 0x140215C78 (MiMakePageFilePte.c)
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     IoAsynchronousPageWrite @ 0x14025B12C (IoAsynchronousPageWrite.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiBuildReservationCluster @ 0x1402EAD30 (MiBuildReservationCluster.c)
 *     MiFillNoReservationCluster @ 0x1402EC57C (MiFillNoReservationCluster.c)
 *     MiWriteComplete @ 0x1402ED400 (MiWriteComplete.c)
 *     MiWriteCompletePfn @ 0x1402FA874 (MiWriteCompletePfn.c)
 *     MiIsPfnOriginalPteLost @ 0x1402FABFC (MiIsPfnOriginalPteLost.c)
 *     MiSetStoreVirtualPagefileValue @ 0x1402FAC20 (MiSetStoreVirtualPagefileValue.c)
 *     MiStoreWriteModifiedPages @ 0x1402FB3F4 (MiStoreWriteModifiedPages.c)
 *     MiUpdatePagefilePeakUsage @ 0x1402FC1E8 (MiUpdatePagefilePeakUsage.c)
 *     MiUpdatePfnBackingStore @ 0x1402FD13C (MiUpdatePfnBackingStore.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiFindPageFileWriteCluster @ 0x1403C41E0 (MiFindPageFileWriteCluster.c)
 *     MiFindFreePageFileSpace @ 0x1403C438C (MiFindFreePageFileSpace.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x1403C4918 (MiInvalidatePageFileBitmapsCache.c)
 *     MiSetPageFileAllocationBits @ 0x1403C4D5C (MiSetPageFileAllocationBits.c)
 *     MiPageFileLargestBitmapsRun @ 0x1403C5B54 (MiPageFileLargestBitmapsRun.c)
 *     RtlFindLongestRunClearCapped @ 0x1403C5C70 (RtlFindLongestRunClearCapped.c)
 *     MiMapPageFileHash @ 0x140425FA8 (MiMapPageFileHash.c)
 *     MiReleaseWriteInProgressCharges @ 0x14042CD34 (MiReleaseWriteInProgressCharges.c)
 *     MI_PAGEFILE_WRITE @ 0x1404637C0 (MI_PAGEFILE_WRITE.c)
 *     MiPageFileNoFreeSpace @ 0x14046F624 (MiPageFileNoFreeSpace.c)
 *     MiMakePagefileWriterEntryAvailable @ 0x14046FFF8 (MiMakePagefileWriterEntryAvailable.c)
 *     MiIsStoreVirtualPagefileFull @ 0x14049DEC8 (MiIsStoreVirtualPagefileFull.c)
 *     MiTransferMemoryPagefileData @ 0x1404CAFB0 (MiTransferMemoryPagefileData.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiGatherPagefilePages(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // r12
  unsigned int v3; // edi
  __int64 v4; // r13
  int v5; // eax
  __int16 v6; // cx
  __int64 v7; // r10
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r10
  unsigned int v10; // ebx
  unsigned int v11; // r9d
  unsigned int v12; // eax
  unsigned __int64 v13; // rbx
  unsigned int v14; // esi
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // ecx
  unsigned int v18; // esi
  unsigned int v19; // ecx
  ULONG_PTR *v20; // rax
  unsigned int v21; // r12d
  ULONG_PTR v22; // rcx
  int v23; // eax
  __int64 v24; // r8
  __int64 v25; // r9
  ULONG_PTR *v26; // rdi
  unsigned int v27; // esi
  ULONG_PTR v28; // rdx
  __int64 v29; // rcx
  int v30; // eax
  unsigned __int64 v31; // r12
  __int64 v32; // rdx
  __int64 v33; // r11
  __int64 v34; // rax
  unsigned __int64 v35; // r8
  __int64 v36; // rdx
  int v37; // ebx
  unsigned int v38; // ebx
  int v39; // ecx
  unsigned __int64 v40; // rax
  struct _KTHREAD *v41; // rcx
  int v42; // eax
  __int64 v43; // rdx
  unsigned int v44; // r8d
  __int64 v45; // rcx
  __int64 result; // rax
  KIRQL v47; // al
  int *v48; // rsi
  struct _MDL *v49; // rdx
  unsigned int v50; // eax
  int v51; // r15d
  int v52; // eax
  __int64 PageFilePte; // rax
  __int64 v54; // rcx
  __int64 v55; // rdx
  unsigned __int64 v56; // rbx
  int v57; // esi
  KIRQL v58; // dl
  struct _KTHREAD *v59; // rsi
  unsigned int v60; // ebx
  unsigned int v61; // eax
  unsigned __int8 CurrentIrql; // bl
  __int64 v63; // rdx
  bool v64; // zf
  unsigned int v65; // r10d
  unsigned __int64 v66; // rax
  _QWORD *v67; // rcx
  unsigned int v68; // r12d
  unsigned __int64 v69; // r13
  __int64 v70; // rcx
  unsigned int LongestRunClearCapped; // eax
  __int64 v72; // rdx
  _QWORD *v73; // r12
  unsigned __int64 v74; // r13
  int v75; // ecx
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r14
  unsigned __int8 v79; // si
  _QWORD *v80; // [rsp+60h] [rbp-79h]
  __int64 v81; // [rsp+60h] [rbp-79h]
  _QWORD *v82; // [rsp+60h] [rbp-79h]
  unsigned int v83; // [rsp+68h] [rbp-71h]
  unsigned int v84; // [rsp+68h] [rbp-71h]
  unsigned int v85; // [rsp+6Ch] [rbp-6Dh] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-69h]
  unsigned int v87; // [rsp+78h] [rbp-61h] BYREF
  unsigned int v88; // [rsp+7Ch] [rbp-5Dh]
  unsigned int v89; // [rsp+80h] [rbp-59h]
  ULONG_PTR *v90; // [rsp+88h] [rbp-51h]
  unsigned __int64 v91; // [rsp+90h] [rbp-49h] BYREF
  __int64 v92; // [rsp+98h] [rbp-41h]
  __int64 v93; // [rsp+A0h] [rbp-39h]
  _DWORD v94[2]; // [rsp+A8h] [rbp-31h] BYREF
  __int64 v95; // [rsp+B0h] [rbp-29h]
  __int128 v96; // [rsp+C8h] [rbp-11h]
  __int128 v97; // [rsp+D8h] [rbp-1h]
  __int64 v98; // [rsp+E8h] [rbp+Fh]
  unsigned int v100; // [rsp+148h] [rbp+6Fh] BYREF
  unsigned __int64 v101; // [rsp+150h] [rbp+77h] BYREF
  unsigned int FreePageFileSpace; // [rsp+158h] [rbp+7Fh] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  v2 = a1;
  v85 = 0;
  v3 = 0;
  v90 = (ULONG_PTR *)v1;
  v4 = *(_QWORD *)(v1 + 216);
  v5 = *(_DWORD *)(v1 + 12);
  v92 = v4;
  CurrentThread = KeGetCurrentThread();
  if ( !v5 )
    return MiPageFileNoFreeSpace(v1, a1);
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_DWORD *)(a1 + 112) = 131120;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  v6 = *(_WORD *)(v1 + 172);
  v93 = v2 + 104;
  v80 = (_QWORD *)(v2 + 152);
  v7 = 88 * ((v6 & 0xF) + 48LL);
  if ( (v6 & 0x40) != 0 )
  {
    v8 = *(_QWORD *)(v7 + v4);
    v9 = 0LL;
    v101 = 0LL;
    v3 = v8 != 0 ? 2 : 0;
    if ( v8 )
      goto LABEL_8;
  }
  else
  {
    v9 = *(_QWORD *)(v7 + v4);
    v101 = v9;
  }
  if ( *(_DWORD *)(v4 + 1200) )
  {
LABEL_56:
    v47 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 200));
    *(_BYTE *)(v1 + 174) |= 1u;
    MiReleaseSpinLockExclusive((_DWORD *)(v1 + 200), v47);
    result = 2575857425LL;
    *(_QWORD *)v2 = 2575857425LL;
    goto LABEL_50;
  }
  if ( (*(_BYTE *)(v1 + 172) & 0x40) != 0 )
  {
    v8 = *(_QWORD *)(v4 + 4096);
    if ( v8 )
      v3 = 2;
  }
  else
  {
    v8 = *(_QWORD *)(v4 + 3968);
    if ( !v8 )
    {
      if ( (unsigned int)MiIsStoreVirtualPagefileFull(v4) )
      {
        v8 = *(_QWORD *)(88 * (*(unsigned int *)(v4 + 1204) + 48LL) + v4);
        if ( !v8 )
          v8 = *(_QWORD *)(v4 + 4096);
      }
    }
  }
LABEL_8:
  if ( !v9 )
  {
    if ( !v8 )
      goto LABEL_56;
    v64 = (*(_BYTE *)(v1 + 172) & 0x10) == 0;
    v101 = 0LL;
    if ( !v64 )
      goto LABEL_56;
  }
  if ( *(_DWORD *)(v4 + 1204) != -1 )
    v3 |= 4u;
  v100 = v3;
  if ( (v3 & 2) == 0 && v8 && (*(_BYTE *)(v1 + 172) & 0x10) == 0 )
  {
    if ( !v9 || (*(_BYTE *)(v1 + 175) & 1) != 0 )
    {
      v61 = v100;
    }
    else
    {
      v60 = *(_DWORD *)(v1 + 104);
      v3 = v100;
      if ( (unsigned int)MiPageFileLargestBitmapsRun(v1) < v60 >> 2 )
        goto LABEL_12;
      v61 = v3;
      if ( v8 < (unsigned __int64)(unsigned int)dword_140FC520C >> 2 && v8 < v101 )
        goto LABEL_12;
    }
    v3 = v61 | 2;
  }
LABEL_12:
  v10 = dword_140FC520C;
  v100 = dword_140FC520C;
  if ( (v3 & 2) != 0 )
  {
    if ( v8 < (unsigned int)dword_140FC520C )
      v10 = v8;
    v100 = v10;
  }
  if ( *(_BYTE *)(v4 + 1048) )
  {
    v57 = 0;
    v58 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 1044));
    if ( *(_BYTE *)(v4 + 1050) )
    {
      *(_BYTE *)(v4 + 1050) = 0;
      v57 = 1;
      *(_BYTE *)(v4 + 1048) = 0;
    }
    else if ( *(_BYTE *)(v4 + 1048) )
    {
      v10 = *(unsigned __int8 *)(v4 + 1048);
      v100 = v10;
    }
    MiReleaseSpinLockExclusive((_DWORD *)(v4 + 1044), v58);
    if ( v57 )
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
  }
  if ( (*(_DWORD *)(v2 + 40) & 0x1Cu) < 8 )
  {
    if ( v10 > 0x100 )
      v10 = 256;
    v100 = v10;
  }
  v3 |= 1u;
  --CurrentThread->KernelApcDisable;
  if ( (v3 & 2) != 0 )
  {
    v64 = (*(_BYTE *)(v1 + 172) & 0x40) == 0;
    LODWORD(v101) = 0;
    if ( v64 )
    {
      MiFindPageFileWriteCluster(v1, &v101, &v100, 0LL);
      v11 = v100;
    }
    else
    {
      v11 = v100;
      if ( *(_DWORD *)(v1 + 12) < v100 )
        v11 = *(_DWORD *)(v1 + 12);
    }
    if ( !v11 )
    {
      result = MiPageFileNoFreeSpace(v1, v2);
      goto LABEL_50;
    }
    v12 = MiFillNoReservationCluster(v4, v1, v80, v11);
    LODWORD(v13) = v101;
    v14 = v12;
    v88 = v12;
  }
  else
  {
    FreePageFileSpace = v10;
    v52 = MiBuildReservationCluster(v80, v1, &FreePageFileSpace, &v85);
    v14 = FreePageFileSpace;
    LODWORD(v13) = v52;
    LODWORD(v101) = v52;
    v12 = v85;
    v88 = FreePageFileSpace;
  }
  if ( !v14 )
  {
    v59 = CurrentThread;
    --CurrentThread->SpecialApcDisable;
    result = MiMakePagefileWriterEntryAvailable(v2);
    v64 = v59->SpecialApcDisable++ == -1;
    if ( v64 )
    {
      result = (__int64)&v59->152;
      if ( *(_QWORD *)result != result )
        result = ((__int64 (*)(void))KiCheckForKernelApcDelivery)();
    }
    goto LABEL_50;
  }
  FreePageFileSpace = v14;
  v64 = (*(_BYTE *)(v1 + 172) & 0x40) == 0;
  v83 = v12 - 1;
  v85 = v12 - 1;
  if ( v64 )
  {
    LOBYTE(v100) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 200));
    if ( (v3 & 2) != 0 )
    {
      v96 = 0LL;
      v98 = 0LL;
      v97 = 0LL;
      v94[1] = 0;
      PageFilePte = MiMakePageFilePte((unsigned int)v13);
      v54 = *(_QWORD *)(v1 + 216);
      v91 = v55 ^ (v55 ^ PageFilePte) & 0xFFFFFFFFFFFF0FFFuLL;
      FreePageFileSpace = MiFindFreePageFileSpace(v54, &v91, v14, 38LL);
      if ( FreePageFileSpace )
      {
        v56 = v91;
        if ( qword_140E2DCC0 && (v91 & 0x10) == 0 )
          v56 = v91 & ~qword_140E2DCC0;
        v13 = HIDWORD(v56);
        v87 = v13;
      }
      else
      {
        v70 = *(_QWORD *)(v1 + 80);
        v94[0] = *(_DWORD *)v1;
        v87 = v13;
        v95 = *(_QWORD *)(v70 + 16);
        LongestRunClearCapped = RtlFindLongestRunClearCapped(v94, v14, &v87);
        LODWORD(v13) = v87;
        FreePageFileSpace = LongestRunClearCapped;
        MiSetPageFileAllocationBits(v1, v87, LongestRunClearCapped);
      }
      LODWORD(v101) = v13;
    }
    else
    {
      MiSetPageFileAllocationBits(v1, (unsigned int)v13, v14);
      v65 = -1;
      v66 = (unsigned __int64)&v80[v14];
      v67 = (_QWORD *)(v2 + 152);
      v82 = (_QWORD *)(v2 + 152);
      if ( v2 + 152 < v66 )
      {
        v68 = v13;
        v69 = v66;
        do
        {
          if ( *v67 != qword_140E374B8
            || (v67 = v82, _bittest64(*(const signed __int64 **)(*(_QWORD *)(v1 + 80) + 32LL), v68)) )
          {
            if ( v65 != -1 )
            {
              MiInvalidatePageFileBitmapsCache(v1, v65, v68 - v65, 0LL);
              v67 = v82;
              v65 = -1;
            }
          }
          else if ( v65 == -1 )
          {
            v65 = v68;
          }
          ++v67;
          ++v68;
          v82 = v67;
        }
        while ( (unsigned __int64)v67 < v69 );
        v4 = v92;
        v2 = a1;
        v14 = v88;
      }
      *(_DWORD *)(v1 + 104) = FreePageFileSpace + *(_DWORD *)(v1 + 104) - (*(_DWORD *)(v1 + 104) >> 2);
    }
    MiUpdatePagefilePeakUsage(v1);
    MiReleaseSpinLockExclusive((_DWORD *)(v1 + 200), v100);
  }
  KeLeaveCriticalRegionThread();
  v17 = FreePageFileSpace;
  v89 = v3 & 0xFFFFFFFE;
  if ( FreePageFileSpace == v14 )
  {
    v18 = v83;
  }
  else
  {
    v72 = v93;
    v73 = (_QWORD *)(v93 + 8 * (FreePageFileSpace + 6LL));
    v74 = v93 + 8 * (v14 + 6LL);
    do
    {
      v78 = 48LL * *v73 - 0x220000000000LL;
      v79 = MiLockPageInline(v78, v72, v15, v16);
      MiWriteCompletePfn(v78, 33LL, 0LL);
      MiUnlockPage(v78, v79);
      ++v73;
    }
    while ( (unsigned __int64)v73 < v74 );
    v18 = FreePageFileSpace - v88 + v83;
    v4 = v92;
    v85 = v18;
    MiReleaseWriteInProgressCharges(v92, v88 - FreePageFileSpace, 0LL);
    v17 = FreePageFileSpace;
    v1 = (__int64)v90;
    v2 = a1;
  }
  FreePageFileSpace = v17;
  v19 = v17 << 12;
  *(_DWORD *)(v2 + 144) = v19;
  v20 = (ULONG_PTR *)(v2 + 152);
  *(_DWORD *)(v2 + 44) = v19;
  *(_DWORD *)(v2 + 48) = v18;
  v21 = 0;
  v100 = 0;
  v22 = *v20;
  v84 = v13;
  v90 = v20;
  v23 = MiPageToNode(v22);
  v26 = v90;
  v27 = v23 + 1;
  do
  {
    v28 = *v26;
    v29 = 48 * *v26 - 0x220000000000LL;
    v81 = v29;
    if ( *v26 != qword_140E374B8 )
    {
      if ( v27 )
      {
        v30 = MiPageToNode(v28);
        v29 = v81;
        if ( v27 != v30 + 1 )
          v27 = 0;
      }
      v31 = (unsigned __int8)MiLockPageInline(v29, v28, v24, v25);
      if ( !(unsigned int)MiIsPfnOriginalPteLost(v81) )
      {
        if ( (*(_BYTE *)(v1 + 172) & 0x40) != 0 )
        {
          v34 = MiSetStoreVirtualPagefileValue(v4, *(_QWORD *)(v33 + 16), 4LL);
          v33 = v81;
          *(_QWORD *)(v81 + 16) = v34;
        }
        else
        {
          MiUpdatePfnBackingStore(v33, v1, (unsigned int)v13);
          v33 = v81;
        }
      }
      _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (unsigned __int8)v31 < 2u )
      {
        if ( KiIrqlFlags )
        {
          LOBYTE(v32) = v31;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v32);
        }
        __writecr8(v31);
      }
      v21 = v100;
      LODWORD(v13) = v101;
    }
    ++v21;
    LODWORD(v13) = v13 + 1;
    ++v26;
    v100 = v21;
    LODWORD(v101) = v13;
  }
  while ( v21 < FreePageFileSpace );
  v35 = 0xFFFFF780000003B0uLL;
  v3 = v89;
  *(_WORD *)(v93 + 8) = 8 * (dword_140FC520C + 6);
  v36 = MEMORY[0xFFFFF780000003B0];
  v37 = *(_DWORD *)(a1 + 40) >> 2;
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  v38 = v37 & 7;
  v39 = *(_DWORD *)(v4 + 908);
  v40 = *(_QWORD *)(v4 + 18688);
  if ( v39 )
  {
    v36 = 1056LL;
    v35 = 4LL;
    v75 = v39 - 1;
    if ( v40 < 0x420 )
      v38 = 4;
    *(_DWORD *)(v4 + 908) = v40 < 0x420 ? v75 : 0;
    goto LABEL_42;
  }
  if ( v40 < 0xA0 )
  {
    *(_DWORD *)(v4 + 908) = 32;
  }
  else
  {
    if ( v40 >= 0x120 )
      goto LABEL_42;
    *(_DWORD *)(v4 + 908) = 8;
  }
  v38 = 4;
LABEL_42:
  *(_DWORD *)(a1 + 40) = (4 * v38) | *(_DWORD *)(a1 + 40) & 0xFFFFFFE3;
  if ( v38 < 2 )
  {
    v41 = CurrentThread;
    --CurrentThread->SpecialApcDisable;
    ++*(_DWORD *)(v4 + 740);
    v64 = v41->SpecialApcDisable++ == -1;
    if ( v64 && ($727077A9B6E167EAE1398C74674DC5A5 *)v41->ApcState.ApcListHead[0].Flink != &v41->152 )
      KiCheckForKernelApcDelivery(v41, v36, v35, 0xFFFFF78000000008uLL);
  }
  MI_PAGEFILE_WRITE(a1, *(_QWORD *)(a1 + 80), v38, ((v3 >> 1) & 1) == 0, -1);
  v42 = *(_DWORD *)(v4 + 896);
  if ( v42 == 512 )
    *(_QWORD *)(v4 + 888) -= *(_QWORD *)(v4 + 888) >> 9;
  else
    *(_DWORD *)(v4 + 896) = v42 + 1;
  v43 = 3221225473LL;
  *(_QWORD *)(v4 + 888) += FreePageFileSpace;
  v44 = v84;
  *(_DWORD *)(a1 + 40) &= ~0x40u;
  *(_QWORD *)(a1 + 88) = (unsigned __int64)v84 << 12;
  if ( (*(_BYTE *)(v1 + 172) & 0x40) != 0 || (v45 = 4LL, (v3 & 6) == 4) )
  {
    v43 = (unsigned int)MiStoreWriteModifiedPages(a1, v27);
    result = 0LL;
    if ( (int)v43 >= 0 )
      goto LABEL_50;
    v44 = v84;
  }
  if ( (*(_BYTE *)(v1 + 172) & 0x40) != 0 )
  {
    v51 = 1;
    v48 = (int *)(a1 + 24);
    goto LABEL_102;
  }
  __incgsdword(0x2EACu);
  __addgsdword(0x2EA8u, FreePageFileSpace);
  MiMapPageFileHash(v1, a1 + 104, 0, v44, FreePageFileSpace);
  v48 = (int *)(a1 + 24);
  v49 = (struct _MDL *)(a1 + 104);
  if ( _bittest16((const signed __int16 *)(v1 + 172), 0xBu) )
  {
    MiTransferMemoryPagefileData(v1, v49, *(_QWORD *)(a1 + 88) >> 12, 0LL);
    *v48 = 0;
    *(_QWORD *)(a1 + 32) = *(unsigned int *)(a1 + 144);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v76) = 1;
      LOBYTE(v77) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v77, v76);
    }
    MiWriteComplete((_QWORD *)a1, (int *)(a1 + 24), 0);
    v64 = KiIrqlFlags == 0;
    goto LABEL_105;
  }
  v50 = IoAsynchronousPageWrite(
          *(struct _FILE_OBJECT **)(v1 + 24),
          v49,
          (LARGE_INTEGER *)(a1 + 88),
          (LARGE_INTEGER)MiWriteComplete,
          (void *)a1,
          v38,
          *(_DWORD *)(v1 + 168),
          0,
          0LL,
          (struct _IO_STATUS_BLOCK *)(a1 + 24),
          (IRP **)(a1 + 16));
  v45 = 3221225472LL;
  v43 = v50;
  result = v50 & 0xC0000000;
  if ( (_DWORD)result == -1073741824 )
  {
    v51 = 0;
LABEL_102:
    *v48 = v43;
    *(_QWORD *)(a1 + 32) = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v43) = 1;
      LOBYTE(v45) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v45, v43);
    }
    MiWriteComplete((_QWORD *)a1, v48, v51);
    v64 = KiIrqlFlags == 0;
LABEL_105:
    if ( !v64 )
    {
      LOBYTE(v63) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v63);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
LABEL_50:
  if ( (v3 & 1) != 0 )
    return KeLeaveCriticalRegionThread();
  return result;
}

/*
 * XREFs of MiGatherPagefilePages @ 0x14039C8C8
 * Callers:
 *     MiModifiedPageWriter @ 0x1402CF990 (MiModifiedPageWriter.c)
 * Callees:
 *     MiStoreWriteModifiedPages @ 0x1402281F4 (MiStoreWriteModifiedPages.c)
 *     MiUpdatePagefilePeakUsage @ 0x140228FE8 (MiUpdatePagefilePeakUsage.c)
 *     MiUpdatePfnBackingStore @ 0x140229ECC (MiUpdatePfnBackingStore.c)
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     MiPageToNode @ 0x14026C1E0 (MiPageToNode.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     MiMakePagefileWriterEntryAvailable @ 0x1402D1954 (MiMakePagefileWriterEntryAvailable.c)
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 *     RtlFindLongestRunClearCapped @ 0x140366278 (RtlFindLongestRunClearCapped.c)
 *     MiPageFileLargestBitmapsRun @ 0x1403664F0 (MiPageFileLargestBitmapsRun.c)
 *     MiSetPageFileAllocationBits @ 0x140367504 (MiSetPageFileAllocationBits.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x140367598 (MiInvalidatePageFileBitmapsCache.c)
 *     MiFindPageFileWriteCluster @ 0x140367BDC (MiFindPageFileWriteCluster.c)
 *     MiFindFreePageFileSpace @ 0x140367D88 (MiFindFreePageFileSpace.c)
 *     MiBuildReservationCluster @ 0x140368F90 (MiBuildReservationCluster.c)
 *     MiFillNoReservationCluster @ 0x14036A7DC (MiFillNoReservationCluster.c)
 *     MiWriteComplete @ 0x14036B660 (MiWriteComplete.c)
 *     IoAsynchronousPageWrite @ 0x14037286C (IoAsynchronousPageWrite.c)
 *     MiWriteCompletePfn @ 0x14039D574 (MiWriteCompletePfn.c)
 *     MiIsPfnOriginalPteLost @ 0x14039D8FC (MiIsPfnOriginalPteLost.c)
 *     MiSetStoreVirtualPagefileValue @ 0x14039D920 (MiSetStoreVirtualPagefileValue.c)
 *     MiMakePageFilePte @ 0x14039F4D8 (MiMakePageFilePte.c)
 *     MiReleaseWriteInProgressCharges @ 0x14043A500 (MiReleaseWriteInProgressCharges.c)
 *     MI_PAGEFILE_WRITE @ 0x14046AD44 (MI_PAGEFILE_WRITE.c)
 *     MiMapPageFileHash @ 0x140486688 (MiMapPageFileHash.c)
 *     MiIsStoreVirtualPagefileFull @ 0x1404A2F68 (MiIsStoreVirtualPagefileFull.c)
 *     MiPageFileNoFreeSpace @ 0x1404D0994 (MiPageFileNoFreeSpace.c)
 *     MiTransferMemoryPagefileData @ 0x1404D1F70 (MiTransferMemoryPagefileData.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
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
  unsigned int v15; // ecx
  unsigned int v16; // esi
  unsigned int v17; // ecx
  ULONG_PTR *v18; // rax
  unsigned int v19; // r12d
  ULONG_PTR v20; // rcx
  int v21; // eax
  ULONG_PTR *v22; // rdi
  int v23; // esi
  __int64 v24; // rcx
  int v25; // eax
  unsigned __int64 v26; // r12
  __int64 v27; // rdx
  __int64 v28; // r11
  __int64 v29; // rax
  __int64 v30; // rdx
  int v31; // ebx
  unsigned int v32; // ebx
  int v33; // ecx
  unsigned __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r9
  int v37; // eax
  __int64 v38; // rdx
  unsigned int v39; // r8d
  __int64 v40; // rcx
  __int64 result; // rax
  KIRQL v42; // al
  int *v43; // rsi
  struct _MDL *v44; // rdx
  unsigned int v45; // eax
  int v46; // r15d
  int v47; // eax
  __int64 PageFilePte; // rax
  __int64 v49; // rcx
  __int64 v50; // rdx
  unsigned __int64 v51; // rbx
  int v52; // esi
  KIRQL v53; // dl
  struct _KTHREAD *v54; // rsi
  __int64 v55; // rdx
  __int64 v56; // rcx
  unsigned int v57; // ebx
  unsigned int v58; // eax
  unsigned __int8 CurrentIrql; // bl
  __int64 v60; // rdx
  bool v61; // zf
  unsigned int v62; // r10d
  unsigned __int64 v63; // rax
  _QWORD *v64; // rcx
  unsigned int v65; // r12d
  unsigned __int64 v66; // r13
  __int64 v67; // rcx
  ULONG LongestRunClearCapped; // eax
  _QWORD *v69; // r12
  unsigned __int64 v70; // r13
  int v71; // ecx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r14
  unsigned __int8 v75; // si
  _QWORD *v76; // [rsp+60h] [rbp-79h]
  __int64 v77; // [rsp+60h] [rbp-79h]
  _QWORD *v78; // [rsp+60h] [rbp-79h]
  unsigned int v79; // [rsp+68h] [rbp-71h]
  unsigned int v80; // [rsp+68h] [rbp-71h]
  unsigned int v81; // [rsp+6Ch] [rbp-6Dh] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-69h]
  ULONG v83; // [rsp+78h] [rbp-61h] BYREF
  unsigned int v84; // [rsp+7Ch] [rbp-5Dh]
  unsigned int v85; // [rsp+80h] [rbp-59h]
  ULONG_PTR *v86; // [rsp+88h] [rbp-51h]
  unsigned __int64 v87; // [rsp+90h] [rbp-49h] BYREF
  __int64 v88; // [rsp+98h] [rbp-41h]
  __int64 v89; // [rsp+A0h] [rbp-39h]
  unsigned int v90[2]; // [rsp+A8h] [rbp-31h] BYREF
  __int64 v91; // [rsp+B0h] [rbp-29h]
  __int128 v92; // [rsp+C8h] [rbp-11h]
  __int128 v93; // [rsp+D8h] [rbp-1h]
  __int64 v94; // [rsp+E8h] [rbp+Fh]
  unsigned int v96; // [rsp+148h] [rbp+6Fh] BYREF
  unsigned __int64 v97; // [rsp+150h] [rbp+77h] BYREF
  unsigned int FreePageFileSpace; // [rsp+158h] [rbp+7Fh] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  v2 = a1;
  v81 = 0;
  v3 = 0;
  v86 = (ULONG_PTR *)v1;
  v4 = *(_QWORD *)(v1 + 216);
  v5 = *(_DWORD *)(v1 + 12);
  v88 = v4;
  CurrentThread = KeGetCurrentThread();
  if ( !v5 )
    return MiPageFileNoFreeSpace(v1, a1);
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_DWORD *)(a1 + 112) = 131120;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  v6 = *(_WORD *)(v1 + 172);
  v89 = v2 + 104;
  v76 = (_QWORD *)(v2 + 152);
  v7 = 88 * ((v6 & 0xF) + 48LL);
  if ( (v6 & 0x40) != 0 )
  {
    v8 = *(_QWORD *)(v7 + v4);
    v9 = 0LL;
    v97 = 0LL;
    v3 = v8 != 0 ? 2 : 0;
    if ( v8 )
      goto LABEL_8;
  }
  else
  {
    v9 = *(_QWORD *)(v7 + v4);
    v97 = v9;
  }
  if ( *(_DWORD *)(v4 + 1200) )
  {
LABEL_56:
    v42 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 200));
    *(_BYTE *)(v1 + 174) |= 1u;
    MiReleaseSpinLockExclusive((_DWORD *)(v1 + 200), v42);
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
    v61 = (*(_BYTE *)(v1 + 172) & 0x10) == 0;
    v97 = 0LL;
    if ( !v61 )
      goto LABEL_56;
  }
  if ( *(_DWORD *)(v4 + 1204) != -1 )
    v3 |= 4u;
  v96 = v3;
  if ( (v3 & 2) == 0 && v8 && (*(_BYTE *)(v1 + 172) & 0x10) == 0 )
  {
    if ( !v9 || (*(_BYTE *)(v1 + 175) & 1) != 0 )
    {
      v58 = v96;
    }
    else
    {
      v57 = *(_DWORD *)(v1 + 104);
      v3 = v96;
      if ( (unsigned int)MiPageFileLargestBitmapsRun(v1) < v57 >> 2 )
        goto LABEL_12;
      v58 = v3;
      if ( v8 < (unsigned __int64)(unsigned int)dword_140FC420C >> 2 && v8 < v97 )
        goto LABEL_12;
    }
    v3 = v58 | 2;
  }
LABEL_12:
  v10 = dword_140FC420C;
  v96 = dword_140FC420C;
  if ( (v3 & 2) != 0 )
  {
    if ( v8 < (unsigned int)dword_140FC420C )
      v10 = v8;
    v96 = v10;
  }
  if ( *(_BYTE *)(v4 + 1048) )
  {
    v52 = 0;
    v53 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 1044));
    if ( *(_BYTE *)(v4 + 1050) )
    {
      *(_BYTE *)(v4 + 1050) = 0;
      v52 = 1;
      *(_BYTE *)(v4 + 1048) = 0;
    }
    else if ( *(_BYTE *)(v4 + 1048) )
    {
      v10 = *(unsigned __int8 *)(v4 + 1048);
      v96 = v10;
    }
    MiReleaseSpinLockExclusive((_DWORD *)(v4 + 1044), v53);
    if ( v52 )
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
  }
  if ( (*(_DWORD *)(v2 + 40) & 0x1Cu) < 8 )
  {
    if ( v10 > 0x100 )
      v10 = 256;
    v96 = v10;
  }
  v3 |= 1u;
  --CurrentThread->KernelApcDisable;
  if ( (v3 & 2) != 0 )
  {
    v61 = (*(_BYTE *)(v1 + 172) & 0x40) == 0;
    LODWORD(v97) = 0;
    if ( v61 )
    {
      MiFindPageFileWriteCluster(v1, (unsigned int *)&v97, &v96, 0);
      v11 = v96;
    }
    else
    {
      v11 = v96;
      if ( *(_DWORD *)(v1 + 12) < v96 )
        v11 = *(_DWORD *)(v1 + 12);
    }
    if ( !v11 )
    {
      result = MiPageFileNoFreeSpace(v1, v2);
      goto LABEL_50;
    }
    v12 = MiFillNoReservationCluster(v4, v1, (__int64)v76, v11);
    LODWORD(v13) = v97;
    v14 = v12;
    v84 = v12;
  }
  else
  {
    FreePageFileSpace = v10;
    v47 = MiBuildReservationCluster(v76, v1, &FreePageFileSpace, &v81);
    v14 = FreePageFileSpace;
    LODWORD(v13) = v47;
    LODWORD(v97) = v47;
    v12 = v81;
    v84 = FreePageFileSpace;
  }
  if ( !v14 )
  {
    v54 = CurrentThread;
    --CurrentThread->SpecialApcDisable;
    result = (__int64)MiMakePagefileWriterEntryAvailable((_QWORD *)v2);
    v61 = v54->SpecialApcDisable++ == -1;
    if ( v61 )
    {
      result = (__int64)&v54->152;
      if ( *(_QWORD *)result != result )
        result = KiCheckForKernelApcDelivery(v56, v55);
    }
    goto LABEL_50;
  }
  FreePageFileSpace = v14;
  v61 = (*(_BYTE *)(v1 + 172) & 0x40) == 0;
  v79 = v12 - 1;
  v81 = v12 - 1;
  if ( v61 )
  {
    LOBYTE(v96) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 200));
    if ( (v3 & 2) != 0 )
    {
      v92 = 0LL;
      v94 = 0LL;
      v93 = 0LL;
      v90[1] = 0;
      PageFilePte = MiMakePageFilePte((unsigned int)v13);
      v49 = *(_QWORD *)(v1 + 216);
      v87 = v50 ^ (v50 ^ PageFilePte) & 0xFFFFFFFFFFFF0FFFuLL;
      FreePageFileSpace = MiFindFreePageFileSpace(v49, &v87, v14, 38);
      if ( FreePageFileSpace )
      {
        v51 = v87;
        if ( qword_140E2DB80 && (v87 & 0x10) == 0 )
          v51 = v87 & ~qword_140E2DB80;
        v13 = HIDWORD(v51);
        v83 = v13;
      }
      else
      {
        v67 = *(_QWORD *)(v1 + 80);
        v90[0] = *(_DWORD *)v1;
        v83 = v13;
        v91 = *(_QWORD *)(v67 + 16);
        LongestRunClearCapped = RtlFindLongestRunClearCapped(v90, v14, &v83);
        LODWORD(v13) = v83;
        FreePageFileSpace = LongestRunClearCapped;
        MiSetPageFileAllocationBits(v1, v83, LongestRunClearCapped);
      }
      LODWORD(v97) = v13;
    }
    else
    {
      MiSetPageFileAllocationBits(v1, v13, v14);
      v62 = -1;
      v63 = (unsigned __int64)&v76[v14];
      v64 = (_QWORD *)(v2 + 152);
      v78 = (_QWORD *)(v2 + 152);
      if ( v2 + 152 < v63 )
      {
        v65 = v13;
        v66 = v63;
        do
        {
          if ( *v64 != qword_140E37378
            || (v64 = v78, _bittest64(*(const signed __int64 **)(*(_QWORD *)(v1 + 80) + 32LL), v65)) )
          {
            if ( v62 != -1 )
            {
              MiInvalidatePageFileBitmapsCache(v1, v62, v65 - v62, 0LL);
              v64 = v78;
              v62 = -1;
            }
          }
          else if ( v62 == -1 )
          {
            v62 = v65;
          }
          ++v64;
          ++v65;
          v78 = v64;
        }
        while ( (unsigned __int64)v64 < v66 );
        v4 = v88;
        v2 = a1;
        v14 = v84;
      }
      *(_DWORD *)(v1 + 104) = FreePageFileSpace + *(_DWORD *)(v1 + 104) - (*(_DWORD *)(v1 + 104) >> 2);
    }
    MiUpdatePagefilePeakUsage(v1);
    MiReleaseSpinLockExclusive((_DWORD *)(v1 + 200), v96);
  }
  KeLeaveCriticalRegionThread();
  v15 = FreePageFileSpace;
  v85 = v3 & 0xFFFFFFFE;
  if ( FreePageFileSpace == v14 )
  {
    v16 = v79;
  }
  else
  {
    v69 = (_QWORD *)(v89 + 8 * (FreePageFileSpace + 6LL));
    v70 = v89 + 8 * (v14 + 6LL);
    do
    {
      v74 = 48LL * *v69 - 0x220000000000LL;
      v75 = MiLockPageInline(v74);
      MiWriteCompletePfn(v74);
      MiUnlockPage(v74, v75);
      ++v69;
    }
    while ( (unsigned __int64)v69 < v70 );
    v16 = FreePageFileSpace - v84 + v79;
    v4 = v88;
    v81 = v16;
    MiReleaseWriteInProgressCharges(v88, v84 - FreePageFileSpace, 0LL);
    v15 = FreePageFileSpace;
    v1 = (__int64)v86;
    v2 = a1;
  }
  FreePageFileSpace = v15;
  v17 = v15 << 12;
  *(_DWORD *)(v2 + 144) = v17;
  v18 = (ULONG_PTR *)(v2 + 152);
  *(_DWORD *)(v2 + 44) = v17;
  *(_DWORD *)(v2 + 48) = v16;
  v19 = 0;
  v96 = 0;
  v20 = *v18;
  v80 = v13;
  v86 = v18;
  v21 = MiPageToNode(v20);
  v22 = v86;
  v23 = v21 + 1;
  do
  {
    v24 = 48 * *v22 - 0x220000000000LL;
    v77 = v24;
    if ( *v22 != qword_140E37378 )
    {
      if ( v23 )
      {
        v25 = MiPageToNode(*v22);
        v24 = v77;
        if ( v23 != v25 + 1 )
          v23 = 0;
      }
      v26 = (unsigned __int8)MiLockPageInline(v24);
      if ( !(unsigned int)MiIsPfnOriginalPteLost(v77) )
      {
        if ( (*(_BYTE *)(v1 + 172) & 0x40) != 0 )
        {
          v29 = MiSetStoreVirtualPagefileValue(v4, *(_QWORD *)(v28 + 16), 4LL);
          v28 = v77;
          *(_QWORD *)(v77 + 16) = v29;
        }
        else
        {
          MiUpdatePfnBackingStore(v28, v1, v13);
          v28 = v77;
        }
      }
      _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (unsigned __int8)v26 < 2u )
      {
        if ( KiIrqlFlags )
        {
          LOBYTE(v27) = v26;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v27);
        }
        __writecr8(v26);
      }
      v19 = v96;
      LODWORD(v13) = v97;
    }
    ++v19;
    LODWORD(v13) = v13 + 1;
    ++v22;
    v96 = v19;
    LODWORD(v97) = v13;
  }
  while ( v19 < FreePageFileSpace );
  v3 = v85;
  *(_WORD *)(v89 + 8) = 8 * (dword_140FC420C + 6);
  v30 = MEMORY[0xFFFFF780000003B0];
  v31 = *(_DWORD *)(a1 + 40) >> 2;
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  v32 = v31 & 7;
  v33 = *(_DWORD *)(v4 + 908);
  v34 = *(_QWORD *)(v4 + 18688);
  if ( v33 )
  {
    v30 = 1056LL;
    v71 = v33 - 1;
    if ( v34 < 0x420 )
      v32 = 4;
    *(_DWORD *)(v4 + 908) = v34 < 0x420 ? v71 : 0;
    goto LABEL_42;
  }
  if ( v34 < 0xA0 )
  {
    *(_DWORD *)(v4 + 908) = 32;
  }
  else
  {
    if ( v34 >= 0x120 )
      goto LABEL_42;
    *(_DWORD *)(v4 + 908) = 8;
  }
  v32 = 4;
LABEL_42:
  *(_DWORD *)(a1 + 40) = (4 * v32) | *(_DWORD *)(a1 + 40) & 0xFFFFFFE3;
  if ( v32 < 2 )
  {
    v35 = (__int64)CurrentThread;
    --CurrentThread->SpecialApcDisable;
    ++*(_DWORD *)(v4 + 740);
    v61 = (*(_WORD *)(v35 + 486))++ == 0xFFFF;
    if ( v61 && *(_QWORD *)(v35 + 152) != v35 + 152 )
      KiCheckForKernelApcDelivery(v35, v30);
  }
  MI_PAGEFILE_WRITE(a1, *(_QWORD *)(a1 + 80), v32, ((v3 >> 1) & 1) == 0, -1);
  v37 = *(_DWORD *)(v4 + 896);
  if ( v37 == 512 )
    *(_QWORD *)(v4 + 888) -= *(_QWORD *)(v4 + 888) >> 9;
  else
    *(_DWORD *)(v4 + 896) = v37 + 1;
  v38 = 3221225473LL;
  *(_QWORD *)(v4 + 888) += FreePageFileSpace;
  v39 = v80;
  *(_DWORD *)(a1 + 40) &= ~0x40u;
  *(_QWORD *)(a1 + 88) = (unsigned __int64)v80 << 12;
  if ( (*(_BYTE *)(v1 + 172) & 0x40) != 0 || (v40 = 4LL, (v3 & 6) == 4) )
  {
    v38 = (unsigned int)MiStoreWriteModifiedPages(a1, v23, v80, v36);
    result = 0LL;
    if ( (int)v38 >= 0 )
      goto LABEL_50;
    v39 = v80;
  }
  if ( (*(_BYTE *)(v1 + 172) & 0x40) != 0 )
  {
    v46 = 1;
    v43 = (int *)(a1 + 24);
    goto LABEL_102;
  }
  __incgsdword(0x2EACu);
  __addgsdword(0x2EA8u, FreePageFileSpace);
  MiMapPageFileHash(v1, a1 + 104, 0, v39, FreePageFileSpace);
  v43 = (int *)(a1 + 24);
  v44 = (struct _MDL *)(a1 + 104);
  if ( _bittest16((const signed __int16 *)(v1 + 172), 0xBu) )
  {
    MiTransferMemoryPagefileData(v1, v44, *(_QWORD *)(a1 + 88) >> 12, 0LL);
    *v43 = 0;
    *(_QWORD *)(a1 + 32) = *(unsigned int *)(a1 + 144);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v72) = 1;
      LOBYTE(v73) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v73, v72);
    }
    MiWriteComplete((_QWORD *)a1, (int *)(a1 + 24), 0);
    v61 = KiIrqlFlags == 0;
    goto LABEL_105;
  }
  v45 = IoAsynchronousPageWrite(
          *(struct _FILE_OBJECT **)(v1 + 24),
          v44,
          (LARGE_INTEGER *)(a1 + 88),
          (LARGE_INTEGER)MiWriteComplete,
          (void *)a1,
          v32,
          *(_DWORD *)(v1 + 168),
          0,
          0LL,
          (struct _IO_STATUS_BLOCK *)(a1 + 24),
          (IRP **)(a1 + 16));
  v40 = 3221225472LL;
  v38 = v45;
  result = v45 & 0xC0000000;
  if ( (_DWORD)result == -1073741824 )
  {
    v46 = 0;
LABEL_102:
    *v43 = v38;
    *(_QWORD *)(a1 + 32) = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v38) = 1;
      LOBYTE(v40) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v40, v38);
    }
    MiWriteComplete((_QWORD *)a1, v43, v46);
    v61 = KiIrqlFlags == 0;
LABEL_105:
    if ( !v61 )
    {
      LOBYTE(v60) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v60);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
LABEL_50:
  if ( (v3 & 1) != 0 )
    return KeLeaveCriticalRegionThread();
  return result;
}

/*
 * XREFs of MiWaitForInPageComplete @ 0x140350CE8
 * Callers:
 *     MiIssueHardFault @ 0x140350280 (MiIssueHardFault.c)
 *     MiPfCompleteInPageSupport @ 0x140352CB4 (MiPfCompleteInPageSupport.c)
 * Callees:
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MmIsAddressValidEx @ 0x140244560 (MmIsAddressValidEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiZeroPhysicalPage @ 0x14024B990 (MiZeroPhysicalPage.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 *     MiCopyPage @ 0x140252870 (MiCopyPage.c)
 *     MiRetardMdl @ 0x140258D7C (MiRetardMdl.c)
 *     MiIsRetryIoStatus @ 0x140260570 (MiIsRetryIoStatus.c)
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402EEA94 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiGetSystemRegionType @ 0x1402FDF90 (MiGetSystemRegionType.c)
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 *     MiFindContiguousPagesEx @ 0x14030E840 (MiFindContiguousPagesEx.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14033E678 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiValidatePagefilePageHash @ 0x140341950 (MiValidatePagefilePageHash.c)
 *     PfHardFaultLog @ 0x1403512E8 (PfHardFaultLog.c)
 *     MiStoreFaultComplete @ 0x140351468 (MiStoreFaultComplete.c)
 *     MiFlowThroughRemoveNode @ 0x1403517F4 (MiFlowThroughRemoveNode.c)
 *     MiPrefetchRestOfCluster @ 0x1403DBB74 (MiPrefetchRestOfCluster.c)
 *     MiValidateInPage @ 0x1404291F0 (MiValidateInPage.c)
 *     MiDeleteControlArea @ 0x14043F354 (MiDeleteControlArea.c)
 *     MiFlushAllFilesystemPages @ 0x1404CFFDC (MiFlushAllFilesystemPages.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     MiExceptionForMappedVa @ 0x140679424 (MiExceptionForMappedVa.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiWaitForInPageComplete(__int64 a1, ULONG_PTR a2, unsigned int *a3)
{
  __int64 v3; // r13
  __int64 v4; // r9
  _QWORD *v5; // rsi
  __int64 v6; // r12
  __int64 v8; // r8
  __int64 v9; // rax
  ULONG_PTR v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  ULONG_PTR v13; // r9
  int *v14; // rbx
  NTSTATUS *v15; // r15
  NTSTATUS v16; // r15d
  unsigned int *v17; // r12
  unsigned int v18; // ebx
  bool v19; // zf
  int v20; // ebx
  __int64 result; // rax
  __int64 v22; // rdx
  int v23; // ebx
  volatile signed __int64 *v24; // rcx
  unsigned __int64 v25; // r12
  __int64 v26; // rbx
  void *v27; // rbx
  _BYTE *v28; // rdx
  __int64 *v29; // rbx
  unsigned __int64 v30; // r13
  _QWORD *v31; // rax
  __int64 v32; // r9
  __int64 v33; // r10
  __int64 v34; // r11
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned __int8 v39; // al
  __int64 v40; // r15
  unsigned int v41; // ebx
  unsigned int v42; // eax
  ULONG_PTR v43; // r14
  unsigned int v44; // [rsp+70h] [rbp-29h]
  int v45; // [rsp+70h] [rbp-29h]
  BOOL IsRetryIoStatus; // [rsp+78h] [rbp-21h]
  ULONG_PTR BugCheckParameter4; // [rsp+80h] [rbp-19h]
  ULONG_PTR v48; // [rsp+88h] [rbp-11h] BYREF
  unsigned __int64 v49; // [rsp+90h] [rbp-9h]
  __int64 v50; // [rsp+98h] [rbp-1h]
  ULONG_PTR BugCheckParameter1; // [rsp+A0h] [rbp+7h]
  int v53; // [rsp+100h] [rbp+67h]
  unsigned __int8 v54; // [rsp+108h] [rbp+6Fh] BYREF
  unsigned int *v55; // [rsp+110h] [rbp+77h]
  unsigned int v56; // [rsp+118h] [rbp+7Fh]

  v55 = a3;
  v3 = a2 + 272;
  v4 = *(_QWORD *)(a2 + 248);
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 56);
  BugCheckParameter1 = *(_QWORD *)(a2 + 232);
  v8 = a1;
  BugCheckParameter4 = *(_QWORD *)(a2 + 224);
  v9 = *(_QWORD *)(a2 + 256);
  v54 = 0;
  v56 = 0;
  if ( v9 )
    v3 = v9;
  v50 = v4;
  v10 = -1LL;
  v48 = -1LL;
  if ( (*(_QWORD *)(v4 + 40) & 0x10000000000LL) == 0
    && *(__int64 *)(v4 + 8) > 0
    && (unsigned int)MiGetPfnSlabType(v4) == 9 )
  {
    v40 = v34 * ((v32 - v33) >> 4);
    v41 = ~(*(_DWORD *)(v8 + 80) << 9) & 0x20000 | 0x40000000;
    v49 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v32 + 40) >> 43) & 0x3FFLL));
    if ( KeGetCurrentThread() == *(struct _KTHREAD **)&KeSwapProcessOrStackThread )
      v41 |= 8u;
    v42 = MiPageToNode(v34 * ((v32 - v33) >> 4));
    MiFindContiguousPagesEx(
      v49,
      (_BYTE *)(v40 + 1),
      qword_140E2DD20,
      0LL,
      0,
      1LL,
      (unsigned __int8)BYTE2(*(_DWORD *)(v50 + 32)) >> 6,
      v42,
      255,
      v41,
      0,
      0LL,
      0LL,
      &v48);
    v8 = a1;
  }
  v11 = *(_QWORD *)(v8 + 16);
  if ( (v11 & 1) != 0 )
  {
    v28 = (_BYTE *)(v11 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( *v28 == 2 )
    {
      if ( v6 )
        MiPrefetchRestOfCluster(a2, v28, v6);
    }
  }
  KeWaitForSingleObject((PVOID)(a2 + 32), WrPageIn, 0, 0, 0LL);
  v13 = *(_QWORD *)(a2 + 264);
  if ( v13 )
    KeBugCheckEx(0x1Au, 0x61947uLL, a2, v13, 0LL);
  if ( v6 && (HIBYTE(*(_DWORD *)(v6 + 184)) & 0x30) == 0x30 )
  {
    v31 = &unk_140E388A0;
    if ( (*(_DWORD *)(v6 + 184) & 0xF) != 1 )
      v31 = (_QWORD *)(v6 + 224);
    if ( !*v31 )
      KiUnstackDetachProcess(a2 + 104, 0, v12, 0LL);
  }
  if ( _bittest16((const signed __int16 *)(v3 + 10), 9u) )
  {
    MiRetardMdl(v3);
    *(_DWORD *)(a2 + 80) = -1073741670;
    *(_QWORD *)(a2 + 88) = 0LL;
  }
  if ( (*(_DWORD *)(a2 + 192) & 0x40) != 0 )
    MiFlowThroughRemoveNode(a2);
  v44 = *(_DWORD *)(a2 + 184);
  v53 = 0;
  v49 = v3
      + 40
      + 8
      * ((*(unsigned int *)(v3 + 40) + 4095LL + (unsigned __int64)((*(_DWORD *)(v3 + 32) + *(_DWORD *)(v3 + 44)) & 0xFFF)) >> 12);
  if ( (*(_DWORD *)(a2 + 192) & 0x400) != 0 )
    MiStoreFaultComplete(a2);
  v14 = (int *)(a2 + 80);
  v15 = (NTSTATUS *)(a2 + 80);
  if ( *(_QWORD *)(a2 + 208) )
  {
    if ( *v14 >= 0 )
    {
      v53 = MiValidateInPage(a2);
      if ( v53 == -1073740748 )
      {
        v15 = (NTSTATUS *)(a2 + 80);
        *(_DWORD *)(a2 + 192) |= 0x200000u;
      }
    }
    v24 = **(volatile signed __int64 ***)(a2 + 208);
    if ( !_InterlockedDecrement64(v24 + 14) )
    {
      MiDeleteControlArea((PVOID)v24);
      v14 = v15;
    }
    v15 = v14;
  }
  else if ( *v14 >= 0 && (*(_DWORD *)(a2 + 192) & 0x800000) != 0 )
  {
    v53 = MiValidatePagefilePageHash((_QWORD *)a2);
  }
  v16 = *v15;
  if ( (v56 & 1) == 0 )
  {
    __incgsdword(0x2EA4u);
    __addgsdword(0x2EA0u, (v44 >> 12) + ((v44 & 0xFFF) != 0));
    if ( v6 )
    {
      if ( (*(_DWORD *)(a2 + 192) & 0x20) == 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 168));
    }
  }
  v17 = v55;
  v18 = 2 * (v56 & 1);
  if ( *(_QWORD *)v55 )
    PfHardFaultLog(*(_QWORD *)v55, v18);
  v19 = (*(_BYTE *)(v3 + 10) & 1) == 0;
  *v17 = v18;
  if ( !v19 )
    MmUnmapLockedPages(*(PVOID *)(v3 + 24), (PMDL)v3);
  *(_DWORD *)(a2 + 188) = -1;
  v20 = *(_DWORD *)(a2 + 192);
  IsRetryIoStatus = 0;
  if ( v16 >= 0 )
  {
    v22 = *(_QWORD *)(a2 + 88);
    if ( v22 != v44 )
    {
      if ( v22 || (v20 & 0x20) == 0 )
      {
        if ( (v20 & 0x400000) != 0 && (v56 & 1) == 0 )
          KeBugCheckEx(0x7Au, 4uLL, *(_QWORD *)(a2 + 88), a2, BugCheckParameter4);
        v25 = (v22
             + ((*(_DWORD *)(v3 + 32) + *(_DWORD *)(v3 + 44)) & 0xFFFLL)
             - (unsigned __int64)(v44 - *(_DWORD *)(v3 + 40))
             + 4095) >> 12;
        v45 = *(_DWORD *)(a2 + 88) & 0xFFF;
        if ( v45 )
        {
          v26 = *(_DWORD *)(a2 + 88) & 0xFFF;
          v27 = (void *)(MiMapPageInHyperSpaceWorker(*(_QWORD *)(v3 + 8 * v25 + 40), &v54, 0x80000000) + v26);
          memset_0(v27, 0, (unsigned int)(4096 - v45));
          MiUnmapPageInHyperSpaceWorker((unsigned __int64)v27, v54, 0x80000000);
        }
        if ( v3 + 48 + 8 * v25 <= v49 )
          *(_DWORD *)(a2 + 188) = ((__int64)(8 * v25 - 8) >> 3) + 1;
      }
      else
      {
        v16 = -1073741801;
      }
    }
    v23 = v53;
    if ( v53 == -1073741761 )
    {
LABEL_82:
      if ( BugCheckParameter4 > 0x7FFFFFFEFFFFLL
        && (unsigned int)MiGetSystemRegionType(BugCheckParameter4) != 7
        && !(unsigned int)MiExceptionForMappedVa(BugCheckParameter4) )
      {
        if ( !IsRetryIoStatus )
        {
          v43 = BugCheckParameter1;
          if ( MmIsAddressValidEx(BugCheckParameter1) )
            v10 = MI_READ_PTE_LOCK_FREE(v43);
          MiFlushAllFilesystemPages(1LL);
          if ( v23 < 0 )
            v16 = v23;
          KeBugCheckEx(0x7Au, v43, v16, v10, BugCheckParameter4);
        }
        if ( v23 != -1073741761 )
          v16 = -1073741801;
      }
    }
  }
  else
  {
    if ( v16 != -1073741807 )
    {
      if ( v16 == -2147483626 )
        goto LABEL_28;
      IsRetryIoStatus = MiIsRetryIoStatus(v16, *(unsigned int *)(v3 + 40));
      if ( IsRetryIoStatus && !dword_140E373D8 && ((v56 & 1) == 0 || (v56 & 2) != 0) )
        dword_140E373D8 = 32;
      if ( (v20 & 0x20) != 0 )
      {
        v16 = -1073741801;
        goto LABEL_28;
      }
      v23 = v53;
      goto LABEL_82;
    }
    if ( (v20 & 0x400000) != 0 )
      KeBugCheckEx(0x7Au, 3uLL, 0xFFFFFFFFC0000011uLL, a2, BugCheckParameter4);
    v29 = (__int64 *)(v3 + 48);
    v30 = v49;
    while ( (unsigned __int64)v29 <= v30 )
    {
      MiZeroPhysicalPage(0LL, *v29, 1, (unsigned __int8)BYTE2(*(_DWORD *)(48 * *v29 - 0x21FFFFFFFFE0LL)) >> 6);
      ++v29;
    }
    v16 = 0;
  }
LABEL_28:
  if ( v48 != -1LL )
  {
    v35 = v50;
    MiCopyPage(v48, 0xAAAAAAAAAAAAAAABuLL * ((v50 + 0x220000000000LL) >> 4), 1);
    v5 = (_QWORD *)(48 * v48 - 0x220000000000LL);
    v5[2] = CLFS_LSN_NULL_EXT;
    MiSetOriginalPtePfnFromFreeList(v5 + 2);
    if ( ((v5[5] >> 60) & 7) == 3 )
    {
      v39 = MiLockPageInline((__int64)v5, v36, v37, v38);
      v5[1] = *(_QWORD *)(v35 + 8);
      MiUnlockPage((__int64)v5, v39);
    }
  }
  result = v56;
  *(_DWORD *)(a2 + 112) = v56;
  *(_QWORD *)(a2 + 104) = v5;
  *(_DWORD *)(a2 + 80) = v16;
  return result;
}

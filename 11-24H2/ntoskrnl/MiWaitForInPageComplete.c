/*
 * XREFs of MiWaitForInPageComplete @ 0x140398598
 * Callers:
 *     MiPfCompleteInPageSupport @ 0x140397338 (MiPfCompleteInPageSupport.c)
 *     MiIssueHardFault @ 0x140397B2C (MiIssueHardFault.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiZeroPhysicalPage @ 0x14021EC40 (MiZeroPhysicalPage.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14021F1A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiCopyPage @ 0x1402254C0 (MiCopyPage.c)
 *     MiGetSystemRegionType @ 0x14022AD20 (MiGetSystemRegionType.c)
 *     MiGetPfnSlabType @ 0x14022D610 (MiGetPfnSlabType.c)
 *     MmIsAddressValidEx @ 0x140262FC0 (MmIsAddressValidEx.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140266854 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPageToNode @ 0x14026C1E0 (MiPageToNode.c)
 *     MmUnmapLockedPages @ 0x14028D9C0 (MmUnmapLockedPages.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiIsRetryIoStatus @ 0x1402CBFE0 (MiIsRetryIoStatus.c)
 *     MiValidatePagefilePageHash @ 0x1402E57B0 (MiValidatePagefilePageHash.c)
 *     MiRetardMdl @ 0x1402F323C (MiRetardMdl.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402F6568 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiFindContiguousPagesEx @ 0x140304960 (MiFindContiguousPagesEx.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     MiDeleteControlArea @ 0x14036F6E8 (MiDeleteControlArea.c)
 *     MiFlowThroughRemoveNode @ 0x1403976A4 (MiFlowThroughRemoveNode.c)
 *     PfHardFaultLog @ 0x140398B98 (PfHardFaultLog.c)
 *     MiStoreFaultComplete @ 0x140398D18 (MiStoreFaultComplete.c)
 *     MiValidateInPage @ 0x140436770 (MiValidateInPage.c)
 *     MiPrefetchRestOfCluster @ 0x14047AE34 (MiPrefetchRestOfCluster.c)
 *     MiFlushAllFilesystemPages @ 0x1404D6B8C (MiFlushAllFilesystemPages.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     MiExceptionForMappedVa @ 0x140678298 (MiExceptionForMappedVa.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
  ULONG_PTR v12; // r9
  int *v13; // rbx
  NTSTATUS *v14; // r15
  NTSTATUS v15; // r15d
  unsigned int *v16; // r12
  unsigned int v17; // ebx
  bool v18; // zf
  int v19; // ebx
  __int64 result; // rax
  __int64 v21; // rdx
  int v22; // ebx
  volatile signed __int64 *v23; // rcx
  unsigned __int64 v24; // r12
  __int64 v25; // rbx
  void *v26; // rbx
  _BYTE *v27; // rdx
  __int64 *v28; // rbx
  unsigned __int64 v29; // r13
  _QWORD *v30; // rax
  __int64 v31; // r9
  __int64 v32; // r10
  __int64 v33; // r11
  __int64 v34; // rbx
  unsigned __int8 v35; // al
  __int64 v36; // r15
  unsigned int v37; // ebx
  unsigned int v38; // eax
  ULONG_PTR v39; // r14
  unsigned int v40; // [rsp+70h] [rbp-29h]
  int v41; // [rsp+70h] [rbp-29h]
  BOOL IsRetryIoStatus; // [rsp+78h] [rbp-21h]
  ULONG_PTR BugCheckParameter4; // [rsp+80h] [rbp-19h]
  ULONG_PTR v44; // [rsp+88h] [rbp-11h] BYREF
  unsigned __int64 v45; // [rsp+90h] [rbp-9h]
  __int64 v46; // [rsp+98h] [rbp-1h]
  ULONG_PTR BugCheckParameter1; // [rsp+A0h] [rbp+7h]
  int v49; // [rsp+100h] [rbp+67h]
  unsigned __int8 v50; // [rsp+108h] [rbp+6Fh] BYREF
  unsigned int *v51; // [rsp+110h] [rbp+77h]
  unsigned int v52; // [rsp+118h] [rbp+7Fh]

  v51 = a3;
  v3 = a2 + 272;
  v4 = *(_QWORD *)(a2 + 248);
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 56);
  BugCheckParameter1 = *(_QWORD *)(a2 + 232);
  v8 = a1;
  BugCheckParameter4 = *(_QWORD *)(a2 + 224);
  v9 = *(_QWORD *)(a2 + 256);
  v50 = 0;
  v52 = 0;
  if ( v9 )
    v3 = v9;
  v46 = v4;
  v10 = -1LL;
  v44 = -1LL;
  if ( (*(_QWORD *)(v4 + 40) & 0x10000000000LL) == 0
    && *(__int64 *)(v4 + 8) > 0
    && (unsigned int)MiGetPfnSlabType(v4) == 9 )
  {
    v36 = v33 * ((v31 - v32) >> 4);
    v37 = ~(*(_DWORD *)(v8 + 80) << 9) & 0x20000 | 0x40000000;
    v45 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v31 + 40) >> 43) & 0x3FFLL));
    if ( KeGetCurrentThread() == *(struct _KTHREAD **)&KeSwapProcessOrStackThread )
      v37 |= 8u;
    v38 = MiPageToNode(v33 * ((v31 - v32) >> 4));
    MiFindContiguousPagesEx(
      v45,
      (_BYTE *)(v36 + 1),
      qword_140E2DBE0,
      0LL,
      0,
      1LL,
      (unsigned __int8)BYTE2(*(_DWORD *)(v46 + 32)) >> 6,
      v38,
      255,
      v37,
      0,
      0LL,
      0LL,
      &v44);
    v8 = a1;
  }
  v11 = *(_QWORD *)(v8 + 16);
  if ( (v11 & 1) != 0 )
  {
    v27 = (_BYTE *)(v11 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( *v27 == 2 )
    {
      if ( v6 )
        MiPrefetchRestOfCluster(a2, v27, v6);
    }
  }
  KeWaitForSingleObject((PVOID)(a2 + 32), WrPageIn, 0, 0, 0LL);
  v12 = *(_QWORD *)(a2 + 264);
  if ( v12 )
    KeBugCheckEx(0x1Au, 0x61947uLL, a2, v12, 0LL);
  if ( v6 && (HIBYTE(*(_DWORD *)(v6 + 184)) & 0x30) == 0x30 )
  {
    v30 = &unk_140E38760;
    if ( (*(_DWORD *)(v6 + 184) & 0xF) != 1 )
      v30 = (_QWORD *)(v6 + 224);
    if ( !*v30 )
      KiUnstackDetachProcess(a2 + 104, 0);
  }
  if ( _bittest16((const signed __int16 *)(v3 + 10), 9u) )
  {
    MiRetardMdl(v3);
    *(_DWORD *)(a2 + 80) = -1073741670;
    *(_QWORD *)(a2 + 88) = 0LL;
  }
  if ( (*(_DWORD *)(a2 + 192) & 0x40) != 0 )
    MiFlowThroughRemoveNode(a2);
  v40 = *(_DWORD *)(a2 + 184);
  v49 = 0;
  v45 = v3
      + 40
      + 8
      * ((*(unsigned int *)(v3 + 40) + 4095LL + (unsigned __int64)((*(_DWORD *)(v3 + 32) + *(_DWORD *)(v3 + 44)) & 0xFFF)) >> 12);
  if ( (*(_DWORD *)(a2 + 192) & 0x400) != 0 )
    MiStoreFaultComplete(a2);
  v13 = (int *)(a2 + 80);
  v14 = (NTSTATUS *)(a2 + 80);
  if ( *(_QWORD *)(a2 + 208) )
  {
    if ( *v13 >= 0 )
    {
      v49 = MiValidateInPage(a2);
      if ( v49 == -1073740748 )
      {
        v14 = (NTSTATUS *)(a2 + 80);
        *(_DWORD *)(a2 + 192) |= 0x200000u;
      }
    }
    v23 = **(volatile signed __int64 ***)(a2 + 208);
    if ( !_InterlockedDecrement64(v23 + 14) )
    {
      MiDeleteControlArea((PVOID)v23);
      v13 = v14;
    }
    v14 = v13;
  }
  else if ( *v13 >= 0 && (*(_DWORD *)(a2 + 192) & 0x800000) != 0 )
  {
    v49 = MiValidatePagefilePageHash((_QWORD *)a2);
  }
  v15 = *v14;
  if ( (v52 & 1) == 0 )
  {
    __incgsdword(0x2EA4u);
    __addgsdword(0x2EA0u, (v40 >> 12) + ((v40 & 0xFFF) != 0));
    if ( v6 )
    {
      if ( (*(_DWORD *)(a2 + 192) & 0x20) == 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 168));
    }
  }
  v16 = v51;
  v17 = 2 * (v52 & 1);
  if ( *(_QWORD *)v51 )
    PfHardFaultLog(*(_QWORD *)v51, v17);
  v18 = (*(_BYTE *)(v3 + 10) & 1) == 0;
  *v16 = v17;
  if ( !v18 )
    MmUnmapLockedPages(*(PVOID *)(v3 + 24), (PMDL)v3);
  *(_DWORD *)(a2 + 188) = -1;
  v19 = *(_DWORD *)(a2 + 192);
  IsRetryIoStatus = 0;
  if ( v15 >= 0 )
  {
    v21 = *(_QWORD *)(a2 + 88);
    if ( v21 != v40 )
    {
      if ( v21 || (v19 & 0x20) == 0 )
      {
        if ( (v19 & 0x400000) != 0 && (v52 & 1) == 0 )
          KeBugCheckEx(0x7Au, 4uLL, *(_QWORD *)(a2 + 88), a2, BugCheckParameter4);
        v24 = (v21
             + ((*(_DWORD *)(v3 + 32) + *(_DWORD *)(v3 + 44)) & 0xFFFLL)
             - (unsigned __int64)(v40 - *(_DWORD *)(v3 + 40))
             + 4095) >> 12;
        v41 = *(_DWORD *)(a2 + 88) & 0xFFF;
        if ( v41 )
        {
          v25 = *(_DWORD *)(a2 + 88) & 0xFFF;
          v26 = (void *)(MiMapPageInHyperSpaceWorker(*(_QWORD *)(v3 + 8 * v24 + 40), &v50, 0x80000000LL) + v25);
          memset_0(v26, 0, (unsigned int)(4096 - v41));
          MiUnmapPageInHyperSpaceWorker((unsigned __int64)v26, v50, 0x80000000);
        }
        if ( v3 + 48 + 8 * v24 <= v45 )
          *(_DWORD *)(a2 + 188) = ((__int64)(8 * v24 - 8) >> 3) + 1;
      }
      else
      {
        v15 = -1073741801;
      }
    }
    v22 = v49;
    if ( v49 == -1073741761 )
    {
LABEL_82:
      if ( BugCheckParameter4 > 0x7FFFFFFEFFFFLL
        && (unsigned int)MiGetSystemRegionType(BugCheckParameter4) != 7
        && !(unsigned int)MiExceptionForMappedVa(BugCheckParameter4) )
      {
        if ( !IsRetryIoStatus )
        {
          v39 = BugCheckParameter1;
          if ( MmIsAddressValidEx(BugCheckParameter1) )
            v10 = MI_READ_PTE_LOCK_FREE(v39);
          MiFlushAllFilesystemPages(1LL);
          if ( v22 < 0 )
            v15 = v22;
          KeBugCheckEx(0x7Au, v39, v15, v10, BugCheckParameter4);
        }
        if ( v22 != -1073741761 )
          v15 = -1073741801;
      }
    }
  }
  else
  {
    if ( v15 != -1073741807 )
    {
      if ( v15 == -2147483626 )
        goto LABEL_28;
      IsRetryIoStatus = MiIsRetryIoStatus(v15, *(unsigned int *)(v3 + 40));
      if ( IsRetryIoStatus && !dword_140E37298 && ((v52 & 1) == 0 || (v52 & 2) != 0) )
        dword_140E37298 = 32;
      if ( (v19 & 0x20) != 0 )
      {
        v15 = -1073741801;
        goto LABEL_28;
      }
      v22 = v49;
      goto LABEL_82;
    }
    if ( (v19 & 0x400000) != 0 )
      KeBugCheckEx(0x7Au, 3uLL, 0xFFFFFFFFC0000011uLL, a2, BugCheckParameter4);
    v28 = (__int64 *)(v3 + 48);
    v29 = v45;
    while ( (unsigned __int64)v28 <= v29 )
    {
      MiZeroPhysicalPage(0LL, *v28, 1, (unsigned __int8)BYTE2(*(_DWORD *)(48 * *v28 - 0x21FFFFFFFFE0LL)) >> 6);
      ++v28;
    }
    v15 = 0;
  }
LABEL_28:
  if ( v44 != -1LL )
  {
    v34 = v46;
    MiCopyPage(v44, 0xAAAAAAAAAAAAAAABuLL * ((v46 + 0x220000000000LL) >> 4), 1);
    v5 = (_QWORD *)(48 * v44 - 0x220000000000LL);
    v5[2] = CLFS_LSN_NULL_EXT;
    MiSetOriginalPtePfnFromFreeList(v5 + 2);
    if ( ((v5[5] >> 60) & 7) == 3 )
    {
      v35 = MiLockPageInline((__int64)v5);
      v5[1] = *(_QWORD *)(v34 + 8);
      MiUnlockPage((__int64)v5, v35);
    }
  }
  result = v52;
  *(_DWORD *)(a2 + 112) = v52;
  *(_QWORD *)(a2 + 104) = v5;
  *(_DWORD *)(a2 + 80) = v15;
  return result;
}

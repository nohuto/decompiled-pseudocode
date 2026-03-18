/*
 * XREFs of MiWaitForInPageComplete @ 0x1402090B8
 * Callers:
 *     MiIssueHardFault @ 0x1402085EC (MiIssueHardFault.c)
 *     MiPfCompleteInPageSupport @ 0x1403795D8 (MiPfCompleteInPageSupport.c)
 * Callees:
 *     PfHardFaultLog @ 0x14020994C (PfHardFaultLog.c)
 *     MiStoreFaultComplete @ 0x140209ACC (MiStoreFaultComplete.c)
 *     MiGetPfnSlabType @ 0x1402170E0 (MiGetPfnSlabType.c)
 *     MiGetSystemRegionType @ 0x140219770 (MiGetSystemRegionType.c)
 *     MiFindContiguousPagesEx @ 0x14021E3E0 (MiFindContiguousPagesEx.c)
 *     MiValidatePagefilePageHash @ 0x140226530 (MiValidatePagefilePageHash.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14022BEA4 (MiSetOriginalPtePfnFromFreeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiRetardMdl @ 0x14023EDE8 (MiRetardMdl.c)
 *     MiZeroPhysicalPage @ 0x14024D560 (MiZeroPhysicalPage.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024DAC0 (MiMapPageInHyperSpaceWorker.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     MmIsAddressValidEx @ 0x1402AA5A0 (MmIsAddressValidEx.c)
 *     MiCopyPage @ 0x1402C6FA0 (MiCopyPage.c)
 *     MmUnmapLockedPages @ 0x1403285B0 (MmUnmapLockedPages.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     MiPageToNode @ 0x140346EA0 (MiPageToNode.c)
 *     MiPrefetchRestOfCluster @ 0x1403791B8 (MiPrefetchRestOfCluster.c)
 *     MiIsRetryIoStatus @ 0x1403BF170 (MiIsRetryIoStatus.c)
 *     MiValidateInPage @ 0x1403F3C40 (MiValidateInPage.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14040FDB8 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiDeleteControlArea @ 0x14043A3F8 (MiDeleteControlArea.c)
 *     MiFlowThroughRemoveNode @ 0x14049A4C0 (MiFlowThroughRemoveNode.c)
 *     MiFlushAllFilesystemPages @ 0x1404D7D5C (MiFlushAllFilesystemPages.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     MiExceptionForMappedVa @ 0x14066C948 (MiExceptionForMappedVa.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiWaitForInPageComplete(__int64 a1, ULONG_PTR a2, unsigned int *a3)
{
  ULONG_PTR v3; // r13
  __int64 v4; // r9
  _QWORD *v5; // rsi
  __int64 v6; // r12
  __int64 v8; // r8
  ULONG_PTR v9; // rax
  ULONG_PTR v10; // rdi
  __int64 v11; // rdx
  ULONG_PTR v12; // r9
  int *v13; // rbx
  int *v14; // r15
  int v15; // r15d
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
  __int64 v27; // rdx
  _BYTE *v28; // rdx
  _QWORD *v29; // rbx
  unsigned __int64 v30; // r13
  _QWORD *v31; // rax
  __int64 v32; // r9
  __int64 v33; // r10
  __int64 v34; // r11
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // r15
  int v38; // ebx
  int v39; // eax
  ULONG_PTR v40; // r14
  unsigned int v41; // [rsp+70h] [rbp-29h]
  int v42; // [rsp+70h] [rbp-29h]
  int IsRetryIoStatus; // [rsp+78h] [rbp-21h]
  ULONG_PTR BugCheckParameter4; // [rsp+80h] [rbp-19h]
  __int64 v45; // [rsp+88h] [rbp-11h] BYREF
  unsigned __int64 v46; // [rsp+90h] [rbp-9h]
  __int64 v47; // [rsp+98h] [rbp-1h]
  ULONG_PTR BugCheckParameter1; // [rsp+A0h] [rbp+7h]
  int v50; // [rsp+100h] [rbp+67h]
  char v51; // [rsp+108h] [rbp+6Fh] BYREF
  unsigned int *v52; // [rsp+110h] [rbp+77h]
  unsigned int v53; // [rsp+118h] [rbp+7Fh]

  v52 = a3;
  v3 = a2 + 272;
  v4 = *(_QWORD *)(a2 + 248);
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 56);
  BugCheckParameter1 = *(_QWORD *)(a2 + 232);
  v8 = a1;
  BugCheckParameter4 = *(_QWORD *)(a2 + 224);
  v9 = *(_QWORD *)(a2 + 256);
  v51 = 0;
  v53 = 0;
  if ( v9 )
    v3 = v9;
  v47 = v4;
  v10 = -1LL;
  v45 = -1LL;
  if ( (*(_QWORD *)(v4 + 40) & 0x10000000000LL) == 0
    && *(__int64 *)(v4 + 8) > 0
    && (unsigned int)MiGetPfnSlabType(v4, a2, a1) == 9 )
  {
    v37 = v34 * ((v32 - v33) >> 4);
    v38 = ~(*(_DWORD *)(v8 + 80) << 9) & 0x20000 | 0x40000000;
    v46 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v32 + 40) >> 43) & 0x3FFLL));
    if ( KeGetCurrentThread() == *(struct _KTHREAD **)&KeSwapProcessOrStackThread )
      v38 |= 8u;
    v39 = MiPageToNode(v34 * ((v32 - v33) >> 4));
    MiFindContiguousPagesEx(
      v46,
      v37 + 1,
      qword_140E2D9A0,
      0,
      0,
      1LL,
      (unsigned __int8)BYTE2(*(_DWORD *)(v47 + 32)) >> 6,
      v39,
      255,
      v38,
      0,
      0LL,
      0LL,
      (__int64)&v45);
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
  v12 = *(_QWORD *)(a2 + 264);
  if ( v12 )
    KeBugCheckEx(0x1Au, 0x61947uLL, a2, v12, 0LL);
  if ( v6 && (HIBYTE(*(_DWORD *)(v6 + 184)) & 0x30) == 0x30 )
  {
    v31 = &unk_140E38520;
    if ( (*(_DWORD *)(v6 + 184) & 0xF) != 1 )
      v31 = (_QWORD *)(v6 + 224);
    if ( !*v31 )
      KiUnstackDetachProcess(a2 + 104, 0LL);
  }
  if ( _bittest16((const signed __int16 *)(v3 + 10), 9u) )
  {
    MiRetardMdl(v3);
    *(_DWORD *)(a2 + 80) = -1073741670;
    *(_QWORD *)(a2 + 88) = 0LL;
  }
  if ( (*(_DWORD *)(a2 + 192) & 0x40) != 0 )
    MiFlowThroughRemoveNode(a2);
  v41 = *(_DWORD *)(a2 + 184);
  v50 = 0;
  v46 = v3
      + 40
      + 8
      * ((*(unsigned int *)(v3 + 40) + 4095LL + (unsigned __int64)((*(_DWORD *)(v3 + 32) + *(_DWORD *)(v3 + 44)) & 0xFFF)) >> 12);
  if ( (*(_DWORD *)(a2 + 192) & 0x400) != 0 )
    MiStoreFaultComplete(a2);
  v13 = (int *)(a2 + 80);
  v14 = (int *)(a2 + 80);
  if ( *(_QWORD *)(a2 + 208) )
  {
    if ( *v13 >= 0 )
    {
      v50 = MiValidateInPage(a2);
      if ( v50 == -1073740748 )
      {
        v14 = (int *)(a2 + 80);
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
    v50 = MiValidatePagefilePageHash(a2);
  }
  v15 = *v14;
  if ( (v53 & 1) == 0 )
  {
    __incgsdword(0x2EA4u);
    __addgsdword(0x2EA0u, (v41 >> 12) + ((v41 & 0xFFF) != 0));
    if ( v6 )
    {
      if ( (*(_DWORD *)(a2 + 192) & 0x20) == 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 168));
    }
  }
  v16 = v52;
  v17 = 2 * (v53 & 1);
  if ( *(_QWORD *)v52 )
    PfHardFaultLog(*(_QWORD *)v52, v17);
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
    if ( v21 != v41 )
    {
      if ( v21 || (v19 & 0x20) == 0 )
      {
        if ( (v19 & 0x400000) != 0 && (v53 & 1) == 0 )
          KeBugCheckEx(0x7Au, 4uLL, *(_QWORD *)(a2 + 88), a2, BugCheckParameter4);
        v24 = (v21
             + ((*(_DWORD *)(v3 + 32) + *(_DWORD *)(v3 + 44)) & 0xFFFLL)
             - (unsigned __int64)(v41 - *(_DWORD *)(v3 + 40))
             + 4095) >> 12;
        v42 = *(_DWORD *)(a2 + 88) & 0xFFF;
        if ( v42 )
        {
          v25 = *(_DWORD *)(a2 + 88) & 0xFFF;
          v26 = (void *)(MiMapPageInHyperSpaceWorker(*(_QWORD *)(v3 + 8 * v24 + 40), &v51, 0x80000000LL) + v25);
          memset_0(v26, 0, (unsigned int)(4096 - v42));
          LOBYTE(v27) = v51;
          MiUnmapPageInHyperSpaceWorker(v26, v27, 0x80000000LL);
        }
        if ( v3 + 48 + 8 * v24 <= v46 )
          *(_DWORD *)(a2 + 188) = ((__int64)(8 * v24 - 8) >> 3) + 1;
      }
      else
      {
        v15 = -1073741801;
      }
    }
    v22 = v50;
    if ( v50 == -1073741761 )
    {
LABEL_82:
      if ( BugCheckParameter4 > 0x7FFFFFFEFFFFLL
        && (unsigned int)MiGetSystemRegionType(BugCheckParameter4) != 7
        && !(unsigned int)MiExceptionForMappedVa(BugCheckParameter4) )
      {
        if ( !IsRetryIoStatus )
        {
          v40 = BugCheckParameter1;
          if ( (unsigned __int8)MmIsAddressValidEx(BugCheckParameter1) )
            v10 = MI_READ_PTE_LOCK_FREE(v40);
          MiFlushAllFilesystemPages(1LL);
          if ( v22 < 0 )
            v15 = v22;
          KeBugCheckEx(0x7Au, v40, v15, v10, BugCheckParameter4);
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
      IsRetryIoStatus = MiIsRetryIoStatus((unsigned int)v15, *(unsigned int *)(v3 + 40));
      if ( IsRetryIoStatus && !dword_140E37058 && ((v53 & 1) == 0 || (v53 & 2) != 0) )
        dword_140E37058 = 32;
      if ( (v19 & 0x20) != 0 )
      {
        v15 = -1073741801;
        goto LABEL_28;
      }
      v22 = v50;
      goto LABEL_82;
    }
    if ( (v19 & 0x400000) != 0 )
      KeBugCheckEx(0x7Au, 3uLL, 0xFFFFFFFFC0000011uLL, a2, BugCheckParameter4);
    v29 = (_QWORD *)(v3 + 48);
    v30 = v46;
    while ( (unsigned __int64)v29 <= v30 )
    {
      MiZeroPhysicalPage(0LL, *v29, 1LL, (unsigned __int8)BYTE2(*(_DWORD *)(48LL * *v29 - 0x21FFFFFFFFE0LL)) >> 6);
      ++v29;
    }
    v15 = 0;
  }
LABEL_28:
  if ( v45 != -1 )
  {
    v35 = v47;
    MiCopyPage(v45, 0xAAAAAAAAAAAAAAABuLL * ((v47 + 0x220000000000LL) >> 4), 1LL);
    v5 = (_QWORD *)(48 * v45 - 0x220000000000LL);
    v5[2] = CLFS_LSN_NULL_EXT;
    MiSetOriginalPtePfnFromFreeList();
    if ( ((v5[5] >> 60) & 7) == 3 )
    {
      LOBYTE(v36) = MiLockPageInline(v5);
      v5[1] = *(_QWORD *)(v35 + 8);
      MiUnlockPage(v5, v36);
    }
  }
  result = v53;
  *(_DWORD *)(a2 + 112) = v53;
  *(_QWORD *)(a2 + 104) = v5;
  *(_DWORD *)(a2 + 80) = v15;
  return result;
}

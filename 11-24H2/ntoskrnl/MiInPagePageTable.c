/*
 * XREFs of MiInPagePageTable @ 0x140391778
 * Callers:
 *     MiResolvePageTablePage @ 0x140239FB0 (MiResolvePageTablePage.c)
 * Callees:
 *     MiVadPureReserve @ 0x140210510 (MiVadPureReserve.c)
 *     MiGetLeafVa @ 0x140240700 (MiGetLeafVa.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiReleaseFaultState @ 0x1402418F0 (MiReleaseFaultState.c)
 *     MmAccessFault @ 0x140243610 (MmAccessFault.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockVadTree @ 0x140291980 (MiUnlockVadTree.c)
 *     MiIncreaseUsedPtes @ 0x140299D80 (MiIncreaseUsedPtes.c)
 *     MiCheckVirtualAddress @ 0x140309D30 (MiCheckVirtualAddress.c)
 *     MiDispatchFault @ 0x140333520 (MiDispatchFault.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiAdvanceFaultList @ 0x140342110 (MiAdvanceFaultList.c)
 *     MiIssueHardFault @ 0x140350280 (MiIssueHardFault.c)
 *     MiPropagateFaultPacketFields @ 0x140391E80 (MiPropagateFaultPacketFields.c)
 *     MiNodeFromFaultPacket @ 0x140391F10 (MiNodeFromFaultPacket.c)
 *     MiGetClosestImplicitNode @ 0x140391F4C (MiGetClosestImplicitNode.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     MiCheckFatalAccessViolation @ 0x140393220 (MiCheckFatalAccessViolation.c)
 *     MiIsVadLarge @ 0x1404100C0 (MiIsVadLarge.c)
 *     MiLeapPrefetch @ 0x1404BA7C0 (MiLeapPrefetch.c)
 *     MiLargePageFault @ 0x1404C1204 (MiLargePageFault.c)
 *     MiInsertLargeVadMapping @ 0x1404CE7F4 (MiInsertLargeVadMapping.c)
 *     MiGetLargeVadMappingIndex @ 0x1404F5D80 (MiGetLargeVadMappingIndex.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiInPagePageTable(unsigned __int64 *a1, int a2)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 v7; // rbx
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  ULONG_PTR v12; // rcx
  unsigned int v13; // r13d
  struct _LIST_ENTRY *v14; // r14
  struct _KTHREAD *v15; // rcx
  __int64 DemandZeroPte; // rax
  __int64 v17; // rcx
  BOOL v18; // ebx
  __int128 v19; // xmm1
  unsigned __int64 v20; // rax
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  unsigned int v27; // eax
  int ClosestImplicitNode; // eax
  __int64 v29; // r10
  char *v30; // rdx
  __int64 v31; // rcx
  unsigned int v32; // eax
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // r9d
  struct _LIST_ENTRY *v37; // rbx
  unsigned __int64 LeafVa; // rax
  unsigned __int64 v39; // r9
  unsigned __int64 v40; // rbx
  int v41; // ecx
  char v42; // cl
  _BYTE *v43; // rax
  unsigned __int64 v44; // rbx
  __int64 v45; // rdx
  unsigned int LargeVadMappingIndex; // ebx
  ULONG_PTR v47; // rdi
  __int64 v48; // rcx
  int v49; // eax
  unsigned int v50; // ecx
  __int64 *v51; // rbx
  __int64 *v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  struct _LIST_ENTRY *v57; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v58; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v59; // [rsp+40h] [rbp-C0h] BYREF
  int v60; // [rsp+48h] [rbp-B8h]
  _KPROCESS *Process; // [rsp+50h] [rbp-B0h]
  ULONG_PTR BugCheckParameter1; // [rsp+58h] [rbp-A8h]
  __int64 *v63; // [rsp+60h] [rbp-A0h]
  struct _LIST_ENTRY **p_Blink; // [rsp+68h] [rbp-98h]
  __int128 v65; // [rsp+78h] [rbp-88h] BYREF
  char v66; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v67[15]; // [rsp+91h] [rbp-6Fh] BYREF
  __int64 v68; // [rsp+A0h] [rbp-60h]
  int v69; // [rsp+B8h] [rbp-48h]
  __int128 v70; // [rsp+110h] [rbp+10h] BYREF
  _OWORD v71[4]; // [rsp+120h] [rbp+20h]
  __int128 v72; // [rsp+160h] [rbp+60h]
  __int128 v73; // [rsp+170h] [rbp+70h]
  __int128 v74; // [rsp+180h] [rbp+80h]
  __int128 v75; // [rsp+190h] [rbp+90h]
  unsigned __int64 v76; // [rsp+1A0h] [rbp+A0h]

  v57 = 0LL;
  v58 = 0;
  v59 = 0LL;
  v3 = a2;
  v60 = a2;
  memset_0(&v70, 0, 0x98uLL);
  memset_0(&v66, 0, 0x78uLL);
  v65 = 0LL;
  v4 = a1[2];
  Process = KeGetCurrentThread()->ApcState.Process;
  p_Blink = &Process[2].ReadyListHead.Blink;
  if ( (v4 & 1) == 0 || (v5 = v4 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)v5 != 1) )
    v5 = 0LL;
  v6 = a1[v3 + 3];
  v63 = (__int64 *)(a1 + 7);
  v7 = MI_READ_PTE_LOCK_FREE(v6);
  v8 = (__int64)(v6 << 25) >> 16;
  BugCheckParameter1 = MiCheckVirtualAddress(*a1, &v58, &v57);
  if ( v7 )
  {
    v14 = v57;
    if ( v57 )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1);
      v14 = v57;
    }
LABEL_20:
    v19 = *((_OWORD *)a1 + 1);
    v70 = *(_OWORD *)a1;
    v20 = a1[18];
    v21 = *((_OWORD *)a1 + 2);
    v71[0] = v19;
    v22 = *((_OWORD *)a1 + 3);
    v71[1] = v21;
    v23 = *((_OWORD *)a1 + 4);
    v71[2] = v22;
    v24 = *((_OWORD *)a1 + 5);
    v71[3] = v23;
    v25 = *((_OWORD *)a1 + 6);
    v72 = v24;
    v26 = *((_OWORD *)a1 + 8);
    v73 = v25;
    v74 = *((_OWORD *)a1 + 7);
    v75 = v26;
    v76 = v20;
    LODWORD(v72) = 0;
    v27 = MiNodeFromFaultPacket(a1);
    ClosestImplicitNode = MiGetClosestImplicitNode(v27);
    v30 = (char *)(a1[2] & 0xFFFFFFFFFFFFFFFEuLL);
    if ( (a1[2] & 1) == 0 )
      goto LABEL_21;
    v42 = *v30;
    if ( *v30 != 1 )
    {
      if ( v42 == 2 )
      {
        v69 = ClosestImplicitNode;
        *(_QWORD *)&v65 = (__int64)(v6 << 25) >> 16;
        *((_QWORD *)&v65 + 1) = 4096LL;
        *(_QWORD *)&v71[0] = v67;
        v66 = 2;
        *(_QWORD *)&v67[7] = &v65;
        v68 = 1LL;
LABEL_21:
        *((_QWORD *)&v70 + 1) = 2LL;
        v31 = 0LL;
        *(_QWORD *)&v70 = (__int64)(v6 << 25) >> 16;
        *((_QWORD *)&v72 + 1) = v14;
        do
        {
          v8 = (v29 & (v8 >> 9)) - 0x98000000000LL;
          *((_QWORD *)v71 + ++v31) = v8;
        }
        while ( v31 < 4 );
        v32 = MiDispatchFault(&v70, &v59);
        v34 = v32;
        if ( v32 == -1073532109 )
        {
          v45 = v59;
          if ( (v72 & 0x100) != 0 )
            *(_DWORD *)(v59 + 192) |= 0x80000u;
          v34 = (unsigned int)MiIssueHardFault((unsigned __int64)&v70, v45);
        }
        MiPropagateFaultPacketFields(a1, &v70, v33, v34);
        if ( v35 < 0 )
          return (unsigned int)v35;
        *((_DWORD *)a1 + 20) &= ~0x10u;
        return 0LL;
      }
      if ( v42 != 3 && v42 != 5 )
        goto LABEL_21;
    }
    *(_QWORD *)&v71[0] = 0LL;
    goto LABEL_21;
  }
  v12 = *a1;
  if ( *a1 >= 0xFFFF800000000000uLL )
  {
    if ( v5 )
      return 3221226548LL;
    if ( v12 >= 0xFFFFF68000000000uLL && v12 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v9 = a1[2];
      if ( v9 )
      {
        v43 = (_BYTE *)(v9 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( (v9 & 1) == 0 || *v43 != 7 && *v43 != 8 )
          KeBugCheckEx(0x50u, *a1, a1[1], v6, 6uLL);
      }
    }
  }
  v13 = v58;
  if ( v58 == 24 )
  {
    v37 = v57;
    MiCheckFatalAccessViolation(v12);
    if ( v37 )
      MiUnlockVadTree(1, 0x11u);
    if ( *a1 <= 0x7FFFFFFEFFFFLL && v37 && v5 )
    {
      LeafVa = MiGetLeafVa(v6 + 8);
      if ( LeafVa >= v39 )
      {
        MiLeapPrefetch(v5, LeafVa);
      }
      else
      {
        ++*(_QWORD *)(v5 + 24);
        *(_QWORD *)(v5 + 32) = 0LL;
      }
      *(_BYTE *)(v5 + 1) = 1;
    }
    return 3221225477LL;
  }
  v14 = v57;
  if ( v57 )
  {
    if ( ((__int64)v57[3].Flink & 0x200000) != 0 )
    {
      if ( v5 )
      {
        v40 = a1[2] & 0xFFFFFFFFFFFFFFFEuLL;
        v41 = *(_DWORD *)(v40 + 80);
        if ( (v41 & 0x40000) == 0 && ((v58 >> 3 != 3 || (v58 & 7) == 0) && v58 >> 3 != 1 || (v41 & 0x4000) == 0) )
        {
          MiUnlockVadTree(1, 0x11u);
          MiAdvanceFaultList((_QWORD *)v40);
          return 3221226548LL;
        }
      }
    }
  }
  v15 = (struct _KTHREAD *)Process[1].ActiveGroupPadding[0];
  if ( v15 )
  {
    if ( v5 && *(_QWORD *)(v5 + 56) != v5 + 56 )
    {
      if ( v57 )
        MiUnlockVadTree(1, 0x11u);
      return 3221226548LL;
    }
    if ( v15 != KeGetCurrentThread() )
    {
      if ( v57 )
        MiUnlockVadTree(1, 0x11u);
      *((_DWORD *)a1 + 20) |= 2u;
      return 3221226548LL;
    }
    v14 = v57;
    v13 = v58;
  }
  if ( !v14 )
    goto LABEL_12;
  if ( v5 && (unsigned int)MiIsVadLarge(v14) )
  {
    v44 = HIDWORD(v14[1].Blink) | ((unsigned __int64)BYTE1(v14[2].Flink) << 32);
    MiUnlockVadTree(1, 0x11u);
    MiLeapPrefetch(v5, ((v44 << 12) | 0xFFF) + 4096);
    *(_BYTE *)(v5 + 1) = 1;
    return 3221226548LL;
  }
  if ( ((__int64)v14[3].Flink & 0x70) != 0x50
    || MiVadPureReserve((__int64)v14)
    || (LargeVadMappingIndex = MiGetLargeVadMappingIndex(v14, *a1), v60 != LargeVadMappingIndex) )
  {
LABEL_12:
    DemandZeroPte = MiMakeDemandZeroPte(4LL, v9, v10, v11);
    v17 = 0xFFFFF6FB7DBED000uLL;
    v18 = 0;
    if ( v6 >= 0xFFFFF6FB7DBED000uLL )
    {
      v17 = 0xFFFFF6FB7DBEDFFFuLL;
      if ( v6 <= 0xFFFFF6FB7DBEDFFFuLL )
        v18 = 1;
    }
    *(_QWORD *)v6 = DemandZeroPte;
    if ( v14 )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1);
      v14 = v57;
    }
    if ( !v18 )
      MiIncreaseUsedPtes(v17, ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL, 2LL);
    goto LABEL_20;
  }
  *(_QWORD *)v6 = MiMakeDemandZeroPte(4LL, v9, v10, v11);
  MiUnlockVadTree(1, 0x11u);
  v47 = BugCheckParameter1;
  if ( !(unsigned int)MiInsertLargeVadMapping(*a1, BugCheckParameter1, LargeVadMappingIndex, v6, v13) )
  {
    v51 = v63;
    v52 = v63;
    *(_QWORD *)v6 = CLFS_LSN_NULL_EXT;
    MiReleaseFaultState(v52, 0x11u, 0LL);
    MmAccessFault(0LL, v47, 0, 0LL);
    v53 = (__int64)p_Blink;
    *((_BYTE *)v51 + 13) &= ~1u;
    *((_BYTE *)v51 + 12) = MiLockWorkingSetShared(v53, v54, v55, v56);
    return 3221226548LL;
  }
  v48 = 0xFFFFF6FB7DBED000uLL;
  if ( v6 < 0xFFFFF6FB7DBED000uLL || (v48 = 0xFFFFF6FB7DBEDFFFuLL, v6 > 0xFFFFF6FB7DBEDFFFuLL) )
    MiIncreaseUsedPtes(v48, ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL, 2LL);
  v49 = MiLargePageFault(a1, v6);
  v50 = -1073740748;
  if ( v49 < 0 )
    return (unsigned int)v49;
  return v50;
}

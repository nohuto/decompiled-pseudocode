/*
 * XREFs of MiInPagePageTable @ 0x1403EBC5C
 * Callers:
 *     MiResolvePageTablePage @ 0x1402AE990 (MiResolvePageTablePage.c)
 * Callees:
 *     MiIssueHardFault @ 0x1402085EC (MiIssueHardFault.c)
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDispatchFault @ 0x14023F750 (MiDispatchFault.c)
 *     MiCheckVirtualAddress @ 0x140243540 (MiCheckVirtualAddress.c)
 *     MiUnlockVadTree @ 0x1402A8690 (MiUnlockVadTree.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiGetLeafVa @ 0x1402B5480 (MiGetLeafVa.c)
 *     MmAccessFault @ 0x1402B5880 (MmAccessFault.c)
 *     MiReleaseFaultState @ 0x1402B9970 (MiReleaseFaultState.c)
 *     MiAdvanceFaultList @ 0x14037A740 (MiAdvanceFaultList.c)
 *     MiIncreaseUsedPtes @ 0x1403837D0 (MiIncreaseUsedPtes.c)
 *     MiVadPureReserve @ 0x140384DA0 (MiVadPureReserve.c)
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 *     MiPropagateFaultPacketFields @ 0x1403EC360 (MiPropagateFaultPacketFields.c)
 *     MiNodeFromFaultPacket @ 0x1403EC3F0 (MiNodeFromFaultPacket.c)
 *     MiGetClosestImplicitNode @ 0x1403EC42C (MiGetClosestImplicitNode.c)
 *     MiCheckFatalAccessViolation @ 0x1403EC470 (MiCheckFatalAccessViolation.c)
 *     MiIsVadLarge @ 0x1403EC520 (MiIsVadLarge.c)
 *     MiLargePageFault @ 0x1403EC554 (MiLargePageFault.c)
 *     MiInsertLargeVadMapping @ 0x1403EC828 (MiInsertLargeVadMapping.c)
 *     MiLeapPrefetch @ 0x1404C0B80 (MiLeapPrefetch.c)
 *     MiGetLargeVadMappingIndex @ 0x1404F5CEC (MiGetLargeVadMappingIndex.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiInPagePageTable(unsigned __int64 *a1, int a2)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 v7; // rbx
  unsigned __int64 v8; // r12
  ULONG_PTR v9; // rcx
  unsigned int v10; // r13d
  struct _LIST_ENTRY *v11; // rbx
  struct _LIST_ENTRY *v13; // r14
  struct _KTHREAD *v14; // rcx
  __int64 DemandZeroPte; // rax
  __int64 v16; // rcx
  BOOL v17; // ebx
  __int128 v18; // xmm1
  unsigned __int64 v19; // rax
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  unsigned int v26; // eax
  int ClosestImplicitNode; // eax
  __int64 v28; // r10
  char *v29; // rdx
  __int64 v30; // rcx
  unsigned int v31; // eax
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // r9d
  unsigned __int64 LeafVa; // rax
  unsigned __int64 v36; // r9
  unsigned __int64 v37; // rbx
  int v38; // ecx
  char v39; // cl
  unsigned __int64 v40; // rdx
  _BYTE *v41; // rax
  unsigned __int64 v42; // rbx
  __int64 v43; // rdx
  unsigned int LargeVadMappingIndex; // ebx
  ULONG_PTR v45; // rdi
  __int64 v46; // rcx
  int v47; // eax
  unsigned int v48; // ecx
  _QWORD *v49; // rbx
  __int64 v50; // rcx
  __int64 v51; // rcx
  unsigned int v52; // [rsp+30h] [rbp-D0h] BYREF
  struct _LIST_ENTRY *v53; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v54; // [rsp+40h] [rbp-C0h] BYREF
  int v55; // [rsp+48h] [rbp-B8h]
  _KPROCESS *Process; // [rsp+50h] [rbp-B0h]
  ULONG_PTR BugCheckParameter1; // [rsp+58h] [rbp-A8h]
  _QWORD *v58; // [rsp+60h] [rbp-A0h]
  struct _LIST_ENTRY **p_Blink; // [rsp+68h] [rbp-98h]
  __int128 v60; // [rsp+78h] [rbp-88h] BYREF
  char v61; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v62[15]; // [rsp+91h] [rbp-6Fh] BYREF
  __int64 v63; // [rsp+A0h] [rbp-60h]
  int v64; // [rsp+B8h] [rbp-48h]
  __int128 v65; // [rsp+110h] [rbp+10h] BYREF
  _OWORD v66[4]; // [rsp+120h] [rbp+20h]
  __int128 v67; // [rsp+160h] [rbp+60h]
  __int128 v68; // [rsp+170h] [rbp+70h]
  __int128 v69; // [rsp+180h] [rbp+80h]
  __int128 v70; // [rsp+190h] [rbp+90h]
  unsigned __int64 v71; // [rsp+1A0h] [rbp+A0h]

  v53 = 0LL;
  v52 = 0;
  v54 = 0LL;
  v3 = a2;
  v55 = a2;
  memset_0(&v65, 0, 0x98uLL);
  memset_0(&v61, 0, 0x78uLL);
  v60 = 0LL;
  v4 = a1[2];
  Process = KeGetCurrentThread()->ApcState.Process;
  p_Blink = &Process[2].ReadyListHead.Blink;
  if ( (v4 & 1) == 0 || (v5 = v4 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)v5 != 1) )
    v5 = 0LL;
  v6 = a1[v3 + 3];
  v58 = a1 + 7;
  v7 = MI_READ_PTE_LOCK_FREE(v6);
  v8 = (__int64)(v6 << 25) >> 16;
  BugCheckParameter1 = MiCheckVirtualAddress(*a1, &v52, &v53);
  if ( v7 )
  {
    v13 = v53;
    if ( v53 )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1);
      v13 = v53;
    }
LABEL_24:
    v18 = *((_OWORD *)a1 + 1);
    v65 = *(_OWORD *)a1;
    v19 = a1[18];
    v20 = *((_OWORD *)a1 + 2);
    v66[0] = v18;
    v21 = *((_OWORD *)a1 + 3);
    v66[1] = v20;
    v22 = *((_OWORD *)a1 + 4);
    v66[2] = v21;
    v23 = *((_OWORD *)a1 + 5);
    v66[3] = v22;
    v24 = *((_OWORD *)a1 + 6);
    v67 = v23;
    v25 = *((_OWORD *)a1 + 8);
    v68 = v24;
    v69 = *((_OWORD *)a1 + 7);
    v70 = v25;
    v71 = v19;
    LODWORD(v67) = 0;
    v26 = MiNodeFromFaultPacket(a1);
    ClosestImplicitNode = MiGetClosestImplicitNode(v26);
    v29 = (char *)(a1[2] & 0xFFFFFFFFFFFFFFFEuLL);
    if ( (a1[2] & 1) == 0 )
      goto LABEL_25;
    v39 = *v29;
    if ( *v29 != 1 )
    {
      if ( v39 == 2 )
      {
        v64 = ClosestImplicitNode;
        *(_QWORD *)&v60 = (__int64)(v6 << 25) >> 16;
        *((_QWORD *)&v60 + 1) = 4096LL;
        *(_QWORD *)&v66[0] = v62;
        v61 = 2;
        *(_QWORD *)&v62[7] = &v60;
        v63 = 1LL;
LABEL_25:
        *((_QWORD *)&v65 + 1) = 2LL;
        v30 = 0LL;
        *(_QWORD *)&v65 = (__int64)(v6 << 25) >> 16;
        *((_QWORD *)&v67 + 1) = v13;
        do
        {
          v8 = (v28 & (v8 >> 9)) - 0x98000000000LL;
          *((_QWORD *)v66 + ++v30) = v8;
        }
        while ( v30 < 4 );
        v31 = MiDispatchFault(&v65, &v54);
        v33 = v31;
        if ( v31 == -1073532109 )
        {
          v43 = v54;
          if ( (v67 & 0x100) != 0 )
            *(_DWORD *)(v54 + 192) |= 0x80000u;
          v33 = (unsigned int)MiIssueHardFault((unsigned __int64 *)&v65, v43);
        }
        MiPropagateFaultPacketFields(a1, &v65, v32, v33);
        if ( v34 < 0 )
          return (unsigned int)v34;
        *((_DWORD *)a1 + 20) &= ~0x10u;
        return 0LL;
      }
      if ( v39 != 3 && v39 != 5 )
        goto LABEL_25;
    }
    *(_QWORD *)&v66[0] = 0LL;
    goto LABEL_25;
  }
  v9 = *a1;
  if ( *a1 >= 0xFFFF800000000000uLL )
  {
    if ( v5 )
      return 3221226548LL;
    if ( v9 >= 0xFFFFF68000000000uLL && v9 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v40 = a1[2];
      if ( v40 )
      {
        v41 = (_BYTE *)(v40 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( (v40 & 1) == 0 || *v41 != 7 && *v41 != 8 )
          KeBugCheckEx(0x50u, *a1, a1[1], v6, 6uLL);
      }
    }
  }
  v10 = v52;
  if ( v52 == 24 )
  {
    v11 = v53;
    MiCheckFatalAccessViolation(v9);
    if ( v11 )
      MiUnlockVadTree(1, 0x11u);
    if ( *a1 <= 0x7FFFFFFEFFFFLL && v11 && v5 )
    {
      LeafVa = MiGetLeafVa(v6 + 8);
      if ( LeafVa >= v36 )
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
  v13 = v53;
  if ( v53 )
  {
    if ( ((__int64)v53[3].Flink & 0x200000) != 0 )
    {
      if ( v5 )
      {
        v37 = a1[2] & 0xFFFFFFFFFFFFFFFEuLL;
        v38 = *(_DWORD *)(v37 + 80);
        if ( (v38 & 0x40000) == 0 && ((v52 >> 3 != 3 || (v52 & 7) == 0) && v52 >> 3 != 1 || (v38 & 0x4000) == 0) )
        {
          MiUnlockVadTree(1, 0x11u);
          MiAdvanceFaultList((_QWORD *)v37);
          return 3221226548LL;
        }
      }
    }
  }
  v14 = (struct _KTHREAD *)Process[1].ActiveGroupPadding[0];
  if ( v14 )
  {
    if ( v5 && *(_QWORD *)(v5 + 56) != v5 + 56 )
    {
      if ( v53 )
        MiUnlockVadTree(1, 0x11u);
      return 3221226548LL;
    }
    if ( v14 != KeGetCurrentThread() )
    {
      if ( v53 )
        MiUnlockVadTree(1, 0x11u);
      *((_DWORD *)a1 + 20) |= 2u;
      return 3221226548LL;
    }
    v13 = v53;
    v10 = v52;
  }
  if ( !v13 )
    goto LABEL_18;
  if ( v5 && (unsigned int)MiIsVadLarge(v13) )
  {
    v42 = HIDWORD(v13[1].Blink) | ((unsigned __int64)BYTE1(v13[2].Flink) << 32);
    MiUnlockVadTree(1, 0x11u);
    MiLeapPrefetch(v5, ((v42 << 12) | 0xFFF) + 4096);
    *(_BYTE *)(v5 + 1) = 1;
    return 3221226548LL;
  }
  if ( ((__int64)v13[3].Flink & 0x70) != 0x50
    || MiVadPureReserve((__int64)v13)
    || (LargeVadMappingIndex = MiGetLargeVadMappingIndex(v13, *a1), v55 != LargeVadMappingIndex) )
  {
LABEL_18:
    DemandZeroPte = MiMakeDemandZeroPte(4);
    v16 = 0xFFFFF6FB7DBED000uLL;
    v17 = 0;
    if ( v6 >= 0xFFFFF6FB7DBED000uLL )
    {
      v16 = 0xFFFFF6FB7DBEDFFFuLL;
      if ( v6 <= 0xFFFFF6FB7DBEDFFFuLL )
        v17 = 1;
    }
    *(_QWORD *)v6 = DemandZeroPte;
    if ( v13 )
      MiUnlockVadTree(1, 0x11u);
    if ( !v17 )
      MiIncreaseUsedPtes(v16, ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1u, 2);
    goto LABEL_24;
  }
  *(_QWORD *)v6 = MiMakeDemandZeroPte(4);
  MiUnlockVadTree(1, 0x11u);
  v45 = BugCheckParameter1;
  if ( !(unsigned int)MiInsertLargeVadMapping(*a1, BugCheckParameter1, LargeVadMappingIndex, v6, v10) )
  {
    v49 = v58;
    v50 = (__int64)v58;
    *(_QWORD *)v6 = CLFS_LSN_NULL_EXT;
    MiReleaseFaultState(v50, 0x11u, 0LL);
    MmAccessFault(0LL, v45, 0, 0LL);
    v51 = (__int64)p_Blink;
    *((_BYTE *)v49 + 13) &= ~1u;
    *((_BYTE *)v49 + 12) = MiLockWorkingSetShared(v51);
    return 3221226548LL;
  }
  v46 = 0xFFFFF6FB7DBED000uLL;
  if ( v6 < 0xFFFFF6FB7DBED000uLL || (v46 = 0xFFFFF6FB7DBEDFFFuLL, v6 > 0xFFFFF6FB7DBEDFFFuLL) )
    MiIncreaseUsedPtes(v46, ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1u, 2);
  v47 = MiLargePageFault(a1, v6);
  v48 = -1073740748;
  if ( v47 < 0 )
    return (unsigned int)v47;
  return v48;
}

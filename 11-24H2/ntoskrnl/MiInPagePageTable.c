/*
 * XREFs of MiInPagePageTable @ 0x1403F2FCC
 * Callers:
 *     MiResolvePageTablePage @ 0x1402D86D0 (MiResolvePageTablePage.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiDispatchFault @ 0x1402142B0 (MiDispatchFault.c)
 *     MmAccessFault @ 0x140216750 (MmAccessFault.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiVadPureReserve @ 0x140236380 (MiVadPureReserve.c)
 *     MiUnlockVadTree @ 0x140261370 (MiUnlockVadTree.c)
 *     MiIncreaseUsedPtes @ 0x14028A180 (MiIncreaseUsedPtes.c)
 *     MiGetLeafVa @ 0x1402DEE20 (MiGetLeafVa.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiReleaseFaultState @ 0x1402E0010 (MiReleaseFaultState.c)
 *     MiMakeDemandZeroPte @ 0x1402E3CC0 (MiMakeDemandZeroPte.c)
 *     MiAdvanceFaultList @ 0x1402E5FE0 (MiAdvanceFaultList.c)
 *     MiCheckVirtualAddress @ 0x1402FF5B0 (MiCheckVirtualAddress.c)
 *     MiIssueHardFault @ 0x140397B2C (MiIssueHardFault.c)
 *     MiPropagateFaultPacketFields @ 0x1403F36D0 (MiPropagateFaultPacketFields.c)
 *     MiNodeFromFaultPacket @ 0x1403F3760 (MiNodeFromFaultPacket.c)
 *     MiGetClosestImplicitNode @ 0x1403F379C (MiGetClosestImplicitNode.c)
 *     MiCheckFatalAccessViolation @ 0x1403F37E0 (MiCheckFatalAccessViolation.c)
 *     MiIsVadLarge @ 0x1403F3880 (MiIsVadLarge.c)
 *     MiLargePageFault @ 0x1403F38B4 (MiLargePageFault.c)
 *     MiInsertLargeVadMapping @ 0x1403F3B88 (MiInsertLargeVadMapping.c)
 *     MiLeapPrefetch @ 0x1404BF28C (MiLeapPrefetch.c)
 *     MiGetLargeVadMappingIndex @ 0x1404F84A0 (MiGetLargeVadMappingIndex.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
  struct _LIST_ENTRY *v11; // r14
  struct _KTHREAD *v12; // rcx
  __int64 DemandZeroPte; // rax
  __int64 v14; // rcx
  BOOL v15; // ebx
  __int128 v16; // xmm1
  unsigned __int64 v17; // rax
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  unsigned int v24; // eax
  int ClosestImplicitNode; // eax
  __int64 v26; // r10
  char *v27; // rdx
  __int64 v28; // rcx
  unsigned int v29; // eax
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // r9d
  struct _LIST_ENTRY *v34; // rbx
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
  struct _LIST_ENTRY *v52; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v53; // [rsp+38h] [rbp-C8h] BYREF
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

  v52 = 0LL;
  v53 = 0;
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
  BugCheckParameter1 = MiCheckVirtualAddress(*a1, &v53, &v52);
  if ( v7 )
  {
    v11 = v52;
    if ( v52 )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1);
      v11 = v52;
    }
LABEL_20:
    v16 = *((_OWORD *)a1 + 1);
    v65 = *(_OWORD *)a1;
    v17 = a1[18];
    v18 = *((_OWORD *)a1 + 2);
    v66[0] = v16;
    v19 = *((_OWORD *)a1 + 3);
    v66[1] = v18;
    v20 = *((_OWORD *)a1 + 4);
    v66[2] = v19;
    v21 = *((_OWORD *)a1 + 5);
    v66[3] = v20;
    v22 = *((_OWORD *)a1 + 6);
    v67 = v21;
    v23 = *((_OWORD *)a1 + 8);
    v68 = v22;
    v69 = *((_OWORD *)a1 + 7);
    v70 = v23;
    v71 = v17;
    LODWORD(v67) = 0;
    v24 = MiNodeFromFaultPacket(a1);
    ClosestImplicitNode = MiGetClosestImplicitNode(v24);
    v27 = (char *)(a1[2] & 0xFFFFFFFFFFFFFFFEuLL);
    if ( (a1[2] & 1) == 0 )
      goto LABEL_21;
    v39 = *v27;
    if ( *v27 != 1 )
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
LABEL_21:
        *((_QWORD *)&v65 + 1) = 2LL;
        v28 = 0LL;
        *(_QWORD *)&v65 = (__int64)(v6 << 25) >> 16;
        *((_QWORD *)&v67 + 1) = v11;
        do
        {
          v8 = (v26 & (v8 >> 9)) - 0x98000000000LL;
          *((_QWORD *)v66 + ++v28) = v8;
        }
        while ( v28 < 4 );
        v29 = MiDispatchFault(&v65, &v54);
        v31 = v29;
        if ( v29 == -1073532109 )
        {
          v43 = v54;
          if ( (v67 & 0x100) != 0 )
            *(_DWORD *)(v54 + 192) |= 0x80000u;
          v31 = (unsigned int)MiIssueHardFault((__int64)&v65, v43);
        }
        MiPropagateFaultPacketFields(a1, &v65, v30, v31);
        if ( v32 < 0 )
          return (unsigned int)v32;
        *((_DWORD *)a1 + 20) &= ~0x10u;
        return 0LL;
      }
      if ( v39 != 3 && v39 != 5 )
        goto LABEL_21;
    }
    *(_QWORD *)&v66[0] = 0LL;
    goto LABEL_21;
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
  v10 = v53;
  if ( v53 == 24 )
  {
    v34 = v52;
    MiCheckFatalAccessViolation(v9);
    if ( v34 )
      MiUnlockVadTree(1, 0x11u);
    if ( *a1 <= 0x7FFFFFFEFFFFLL && v34 && v5 )
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
  v11 = v52;
  if ( v52 )
  {
    if ( ((__int64)v52[3].Flink & 0x200000) != 0 )
    {
      if ( v5 )
      {
        v37 = a1[2] & 0xFFFFFFFFFFFFFFFEuLL;
        v38 = *(_DWORD *)(v37 + 80);
        if ( (v38 & 0x40000) == 0 && ((v53 >> 3 != 3 || (v53 & 7) == 0) && v53 >> 3 != 1 || (v38 & 0x4000) == 0) )
        {
          MiUnlockVadTree(1, 0x11u);
          MiAdvanceFaultList((_QWORD *)v37);
          return 3221226548LL;
        }
      }
    }
  }
  v12 = (struct _KTHREAD *)Process[1].ActiveGroupPadding[0];
  if ( v12 )
  {
    if ( v5 && *(_QWORD *)(v5 + 56) != v5 + 56 )
    {
      if ( v52 )
        MiUnlockVadTree(1, 0x11u);
      return 3221226548LL;
    }
    if ( v12 != KeGetCurrentThread() )
    {
      if ( v52 )
        MiUnlockVadTree(1, 0x11u);
      *((_DWORD *)a1 + 20) |= 2u;
      return 3221226548LL;
    }
    v11 = v52;
    v10 = v53;
  }
  if ( !v11 )
    goto LABEL_12;
  if ( v5 && (unsigned int)MiIsVadLarge(v11) )
  {
    v42 = HIDWORD(v11[1].Blink) | ((unsigned __int64)BYTE1(v11[2].Flink) << 32);
    MiUnlockVadTree(1, 0x11u);
    MiLeapPrefetch(v5, ((v42 << 12) | 0xFFF) + 4096);
    *(_BYTE *)(v5 + 1) = 1;
    return 3221226548LL;
  }
  if ( ((__int64)v11[3].Flink & 0x70) != 0x50
    || MiVadPureReserve((__int64)v11)
    || (LargeVadMappingIndex = MiGetLargeVadMappingIndex(v11, *a1), v55 != LargeVadMappingIndex) )
  {
LABEL_12:
    DemandZeroPte = MiMakeDemandZeroPte(4);
    v14 = 0xFFFFF6FB7DBED000uLL;
    v15 = 0;
    if ( v6 >= 0xFFFFF6FB7DBED000uLL )
    {
      v14 = 0xFFFFF6FB7DBEDFFFuLL;
      if ( v6 <= 0xFFFFF6FB7DBEDFFFuLL )
        v15 = 1;
    }
    *(_QWORD *)v6 = DemandZeroPte;
    if ( v11 )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1);
      v11 = v52;
    }
    if ( !v15 )
      MiIncreaseUsedPtes(v14, ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1u, 2);
    goto LABEL_20;
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

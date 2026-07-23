/*
 * XREFs of FsRtlFastUnlockSingleShared @ 0x140373210
 * Callers:
 *     FsRtlPrivateRemoveLock @ 0x1404D9B18 (FsRtlPrivateRemoveLock.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402EAAD0 (KiReleaseSpinLockInstrumented.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     RtlDelete @ 0x1403738D0 (RtlDelete.c)
 *     FsRtlPrivateResetLowestLockOffset @ 0x140373974 (FsRtlPrivateResetLowestLockOffset.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x140373CDC (FsRtlPrivateCheckWaitingLocks.c)
 *     RtlRealSuccessor @ 0x140373F60 (RtlRealSuccessor.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1403746E0 (ExAllocateFromNPagedLookasideList.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall FsRtlFastUnlockSingleShared(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 *a3,
        _SLIST_ENTRY **a4,
        __int64 a5,
        int a6,
        __int64 a7,
        char a8,
        char a9)
{
  unsigned __int64 v9; // rbx
  KSPIN_LOCK *v10; // rdi
  KIRQL v13; // al
  KSPIN_LOCK v14; // r10
  KIRQL v15; // r14
  char *v16; // r8
  _RTL_SPLAY_LINKS *v17; // rdx
  _RTL_SPLAY_LINKS *v18; // rcx
  _QWORD *v19; // r9
  unsigned __int64 v20; // rax
  _RTL_SPLAY_LINKS *v21; // rsi
  _SLIST_ENTRY *Next; // rdi
  __int64 v23; // rdx
  _RTL_SPLAY_LINKS *v24; // r15
  _SLIST_ENTRY **p_Next; // r14
  _SLIST_ENTRY *v26; // r12
  void (__stdcall *v27)(PPRIVILEGE_SET); // r9
  unsigned __int64 v28; // r10
  __int64 v29; // r11
  KSPIN_LOCK *v30; // r13
  __int64 v31; // rdx
  ULONG_PTR p_LeftChild; // r9
  __int64 v33; // r8
  _SLIST_ENTRY *v34; // rbx
  __int64 v35; // rbp
  _SLIST_ENTRY *RightChild; // rsi
  _RTL_SPLAY_LINKS *v37; // rcx
  _SLIST_ENTRY *v38; // rdi
  unsigned __int64 v39; // rax
  _SLIST_ENTRY *v40; // rax
  KIRQL v41; // di
  ULONG_PTR v42; // r9
  __int64 v43; // r8
  _RTL_SPLAY_LINKS *v45; // rcx
  size_t v46; // r8
  size_t v47; // r8
  _RTL_SPLAY_LINKS *v48; // rax
  _SLIST_ENTRY **v49; // rcx
  int v50; // eax
  _RTL_SPLAY_LINKS *v51; // rdi
  PRTL_SPLAY_LINKS v52; // rax
  _SLIST_ENTRY *v53; // rax
  PKSPIN_LOCK SpinLock; // [rsp+30h] [rbp-58h]
  int SpinLocka; // [rsp+30h] [rbp-58h]
  _RTL_SPLAY_LINKS *v56; // [rsp+38h] [rbp-50h]
  _SLIST_ENTRY **v57; // [rsp+40h] [rbp-48h]
  __int64 retaddr; // [rsp+88h] [rbp+0h]
  KIRQL v60; // [rsp+A0h] [rbp+18h]

  v9 = *a3;
  v10 = a1 + 3;
  SpinLock = a1 + 3;
  v13 = KeAcquireSpinLockRaiseToDpc(a1 + 3);
  v14 = v10[1];
  v15 = v13;
  v60 = v13;
  if ( !v14 )
    goto LABEL_86;
  v16 = (char *)&(*a4)[-1].Next + v9 + 15;
  v17 = 0LL;
  while ( 1 )
  {
    v18 = (_RTL_SPLAY_LINKS *)(v14 - 24);
    v19 = *(_QWORD **)(v14 - 24);
    if ( *(_QWORD *)(v14 - 8) < v9 )
      break;
    v20 = v19[1];
    if ( !v20 )
    {
      if ( !v19[2] )
        break;
LABEL_63:
      if ( v16 != (char *)-1LL || v9 )
      {
        if ( v20 <= v9 )
          goto LABEL_8;
        v17 = (_RTL_SPLAY_LINKS *)(v14 - 24);
      }
      goto LABEL_6;
    }
    if ( v20 <= (unsigned __int64)v16 )
      goto LABEL_63;
LABEL_6:
    v14 = *(_QWORD *)(v14 + 8);
LABEL_7:
    if ( !v14 )
      goto LABEL_8;
  }
  if ( (char *)v19[6] != v16 || v19[1] != v9 )
  {
    v14 = *(_QWORD *)(v14 + 16);
    goto LABEL_7;
  }
LABEL_8:
  if ( v14 )
    v17 = v18;
  v21 = 0LL;
  if ( v17 )
    v21 = v17 + 1;
  if ( !v21 )
  {
LABEL_86:
    KeReleaseSpinLock(v10, v15);
    return 3221225598LL;
  }
  Next = 0LL;
  v23 = a5;
  v24 = v21 - 1;
  p_Next = (_SLIST_ENTRY **)&v21[-1];
  while ( 1 )
  {
    v26 = *p_Next;
    if ( !*p_Next )
    {
LABEL_66:
      KxReleaseSpinLock((volatile signed __int64 *)SpinLock);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v60);
      __writecr8(v60);
      return 3221225598LL;
    }
    if ( v26[2].Next == (_SLIST_ENTRY *)a2
      && *((_QWORD *)&v26[2].Next + 1) == a5
      && *((_DWORD *)&v26[1].Next + 3) == a6
      && *((_QWORD *)&v26->Next + 1) == v9
      && v26[1].Next == *a4 )
    {
      break;
    }
    if ( *((_QWORD *)&v26->Next + 1) > v9 )
      goto LABEL_66;
    p_Next = (_SLIST_ENTRY **)*p_Next;
    if ( Next < v26[3].Next )
      Next = v26[3].Next;
  }
  if ( *(_SLIST_ENTRY **)(a2 + 120) == (_SLIST_ENTRY *)(&v26->Next + 1) )
    *(_QWORD *)(a2 + 120) = 0LL;
  if ( *p_Next == (_SLIST_ENTRY *)v21[1].Parent )
    v21[1].Parent = (_RTL_SPLAY_LINKS *)p_Next;
  *p_Next = v26->Next;
  v27 = CmSiFreeMemory;
  v28 = 0xFFFF800000000000uLL;
  v29 = 0x800000000000LL;
  if ( p_Next == (_SLIST_ENTRY **)v24 )
  {
    if ( v24->Parent )
    {
      v30 = SpinLock;
    }
    else
    {
      v30 = SpinLock;
      SpinLock[1] = (KSPIN_LOCK)RtlDelete(v21);
      ++unk_140E11D5C;
      if ( LOWORD(FsRtlLockTreeNodeLookasideList.Alignment) >= unk_140E11D50 )
      {
        ++unk_140E11D60;
        v45 = v21 - 1;
        if ( (void (__stdcall *)(PVOID))unk_140E11D78 == ExFreePool )
          ExFreePoolWithTag(v45, 0);
        else
          guard_dispatch_icall_no_overrides(v45, v31);
      }
      else
      {
        if ( (void (__stdcall *)(PPRIVILEGE_SET))unk_140E11D78 == CmSiFreeMemory )
        {
          p_LeftChild = (ULONG_PTR)&v21[-1].LeftChild;
          v33 = dword_140E11D6C[0] - 8LL;
          if ( byte_140FCDC68 )
          {
            if ( p_LeftChild < 0xFFFF800000000000uLL )
              KeBugCheckEx(0x1F1u, 2uLL, 1uLL, p_LeftChild, 0LL);
            if ( (p_LeftChild & 7) != 0 )
              KeBugCheckEx(0x1F1u, 2uLL, 2uLL, p_LeftChild, 8uLL);
            if ( p_LeftChild + v33 < p_LeftChild )
              KeBugCheckEx(0x1F1u, 2uLL, 3uLL, p_LeftChild, dword_140E11D6C[0] - 8LL);
            v47 = (v33 - (unsigned __int64)((LOBYTE(dword_140E11D6C[0]) - 9) & 7) + 7) >> 3;
            if ( v47 )
            {
              LOBYTE(v31) = -116;
              memset_0((void *)(KasaniShadow + ((p_LeftChild + 0x800000000000LL) >> 3)), v31, v47);
            }
          }
        }
        RtlpInterlockedPushEntrySList(&FsRtlLockTreeNodeLookasideList, (PSLIST_ENTRY)&v21[-1]);
      }
      v24 = 0LL;
      v27 = CmSiFreeMemory;
      v28 = 0xFFFF800000000000uLL;
      v29 = 0x800000000000LL;
    }
    if ( *a1 == *((_QWORD *)&v26->Next + 1) )
      FsRtlPrivateResetLowestLockOffset(a1);
  }
  else
  {
    v30 = SpinLock;
  }
  if ( !v24 )
    goto LABEL_46;
  v34 = 0LL;
  v35 = 0LL;
  SpinLocka = 0;
  if ( LOBYTE(v24->LeftChild) )
  {
    RightChild = (_SLIST_ENTRY *)v24->RightChild;
    p_Next = (_SLIST_ENTRY **)v24;
    LOBYTE(v24->LeftChild) = 0;
  }
  else
  {
    v34 = Next;
    RightChild = v26[3].Next;
    if ( !v24->Parent || RightChild <= Next )
      goto LABEL_46;
  }
  v37 = v24->RightChild;
  v56 = v37;
  while ( 1 )
  {
    v38 = *p_Next;
    if ( !*p_Next )
      break;
    if ( (_SLIST_ENTRY *)v24->Parent != v38 )
    {
      v39 = *((_QWORD *)&v38->Next + 1);
      if ( v39 <= (unsigned __int64)v34 || !v38[1].Next && v39 == v35 )
        goto LABEL_41;
      v48 = (_RTL_SPLAY_LINKS *)ExAllocateFromNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&FsRtlLockTreeNodeLookasideList);
      v57 = (_SLIST_ENTRY **)v48;
      v49 = (_SLIST_ENTRY **)v48;
      if ( v48 )
      {
        v51 = v48 + 1;
        v48[1].LeftChild = 0LL;
        v48[1].Parent = v48 + 1;
        v48[1].RightChild = 0LL;
        LOBYTE(v48->LeftChild) = 0;
        v52 = v24 + 1;
        if ( v24[1].RightChild )
        {
          v52 = RtlRealSuccessor(v24 + 1);
          v49 = v57;
          v52->LeftChild = v51;
        }
        else
        {
          v24[1].RightChild = v51;
        }
        v51->Parent = v52;
        v38 = (_SLIST_ENTRY *)v49;
        *v49 = *p_Next;
        *p_Next = 0LL;
        v49[6] = (_SLIST_ENTRY *)v24[2].Parent;
        v53 = (_SLIST_ENTRY *)v24->RightChild;
        v24[2].Parent = (_RTL_SPLAY_LINKS *)p_Next;
        v49[2] = v53;
        v24->RightChild = (_RTL_SPLAY_LINKS *)v34;
        if ( SpinLocka )
          SpinLocka = 0;
        else
          LOBYTE(v24->LeftChild) = 0;
        v24 = (_RTL_SPLAY_LINKS *)v49;
        v37 = v56;
      }
      else
      {
        v50 = SpinLocka;
        if ( LOBYTE(v24->LeftChild) )
          v50 = 1;
        LOBYTE(v24->LeftChild) = 1;
        v37 = v56;
        SpinLocka = v50;
LABEL_41:
        if ( v37 > (_RTL_SPLAY_LINKS *)RightChild && *((_QWORD *)&v38->Next + 1) > (unsigned __int64)RightChild )
          goto LABEL_45;
        v40 = v38[3].Next;
        if ( v34 < v40 )
        {
          v34 = v38[3].Next;
          if ( v37 <= (_RTL_SPLAY_LINKS *)RightChild )
            v24->RightChild = (_RTL_SPLAY_LINKS *)v40;
        }
      }
LABEL_43:
      p_Next = &v38->Next;
      continue;
    }
    v34 = v38[3].Next;
    v35 = *((_QWORD *)&v38->Next + 1);
    if ( v37 > (_RTL_SPLAY_LINKS *)RightChild )
      goto LABEL_43;
    v24->RightChild = (_RTL_SPLAY_LINKS *)v34;
    p_Next = &v38->Next;
  }
  v24->RightChild = (_RTL_SPLAY_LINKS *)v34;
LABEL_45:
  v29 = 0x800000000000LL;
  v27 = CmSiFreeMemory;
  v28 = 0xFFFF800000000000uLL;
LABEL_46:
  if ( !a8 && a1[2] )
  {
    KeReleaseSpinLock(v30, v60);
    guard_dispatch_icall_no_overrides(a7, &v26->Next + 1);
    v41 = KeAcquireSpinLockRaiseToDpc(v30);
    v27 = CmSiFreeMemory;
    v28 = 0xFFFF800000000000uLL;
    v29 = 0x800000000000LL;
  }
  else
  {
    v41 = v60;
  }
  ++unk_140E11EDC;
  if ( LOWORD(FsRtlSharedLockLookasideList.Alignment) >= unk_140E11ED0 )
  {
    ++unk_140E11EE0;
    if ( (void (__stdcall *)(PVOID))unk_140E11EF8 == ExFreePool )
      ExFreePoolWithTag(v26, 0);
    else
      guard_dispatch_icall_no_overrides(v26, v23);
  }
  else
  {
    if ( (void (__stdcall *)(PPRIVILEGE_SET))unk_140E11EF8 == v27 )
    {
      v42 = (ULONG_PTR)(&v26->Next + 1);
      v43 = dword_140E11EEC[0] - 8LL;
      if ( byte_140FCDC68 )
      {
        if ( v42 < v28 )
          KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v42, 0LL);
        if ( (v42 & 7) != 0 )
          KeBugCheckEx(0x1F1u, 2uLL, 2uLL, v42, 8uLL);
        if ( v42 + v43 < v42 )
          KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v42, dword_140E11EEC[0] - 8LL);
        v46 = (v43 - (unsigned __int64)((LOBYTE(dword_140E11EEC[0]) - 9) & 7) + 7) >> 3;
        if ( v46 )
        {
          LOBYTE(v23) = -116;
          memset_0((void *)(KasaniShadow + ((v42 + v29) >> 3)), v23, v46);
        }
      }
    }
    RtlpInterlockedPushEntrySList(&FsRtlSharedLockLookasideList, v26);
  }
  if ( a9 && v30[3] )
    FsRtlPrivateCheckWaitingLocks(a1, v30, v41);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64((volatile signed __int64 *)v30, 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)v30, retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v41);
  __writecr8(v41);
  return 0LL;
}

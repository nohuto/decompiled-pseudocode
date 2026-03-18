/*
 * XREFs of FsRtlFastUnlockSingleShared @ 0x14024A1C0
 * Callers:
 *     FsRtlPrivateRemoveLock @ 0x1404D8BCC (FsRtlPrivateRemoveLock.c)
 * Callees:
 *     RtlRealSuccessor @ 0x140248410 (RtlRealSuccessor.c)
 *     ExAllocateFromNPagedLookasideList @ 0x140248B90 (ExAllocateFromNPagedLookasideList.c)
 *     RtlDelete @ 0x14024A8A0 (RtlDelete.c)
 *     FsRtlPrivateResetLowestLockOffset @ 0x14024A944 (FsRtlPrivateResetLowestLockOffset.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x14024ACAC (FsRtlPrivateCheckWaitingLocks.c)
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KiReleaseSpinLockInstrumented @ 0x14024E080 (KiReleaseSpinLockInstrumented.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  KIRQL v15; // r11
  char *v16; // r8
  struct _SLIST_ENTRY **v17; // r14
  struct _SLIST_ENTRY **v18; // rcx
  _QWORD *v19; // rdx
  unsigned __int64 v20; // rax
  _SLIST_ENTRY *v21; // r8
  _SLIST_ENTRY *Next; // rdi
  __int64 v23; // rdx
  struct _SLIST_ENTRY **p_Next; // r15
  struct _SLIST_ENTRY *v25; // r12
  ULONG_PTR v26; // r10
  void (__stdcall *v27)(PPRIVILEGE_SET); // r9
  KSPIN_LOCK *v28; // r13
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  ULONG_PTR v32; // r9
  __int64 v33; // r8
  _QWORD *v34; // rbx
  struct _SLIST_ENTRY *v35; // rbx
  __int64 v36; // rbp
  _SLIST_ENTRY *v37; // rsi
  struct _SLIST_ENTRY *v38; // rcx
  struct _SLIST_ENTRY *v39; // rdi
  unsigned __int64 v40; // rax
  struct _SLIST_ENTRY *v41; // rax
  KIRQL v42; // di
  ULONG_PTR v43; // r9
  __int64 v44; // r8
  size_t v46; // r8
  size_t v47; // r8
  __int64 v48; // r8
  __int64 v49; // r9
  _RTL_SPLAY_LINKS *v50; // rax
  struct _SLIST_ENTRY **v51; // rcx
  int v52; // eax
  _RTL_SPLAY_LINKS *v53; // rdi
  PRTL_SPLAY_LINKS v54; // rax
  struct _SLIST_ENTRY *v55; // rax
  PKSPIN_LOCK SpinLock; // [rsp+30h] [rbp-58h]
  int SpinLocka; // [rsp+30h] [rbp-58h]
  struct _SLIST_ENTRY *v58; // [rsp+38h] [rbp-50h]
  struct _SLIST_ENTRY **v59; // [rsp+40h] [rbp-48h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  KIRQL v62; // [rsp+A0h] [rbp+18h]

  v9 = *a3;
  v10 = a1 + 3;
  SpinLock = a1 + 3;
  v13 = KeAcquireSpinLockRaiseToDpc(a1 + 3);
  v14 = v10[1];
  v15 = v13;
  v62 = v13;
  if ( !v14 )
    goto LABEL_86;
  v16 = (char *)&(*a4)[-1].Next + v9 + 15;
  v17 = 0LL;
  while ( 1 )
  {
    v18 = (struct _SLIST_ENTRY **)(v14 - 24);
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
        v17 = (struct _SLIST_ENTRY **)(v14 - 24);
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
  if ( !v17 || v17 == (struct _SLIST_ENTRY **)-24LL )
  {
LABEL_86:
    KeReleaseSpinLock(v10, v15);
    return 3221225598LL;
  }
  v21 = *a4;
  Next = 0LL;
  v23 = a5;
  p_Next = v17;
  while ( 1 )
  {
    v25 = *p_Next;
    if ( !*p_Next )
    {
LABEL_66:
      KxReleaseSpinLock(SpinLock);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v62);
      __writecr8(v62);
      return 3221225598LL;
    }
    if ( v25[2].Next == (_SLIST_ENTRY *)a2
      && *((_QWORD *)&v25[2].Next + 1) == a5
      && *((_DWORD *)&v25[1].Next + 3) == a6
      && *((_QWORD *)&v25->Next + 1) == v9
      && v25[1].Next == v21 )
    {
      break;
    }
    if ( *((_QWORD *)&v25->Next + 1) > v9 )
      goto LABEL_66;
    p_Next = (struct _SLIST_ENTRY **)*p_Next;
    if ( Next < v25[3].Next )
      Next = v25[3].Next;
  }
  if ( *(struct _SLIST_ENTRY **)(a2 + 120) == (struct _SLIST_ENTRY *)(&v25->Next + 1) )
    *(_QWORD *)(a2 + 120) = 0LL;
  if ( *p_Next == v17[6] )
    v17[6] = (struct _SLIST_ENTRY *)p_Next;
  v26 = 1LL;
  *p_Next = v25->Next;
  v27 = CmSiFreeMemory;
  if ( p_Next == v17 )
  {
    if ( *v17 )
    {
      v28 = SpinLock;
    }
    else
    {
      v28 = SpinLock;
      SpinLock[1] = (KSPIN_LOCK)RtlDelete((PRTL_SPLAY_LINKS)v17 + 1);
      ++FsRtlLockTreeNodeLookasideList.L.TotalFrees;
      if ( LOWORD(FsRtlLockTreeNodeLookasideList.L.ListHead.Alignment) >= FsRtlLockTreeNodeLookasideList.L.Depth )
      {
        ++FsRtlLockTreeNodeLookasideList.L.FreeMisses;
        if ( (void (__stdcall *)(PVOID))FsRtlLockTreeNodeLookasideList.L.FreeEx == ExFreePool )
          ExFreePoolWithTag(v17, 0);
        else
          guard_dispatch_icall_no_overrides(v17, v29, v30, v31);
      }
      else
      {
        if ( (void (__stdcall *)(PPRIVILEGE_SET))FsRtlLockTreeNodeLookasideList.L.FreeEx == CmSiFreeMemory )
        {
          v32 = (ULONG_PTR)(v17 + 1);
          v33 = FsRtlLockTreeNodeLookasideList.L.Size - 8LL;
          if ( byte_140FCDC28 )
          {
            if ( v32 < 0xFFFF800000000000uLL )
              KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v32, 0LL);
            if ( (v32 & 7) != 0 )
              KeBugCheckEx(0x1F1u, 2uLL, 2uLL, v32, 8uLL);
            if ( v32 + v33 < v32 )
              KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v32, FsRtlLockTreeNodeLookasideList.L.Size - 8LL);
            v47 = (v33 - (unsigned __int64)((LOBYTE(FsRtlLockTreeNodeLookasideList.L.Size) - 9) & 7) + 7) >> 3;
            if ( v47 )
            {
              LOBYTE(v29) = -116;
              memset_0((void *)(KasaniShadow + ((unsigned __int64)(v17 + 0x100000000001LL) >> 3)), v29, v47);
            }
          }
        }
        RtlpInterlockedPushEntrySList(&FsRtlLockTreeNodeLookasideList.L.ListHead, (PSLIST_ENTRY)v17);
      }
      v15 = v62;
      v27 = CmSiFreeMemory;
      v17 = 0LL;
      v26 = 1LL;
    }
    v34 = a1;
    if ( *a1 == *((_QWORD *)&v25->Next + 1) )
      FsRtlPrivateResetLowestLockOffset(a1);
    if ( !v17 )
      goto LABEL_46;
  }
  else
  {
    v28 = SpinLock;
  }
  v35 = 0LL;
  v36 = 0LL;
  SpinLocka = 0;
  if ( *((_BYTE *)v17 + 8) )
  {
    v37 = v17[2];
    p_Next = v17;
    *((_BYTE *)v17 + 8) = 0;
  }
  else
  {
    v35 = Next;
    v37 = v25[3].Next;
    if ( !*v17 || v37 <= Next )
      goto LABEL_45;
  }
  v38 = v17[2];
  v58 = v38;
  while ( 1 )
  {
    v39 = *p_Next;
    if ( !*p_Next )
      break;
    if ( *v17 != v39 )
    {
      v40 = *((_QWORD *)&v39->Next + 1);
      if ( v40 <= (unsigned __int64)v35 || !v39[1].Next && v40 == v36 )
        goto LABEL_40;
      v50 = (_RTL_SPLAY_LINKS *)ExAllocateFromNPagedLookasideList(&FsRtlLockTreeNodeLookasideList);
      v59 = (struct _SLIST_ENTRY **)v50;
      v51 = (struct _SLIST_ENTRY **)v50;
      if ( v50 )
      {
        v53 = v50 + 1;
        v50[1].LeftChild = 0LL;
        v50[1].Parent = v50 + 1;
        v50[1].RightChild = 0LL;
        LOBYTE(v50->LeftChild) = 0;
        v54 = (PRTL_SPLAY_LINKS)(v17 + 3);
        if ( v17[5] )
        {
          v54 = RtlRealSuccessor((PRTL_SPLAY_LINKS)v17 + 1);
          v51 = v59;
          v54->LeftChild = v53;
        }
        else
        {
          v17[5] = (struct _SLIST_ENTRY *)v53;
        }
        v53->Parent = v54;
        v39 = (struct _SLIST_ENTRY *)v51;
        *v51 = *p_Next;
        *p_Next = 0LL;
        v51[6] = v17[6];
        v55 = v17[2];
        v17[6] = (struct _SLIST_ENTRY *)p_Next;
        v51[2] = v55;
        v17[2] = v35;
        if ( SpinLocka )
          SpinLocka = 0;
        else
          *((_BYTE *)v17 + 8) = 0;
        v17 = v51;
        v26 = 1LL;
        v38 = v58;
      }
      else
      {
        v26 = 1LL;
        v52 = SpinLocka;
        v38 = v58;
        if ( *((_BYTE *)v17 + 8) )
          v52 = 1;
        SpinLocka = v52;
        *((_BYTE *)v17 + 8) = 1;
LABEL_40:
        if ( v38 > v37 && *((_QWORD *)&v39->Next + 1) > (unsigned __int64)v37 )
          goto LABEL_44;
        v41 = v39[3].Next;
        if ( v35 < v41 )
        {
          v35 = v39[3].Next;
          if ( v38 <= v37 )
            v17[2] = v41;
        }
      }
LABEL_42:
      p_Next = &v39->Next;
      continue;
    }
    v35 = v39[3].Next;
    v36 = *((_QWORD *)&v39->Next + 1);
    if ( v38 > v37 )
      goto LABEL_42;
    v17[2] = v35;
    p_Next = &v39->Next;
  }
  v17[2] = v35;
LABEL_44:
  v15 = v62;
  v27 = CmSiFreeMemory;
LABEL_45:
  v34 = a1;
LABEL_46:
  if ( !a8 && v34[2] )
  {
    KeReleaseSpinLock(v28, v15);
    guard_dispatch_icall_no_overrides(a7, &v25->Next + 1, v48, v49);
    v42 = KeAcquireSpinLockRaiseToDpc(v28);
    v27 = CmSiFreeMemory;
    v26 = 1LL;
  }
  else
  {
    v42 = v62;
  }
  ++FsRtlSharedLockLookasideList.L.TotalFrees;
  if ( LOWORD(FsRtlSharedLockLookasideList.L.ListHead.Alignment) >= FsRtlSharedLockLookasideList.L.Depth )
  {
    ++FsRtlSharedLockLookasideList.L.FreeMisses;
    if ( (void (__stdcall *)(PVOID))FsRtlSharedLockLookasideList.L.FreeEx == ExFreePool )
      ExFreePoolWithTag(v25, 0);
    else
      guard_dispatch_icall_no_overrides(v25, v23, v21, v27);
  }
  else
  {
    if ( (void (__stdcall *)(PPRIVILEGE_SET))FsRtlSharedLockLookasideList.L.FreeEx == v27 )
    {
      v43 = (ULONG_PTR)(&v25->Next + 1);
      v44 = FsRtlSharedLockLookasideList.L.Size - 8LL;
      if ( byte_140FCDC28 )
      {
        if ( v43 < 0xFFFF800000000000uLL )
          KeBugCheckEx(0x1F1u, 2uLL, v26, v43, 0LL);
        if ( (v43 & 7) != 0 )
          KeBugCheckEx(0x1F1u, 2uLL, 2uLL, v43, 8uLL);
        if ( v43 + v44 < v43 )
          KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v43, FsRtlSharedLockLookasideList.L.Size - 8LL);
        v46 = (v44 - (unsigned __int64)((LOBYTE(FsRtlSharedLockLookasideList.L.Size) - 9) & 7) + 7) >> 3;
        if ( v46 )
        {
          LOBYTE(v23) = -116;
          memset_0((void *)(KasaniShadow + ((unsigned __int64)(&v25[0x80000000000LL].Next + 1) >> 3)), v23, v46);
        }
      }
    }
    RtlpInterlockedPushEntrySList(&FsRtlSharedLockLookasideList.L.ListHead, v25);
  }
  if ( a9 && v28[3] )
    FsRtlPrivateCheckWaitingLocks(v34, v28, v42);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64((volatile signed __int64 *)v28, 0LL);
  else
    KiReleaseSpinLockInstrumented(v28, retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v42);
  __writecr8(v42);
  return 0LL;
}

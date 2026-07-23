/*
 * XREFs of FsRtlFastUnlockSingleShared @ 0x1402E4400
 * Callers:
 *     FsRtlPrivateRemoveLock @ 0x1404D201C (FsRtlPrivateRemoveLock.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KiReleaseSpinLockInstrumented @ 0x14027E690 (KiReleaseSpinLockInstrumented.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlRealSuccessor @ 0x1402E2650 (RtlRealSuccessor.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1402E2DD0 (ExAllocateFromNPagedLookasideList.c)
 *     RtlDelete @ 0x1402E4AE0 (RtlDelete.c)
 *     FsRtlPrivateResetLowestLockOffset @ 0x1402E4B84 (FsRtlPrivateResetLowestLockOffset.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x1402E4EEC (FsRtlPrivateCheckWaitingLocks.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  _SLIST_ENTRY **v17; // r14
  _SLIST_ENTRY **v18; // rcx
  _QWORD *v19; // rdx
  unsigned __int64 v20; // rax
  _SLIST_ENTRY *Next; // rdi
  __int64 v22; // rdx
  _SLIST_ENTRY **p_Next; // r15
  _SLIST_ENTRY *v24; // r12
  ULONG_PTR v25; // r10
  void (__stdcall *v26)(PPRIVILEGE_SET); // r9
  KSPIN_LOCK *v27; // r13
  __int64 v28; // rdx
  ULONG_PTR v29; // r9
  __int64 v30; // r8
  _QWORD *v31; // rbx
  _SLIST_ENTRY *v32; // rbx
  __int64 v33; // rbp
  _SLIST_ENTRY *v34; // rsi
  _SLIST_ENTRY *v35; // rcx
  _SLIST_ENTRY *v36; // rdi
  unsigned __int64 v37; // rax
  _SLIST_ENTRY *v38; // rax
  KIRQL v39; // di
  ULONG_PTR v40; // r9
  __int64 v41; // r8
  size_t v43; // r8
  size_t v44; // r8
  _RTL_SPLAY_LINKS *v45; // rax
  _SLIST_ENTRY **v46; // rcx
  int v47; // eax
  _RTL_SPLAY_LINKS *v48; // rdi
  PRTL_SPLAY_LINKS v49; // rax
  _SLIST_ENTRY *v50; // rax
  PKSPIN_LOCK SpinLock; // [rsp+30h] [rbp-58h]
  int SpinLocka; // [rsp+30h] [rbp-58h]
  _SLIST_ENTRY *v53; // [rsp+38h] [rbp-50h]
  _SLIST_ENTRY **v54; // [rsp+40h] [rbp-48h]
  __int64 retaddr; // [rsp+88h] [rbp+0h]
  KIRQL v57; // [rsp+A0h] [rbp+18h]

  v9 = *a3;
  v10 = a1 + 3;
  SpinLock = a1 + 3;
  v13 = KeAcquireSpinLockRaiseToDpc(a1 + 3);
  v14 = v10[1];
  v15 = v13;
  v57 = v13;
  if ( !v14 )
    goto LABEL_86;
  v16 = (char *)&(*a4)[-1].Next + v9 + 15;
  v17 = 0LL;
  while ( 1 )
  {
    v18 = (_SLIST_ENTRY **)(v14 - 24);
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
        v17 = (_SLIST_ENTRY **)(v14 - 24);
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
  if ( !v17 || v17 == (_SLIST_ENTRY **)-24LL )
  {
LABEL_86:
    KeReleaseSpinLock(v10, v15);
    return 3221225598LL;
  }
  Next = 0LL;
  v22 = a5;
  p_Next = v17;
  while ( 1 )
  {
    v24 = *p_Next;
    if ( !*p_Next )
    {
LABEL_66:
      KxReleaseSpinLock((volatile signed __int64 *)SpinLock);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v57);
      __writecr8(v57);
      return 3221225598LL;
    }
    if ( v24[2].Next == (_SLIST_ENTRY *)a2
      && *((_QWORD *)&v24[2].Next + 1) == a5
      && *((_DWORD *)&v24[1].Next + 3) == a6
      && *((_QWORD *)&v24->Next + 1) == v9
      && v24[1].Next == *a4 )
    {
      break;
    }
    if ( *((_QWORD *)&v24->Next + 1) > v9 )
      goto LABEL_66;
    p_Next = (_SLIST_ENTRY **)*p_Next;
    if ( Next < v24[3].Next )
      Next = v24[3].Next;
  }
  if ( *(_SLIST_ENTRY **)(a2 + 120) == (_SLIST_ENTRY *)(&v24->Next + 1) )
    *(_QWORD *)(a2 + 120) = 0LL;
  if ( *p_Next == v17[6] )
    v17[6] = (_SLIST_ENTRY *)p_Next;
  v25 = 1LL;
  *p_Next = v24->Next;
  v26 = CmSiFreeMemory;
  if ( p_Next == v17 )
  {
    if ( *v17 )
    {
      v27 = SpinLock;
    }
    else
    {
      v27 = SpinLock;
      SpinLock[1] = (KSPIN_LOCK)RtlDelete((PRTL_SPLAY_LINKS)v17 + 1);
      ++unk_140E1225C;
      if ( LOWORD(FsRtlLockTreeNodeLookasideList.Alignment) >= unk_140E12250 )
      {
        ++unk_140E12260;
        if ( (void (__stdcall *)(PVOID))unk_140E12278 == ExFreePool )
          ExFreePoolWithTag(v17, 0);
        else
          guard_dispatch_icall_no_overrides(v17, v28);
      }
      else
      {
        if ( (void (__stdcall *)(PPRIVILEGE_SET))unk_140E12278 == CmSiFreeMemory )
        {
          v29 = (ULONG_PTR)(v17 + 1);
          v30 = dword_140E1226C[0] - 8LL;
          if ( byte_140FCECA8 )
          {
            if ( v29 < 0xFFFF800000000000uLL )
              KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v29, 0LL);
            if ( (v29 & 7) != 0 )
              KeBugCheckEx(0x1F1u, 2uLL, 2uLL, v29, 8uLL);
            if ( v29 + v30 < v29 )
              KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v29, dword_140E1226C[0] - 8LL);
            v44 = (v30 - (unsigned __int64)((LOBYTE(dword_140E1226C[0]) - 9) & 7) + 7) >> 3;
            if ( v44 )
            {
              LOBYTE(v28) = -116;
              memset_0((void *)(KasaniShadow + ((unsigned __int64)(v17 + 0x100000000001LL) >> 3)), v28, v44);
            }
          }
        }
        RtlpInterlockedPushEntrySList(&FsRtlLockTreeNodeLookasideList, (PSLIST_ENTRY)v17);
      }
      v15 = v57;
      v26 = CmSiFreeMemory;
      v17 = 0LL;
      v25 = 1LL;
    }
    v31 = a1;
    if ( *a1 == *((_QWORD *)&v24->Next + 1) )
      FsRtlPrivateResetLowestLockOffset(a1);
    if ( !v17 )
      goto LABEL_46;
  }
  else
  {
    v27 = SpinLock;
  }
  v32 = 0LL;
  v33 = 0LL;
  SpinLocka = 0;
  if ( *((_BYTE *)v17 + 8) )
  {
    v34 = v17[2];
    p_Next = v17;
    *((_BYTE *)v17 + 8) = 0;
  }
  else
  {
    v32 = Next;
    v34 = v24[3].Next;
    if ( !*v17 || v34 <= Next )
      goto LABEL_45;
  }
  v35 = v17[2];
  v53 = v35;
  while ( 1 )
  {
    v36 = *p_Next;
    if ( !*p_Next )
      break;
    if ( *v17 != v36 )
    {
      v37 = *((_QWORD *)&v36->Next + 1);
      if ( v37 <= (unsigned __int64)v32 || !v36[1].Next && v37 == v33 )
        goto LABEL_40;
      v45 = (_RTL_SPLAY_LINKS *)ExAllocateFromNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&FsRtlLockTreeNodeLookasideList);
      v54 = (_SLIST_ENTRY **)v45;
      v46 = (_SLIST_ENTRY **)v45;
      if ( v45 )
      {
        v48 = v45 + 1;
        v45[1].LeftChild = 0LL;
        v45[1].Parent = v45 + 1;
        v45[1].RightChild = 0LL;
        LOBYTE(v45->LeftChild) = 0;
        v49 = (PRTL_SPLAY_LINKS)(v17 + 3);
        if ( v17[5] )
        {
          v49 = RtlRealSuccessor((PRTL_SPLAY_LINKS)v17 + 1);
          v46 = v54;
          v49->LeftChild = v48;
        }
        else
        {
          v17[5] = (_SLIST_ENTRY *)v48;
        }
        v48->Parent = v49;
        v36 = (_SLIST_ENTRY *)v46;
        *v46 = *p_Next;
        *p_Next = 0LL;
        v46[6] = v17[6];
        v50 = v17[2];
        v17[6] = (_SLIST_ENTRY *)p_Next;
        v46[2] = v50;
        v17[2] = v32;
        if ( SpinLocka )
          SpinLocka = 0;
        else
          *((_BYTE *)v17 + 8) = 0;
        v17 = v46;
        v25 = 1LL;
        v35 = v53;
      }
      else
      {
        v25 = 1LL;
        v47 = SpinLocka;
        v35 = v53;
        if ( *((_BYTE *)v17 + 8) )
          v47 = 1;
        SpinLocka = v47;
        *((_BYTE *)v17 + 8) = 1;
LABEL_40:
        if ( v35 > v34 && *((_QWORD *)&v36->Next + 1) > (unsigned __int64)v34 )
          goto LABEL_44;
        v38 = v36[3].Next;
        if ( v32 < v38 )
        {
          v32 = v36[3].Next;
          if ( v35 <= v34 )
            v17[2] = v38;
        }
      }
LABEL_42:
      p_Next = &v36->Next;
      continue;
    }
    v32 = v36[3].Next;
    v33 = *((_QWORD *)&v36->Next + 1);
    if ( v35 > v34 )
      goto LABEL_42;
    v17[2] = v32;
    p_Next = &v36->Next;
  }
  v17[2] = v32;
LABEL_44:
  v15 = v57;
  v26 = CmSiFreeMemory;
LABEL_45:
  v31 = a1;
LABEL_46:
  if ( !a8 && v31[2] )
  {
    KeReleaseSpinLock(v27, v15);
    guard_dispatch_icall_no_overrides(a7, &v24->Next + 1);
    v39 = KeAcquireSpinLockRaiseToDpc(v27);
    v26 = CmSiFreeMemory;
    v25 = 1LL;
  }
  else
  {
    v39 = v57;
  }
  ++unk_140E11FDC;
  if ( LOWORD(FsRtlSharedLockLookasideList.Alignment) >= unk_140E11FD0 )
  {
    ++unk_140E11FE0;
    if ( (void (__stdcall *)(PVOID))unk_140E11FF8 == ExFreePool )
      ExFreePoolWithTag(v24, 0);
    else
      guard_dispatch_icall_no_overrides(v24, v22);
  }
  else
  {
    if ( (void (__stdcall *)(PPRIVILEGE_SET))unk_140E11FF8 == v26 )
    {
      v40 = (ULONG_PTR)(&v24->Next + 1);
      v41 = dword_140E11FEC[0] - 8LL;
      if ( byte_140FCECA8 )
      {
        if ( v40 < 0xFFFF800000000000uLL )
          KeBugCheckEx(0x1F1u, 2uLL, v25, v40, 0LL);
        if ( (v40 & 7) != 0 )
          KeBugCheckEx(0x1F1u, 2uLL, 2uLL, v40, 8uLL);
        if ( v40 + v41 < v40 )
          KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v40, dword_140E11FEC[0] - 8LL);
        v43 = (v41 - (unsigned __int64)((LOBYTE(dword_140E11FEC[0]) - 9) & 7) + 7) >> 3;
        if ( v43 )
        {
          LOBYTE(v22) = -116;
          memset_0((void *)(KasaniShadow + ((unsigned __int64)(&v24[0x80000000000LL].Next + 1) >> 3)), v22, v43);
        }
      }
    }
    RtlpInterlockedPushEntrySList(&FsRtlSharedLockLookasideList, v24);
  }
  if ( a9 && v27[3] )
    FsRtlPrivateCheckWaitingLocks(v31, v27, v39);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64((volatile signed __int64 *)v27, 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)v27, retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v39);
  __writecr8(v39);
  return 0LL;
}

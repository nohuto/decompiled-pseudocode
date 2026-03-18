/*
 * XREFs of MiHandleTransitionFault @ 0x140233E80
 * Callers:
 *     MiResolveTransitionFault @ 0x140233060 (MiResolveTransitionFault.c)
 * Callees:
 *     MiGetPfnSlabType @ 0x1402170E0 (MiGetPfnSlabType.c)
 *     MiMigratePfn @ 0x140217D00 (MiMigratePfn.c)
 *     MiUnlinkPageFromListEx @ 0x14021A1F0 (MiUnlinkPageFromListEx.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MiFreeInPageSupportBlock @ 0x14023B4B0 (MiFreeInPageSupportBlock.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     MiUnlockVadTree @ 0x1402A8690 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1402B54D0 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1402B57D0 (MiLocateAddress.c)
 *     MiDiscardTransitionPteEx @ 0x1402C5640 (MiDiscardTransitionPteEx.c)
 *     MiIdealClusterPage @ 0x1404D210C (MiIdealClusterPage.c)
 *     MiMakeTransitionHeatBatch @ 0x1404F4FB0 (MiMakeTransitionHeatBatch.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MiHandleTransitionFault(
        __int64 *a1,
        ULONG_PTR BugCheckParameter2,
        void *Buf2,
        _QWORD *BugCheckParameter4,
        unsigned __int64 a5,
        int a6,
        __int64 *a7)
{
  __int64 *v7; // rbp
  _QWORD *v9; // r15
  __int64 v10; // rax
  void *v11; // rdi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  __int64 v18; // rsi
  _QWORD *v19; // r14
  _QWORD *v20; // r8
  __int64 v21; // r14
  __int64 v22; // r14
  __int64 v23; // rbx
  volatile _KAFFINITY_EX *ActiveProcessors; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rbx
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 *Address; // rax
  __int64 v35; // rdx
  __int64 TransitionHeatBatch; // rax
  __int64 v37; // [rsp+40h] [rbp-48h]
  int v38; // [rsp+98h] [rbp+10h]
  __int64 v39; // [rsp+A8h] [rbp+20h] BYREF

  v38 = BugCheckParameter2;
  v7 = a7;
  v9 = (_QWORD *)a5;
  v10 = BugCheckParameter4[5];
  v11 = BugCheckParameter4;
  LOBYTE(v39) = 0;
  *a7 = 0LL;
  *v9 = 0LL;
  if ( v10 >= 0 && BugCheckParameter2 != (BugCheckParameter4[1] | 0x8000000000000000uLL) )
    KeBugCheckEx(0x1Au, 0x888AuLL, BugCheckParameter2, BugCheckParameter4[1], (ULONG_PTR)BugCheckParameter4);
  v13 = BugCheckParameter4[2];
  v14 = *a1;
  v15 = v13 >> 11;
  v16 = v13 & 0x400;
  v17 = v13 >> 3;
  v18 = 1LL;
  if ( v16 )
    LOBYTE(v17) = v15;
  a7 = 0LL;
  a5 = v14;
  v19 = 0LL;
  if ( (v17 & 1) != 0 )
  {
    if ( v14 <= 0x7FFFFFFEFFFFLL && (__int64)BugCheckParameter4[5] >= 0 )
    {
      MiLockVadTree(1LL);
      Address = (__int64 *)MiLocateAddress(v14);
      LOBYTE(v35) = 17;
      a7 = Address;
      v19 = Address;
      MiUnlockVadTree(1LL, v35);
    }
    TransitionHeatBatch = MiMakeTransitionHeatBatch(v11, v19, 0LL);
    a1[15] = TransitionHeatBatch;
    if ( TransitionHeatBatch )
    {
LABEL_43:
      _InterlockedAnd64((volatile signed __int64 *)v11 + 3, 0x7FFFFFFFFFFFFFFFuLL);
      if ( Buf2 )
      {
        LOBYTE(v16) = 17;
        MiUnlockProtoPoolPage(Buf2, v16);
        return 3221226548LL;
      }
      return 3221226548LL;
    }
  }
  v20 = v19;
  if ( *((__int64 *)v11 + 5) >= 0 )
  {
LABEL_15:
    if ( (MiUnlinkPageFromListEx((ULONG_PTR)v11, 0) & 3) != 0 )
    {
      MiDiscardTransitionPteEx(v11, 0LL);
      goto LABEL_43;
    }
    if ( _bittest64((const signed __int64 *)v11 + 5, 0x35u) )
      goto LABEL_32;
    if ( v14 > 0x7FFFFFFEFFFFLL || (unsigned __int16)*((_DWORD *)v11 + 8) )
      goto LABEL_30;
    ActiveProcessors = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
    if ( *((__int64 *)v11 + 5) >= 0 )
    {
      if ( !ActiveProcessors[4].StaticBitmap[13] )
        goto LABEL_30;
    }
    else if ( (*((_DWORD *)v11 + 4) & 0x400LL) != 0 || !ActiveProcessors[4].StaticBitmap[14] )
    {
      goto LABEL_30;
    }
    if ( (unsigned int)MiGetPfnSlabType((__int64)v11) == 9 )
    {
      if ( v19
        || (MiLockVadTree(1LL),
            v25 = MiLocateAddress(v14),
            LOBYTE(v26) = 17,
            v19 = (_QWORD *)v25,
            MiUnlockVadTree(1LL, v26),
            v19) )
      {
        if ( MiVadPageSizes[(*((_DWORD *)v19 + 12) >> 19) & 3] == 16
          && (*((__int64 *)v11 + 5) >= 0 || (v19[6] & 0x200000) == 0)
          && (*((__int64 *)v11 + 5) < 0 || (v19[6] & 0x200000) != 0) )
        {
          v30 = MiIdealClusterPage((int)a1, (int)v19, v38, a6, v11, Buf2, (__int64)&v39);
          v18 = v30;
          if ( v30 )
          {
            if ( v11 != (void *)v30 )
            {
              v11 = (void *)v30;
              *v9 = v30;
            }
          }
          else
          {
            _InterlockedAnd64((volatile signed __int64 *)v11 + 3, 0x7FFFFFFFFFFFFFFFuLL);
            if ( Buf2 )
            {
              LOBYTE(v31) = 17;
              MiUnlockProtoPoolPage(Buf2, v31);
            }
          }
        }
      }
      if ( (_BYTE)v39 )
      {
LABEL_31:
        if ( !v18 )
        {
LABEL_27:
          v27 = *v7;
          if ( *v7 )
          {
            if ( *(int *)(v27 + 176) > 1 )
              KeSetEvent((PRKEVENT)(v27 + 56), 0, 0);
            MiFreeInPageSupportBlock((PSLIST_ENTRY)v27);
            *v7 = 0LL;
          }
          return 3221226548LL;
        }
LABEL_32:
        *((_QWORD *)v11 + 3) = *((_QWORD *)v11 + 3) & 0xC000000000000000uLL | 1;
        v29 = *((_DWORD *)v11 + 8);
        LOWORD(v29) = v29 + 1;
        LODWORD(a7) = v29;
        *((_DWORD *)v11 + 8) = v29;
        LODWORD(a7) = *((_DWORD *)v11 + 8);
        BYTE2(a7) = BYTE2(a7) & 0xF8 | 6;
        *((_DWORD *)v11 + 8) = (_DWORD)a7;
        return 0LL;
      }
      if ( !v18 )
        goto LABEL_27;
    }
LABEL_30:
    v18 = MiMigratePfn(a1, (__int64)v11, (__int64)Buf2, v7);
    *v9 = v18;
    v11 = (void *)v18;
    goto LABEL_31;
  }
  v21 = *((_QWORD *)v11 + 2);
  if ( (v21 & 0x400) == 0 || ((*((_QWORD *)v11 + 5) >> 60) & 7) == 3 )
  {
LABEL_14:
    v19 = a7;
    goto LABEL_15;
  }
  if ( qword_140E2D940 && (v21 & 0x10) == 0 )
    v21 &= ~qword_140E2D940;
  v22 = v21 >> 16;
  if ( (*(_DWORD *)(*(_QWORD *)v22 + 56LL) & 0x20) == 0 )
    goto LABEL_13;
  v23 = *(_QWORD *)((*(_QWORD *)(*(_QWORD *)v22 + 96LL) & 0xFFFFFFFFFFFFFFF8uLL) + 40);
  if ( !v23 || (v23 & 0xFFFFFFFFFFFFFFF8uLL) <= 0x7FFFFFFFFFFFFFF8LL || (v23 & 3) == 2 )
    goto LABEL_13;
  if ( a5 >= 0xFFFF800000000000uLL )
  {
    if ( (MiFlags & 0x8000) != 0 && (*((_BYTE *)v11 + 16) & 0x40) != 0 )
      goto LABEL_55;
LABEL_13:
    v14 = a5;
    goto LABEL_14;
  }
  if ( a7 )
    goto LABEL_56;
  MiLockVadTree(1LL);
  v32 = MiLocateAddress(a5);
  LOBYTE(v33) = 17;
  v37 = v32;
  MiUnlockVadTree(1LL, v33);
  v20 = (_QWORD *)v37;
LABEL_55:
  if ( !v20 )
    goto LABEL_61;
LABEL_56:
  v16 = *((unsigned int *)v20 + 12);
  if ( (v20[6] & 0x70) == 0x20 )
  {
    v16 &= 0xF80u;
    if ( (_DWORD)v16 == 128 || (v20[8] & 8) != 0 && (v23 & 4) == 0 )
      goto LABEL_13;
    if ( (MiFlags & 0x400) != 0 && (*(_DWORD *)(v22 + 32) & 0x20000) != 0 )
      goto LABEL_13;
  }
LABEL_61:
  _InterlockedAnd64((volatile signed __int64 *)v11 + 3, 0x7FFFFFFFFFFFFFFFuLL);
  if ( Buf2 )
  {
    LOBYTE(v16) = 17;
    MiUnlockProtoPoolPage(Buf2, v16);
  }
  return 3221226536LL;
}

/*
 * XREFs of MiHandleTransitionFault @ 0x140247EF0
 * Callers:
 *     MiResolveTransitionFault @ 0x140247040 (MiResolveTransitionFault.c)
 * Callees:
 *     MiDiscardTransitionPteEx @ 0x1402188CC (MiDiscardTransitionPteEx.c)
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiLockVadTree @ 0x140240750 (MiLockVadTree.c)
 *     MiUnlockVadTree @ 0x140291980 (MiUnlockVadTree.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     MiMigratePfn @ 0x1402FF9B0 (MiMigratePfn.c)
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 *     MiUnlinkPageFromListEx @ 0x14033B030 (MiUnlinkPageFromListEx.c)
 *     MiLocateAddress @ 0x140344F70 (MiLocateAddress.c)
 *     MiMakeTransitionHeatBatch @ 0x1403FD304 (MiMakeTransitionHeatBatch.c)
 *     MiFreeInPageSupportBlock @ 0x140427430 (MiFreeInPageSupportBlock.c)
 *     MiIdealClusterPage @ 0x1404CB218 (MiIdealClusterPage.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiHandleTransitionFault(
        unsigned __int64 *a1,
        ULONG_PTR BugCheckParameter2,
        void *Buf2,
        _QWORD *BugCheckParameter4,
        unsigned __int64 a5,
        int a6,
        __int64 *a7)
{
  __int64 *v7; // rbp
  _QWORD *v9; // r15
  __int64 v10; // r8
  __int64 v11; // rax
  void *v12; // rdi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  __int64 v19; // rsi
  _QWORD *v20; // r14
  __int64 v21; // rdx
  __int64 v22; // r14
  __int64 v23; // r14
  __int64 v24; // rbx
  volatile _KAFFINITY_EX *ActiveProcessors; // rdx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rbx
  int v32; // eax
  __int64 *Address; // rax
  __int64 v35; // rdx
  __int64 TransitionHeatBatch; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rdx
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // [rsp+40h] [rbp-48h]
  int v44; // [rsp+98h] [rbp+10h]
  __int64 v45; // [rsp+A8h] [rbp+20h] BYREF

  v44 = BugCheckParameter2;
  v7 = a7;
  v9 = (_QWORD *)a5;
  v10 = 0LL;
  v11 = BugCheckParameter4[5];
  v12 = BugCheckParameter4;
  LOBYTE(v45) = 0;
  *a7 = 0LL;
  *v9 = 0LL;
  if ( v11 >= 0 && BugCheckParameter2 != (BugCheckParameter4[1] | 0x8000000000000000uLL) )
    KeBugCheckEx(0x1Au, 0x888AuLL, BugCheckParameter2, BugCheckParameter4[1], (ULONG_PTR)BugCheckParameter4);
  v14 = BugCheckParameter4[2];
  v15 = *a1;
  v16 = v14 >> 11;
  v17 = v14 & 0x400;
  v18 = v14 >> 3;
  v19 = 1LL;
  if ( v17 )
    LOBYTE(v18) = v16;
  a7 = 0LL;
  a5 = v15;
  v20 = 0LL;
  if ( (v18 & 1) != 0 )
  {
    if ( v15 <= 0x7FFFFFFEFFFFLL && (__int64)BugCheckParameter4[5] >= 0 )
    {
      MiLockVadTree(1, v17, 0LL, (__int64)BugCheckParameter4);
      Address = (__int64 *)MiLocateAddress(v15);
      LOBYTE(v35) = 17;
      a7 = Address;
      v20 = Address;
      MiUnlockVadTree(1LL, v35);
    }
    TransitionHeatBatch = MiMakeTransitionHeatBatch(v12, v20, 0LL);
    a1[15] = TransitionHeatBatch;
    if ( TransitionHeatBatch )
      goto LABEL_48;
  }
  v21 = (__int64)v20;
  if ( *((__int64 *)v12 + 5) >= 0 )
    goto LABEL_15;
  v22 = *((_QWORD *)v12 + 2);
  if ( (v22 & 0x400) == 0 || ((*((_QWORD *)v12 + 5) >> 60) & 7) == 3 )
  {
LABEL_14:
    v20 = a7;
LABEL_15:
    if ( (MiUnlinkPageFromListEx((ULONG_PTR)v12) & 3) != 0 )
    {
      MiDiscardTransitionPteEx((ULONG_PTR)v12);
LABEL_48:
      _InterlockedAnd64((volatile signed __int64 *)v12 + 3, 0x7FFFFFFFFFFFFFFFuLL);
      if ( Buf2 )
      {
        LOBYTE(v37) = 17;
        MiUnlockProtoPoolPage(Buf2, v37);
      }
      return 3221226548LL;
    }
    if ( _bittest64((const signed __int64 *)v12 + 5, 0x35u) )
      goto LABEL_34;
    if ( v15 > 0x7FFFFFFEFFFFLL || (unsigned __int16)*((_DWORD *)v12 + 8) )
      goto LABEL_32;
    ActiveProcessors = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
    if ( *((__int64 *)v12 + 5) >= 0 )
    {
      if ( !ActiveProcessors[4].StaticBitmap[13] )
        goto LABEL_32;
    }
    else if ( (*((_DWORD *)v12 + 4) & 0x400LL) != 0 || !ActiveProcessors[4].StaticBitmap[14] )
    {
      goto LABEL_32;
    }
    if ( (unsigned int)MiGetPfnSlabType(v12) == 9 )
    {
      if ( v20
        || (MiLockVadTree(1, v26, v27, v28),
            v29 = MiLocateAddress(v15),
            LOBYTE(v30) = 17,
            v20 = (_QWORD *)v29,
            MiUnlockVadTree(1LL, v30),
            v20) )
      {
        if ( MiVadPageSizes[(*((_DWORD *)v20 + 12) >> 19) & 3] == 16
          && (*((__int64 *)v12 + 5) >= 0 || (v20[6] & 0x200000) == 0)
          && (*((__int64 *)v12 + 5) < 0 || (v20[6] & 0x200000) != 0) )
        {
          v41 = MiIdealClusterPage((int)a1, (int)v20, v44, a6, v12, Buf2, (__int64)&v45);
          v19 = v41;
          if ( v41 )
          {
            if ( v12 != (void *)v41 )
            {
              v12 = (void *)v41;
              *v9 = v41;
            }
          }
          else
          {
            _InterlockedAnd64((volatile signed __int64 *)v12 + 3, 0x7FFFFFFFFFFFFFFFuLL);
            if ( Buf2 )
            {
              LOBYTE(v42) = 17;
              MiUnlockProtoPoolPage(Buf2, v42);
            }
          }
        }
      }
      if ( (_BYTE)v45 )
      {
LABEL_33:
        if ( !v19 )
        {
LABEL_27:
          v31 = *v7;
          if ( *v7 )
          {
            if ( *(int *)(v31 + 176) > 1 )
              KeSetEvent((PRKEVENT)(v31 + 56), 0, 0);
            MiFreeInPageSupportBlock((PSLIST_ENTRY)v31);
            *v7 = 0LL;
          }
          return 3221226548LL;
        }
LABEL_34:
        *((_QWORD *)v12 + 3) = *((_QWORD *)v12 + 3) & 0xC000000000000000uLL | 1;
        v32 = *((_DWORD *)v12 + 8);
        LOWORD(v32) = v32 + 1;
        LODWORD(a7) = v32;
        *((_DWORD *)v12 + 8) = v32;
        LODWORD(a7) = *((_DWORD *)v12 + 8);
        BYTE2(a7) = BYTE2(a7) & 0xF8 | 6;
        *((_DWORD *)v12 + 8) = (_DWORD)a7;
        return 0LL;
      }
      if ( !v19 )
        goto LABEL_27;
    }
LABEL_32:
    v19 = MiMigratePfn(a1, v12, Buf2, v7);
    *v9 = v19;
    v12 = (void *)v19;
    goto LABEL_33;
  }
  if ( qword_140E2DCC0 && (v22 & 0x10) == 0 )
    v22 &= ~qword_140E2DCC0;
  v23 = v22 >> 16;
  if ( (*(_DWORD *)(*(_QWORD *)v23 + 56LL) & 0x20) == 0 )
    goto LABEL_13;
  v24 = *(_QWORD *)((*(_QWORD *)(*(_QWORD *)v23 + 96LL) & 0xFFFFFFFFFFFFFFF8uLL) + 40);
  if ( !v24 || (v24 & 0xFFFFFFFFFFFFFFF8uLL) <= 0x7FFFFFFFFFFFFFF8LL || (v24 & 3) == 2 )
    goto LABEL_13;
  if ( a5 >= 0xFFFF800000000000uLL )
  {
    if ( (MiFlags & 0x8000) != 0 && (*((_BYTE *)v12 + 16) & 0x40) != 0 )
      goto LABEL_54;
LABEL_13:
    v15 = a5;
    goto LABEL_14;
  }
  if ( a7 )
    goto LABEL_55;
  MiLockVadTree(1, v21, v10, (__int64)BugCheckParameter4);
  v38 = MiLocateAddress(a5);
  LOBYTE(v39) = 17;
  v43 = v38;
  MiUnlockVadTree(1LL, v39);
  v21 = v43;
LABEL_54:
  if ( !v21 )
    goto LABEL_60;
LABEL_55:
  v40 = *(_DWORD *)(v21 + 48);
  if ( (v40 & 0x70) == 0x20
    && ((v40 & 0xF80) == 0x80
     || (*(_DWORD *)(v21 + 64) & 8) != 0 && (v24 & 4) == 0
     || (MiFlags & 0x400) != 0 && (*(_DWORD *)(v23 + 32) & 0x20000) != 0) )
  {
    goto LABEL_13;
  }
LABEL_60:
  _InterlockedAnd64((volatile signed __int64 *)v12 + 3, 0x7FFFFFFFFFFFFFFFuLL);
  if ( Buf2 )
  {
    LOBYTE(v21) = 17;
    MiUnlockProtoPoolPage(Buf2, v21);
  }
  return 3221226536LL;
}

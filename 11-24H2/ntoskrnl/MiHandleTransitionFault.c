/*
 * XREFs of MiHandleTransitionFault @ 0x14021B1A0
 * Callers:
 *     MiResolveTransitionFault @ 0x14021A2F0 (MiResolveTransitionFault.c)
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x140211CD0 (MiUnlinkPageFromListEx.c)
 *     MiMigratePfn @ 0x14022C0A0 (MiMigratePfn.c)
 *     MiGetPfnSlabType @ 0x14022D610 (MiGetPfnSlabType.c)
 *     MiUnlockVadTree @ 0x140261370 (MiUnlockVadTree.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     MiLockVadTree @ 0x1402DEE70 (MiLockVadTree.c)
 *     MiFreeInPageSupportBlock @ 0x1402EEC40 (MiFreeInPageSupportBlock.c)
 *     MiLocateAddress @ 0x1402FC070 (MiLocateAddress.c)
 *     MiDiscardTransitionPteEx @ 0x1403A1C98 (MiDiscardTransitionPteEx.c)
 *     MiMakeTransitionHeatBatch @ 0x140402D04 (MiMakeTransitionHeatBatch.c)
 *     MiIdealClusterPage @ 0x1404D205C (MiIdealClusterPage.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
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
  __int64 v10; // rax
  void *v11; // rdi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // rsi
  _QWORD *v18; // r14
  _QWORD *v19; // rdx
  __int64 v20; // r14
  __int64 v21; // r14
  __int64 v22; // rbx
  volatile _KAFFINITY_EX *ActiveProcessors; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rbx
  int v27; // eax
  __int64 *Address; // rax
  __int64 v30; // rdx
  __int64 TransitionHeatBatch; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // [rsp+40h] [rbp-48h]
  int v39; // [rsp+98h] [rbp+10h]
  __int64 v40; // [rsp+A8h] [rbp+20h] BYREF

  v39 = BugCheckParameter2;
  v7 = a7;
  v9 = (_QWORD *)a5;
  v10 = BugCheckParameter4[5];
  v11 = BugCheckParameter4;
  LOBYTE(v40) = 0;
  *a7 = 0LL;
  *v9 = 0LL;
  if ( v10 >= 0 && BugCheckParameter2 != (BugCheckParameter4[1] | 0x8000000000000000uLL) )
    KeBugCheckEx(0x1Au, 0x888AuLL, BugCheckParameter2, BugCheckParameter4[1], (ULONG_PTR)BugCheckParameter4);
  v13 = BugCheckParameter4[2];
  v14 = *a1;
  v15 = v13 >> 11;
  v16 = v13 >> 3;
  v17 = 1LL;
  if ( (BugCheckParameter4[2] & 0x400) != 0 )
    LOBYTE(v16) = v15;
  a7 = 0LL;
  a5 = v14;
  v18 = 0LL;
  if ( (v16 & 1) != 0 )
  {
    if ( v14 <= 0x7FFFFFFEFFFFLL && (__int64)BugCheckParameter4[5] >= 0 )
    {
      MiLockVadTree(1LL);
      Address = (__int64 *)MiLocateAddress(v14);
      LOBYTE(v30) = 17;
      a7 = Address;
      v18 = Address;
      MiUnlockVadTree(1LL, v30);
    }
    TransitionHeatBatch = MiMakeTransitionHeatBatch(v11, v18, 0LL);
    a1[15] = TransitionHeatBatch;
    if ( TransitionHeatBatch )
      goto LABEL_48;
  }
  v19 = v18;
  if ( *((__int64 *)v11 + 5) >= 0 )
    goto LABEL_15;
  v20 = *((_QWORD *)v11 + 2);
  if ( (v20 & 0x400) == 0 || ((*((_QWORD *)v11 + 5) >> 60) & 7) == 3 )
  {
LABEL_14:
    v18 = a7;
LABEL_15:
    if ( (MiUnlinkPageFromListEx((ULONG_PTR)v11, 0) & 3) != 0 )
    {
      MiDiscardTransitionPteEx(v11, 0LL);
LABEL_48:
      _InterlockedAnd64((volatile signed __int64 *)v11 + 3, 0x7FFFFFFFFFFFFFFFuLL);
      if ( Buf2 )
      {
        LOBYTE(v32) = 17;
        MiUnlockProtoPoolPage(Buf2, v32);
      }
      return 3221226548LL;
    }
    if ( _bittest64((const signed __int64 *)v11 + 5, 0x35u) )
      goto LABEL_34;
    if ( v14 > 0x7FFFFFFEFFFFLL || (unsigned __int16)*((_DWORD *)v11 + 8) )
      goto LABEL_32;
    ActiveProcessors = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
    if ( *((__int64 *)v11 + 5) >= 0 )
    {
      if ( !ActiveProcessors[4].StaticBitmap[13] )
        goto LABEL_32;
    }
    else if ( (*((_DWORD *)v11 + 4) & 0x400LL) != 0 || !ActiveProcessors[4].StaticBitmap[14] )
    {
      goto LABEL_32;
    }
    if ( (unsigned int)MiGetPfnSlabType(v11) == 9 )
    {
      if ( v18
        || (MiLockVadTree(1LL),
            v24 = MiLocateAddress(v14),
            LOBYTE(v25) = 17,
            v18 = (_QWORD *)v24,
            MiUnlockVadTree(1LL, v25),
            v18) )
      {
        if ( MiVadPageSizes[(*((_DWORD *)v18 + 12) >> 19) & 3] == 16
          && (*((__int64 *)v11 + 5) >= 0 || (v18[6] & 0x200000) == 0)
          && (*((__int64 *)v11 + 5) < 0 || (v18[6] & 0x200000) != 0) )
        {
          v36 = MiIdealClusterPage((int)a1, (int)v18, v39, a6, v11, Buf2, (__int64)&v40);
          v17 = v36;
          if ( v36 )
          {
            if ( v11 != (void *)v36 )
            {
              v11 = (void *)v36;
              *v9 = v36;
            }
          }
          else
          {
            _InterlockedAnd64((volatile signed __int64 *)v11 + 3, 0x7FFFFFFFFFFFFFFFuLL);
            if ( Buf2 )
            {
              LOBYTE(v37) = 17;
              MiUnlockProtoPoolPage(Buf2, v37);
            }
          }
        }
      }
      if ( (_BYTE)v40 )
      {
LABEL_33:
        if ( !v17 )
        {
LABEL_27:
          v26 = *v7;
          if ( *v7 )
          {
            if ( *(int *)(v26 + 176) > 1 )
              KeSetEvent((PRKEVENT)(v26 + 56), 0, 0);
            MiFreeInPageSupportBlock((PSLIST_ENTRY)v26);
            *v7 = 0LL;
          }
          return 3221226548LL;
        }
LABEL_34:
        *((_QWORD *)v11 + 3) = *((_QWORD *)v11 + 3) & 0xC000000000000000uLL | 1;
        v27 = *((_DWORD *)v11 + 8);
        LOWORD(v27) = v27 + 1;
        LODWORD(a7) = v27;
        *((_DWORD *)v11 + 8) = v27;
        LODWORD(a7) = *((_DWORD *)v11 + 8);
        BYTE2(a7) = BYTE2(a7) & 0xF8 | 6;
        *((_DWORD *)v11 + 8) = (_DWORD)a7;
        return 0LL;
      }
      if ( !v17 )
        goto LABEL_27;
    }
LABEL_32:
    v17 = MiMigratePfn(a1, v11, Buf2, v7);
    *v9 = v17;
    v11 = (void *)v17;
    goto LABEL_33;
  }
  if ( qword_140E2DB80 && (v20 & 0x10) == 0 )
    v20 &= ~qword_140E2DB80;
  v21 = v20 >> 16;
  if ( (*(_DWORD *)(*(_QWORD *)v21 + 56LL) & 0x20) == 0 )
    goto LABEL_13;
  v22 = *(_QWORD *)((*(_QWORD *)(*(_QWORD *)v21 + 96LL) & 0xFFFFFFFFFFFFFFF8uLL) + 40);
  if ( !v22 || (v22 & 0xFFFFFFFFFFFFFFF8uLL) <= 0x7FFFFFFFFFFFFFF8LL || (v22 & 3) == 2 )
    goto LABEL_13;
  if ( a5 >= 0xFFFF800000000000uLL )
  {
    if ( (MiFlags & 0x8000) != 0 && (*((_BYTE *)v11 + 16) & 0x40) != 0 )
      goto LABEL_54;
LABEL_13:
    v14 = a5;
    goto LABEL_14;
  }
  if ( a7 )
    goto LABEL_55;
  MiLockVadTree(1LL);
  v33 = MiLocateAddress(a5);
  LOBYTE(v34) = 17;
  v38 = v33;
  MiUnlockVadTree(1LL, v34);
  v19 = (_QWORD *)v38;
LABEL_54:
  if ( !v19 )
    goto LABEL_60;
LABEL_55:
  v35 = *((_DWORD *)v19 + 12);
  if ( (v35 & 0x70) == 0x20
    && ((v35 & 0xF80) == 0x80
     || (v19[8] & 8) != 0 && (v22 & 4) == 0
     || (MiFlags & 0x400) != 0 && (*(_DWORD *)(v21 + 32) & 0x20000) != 0) )
  {
    goto LABEL_13;
  }
LABEL_60:
  _InterlockedAnd64((volatile signed __int64 *)v11 + 3, 0x7FFFFFFFFFFFFFFFuLL);
  if ( Buf2 )
  {
    LOBYTE(v19) = 17;
    MiUnlockProtoPoolPage(Buf2, v19);
  }
  return 3221226536LL;
}

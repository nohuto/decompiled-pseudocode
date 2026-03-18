/*
 * XREFs of MiTradeTransitionPage @ 0x1402F718C
 * Callers:
 *     MiTradePage @ 0x14022B650 (MiTradePage.c)
 * Callees:
 *     MiSafeLockPage @ 0x140216290 (MiSafeLockPage.c)
 *     MiReleaseFreshPage @ 0x140221FC0 (MiReleaseFreshPage.c)
 *     MiReplaceTransitionPage @ 0x140224B14 (MiReplaceTransitionPage.c)
 *     MiGetPfnSlabType @ 0x14022D610 (MiGetPfnSlabType.c)
 *     MiPageToNode @ 0x14026C1E0 (MiPageToNode.c)
 *     MiGetPfnChannel @ 0x14026ED40 (MiGetPfnChannel.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402F6568 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiCanPageMove @ 0x1402F7730 (MiCanPageMove.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiTradeTransitionPage(
        __int64 BugCheckParameter2,
        unsigned __int8 a2,
        unsigned int a3,
        int a4,
        __int64 *a5)
{
  unsigned __int64 v6; // r12
  __int16 v7; // di
  ULONG_PTR v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int v11; // r14d
  unsigned __int64 v12; // r15
  __int64 Page; // r13
  unsigned __int64 v14; // rdi
  char PfnChannel; // bl
  unsigned int v16; // eax
  unsigned int v17; // r8d
  int v18; // ebx
  unsigned __int8 v19; // al
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned __int64 v22; // r12
  int v23; // r9d
  __int64 v24; // r10
  int PfnSlabType; // eax
  int v26; // r8d
  int v27; // r8d
  unsigned __int64 v28; // r10
  unsigned __int8 v29; // r11
  __int64 v30; // rdx
  int v31; // r8d
  unsigned __int8 v33; // cl
  unsigned __int8 v34; // dl
  __int64 v35; // [rsp+20h] [rbp-38h]
  int v36; // [rsp+60h] [rbp+8h]
  __int64 v37; // [rsp+60h] [rbp+8h]

  v6 = a2;
  v7 = a4;
  v8 = BugCheckParameter2;
  if ( (unsigned __int16)*(_DWORD *)(BugCheckParameter2 + 32) )
  {
    ++dword_140EF4E94;
LABEL_48:
    MiUnlockPage(BugCheckParameter2, v6);
    return 0LL;
  }
  if ( !(unsigned int)MiCanPageMove(BugCheckParameter2) )
  {
    ++dword_140EF4E9C;
    BugCheckParameter2 = v8;
    goto LABEL_48;
  }
  v35 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL));
  v36 = (unsigned __int8)BYTE2(*(_DWORD *)(v8 + 32)) >> 6;
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v11 = v10 + 2;
  if ( (unsigned __int8)v6 < (unsigned __int8)(v10 + 2) )
  {
    if ( KiIrqlFlags != (_DWORD)v10 )
    {
      LOBYTE(v9) = v6;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
      v10 = 0LL;
    }
    __writecr8(v6);
  }
  v12 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v8 + 0x220000000000LL) >> 4);
  if ( a5 && (Page = *a5, *a5 != -1) )
  {
    v18 = v10;
  }
  else
  {
    if ( (v7 & 0x4000) != 0 )
    {
      v17 = 12288;
      v16 = a3 ^ (unsigned __int8)(a3 ^ (v12
                                       % (unsigned int)dword_140E2DBCC
                                       % (unsigned int)dword_140E2DBC0[HIWORD(a3) & 3]));
    }
    else
    {
      v14 = v12 % (unsigned int)dword_140E2DBCC;
      PfnChannel = MiGetPfnChannel(v8);
      v16 = (unsigned __int8)v14 | ((PfnChannel & 1 | (2
                                                     * ((v36 << 9) | MiPageToNode(
                                                                       0xAAAAAAAAAAAAAAABuLL
                                                                     * ((__int64)(v8 + 0x220000000000LL) >> 4)) & 0x3F | 0x180))) << 8);
      v17 = (131073 - ((unsigned __int8)v6 < (unsigned __int8)v11)) | 0x8000;
      if ( (a4 & 0x1000000) == 0 )
        v17 = 131073 - ((unsigned __int8)v6 < (unsigned __int8)v11);
      if ( (a4 & 0x2000000) != 0 )
        v17 |= 0x800u;
    }
    Page = MiGetPage(v35, v16, v17);
    v18 = 1;
    if ( Page == -1 )
    {
      ++dword_140EF4EC8;
      return 1LL;
    }
  }
  v37 = 48 * Page - 0x220000000000LL;
  v19 = MiSafeLockPage(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v8 + 0x220000000000LL) >> 4), v9, v10);
  v22 = v19;
  if ( v19 == 17 )
  {
    v11 = 0;
    goto LABEL_41;
  }
  if ( (*(_DWORD *)(v8 + 32) & 0x40000000) != 0 && (a4 & 0x10000000) == 0 )
  {
    ++dword_140EF4EA8;
    v11 = 0;
    goto LABEL_40;
  }
  if ( v37 == v8 )
  {
    Page = -1LL;
  }
  else
  {
    MiGetPfnSlabType(v8);
    v23 = 0;
    if ( _bittest64((const signed __int64 *)(v8 + 40), 0x35u)
      || (unsigned __int16)*(_DWORD *)(v8 + 32)
      || *(char *)(v8 + 35) < 0
      || v35 != *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL))
      || !(unsigned int)MiCanPageMove(v8)
      || (PfnSlabType = MiGetPfnSlabType(v24), v26 != PfnSlabType)
      || (unsigned int)MiGetPfnSlabType(v8) == 8
      && (v33 = *(_BYTE *)(qword_140E3D140 + 2 * (v12 >> 9) + 1) & 0x7F,
          v34 = *(_BYTE *)(qword_140E3D140 + 2 * ((0xAAAAAAAAAAAAAAABuLL * ((48 * Page) >> 4)) >> 9) + 1) & 0x7F,
          v33 != v34)
      && v33 < v29
      && v34 < v29 )
    {
      v11 = v23;
      goto LABEL_39;
    }
    if ( (unsigned __int8)((*(_BYTE *)(v8 + 34) & 7) - v11) > (unsigned __int8)v11 )
    {
LABEL_39:
      ++dword_140EF4E94;
LABEL_40:
      MiUnlockPage(v8, v22);
LABEL_41:
      if ( v18 )
        MiReleaseFreshPage(v37, v20, v21);
      return v11;
    }
    if ( !(unsigned int)MiReplaceTransitionPage(v8, v28, v27, v23) )
    {
      ++dword_140EF4E98;
      if ( !v18 )
        v11 = 0;
      goto LABEL_40;
    }
  }
  ++dword_140EF4E50;
  *(_QWORD *)(v8 + 16) = CLFS_LSN_NULL_EXT;
  MiSetOriginalPtePfnFromFreeList((__int64 *)(v8 + 16));
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (unsigned __int8)v22 < (unsigned __int8)v11 )
  {
    if ( KiIrqlFlags != v31 )
    {
      LOBYTE(v30) = v22;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v30);
    }
    __writecr8(v22);
  }
  if ( a5 )
    *a5 = Page;
  return 3LL;
}

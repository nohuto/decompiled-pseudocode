/*
 * XREFs of MiTradeTransitionPage @ 0x14033F5E8
 * Callers:
 *     MiTradePage @ 0x1402FEF60 (MiTradePage.c)
 * Callees:
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MiGetPfnChannel @ 0x1402242D0 (MiGetPfnChannel.c)
 *     MiReleaseFreshPage @ 0x14024ED10 (MiReleaseFreshPage.c)
 *     MiReplaceTransitionPage @ 0x140251EC4 (MiReplaceTransitionPage.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 *     MiSafeLockPage @ 0x140334630 (MiSafeLockPage.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14033E678 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiCanPageMove @ 0x14033FB90 (MiCanPageMove.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiTradeTransitionPage(__int64 a1, unsigned __int8 a2, unsigned int a3, int a4, __int64 *a5)
{
  unsigned __int64 v6; // r12
  __int16 v7; // di
  ULONG_PTR v8; // rsi
  __int64 v9; // rdx
  int v10; // r8d
  unsigned int v11; // r14d
  unsigned __int64 v12; // r15
  __int64 Page; // r13
  unsigned __int64 v14; // rdi
  char PfnChannel; // bl
  unsigned int v16; // eax
  unsigned int v17; // r8d
  int v18; // ebx
  unsigned __int8 v19; // al
  unsigned __int64 v20; // r12
  int v21; // r9d
  __int64 v22; // r10
  int PfnSlabType; // eax
  int v24; // r8d
  int v25; // r8d
  unsigned __int64 v26; // r10
  unsigned __int8 v27; // r11
  __int64 v28; // rdx
  int v29; // r8d
  unsigned __int8 v31; // cl
  unsigned __int8 v32; // dl
  __int64 v33; // [rsp+20h] [rbp-38h]
  int v34; // [rsp+60h] [rbp+8h]
  __int64 v35; // [rsp+60h] [rbp+8h]

  v6 = a2;
  v7 = a4;
  v8 = a1;
  if ( (unsigned __int16)*(_DWORD *)(a1 + 32) )
  {
    ++dword_140EF50B4;
LABEL_48:
    MiUnlockPage(a1, v6);
    return 0LL;
  }
  if ( !(unsigned int)MiCanPageMove(a1) )
  {
    ++dword_140EF50BC;
    a1 = v8;
    goto LABEL_48;
  }
  v33 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL));
  v34 = (unsigned __int8)BYTE2(*(_DWORD *)(v8 + 32)) >> 6;
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v11 = v10 + 2;
  if ( (unsigned __int8)v6 < (unsigned __int8)(v10 + 2) )
  {
    if ( KiIrqlFlags != v10 )
    {
      LOBYTE(v9) = v6;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
      v10 = 0;
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
                                       % (unsigned int)dword_140E2DD0C
                                       % (unsigned int)dword_140E2DD00[HIWORD(a3) & 3]));
    }
    else
    {
      v14 = v12 % (unsigned int)dword_140E2DD0C;
      PfnChannel = MiGetPfnChannel(v8);
      v16 = (unsigned __int8)v14 | ((PfnChannel & 1 | (2
                                                     * ((v34 << 9) | MiPageToNode(
                                                                       0xAAAAAAAAAAAAAAABuLL
                                                                     * ((__int64)(v8 + 0x220000000000LL) >> 4)) & 0x3F | 0x180))) << 8);
      v17 = (131073 - ((unsigned __int8)v6 < (unsigned __int8)v11)) | 0x8000;
      if ( (a4 & 0x1000000) == 0 )
        v17 = 131073 - ((unsigned __int8)v6 < (unsigned __int8)v11);
      if ( (a4 & 0x2000000) != 0 )
        v17 |= 0x800u;
    }
    Page = MiGetPage(v33, v16, v17);
    v18 = 1;
    if ( Page == -1 )
    {
      ++dword_140EF50E8;
      return 1LL;
    }
  }
  v35 = 48 * Page - 0x220000000000LL;
  v19 = MiSafeLockPage(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v8 + 0x220000000000LL) >> 4));
  v20 = v19;
  if ( v19 == 17 )
  {
    v11 = 0;
    goto LABEL_41;
  }
  if ( (*(_DWORD *)(v8 + 32) & 0x40000000) != 0 && (a4 & 0x10000000) == 0 )
  {
    ++dword_140EF50C8;
    v11 = 0;
    goto LABEL_40;
  }
  if ( v35 == v8 )
  {
    Page = -1LL;
  }
  else
  {
    MiGetPfnSlabType(v8);
    v21 = 0;
    if ( _bittest64((const signed __int64 *)(v8 + 40), 0x35u)
      || (unsigned __int16)*(_DWORD *)(v8 + 32)
      || *(char *)(v8 + 35) < 0
      || v33 != *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL))
      || !(unsigned int)MiCanPageMove(v8)
      || (PfnSlabType = MiGetPfnSlabType(v22), v24 != PfnSlabType)
      || (unsigned int)MiGetPfnSlabType(v8) == 8
      && (v31 = *(_BYTE *)(qword_140E3D280 + 2 * (v12 >> 9) + 1) & 0x7F,
          v32 = *(_BYTE *)(qword_140E3D280 + 2 * ((0xAAAAAAAAAAAAAAABuLL * ((48 * Page) >> 4)) >> 9) + 1) & 0x7F,
          v31 != v32)
      && v31 < v27
      && v32 < v27 )
    {
      v11 = v21;
      goto LABEL_39;
    }
    if ( (unsigned __int8)((*(_BYTE *)(v8 + 34) & 7) - v11) > (unsigned __int8)v11 )
    {
LABEL_39:
      ++dword_140EF50B4;
LABEL_40:
      MiUnlockPage(v8, v20);
LABEL_41:
      if ( v18 )
        MiReleaseFreshPage(v35);
      return v11;
    }
    if ( !(unsigned int)MiReplaceTransitionPage(v8, v26, v25, v21) )
    {
      ++dword_140EF50B8;
      if ( !v18 )
        v11 = 0;
      goto LABEL_40;
    }
  }
  ++dword_140EF5070;
  *(_QWORD *)(v8 + 16) = CLFS_LSN_NULL_EXT;
  MiSetOriginalPtePfnFromFreeList((__int64 *)(v8 + 16));
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (unsigned __int8)v20 < (unsigned __int8)v11 )
  {
    if ( KiIrqlFlags != v29 )
    {
      LOBYTE(v28) = v20;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v28);
    }
    __writecr8(v20);
  }
  if ( a5 )
    *a5 = Page;
  return 3LL;
}

/*
 * XREFs of MiTradeTransitionPage @ 0x14022A82C
 * Callers:
 *     MiTradePage @ 0x140341930 (MiTradePage.c)
 * Callees:
 *     MiGetPfnChannel @ 0x140216430 (MiGetPfnChannel.c)
 *     MiGetPfnSlabType @ 0x1402170E0 (MiGetPfnSlabType.c)
 *     MiCanPageMove @ 0x14022A690 (MiCanPageMove.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14022BEA4 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 *     MiSafeLockPage @ 0x140231E30 (MiSafeLockPage.c)
 *     MiReplaceTransitionPage @ 0x1402C6590 (MiReplaceTransitionPage.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiReleaseFreshPage @ 0x1403432C0 (MiReleaseFreshPage.c)
 *     MiPageToNode @ 0x140346EA0 (MiPageToNode.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiTradeTransitionPage(__int64 BugCheckParameter2, __int64 a2, unsigned int a3, int a4, __int64 *a5)
{
  unsigned __int64 v6; // r12
  __int16 v7; // di
  ULONG_PTR v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // r14d
  unsigned __int64 v12; // r15
  __int64 Page; // r13
  unsigned __int64 v14; // rdi
  char PfnChannel; // bl
  unsigned int v16; // eax
  __int64 v17; // r8
  int v18; // ebx
  unsigned __int8 v19; // al
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r12
  unsigned int v22; // r9d
  __int64 v23; // r10
  int PfnSlabType; // eax
  int v25; // r8d
  unsigned __int8 v26; // r11
  __int64 v27; // rdx
  int v28; // r8d
  unsigned __int8 v30; // cl
  unsigned __int64 v31; // [rsp+20h] [rbp-38h]
  int v32; // [rsp+60h] [rbp+8h]
  __int64 v33; // [rsp+60h] [rbp+8h]

  v6 = (unsigned __int8)a2;
  v7 = a4;
  v8 = BugCheckParameter2;
  if ( (unsigned __int16)*(_DWORD *)(BugCheckParameter2 + 32) )
  {
    ++dword_140EF4BB4;
LABEL_48:
    LOBYTE(a2) = v6;
    MiUnlockPage(BugCheckParameter2, a2);
    return 0LL;
  }
  if ( !MiCanPageMove(BugCheckParameter2) )
  {
    ++dword_140EF4BBC;
    BugCheckParameter2 = v8;
    goto LABEL_48;
  }
  v31 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL));
  v32 = (unsigned __int8)BYTE2(*(_DWORD *)(v8 + 32)) >> 6;
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v11 = v9 + 2;
  if ( (unsigned __int8)v6 < (unsigned __int8)(v9 + 2) )
  {
    if ( KiIrqlFlags != (_DWORD)v9 )
    {
      LOBYTE(a2) = v6;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
      v9 = 0LL;
    }
    __writecr8(v6);
  }
  v12 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v8 + 0x220000000000LL) >> 4);
  if ( a5 && (Page = *a5, *a5 != -1) )
  {
    v18 = v9;
  }
  else
  {
    if ( (v7 & 0x4000) != 0 )
    {
      v17 = 12288LL;
      v16 = a3 ^ (unsigned __int8)(a3 ^ (v12
                                       % (unsigned int)dword_140E2D98C
                                       % (unsigned int)dword_140E2D980[HIWORD(a3) & 3]));
    }
    else
    {
      v14 = v12 % (unsigned int)dword_140E2D98C;
      PfnChannel = MiGetPfnChannel(v8);
      v16 = (unsigned __int8)v14 | ((PfnChannel & 1 | (2
                                                     * ((v32 << 9) | MiPageToNode(
                                                                       0xAAAAAAAAAAAAAAABuLL
                                                                     * ((__int64)(v8 + 0x220000000000LL) >> 4)) & 0x3F | 0x180))) << 8);
      v17 = 131073 - (unsigned int)((unsigned __int8)v6 < (unsigned __int8)v11);
      LODWORD(v17) = v17 | 0x8000;
      if ( (a4 & 0x1000000) == 0 )
        v17 = 131073 - (unsigned int)((unsigned __int8)v6 < (unsigned __int8)v11);
      if ( (a4 & 0x2000000) != 0 )
        LODWORD(v17) = v17 | 0x800;
    }
    Page = MiGetPage(v31, v16, v17);
    v18 = 1;
    if ( Page == -1 )
    {
      ++dword_140EF4BE8;
      return 1LL;
    }
  }
  v33 = 48 * Page - 0x220000000000LL;
  v19 = MiSafeLockPage(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v8 + 0x220000000000LL) >> 4), a2, v9, v10);
  v21 = v19;
  if ( v19 == 17 )
  {
    v11 = 0;
    goto LABEL_41;
  }
  if ( (*(_DWORD *)(v8 + 32) & 0x40000000) != 0 && (a4 & 0x10000000) == 0 )
  {
    ++dword_140EF4BC8;
    v11 = 0;
    goto LABEL_40;
  }
  if ( v33 == v8 )
  {
    Page = -1LL;
  }
  else
  {
    MiGetPfnSlabType(v8);
    v22 = 0;
    if ( _bittest64((const signed __int64 *)(v8 + 40), 0x35u)
      || (unsigned __int16)*(_DWORD *)(v8 + 32)
      || *(char *)(v8 + 35) < 0
      || (v20 = v31, v31 != *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL)))
      || !MiCanPageMove(v8)
      || (PfnSlabType = MiGetPfnSlabType(v23), v25 != PfnSlabType)
      || (unsigned int)MiGetPfnSlabType(v8) == 8
      && (v20 = 0xAAAAAAAAAAAAAAABuLL,
          v30 = *(_BYTE *)(qword_140E3CF00 + 2 * (v12 >> 9) + 1) & 0x7F,
          LOBYTE(v20) = *(_BYTE *)(qword_140E3CF00 + 2 * ((0xAAAAAAAAAAAAAAABuLL * ((48 * Page) >> 4)) >> 9) + 1) & 0x7F,
          v30 != (_BYTE)v20)
      && v30 < v26
      && (unsigned __int8)v20 < v26 )
    {
      v11 = v22;
      goto LABEL_39;
    }
    if ( (unsigned __int8)((*(_BYTE *)(v8 + 34) & 7) - v11) > (unsigned __int8)v11 )
    {
LABEL_39:
      ++dword_140EF4BB4;
LABEL_40:
      LOBYTE(v20) = v21;
      MiUnlockPage(v8, v20);
LABEL_41:
      if ( v18 )
        MiReleaseFreshPage(v33);
      return v11;
    }
    if ( !(unsigned int)MiReplaceTransitionPage(v8) )
    {
      ++dword_140EF4BB8;
      if ( !v18 )
        v11 = 0;
      goto LABEL_40;
    }
  }
  ++dword_140EF4B70;
  *(_QWORD *)(v8 + 16) = CLFS_LSN_NULL_EXT;
  MiSetOriginalPtePfnFromFreeList(v8 + 16, v20, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (unsigned __int8)v21 < (unsigned __int8)v11 )
  {
    if ( KiIrqlFlags != v28 )
    {
      LOBYTE(v27) = v21;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v27);
    }
    __writecr8(v21);
  }
  if ( a5 )
    *a5 = Page;
  return 3LL;
}

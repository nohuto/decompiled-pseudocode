/*
 * XREFs of MiReplaceLockedPage @ 0x1402158AC
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x140362D10 (MiTrimSharedPageFromViews.c)
 * Callees:
 *     MiTradeActivePage @ 0x1402172BC (MiTradeActivePage.c)
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MiGetPfnChannel @ 0x1402242D0 (MiGetPfnChannel.c)
 *     MiReleaseFreshPage @ 0x14024ED10 (MiReleaseFreshPage.c)
 *     MiReleaseFreshPageAtDpc @ 0x14024ED80 (MiReleaseFreshPageAtDpc.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 *     MiLockProtoPoolPage @ 0x140302230 (MiLockProtoPoolPage.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14033E678 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiCanPageMove @ 0x14033FB90 (MiCanPageMove.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiReplaceLockedPage(__int64 a1, int a2, unsigned int a3, int a4)
{
  unsigned __int64 v8; // rbp
  char PfnChannel; // di
  char v10; // al
  __int64 v11; // r9
  __int64 Page; // rax
  __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rdx
  int v18; // [rsp+30h] [rbp-38h]
  unsigned __int8 v19; // [rsp+70h] [rbp+8h] BYREF

  if ( (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
    return 0LL;
  if ( (unsigned __int16)*(_DWORD *)(a1 + 32) != 1 )
    return 0LL;
  if ( !(unsigned int)MiCanPageMove(a1) )
    return 0LL;
  v19 = 17;
  v18 = *(_DWORD *)(a1 + 32);
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4) % (unsigned int)dword_140E2DD0C;
  PfnChannel = MiGetPfnChannel(a1);
  v10 = MiPageToNode(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4));
  Page = MiGetPage(
           *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)),
           (unsigned __int8)v8 | ((PfnChannel & 1 | (2 * ((8 * (BYTE2(v18) & 0xC0 | 0x30)) | v10 & 0x3Fu))) << 8),
           a3,
           v11);
  if ( Page == -1 )
    return 0LL;
  v13 = 48 * Page - 0x220000000000LL;
  v14 = MiLockProtoPoolPage(*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL, &v19);
  if ( !v14 )
  {
LABEL_12:
    MiReleaseFreshPage(v13);
    return 0LL;
  }
  if ( (unsigned int)MiGetPfnSlabType(a1) != 9 || !(unsigned int)MiTradeActivePage(a1, v13, a2, a4, 0) )
  {
    LOBYTE(v15) = v19;
    MiUnlockProtoPoolPage(v14, v15);
    goto LABEL_12;
  }
  LOBYTE(v15) = 17;
  MiUnlockProtoPoolPage(v14, v15);
  *(_QWORD *)(a1 + 16) = CLFS_LSN_NULL_EXT;
  MiSetOriginalPtePfnFromFreeList();
  MiReleaseFreshPageAtDpc(a1);
  if ( KiIrqlFlags )
  {
    LOBYTE(v16) = v19;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v16);
  }
  __writecr8(v19);
  return 1LL;
}

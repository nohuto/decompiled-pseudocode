/*
 * XREFs of MiReplaceLockedPage @ 0x1403FE3AC
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x140321850 (MiTrimSharedPageFromViews.c)
 * Callees:
 *     MiGetPfnChannel @ 0x140216430 (MiGetPfnChannel.c)
 *     MiGetPfnSlabType @ 0x1402170E0 (MiGetPfnSlabType.c)
 *     MiCanPageMove @ 0x14022A690 (MiCanPageMove.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14022BEA4 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x140240A70 (MiLockProtoPoolPage.c)
 *     MiReleaseFreshPage @ 0x1403432C0 (MiReleaseFreshPage.c)
 *     MiReleaseFreshPageAtDpc @ 0x140343330 (MiReleaseFreshPageAtDpc.c)
 *     MiPageToNode @ 0x140346EA0 (MiPageToNode.c)
 *     MiTradeActivePage @ 0x1403FE5A0 (MiTradeActivePage.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiReplaceLockedPage(__int64 a1, int a2, unsigned int a3, int a4)
{
  unsigned __int64 v8; // rbp
  char PfnChannel; // di
  char v10; // al
  __int64 Page; // rax
  __int64 v12; // rbx
  ULONG_PTR v13; // rdi
  __int64 v14; // r8
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  int v18; // [rsp+30h] [rbp-38h]
  unsigned __int8 v19; // [rsp+70h] [rbp+8h] BYREF

  if ( (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
    return 0LL;
  if ( (unsigned __int16)*(_DWORD *)(a1 + 32) != 1 )
    return 0LL;
  if ( !MiCanPageMove(a1) )
    return 0LL;
  v19 = 17;
  v18 = *(_DWORD *)(a1 + 32);
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4) % (unsigned int)dword_140E2D98C;
  PfnChannel = MiGetPfnChannel(a1);
  v10 = MiPageToNode(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4));
  Page = MiGetPage(
           *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)),
           (unsigned __int8)v8 | ((PfnChannel & 1 | (2 * ((8 * (BYTE2(v18) & 0xC0 | 0x30)) | v10 & 0x3Fu))) << 8),
           a3);
  if ( Page == -1 )
    return 0LL;
  v12 = 48 * Page - 0x220000000000LL;
  v13 = MiLockProtoPoolPage(*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL, &v19);
  if ( !v13 )
  {
LABEL_12:
    MiReleaseFreshPage(v12);
    return 0LL;
  }
  if ( (unsigned int)MiGetPfnSlabType(a1) != 9 || !(unsigned int)MiTradeActivePage(a1, v12, a2, a4, 0) )
  {
    MiUnlockProtoPoolPage(v13, v19, v14, v15);
    goto LABEL_12;
  }
  MiUnlockProtoPoolPage(v13, 0x11u, v14, v15);
  *(_QWORD *)(a1 + 16) = CLFS_LSN_NULL_EXT;
  MiSetOriginalPtePfnFromFreeList((__int64 *)(a1 + 16));
  MiReleaseFreshPageAtDpc(a1);
  if ( KiIrqlFlags )
  {
    LOBYTE(v16) = v19;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v16);
  }
  __writecr8(v19);
  return 1LL;
}

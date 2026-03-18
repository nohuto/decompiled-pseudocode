/*
 * XREFs of MiReplaceLockedPage @ 0x14039F10C
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x1402BB5D0 (MiTrimSharedPageFromViews.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x140221FC0 (MiReleaseFreshPage.c)
 *     MiReleaseFreshPageAtDpc @ 0x140222030 (MiReleaseFreshPageAtDpc.c)
 *     MiGetPfnSlabType @ 0x14022D610 (MiGetPfnSlabType.c)
 *     MiLockProtoPoolPage @ 0x14022E920 (MiLockProtoPoolPage.c)
 *     MiPageToNode @ 0x14026C1E0 (MiPageToNode.c)
 *     MiGetPfnChannel @ 0x14026ED40 (MiGetPfnChannel.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402F6568 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiCanPageMove @ 0x1402F7730 (MiCanPageMove.c)
 *     MiTradeActivePage @ 0x1403A0758 (MiTradeActivePage.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiReplaceLockedPage(__int64 a1, int a2, unsigned int a3, int a4)
{
  unsigned __int64 v8; // rbp
  char PfnChannel; // di
  char v10; // al
  __int64 Page; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  ULONG_PTR v14; // rdi
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  int v20; // [rsp+30h] [rbp-38h]
  unsigned __int8 v21; // [rsp+70h] [rbp+8h] BYREF

  if ( (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
    return 0LL;
  if ( (unsigned __int16)*(_DWORD *)(a1 + 32) != 1 )
    return 0LL;
  if ( !MiCanPageMove(a1) )
    return 0LL;
  v21 = 17;
  v20 = *(_DWORD *)(a1 + 32);
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4) % (unsigned int)dword_140E2DBCC;
  PfnChannel = MiGetPfnChannel(a1);
  v10 = MiPageToNode(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4));
  Page = MiGetPage(
           *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)),
           (unsigned __int8)v8 | ((PfnChannel & 1 | (2 * ((8 * (BYTE2(v20) & 0xC0 | 0x30)) | v10 & 0x3Fu))) << 8),
           a3);
  if ( Page == -1 )
    return 0LL;
  v12 = 48 * Page - 0x220000000000LL;
  v14 = MiLockProtoPoolPage(*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL, &v21);
  if ( !v14 )
  {
LABEL_12:
    MiReleaseFreshPage(v12, v13, v15);
    return 0LL;
  }
  if ( (unsigned int)MiGetPfnSlabType(a1) != 9 || !(unsigned int)MiTradeActivePage(a1, v12, a2, a4, 0) )
  {
    LOBYTE(v16) = v21;
    MiUnlockProtoPoolPage(v14, v16, v17);
    goto LABEL_12;
  }
  LOBYTE(v16) = 17;
  MiUnlockProtoPoolPage(v14, v16, v17);
  *(_QWORD *)(a1 + 16) = CLFS_LSN_NULL_EXT;
  MiSetOriginalPtePfnFromFreeList((__int64 *)(a1 + 16));
  MiReleaseFreshPageAtDpc(a1);
  if ( KiIrqlFlags )
  {
    LOBYTE(v18) = v21;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v18);
  }
  __writecr8(v21);
  return 1LL;
}

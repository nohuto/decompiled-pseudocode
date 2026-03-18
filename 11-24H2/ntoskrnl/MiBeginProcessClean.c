/*
 * XREFs of MiBeginProcessClean @ 0x140405D10
 * Callers:
 *     MiReAcquireOutSwappedProcessCommit @ 0x14066A288 (MiReAcquireOutSwappedProcessCommit.c)
 *     MmCleanProcessAddressSpace @ 0x140A06E44 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14020D480 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x140218550 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockVadTree @ 0x140261370 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1402DEE70 (MiLockVadTree.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140405E18 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiOutlawInswaps @ 0x140405E8C (MiOutlawInswaps.c)
 *     LOCK_ADDRESS_SPACE @ 0x140405F18 (LOCK_ADDRESS_SPACE.c)
 *     MiFreeWorkingSetSwapContext @ 0x140A3D5EC (MiFreeWorkingSetSwapContext.c)
 */

_BOOL8 __fastcall MiBeginProcessClean(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned __int8 v5; // bp
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdi

  v2 = a2 + 1024;
  if ( (*(_DWORD *)(a2 + 500) & 0x20) != 0 )
    return 1LL;
  LOCK_ADDRESS_SPACE(a1, a2);
  v5 = MiLockWorkingSetExclusive(v2);
  MiLockVadTree(3, v6, v7);
  _InterlockedOr((volatile signed __int32 *)(a2 + 500), 0x20u);
  MiUnlockVadTree(3, 0x11u);
  if ( (HIBYTE(*(_DWORD *)(v2 + 184)) & 0x30) != 0x30 )
    *(_BYTE *)(v2 + 187) = HIBYTE(*(_DWORD *)(v2 + 184)) & 0xCF;
  MiUnlockWorkingSetExclusive(v2, v5);
  UNLOCK_ADDRESS_SPACE_UNORDERED(a1, a2);
  v8 = MiOutlawInswaps(a2);
  v9 = v8;
  if ( v8 > 2 )
    MiFreeWorkingSetSwapContext(*((_QWORD *)qword_140E2FF88 + *(unsigned __int16 *)(a2 + 1198)), v8);
  return v9 != 0;
}

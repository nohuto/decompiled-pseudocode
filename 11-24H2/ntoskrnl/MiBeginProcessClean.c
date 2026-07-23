/*
 * XREFs of MiBeginProcessClean @ 0x1403C826C
 * Callers:
 *     MiReAcquireOutSwappedProcessCommit @ 0x14066B458 (MiReAcquireOutSwappedProcessCommit.c)
 *     MmCleanProcessAddressSpace @ 0x140A03374 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiLockVadTree @ 0x140240750 (MiLockVadTree.c)
 *     MiUnlockWorkingSetExclusive @ 0x140243400 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockVadTree @ 0x140291980 (MiUnlockVadTree.c)
 *     MiLockWorkingSetExclusive @ 0x1403367E0 (MiLockWorkingSetExclusive.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1403C8374 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiOutlawInswaps @ 0x1403C83E8 (MiOutlawInswaps.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403C8474 (LOCK_ADDRESS_SPACE.c)
 *     MiFreeWorkingSetSwapContext @ 0x140A32EFC (MiFreeWorkingSetSwapContext.c)
 */

_BOOL8 __fastcall MiBeginProcessClean(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned __int8 v5; // bp
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdi

  v2 = a2 + 1024;
  if ( (*(_DWORD *)(a2 + 500) & 0x20) != 0 )
    return 1LL;
  LOCK_ADDRESS_SPACE(a1, a2);
  v5 = MiLockWorkingSetExclusive(v2);
  MiLockVadTree(3, v6, v7, v8);
  _InterlockedOr((volatile signed __int32 *)(a2 + 500), 0x20u);
  MiUnlockVadTree(3, 0x11u);
  if ( (HIBYTE(*(_DWORD *)(v2 + 184)) & 0x30) != 0x30 )
    *(_BYTE *)(v2 + 187) = HIBYTE(*(_DWORD *)(v2 + 184)) & 0xCF;
  MiUnlockWorkingSetExclusive(v2, v5);
  UNLOCK_ADDRESS_SPACE_UNORDERED(a1, a2);
  v9 = MiOutlawInswaps(a2);
  v10 = v9;
  if ( v9 > 2 )
    MiFreeWorkingSetSwapContext(*((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(a2 + 1198)), v9);
  return v10 != 0;
}

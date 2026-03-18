/*
 * XREFs of MiBeginProcessClean @ 0x1403D80B8
 * Callers:
 *     MiReAcquireOutSwappedProcessCommit @ 0x14065E768 (MiReAcquireOutSwappedProcessCommit.c)
 *     MmCleanProcessAddressSpace @ 0x140A04D48 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x140211FE0 (MiLockWorkingSetExclusive.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1402A3CEC (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiUnlockVadTree @ 0x1402A8690 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1402B54D0 (MiLockVadTree.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402B7680 (MiUnlockWorkingSetExclusive.c)
 *     MiOutlawInswaps @ 0x1403D81C0 (MiOutlawInswaps.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403D824C (LOCK_ADDRESS_SPACE.c)
 *     MiFreeWorkingSetSwapContext @ 0x140A39390 (MiFreeWorkingSetSwapContext.c)
 */

_BOOL8 __fastcall MiBeginProcessClean(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned __int8 v5; // bp
  __int64 v6; // rdx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdi

  v2 = a2 + 1024;
  if ( (*(_DWORD *)(a2 + 500) & 0x20) != 0 )
    return 1LL;
  LOCK_ADDRESS_SPACE(a1, a2);
  v5 = MiLockWorkingSetExclusive(v2);
  MiLockVadTree(3, v6);
  _InterlockedOr((volatile signed __int32 *)(a2 + 500), 0x20u);
  MiUnlockVadTree(3, 0x11u);
  if ( (HIBYTE(*(_DWORD *)(v2 + 184)) & 0x30) != 0x30 )
    *(_BYTE *)(v2 + 187) = HIBYTE(*(_DWORD *)(v2 + 184)) & 0xCF;
  MiUnlockWorkingSetExclusive(v2, v5);
  UNLOCK_ADDRESS_SPACE_UNORDERED(a1, a2);
  v7 = MiOutlawInswaps(a2);
  v8 = v7;
  if ( v7 > 2 )
    MiFreeWorkingSetSwapContext(*((_QWORD *)qword_140E2FD48 + *(unsigned __int16 *)(a2 + 1198)), v7);
  return v8 != 0;
}

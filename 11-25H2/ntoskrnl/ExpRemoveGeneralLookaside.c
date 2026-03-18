/*
 * XREFs of ExpRemoveGeneralLookaside @ 0x1404761A0
 * Callers:
 *     ExDeletePagedLookasideList @ 0x1404760B0 (ExDeletePagedLookasideList.c)
 *     ExDeleteNPagedLookasideList @ 0x1404760E0 (ExDeleteNPagedLookasideList.c)
 *     ExDeleteLookasideListEx @ 0x140476160 (ExDeleteLookasideListEx.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 */

PVOID __fastcall ExpRemoveGeneralLookaside(PKSPIN_LOCK SpinLock, __int64 a2)
{
  KIRQL v4; // al
  PVOID *v5; // rbx
  __int64 v6; // r8
  PVOID **v7; // rdx
  PVOID result; // rax

  v4 = KeAcquireSpinLockRaiseToDpc(SpinLock);
  v5 = (PVOID *)(a2 + 64);
  v6 = *(_QWORD *)(a2 + 64);
  if ( *(_QWORD *)(v6 + 8) != a2 + 64 || (v7 = *(PVOID ***)(a2 + 72), *v7 != v5) )
    __fastfail(3u);
  *v7 = (PVOID *)v6;
  *(_QWORD *)(v6 + 8) = v7;
  KeReleaseSpinLock(SpinLock, v4);
  *(_WORD *)(a2 + 16) = 0;
  result = MmBadPointer;
  *v5 = MmBadPointer;
  return result;
}

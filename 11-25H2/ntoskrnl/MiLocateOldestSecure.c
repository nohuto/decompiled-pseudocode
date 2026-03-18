/*
 * XREFs of MiLocateOldestSecure @ 0x1402A32BC
 * Callers:
 *     MiUnmapLockedPagesInUserSpace @ 0x140A5FDD0 (MiUnmapLockedPagesInUserSpace.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x140211FE0 (MiLockWorkingSetExclusive.c)
 *     MiUnlockVadCore @ 0x1402A3820 (MiUnlockVadCore.c)
 *     MiLockVadCore @ 0x1402A3860 (MiLockVadCore.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402B7680 (MiUnlockWorkingSetExclusive.c)
 */

_QWORD *__fastcall MiLocateOldestSecure(__int64 a1)
{
  _QWORD *v1; // rsi
  _KPROCESS *Process; // rbx
  char v4; // al
  __int64 v5; // rdx
  _QWORD *i; // rax

  v1 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( MmVadEventBlockFixEnabled )
    v4 = MiLockVadCore(a1, 0LL);
  else
    v4 = MiLockWorkingSetExclusive((__int64)&Process[2].ReadyListHead.Blink);
  LOBYTE(v5) = v4;
  for ( i = (_QWORD *)(*(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF0uLL); i; i = (_QWORD *)*i )
    v1 = i;
  if ( MmVadEventBlockFixEnabled )
    MiUnlockVadCore(a1, v5);
  else
    MiUnlockWorkingSetExclusive(&Process[2].ReadyListHead.Blink, v5);
  return v1;
}

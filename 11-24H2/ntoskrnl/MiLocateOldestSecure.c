/*
 * XREFs of MiLocateOldestSecure @ 0x1404EF644
 * Callers:
 *     MiUnmapLockedPagesInUserSpace @ 0x140A59F24 (MiUnmapLockedPagesInUserSpace.c)
 * Callees:
 *     MiLockVadCore @ 0x1403DAE20 (MiLockVadCore.c)
 *     MiUnlockVadCore @ 0x14041D7C0 (MiUnlockVadCore.c)
 */

_QWORD *__fastcall MiLocateOldestSecure(__int64 a1)
{
  _QWORD *v2; // rbx
  unsigned __int8 v3; // al
  _QWORD *i; // rdx

  v2 = 0LL;
  v3 = MiLockVadCore(a1, 0);
  for ( i = (_QWORD *)(*(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF0uLL); i; i = (_QWORD *)*i )
    v2 = i;
  MiUnlockVadCore(a1, v3);
  return v2;
}

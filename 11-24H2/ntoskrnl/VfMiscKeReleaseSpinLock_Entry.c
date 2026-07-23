/*
 * XREFs of VfMiscKeReleaseSpinLock_Entry @ 0x140BAA130
 * Callers:
 *     <none>
 * Callees:
 *     ViMiscCheckReleaseSpinlock @ 0x140BAA150 (ViMiscCheckReleaseSpinlock.c)
 */

__int64 __fastcall VfMiscKeReleaseSpinLock_Entry(__int64 a1)
{
  return ViMiscCheckReleaseSpinlock(*(_QWORD *)(a1 + 16));
}

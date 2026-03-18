/*
 * XREFs of VfMiscKeReleaseSpinLock_Entry @ 0x140BA8130
 * Callers:
 *     <none>
 * Callees:
 *     ViMiscCheckReleaseSpinlock @ 0x140BA8150 (ViMiscCheckReleaseSpinlock.c)
 */

__int64 __fastcall VfMiscKeReleaseSpinLock_Entry(__int64 a1)
{
  return ViMiscCheckReleaseSpinlock(*(_QWORD *)(a1 + 16));
}

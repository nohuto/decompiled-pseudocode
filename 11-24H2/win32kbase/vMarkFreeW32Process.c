/*
 * XREFs of vMarkFreeW32Process @ 0x14013A340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vMarkFreeW32Process(__int64 a1)
{
  *(_QWORD *)(a1 + 816) |= 0x1000uLL;
}

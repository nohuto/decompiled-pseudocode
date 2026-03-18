/*
 * XREFs of GetThreadpMenuState @ 0x1C01B615C
 * Callers:
 *     xxxDestroyWindow @ 0x1C00F2000 (xxxDestroyWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetThreadpMenuState(__int64 a1)
{
  return *(_QWORD *)(a1 + 608);
}

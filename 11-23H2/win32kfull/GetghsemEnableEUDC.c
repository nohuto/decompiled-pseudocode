/*
 * XREFs of GetghsemEnableEUDC @ 0x1C009F350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetghsemEnableEUDC(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 32) + 13288LL);
}

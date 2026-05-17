/*
 * XREFs of RtlDeregisterWait @ 0x18010DE40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlDeregisterWait(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  return RtlDeregisterWaitEx(a1, 0LL, a3);
}

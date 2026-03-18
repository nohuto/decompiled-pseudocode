/*
 * XREFs of PspSetProcessBackgroundCountCallback @ 0x140A64080
 * Callers:
 *     <none>
 * Callees:
 *     PspSetProcessIoPriorityLimitCallback @ 0x140A640A0 (PspSetProcessIoPriorityLimitCallback.c)
 */

__int64 __fastcall PspSetProcessBackgroundCountCallback(__int64 a1, __int64 a2)
{
  return PspSetProcessIoPriorityLimitCallback(a1, a2 + 4);
}

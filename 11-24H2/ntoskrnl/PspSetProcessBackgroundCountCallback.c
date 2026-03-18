/*
 * XREFs of PspSetProcessBackgroundCountCallback @ 0x140A66CF0
 * Callers:
 *     <none>
 * Callees:
 *     PspSetProcessIoPriorityLimitCallback @ 0x140A66D10 (PspSetProcessIoPriorityLimitCallback.c)
 */

__int64 __fastcall PspSetProcessBackgroundCountCallback(__int64 a1, __int64 a2)
{
  return PspSetProcessIoPriorityLimitCallback(a1, a2 + 4);
}

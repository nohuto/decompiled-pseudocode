/*
 * XREFs of PopPowerLimitUpdatePendingEvents @ 0x140749DB4
 * Callers:
 *     PoQueryPowerLimitValue @ 0x140748FF0 (PoQueryPowerLimitValue.c)
 *     PopEvaluatePowerLimitChange @ 0x140749704 (PopEvaluatePowerLimitChange.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 */

LONG __fastcall PopPowerLimitUpdatePendingEvents(__int64 a1)
{
  struct _KEVENT *v2; // rcx
  LONG result; // eax
  struct _KEVENT *v4; // rcx

  if ( !*(_DWORD *)(a1 + 176) && !*(_DWORD *)(a1 + 180) )
  {
    v2 = *(struct _KEVENT **)(a1 + 192);
    if ( v2 )
      result = KeSetEvent(v2, 0, 0);
    v4 = *(struct _KEVENT **)(a1 + 184);
    if ( v4 )
      return KeSetEvent(v4, 0, 0);
  }
  return result;
}

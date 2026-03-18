/*
 * XREFs of PopPowerLimitUpdatePendingEvents @ 0x14074BA84
 * Callers:
 *     PoQueryPowerLimitValue @ 0x14074ACC0 (PoQueryPowerLimitValue.c)
 *     PopEvaluatePowerLimitChange @ 0x14074B3D4 (PopEvaluatePowerLimitChange.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
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

/*
 * XREFs of StorEnableAdapterOperationalEvents @ 0x140055888
 * Callers:
 *     StorEtwEnableCallback @ 0x140009BE0 (StorEtwEnableCallback.c)
 *     RaidAdapterStartMiniport @ 0x1400430C0 (RaidAdapterStartMiniport.c)
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x14001C7B0 (RaidIsAdapterControlSupported.c)
 *     RaCallMiniportAdapterControl @ 0x140027690 (RaCallMiniportAdapterControl.c)
 */

__int64 __fastcall StorEnableAdapterOperationalEvents(__int64 a1)
{
  char v2; // bl
  __int64 v3; // rsi
  __int64 result; // rax

  v2 = StorMiniportOperationalEventsEnabled;
  if ( !a1 )
    return 3221225485LL;
  v3 = a1 + 376;
  if ( !RaidIsAdapterControlSupported(a1 + 376, 20) )
    return 3221225659LL;
  if ( ((*(_BYTE *)(a1 + 110) & 8) != 0) == v2 )
    return 0LL;
  result = RaCallMiniportAdapterControl(v3);
  if ( (int)result >= 0 )
    *(_BYTE *)(a1 + 110) ^= (*(_BYTE *)(a1 + 110) ^ (8 * v2)) & 8;
  return result;
}

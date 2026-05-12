/*
 * XREFs of RaCallMiniportAdapterControlSafe @ 0x14003D3C0
 * Callers:
 *     StorReset @ 0x140040430 (StorReset.c)
 *     RaidAdapterStartMiniport @ 0x1400430C0 (RaidAdapterStartMiniport.c)
 *     RaidAdapterStartDevice @ 0x140061808 (RaidAdapterStartDevice.c)
 *     StorInitializeMFND @ 0x1400C445C (StorInitializeMFND.c)
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x14001C7B0 (RaidIsAdapterControlSupported.c)
 *     RaCallMiniportAdapterControl @ 0x140027690 (RaCallMiniportAdapterControl.c)
 */

__int64 __fastcall RaCallMiniportAdapterControlSafe(__int64 a1, int a2)
{
  if ( RaidIsAdapterControlSupported(a1, a2) )
    return RaCallMiniportAdapterControl(a1);
  else
    return 3221225659LL;
}

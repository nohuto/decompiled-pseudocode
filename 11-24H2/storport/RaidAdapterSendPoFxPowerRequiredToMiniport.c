/*
 * XREFs of RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x140077988
 * Callers:
 *     StorPortAdapterPowerRequiredStep1 @ 0x140037670 (StorPortAdapterPowerRequiredStep1.c)
 *     StorPortAdapterPowerNotRequiredStep1 @ 0x140037930 (StorPortAdapterPowerNotRequiredStep1.c)
 *     StorPortAdapterDirectedPowerDown @ 0x140079880 (StorPortAdapterDirectedPowerDown.c)
 *     StorPortAdapterDirectedPowerUp @ 0x140079C00 (StorPortAdapterDirectedPowerUp.c)
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x14001C7B0 (RaidIsAdapterControlSupported.c)
 *     RaCallMiniportAdapterControl @ 0x140027690 (RaCallMiniportAdapterControl.c)
 */

__int64 __fastcall RaidAdapterSendPoFxPowerRequiredToMiniport(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx

  v1 = a1 + 376;
  v2 = -1073741637;
  if ( RaidIsAdapterControlSupported(a1 + 376, 7) )
    return (unsigned int)RaCallMiniportAdapterControl(v1);
  return v2;
}

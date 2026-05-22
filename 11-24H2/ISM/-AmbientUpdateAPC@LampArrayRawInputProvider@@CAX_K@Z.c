/*
 * XREFs of ?AmbientUpdateAPC@LampArrayRawInputProvider@@CAX_K@Z @ 0x1800E3470
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateDeviceAmbientProcess@LampArrayRawInputProvider@@AEAAXXZ @ 0x1800E41A0 (-UpdateDeviceAmbientProcess@LampArrayRawInputProvider@@AEAAXXZ.c)
 */

void __fastcall LampArrayRawInputProvider::AmbientUpdateAPC(HANDLE *Parameter)
{
  LampArrayRawInputProvider::UpdateDeviceAmbientProcess((LampArrayRawInputProvider *)Parameter);
  SetEvent(Parameter[42]);
}

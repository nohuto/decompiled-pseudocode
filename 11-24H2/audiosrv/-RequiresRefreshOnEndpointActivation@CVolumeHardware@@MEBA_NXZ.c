/*
 * XREFs of ?RequiresRefreshOnEndpointActivation@CVolumeHardware@@MEBA_NXZ @ 0x180114F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CVolumeHardware::RequiresRefreshOnEndpointActivation(CVolumeHardware *this)
{
  return *((_BYTE *)this + 288);
}

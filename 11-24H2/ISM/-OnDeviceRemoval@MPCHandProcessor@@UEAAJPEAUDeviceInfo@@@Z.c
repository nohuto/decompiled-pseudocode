/*
 * XREFs of ?OnDeviceRemoval@MPCHandProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800C0430
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearInputTargets@MPCInputProviderBase@@IEAAXXZ @ 0x1800C4FC8 (-ClearInputTargets@MPCInputProviderBase@@IEAAXXZ.c)
 */

__int64 __fastcall MPCHandProcessor::OnDeviceRemoval(MPCHandProcessor *this, struct DeviceInfo *a2)
{
  if ( *((_BYTE *)this + 3571) )
    MPCInputProviderBase::ClearInputTargets(this);
  return MPCInputProviderBase::OnDeviceRemoval(this, a2);
}

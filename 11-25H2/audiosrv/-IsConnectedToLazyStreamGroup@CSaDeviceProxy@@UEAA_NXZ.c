/*
 * XREFs of ?IsConnectedToLazyStreamGroup@CSaDeviceProxy@@UEAA_NXZ @ 0x180076EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSaDeviceProxy::IsConnectedToLazyStreamGroup(CSaDeviceProxy *this)
{
  return *((_DWORD *)this + 29) != 0;
}

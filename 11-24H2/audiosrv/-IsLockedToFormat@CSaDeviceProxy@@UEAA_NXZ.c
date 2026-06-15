/*
 * XREFs of ?IsLockedToFormat@CSaDeviceProxy@@UEAA_NXZ @ 0x180069050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSaDeviceProxy::IsLockedToFormat(CSaDeviceProxy *this)
{
  return *((_DWORD *)this + 28) != 0;
}

/*
 * XREFs of ?OnDeviceUpdate@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z @ 0x18019F350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputRouter::OnDeviceUpdate(DWMInputRouter *this, struct DeviceInfo *a2)
{
  return DWMInputRouter::OnDeviceChange(this, a2, 1);
}

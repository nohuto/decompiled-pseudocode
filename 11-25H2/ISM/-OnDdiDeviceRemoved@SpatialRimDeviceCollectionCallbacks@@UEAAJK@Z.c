/*
 * XREFs of ?OnDdiDeviceRemoved@SpatialRimDeviceCollectionCallbacks@@UEAAJK@Z @ 0x1800D46A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SpatialRimDeviceCollectionCallbacks::OnDdiDeviceRemoved(SpatialRimDeviceCollectionCallbacks *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 208LL))(*((_QWORD *)this + 2));
}

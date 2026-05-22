/*
 * XREFs of ?OnDdiDeviceUpdated@SpatialRimDeviceCollectionCallbacks@@UEAAJKAEBUMPCSourceDeviceInfo@@@Z @ 0x1800D7A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SpatialRimDeviceCollectionCallbacks::OnDdiDeviceUpdated(
        SpatialRimDeviceCollectionCallbacks *this,
        __int64 a2,
        const struct MPCSourceDeviceInfo *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, const struct MPCSourceDeviceInfo *))(**((_QWORD **)this + 2) + 208LL))(
           *((_QWORD *)this + 2),
           a2,
           a3);
}

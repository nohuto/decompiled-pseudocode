/*
 * XREFs of ?AddRef@SpatialRimDeviceCollectionCallbacks@@UEAAKXZ @ 0x1800D5970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SpatialRimDeviceCollectionCallbacks::AddRef(SpatialRimDeviceCollectionCallbacks *this)
{
  __int64 result; // rax

  result = (unsigned int)(*((_DWORD *)this + 6) + 1);
  *((_DWORD *)this + 6) = result;
  return result;
}

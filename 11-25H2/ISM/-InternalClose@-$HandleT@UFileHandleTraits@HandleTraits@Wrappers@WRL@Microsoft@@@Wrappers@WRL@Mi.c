/*
 * XREFs of ?InternalClose@?$HandleT@UFileHandleTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@MEAA_NXZ @ 0x1800D3D40
 * Callers:
 *     ??1SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAA@XZ @ 0x1800D22A4 (--1SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::FileHandleTraits>::InternalClose(
        __int64 a1)
{
  return CloseHandle(*(HANDLE *)(a1 + 8));
}

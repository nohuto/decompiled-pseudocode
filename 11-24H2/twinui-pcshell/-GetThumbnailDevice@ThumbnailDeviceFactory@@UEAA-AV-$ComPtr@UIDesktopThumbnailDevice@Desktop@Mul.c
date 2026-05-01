/*
 * XREFs of ?GetThumbnailDevice@ThumbnailDeviceFactory@@UEAA?AV?$ComPtr@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x180492440
 * Callers:
 *     <none>
 * Callees:
 *     ?PreCreateThumbnailDevice@ThumbnailDeviceFactory@@UEAAXXZ @ 0x180492F10 (-PreCreateThumbnailDevice@ThumbnailDeviceFactory@@UEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall ThumbnailDeviceFactory::GetThumbnailDevice(ThumbnailDeviceFactory *a1, _QWORD *a2)
{
  __int64 v4; // rcx

  ThumbnailDeviceFactory::PreCreateThumbnailDevice(a1);
  v4 = *((_QWORD *)a1 + 6);
  *a2 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return a2;
}

/*
 * XREFs of ?GetPrimaryAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x18003EB34
 * Callers:
 *     ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x18003EF80 (-CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x1801AA080 (-GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z.c)
 *     ?Snapshot@CCachedVisualImage@@IEAAJXZ @ 0x1801BD88C (-Snapshot@CCachedVisualImage@@IEAAJXZ.c)
 *     ?EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ @ 0x180239090 (-EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ.c)
 *     ?GetSpectreTexture@CSceneResourceManager@@QEAAJPEAVCResource@@PEAPEAUISpectreTexture@@@Z @ 0x1802694D8 (-GetSpectreTexture@CSceneResourceManager@@QEAAJPEAVCResource@@PEAPEAUISpectreTexture@@@Z.c)
 *     ?GetRenderTargetInfo@COffScreenRenderTarget@@UEBA?AVRenderTargetInfo@@XZ @ 0x18028ABF0 (-GetRenderTargetInfo@COffScreenRenderTarget@@UEBA-AVRenderTargetInfo@@XZ.c)
 *     ?LockAndRead@CDebugVisualImage@@QEAAXXZ @ 0x180299140 (-LockAndRead@CDebugVisualImage@@QEAAXXZ.c)
 * Callees:
 *     ?GetPrimaryAdapter@CDisplayManager@@QEAAJPEAPEAUIDXGIAdapter1@@@Z @ 0x18003EBE0 (-GetPrimaryAdapter@CDisplayManager@@QEAAJPEAPEAUIDXGIAdapter1@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct _LUID __fastcall CDisplayManager::GetPrimaryAdapterLuid(CDisplayManager *this, _QWORD *a2)
{
  struct IDXGIAdapter1 *v4; // [rsp+20h] [rbp-168h] BYREF
  _BYTE v5[296]; // [rsp+30h] [rbp-158h] BYREF
  __int64 v6; // [rsp+158h] [rbp-30h]

  v4 = 0LL;
  *a2 = 0LL;
  if ( (int)CDisplayManager::GetPrimaryAdapter(this, &v4) >= 0 )
  {
    memset_0(v5, 0, 0x138uLL);
    if ( ((int (__fastcall *)(struct IDXGIAdapter1 *, _BYTE *))v4->lpVtbl->GetDesc1)(v4, v5) >= 0 )
      *a2 = v6;
  }
  if ( v4 )
    ((void (__fastcall *)(struct IDXGIAdapter1 *))v4->lpVtbl->Release)(v4);
  return (struct _LUID)a2;
}

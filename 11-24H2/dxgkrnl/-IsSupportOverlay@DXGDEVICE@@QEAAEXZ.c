/*
 * XREFs of ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x140077178
 * Callers:
 *     DxgkCreateOverlay @ 0x1401E8580 (DxgkCreateOverlay.c)
 *     DxgkDestroyOverlay @ 0x1401E8BE0 (DxgkDestroyOverlay.c)
 *     DxgkFlipOverlay @ 0x1401E9130 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1401E9630 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1401E9BD0 (DxgkUpdateOverlay.c)
 * Callees:
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x140054D34 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall DXGDEVICE::IsSupportOverlay(DXGDEVICE *this)
{
  __int64 v1; // rax
  char v2; // r8
  __int64 v3; // rdx

  v1 = *((_QWORD *)this + 2);
  v2 = 0;
  if ( *(_QWORD *)(v1 + 16) == *((_QWORD *)this + 237)
    && DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(v1 + 16))
    && *(__int64 (__fastcall **)(void *const, struct _DXGKARG_CREATEOVERLAY *))(v3 + 704) != ADAPTER_RENDER::DefaultDdiCreateOverlay
    && *(__int64 (__fastcall **)(void *const))(v3 + 768) != ADAPTER_RENDER::DefaultDdiDestroyOverlay
    && *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_FLIPOVERLAY *))(v3 + 760) != ADAPTER_RENDER::DefaultDdiFlipOverlay
    && *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_UPDATEOVERLAY *))(v3 + 752) != ADAPTER_RENDER::DefaultDdiUpdateOverlay )
  {
    return 1;
  }
  return v2;
}

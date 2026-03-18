/*
 * XREFs of ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x140076738
 * Callers:
 *     DxgkCreateOverlay @ 0x1401E3350 (DxgkCreateOverlay.c)
 *     DxgkDestroyOverlay @ 0x1401E39B0 (DxgkDestroyOverlay.c)
 *     DxgkFlipOverlay @ 0x1401E3F00 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1401E4400 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1401E49A0 (DxgkUpdateOverlay.c)
 * Callees:
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x140055474 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall DXGDEVICE::IsSupportOverlay(DXGDEVICE *this)
{
  __int64 v1; // rax
  char v2; // r8
  __int64 v3; // rdx

  v1 = *((_QWORD *)this + 2);
  v2 = 0;
  if ( *(_QWORD *)(v1 + 16) == *((_QWORD *)this + 235)
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

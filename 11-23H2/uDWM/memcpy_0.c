/*
 * XREFs of memcpy_0 @ 0x180066218
 * Callers:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180016EF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     memcpy_s @ 0x18001A2E4 (memcpy_s.c)
 *     ?PostActivateLivePreview@CDesktopManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z @ 0x18001C9E4 (-PostActivateLivePreview@CDesktopManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCVisual@@$0A@@@QEAAJPEFBQEAVCVisual@@I@Z @ 0x18001D430 (-AddMultipleAndSet@-$DynArray@PEAVCVisual@@$0A@@@QEAAJPEFBQEAVCVisual@@I@Z.c)
 *     ?HrInitFromCompressedBytes@CCompressedSourceBitmap@@IEAAJPEBXK@Z @ 0x180022918 (-HrInitFromCompressedBytes@CCompressedSourceBitmap@@IEAAJPEBXK@Z.c)
 *     ??R_lambda_b70241e9b5ebaad244db3e52d52cab17_@@QEBA@QEAGQEBG_K2G@Z @ 0x18003086C (--R_lambda_b70241e9b5ebaad244db3e52d52cab17_@@QEBA@QEAGQEBG_K2G@Z.c)
 *     ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x180032368 (--$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@-$basic_string@GU-$char_trai.c)
 *     ?HrgnFromRects@@YAJPEBUtagRECT@@IPEAPEAUHRGN__@@@Z @ 0x1800350A4 (-HrgnFromRects@@YAJPEBUtagRECT@@IPEAPEAUHRGN__@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180036F9C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0M@Z @ 0x18003A2D0 (-SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0M@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18003A9B0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x180045FF0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 *     ?SLGetHelper@@YA_NPEBG@Z @ 0x18005ADCC (-SLGetHelper@@YA_NPEBG@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UMilPoint2D@@$0A@@@QEAAJPEFBUMilPoint2D@@I@Z @ 0x18006D5E8 (-AddMultipleAndSet@-$DynArray@UMilPoint2D@@$0A@@@QEAAJPEFBUMilPoint2D@@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UMilPoint3F@@$0A@@@QEAAJPEFBUMilPoint3F@@I@Z @ 0x18006D68A (-AddMultipleAndSet@-$DynArray@UMilPoint3F@@$0A@@@QEAAJPEFBUMilPoint3F@@I@Z.c)
 *     ??$_Reallocate_for@V_lambda_66f57f934f28d61049862f64df852ff0_@@PEBD@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_66f57f934f28d61049862f64df852ff0_@@PEBD@Z @ 0x1800EF518 (--$_Reallocate_for@V_lambda_66f57f934f28d61049862f64df852ff0_@@PEBD@-$basic_string@DU-$char_trai.c)
 *     ??$_Reallocate_grow_by@V_lambda_e1befb086ad3257e3f042a63030725f7_@@_KD@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_e1befb086ad3257e3f042a63030725f7_@@_KD@Z @ 0x1800EF5BC (--$_Reallocate_grow_by@V_lambda_e1befb086ad3257e3f042a63030725f7_@@_KD@-$basic_string@DU-$char_t.c)
 *     ??$_Reallocate_grow_by@V_lambda_f3a66ab6a0570788f31503db83886f49_@@_KPEBD_K@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_f3a66ab6a0570788f31503db83886f49_@@_KPEBD2@Z @ 0x1800EF6A4 (--$_Reallocate_grow_by@V_lambda_f3a66ab6a0570788f31503db83886f49_@@_KPEBD_K@-$basic_string@DU-$c.c)
 *     ?insert@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KQEBD0@Z @ 0x1800F2DDC (-insert@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KQEBD0@Z.c)
 *     ?overflow@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MEAAHH@Z @ 0x1800F2FD0 (-overflow@-$basic_stringbuf@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@MEAAHH@Z.c)
 *     ?DoStackCapture@@YAXJIPEAX@Z @ 0x18010DA0C (-DoStackCapture@@YAXJIPEAX@Z.c)
 *     ?DetachData@?$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z @ 0x18010E1B8 (-DetachData@-$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z.c)
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x18010F618 (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy_0(void *a1, const void *Src, size_t Size)
{
  return memcpy(a1, Src, Size);
}

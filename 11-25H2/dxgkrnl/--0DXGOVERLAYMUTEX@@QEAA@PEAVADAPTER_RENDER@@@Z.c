/*
 * XREFs of ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1400287A4
 * Callers:
 *     DxgkCreateOverlay @ 0x1401E3350 (DxgkCreateOverlay.c)
 *     DxgkDestroyOverlay @ 0x1401E39B0 (DxgkDestroyOverlay.c)
 *     DxgkFlipOverlay @ 0x1401E3F00 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1401E4400 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1401E49A0 (DxgkUpdateOverlay.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

DXGOVERLAYMUTEX *__fastcall DXGOVERLAYMUTEX::DXGOVERLAYMUTEX(DXGOVERLAYMUTEX *this, struct ADAPTER_RENDER *a2)
{
  DXGAUTOMUTEX::DXGAUTOMUTEX(this, (struct ADAPTER_RENDER *)((char *)a2 + 856), 0);
  return this;
}

/*
 * XREFs of ??1CScribbleSwapChain@@MEAA@XZ @ 0x18025A6A0
 * Callers:
 *     ??1CDDisplaySwapChain@@MEAA@XZ @ 0x1802C7940 (--1CDDisplaySwapChain@@MEAA@XZ.c)
 *     ??1CLegacySwapChain@@MEAA@XZ @ 0x1802D2C58 (--1CLegacySwapChain@@MEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDxHandleStereoBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18020D674 (--1-$com_ptr_t@VCDxHandleStereoBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CScribbleSwapChain::~CScribbleSwapChain(CGlobalDrawingContext **this)
{
  wil::com_ptr_t<CDxHandleStereoBitmapRealization,wil::err_returncode_policy>::~com_ptr_t<CDxHandleStereoBitmapRealization,wil::err_returncode_policy>(this + 33);
  COverlaySwapChain::~COverlaySwapChain(this);
}

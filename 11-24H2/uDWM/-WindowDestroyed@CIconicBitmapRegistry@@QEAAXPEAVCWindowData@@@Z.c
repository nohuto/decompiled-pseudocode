/*
 * XREFs of ?WindowDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x18001C3C0
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001BC68 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x18001D3F4 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 */

void __fastcall CIconicBitmapRegistry::WindowDestroyed(CIconicBitmapRegistry *this, struct CWindowData *a2)
{
  *((_BYTE *)a2 + 738) &= 0xE3u;
  CIconicBitmapRegistry::RequestBitmap(this, a2, 0);
  CIconicBitmapRegistry::ClearBitmap(this, a2);
}

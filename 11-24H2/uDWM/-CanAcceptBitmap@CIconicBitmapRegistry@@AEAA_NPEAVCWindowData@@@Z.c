/*
 * XREFs of ?CanAcceptBitmap@CIconicBitmapRegistry@@AEAA_NPEAVCWindowData@@@Z @ 0x180007C48
 * Callers:
 *     ?RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresentationType@@@Z @ 0x180007B4C (-RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresen.c)
 *     ?BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z @ 0x180009648 (-BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z.c)
 *     ?InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z @ 0x180077678 (-InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z.c)
 * Callees:
 *     ?IsWindowTab@@YA_NPEAVCWindowData@@@Z @ 0x180007DE8 (-IsWindowTab@@YA_NPEAVCWindowData@@@Z.c)
 */

char __fastcall CIconicBitmapRegistry::CanAcceptBitmap(CIconicBitmapRegistry *this, struct CWindowData *a2)
{
  char v2; // al
  char v3; // r8

  v2 = *((_BYTE *)a2 + 738);
  v3 = 0;
  if ( (v2 & 2) != 0
    && (*((_QWORD *)a2 + 54)
     || (v2 & 8) != 0
     || (unsigned int)(*((_DWORD *)this + 20) + *((_DWORD *)this + 21)) < *((_DWORD *)this + 2)
     || IsWindowTab(a2)) )
  {
    return 1;
  }
  return v3;
}

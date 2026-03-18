/*
 * XREFs of ??0CRegion@@QEAA@AEBUMilRectU@@@Z @ 0x1801DC1EC
 * Callers:
 *     ?AddTransientRegion@CSwapChainBuffer@@UEAAXAEBVCRegion@@@Z @ 0x1801DC170 (-AddTransientRegion@CSwapChainBuffer@@UEAAXAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CGDISubSectionBitmapRealization@@EEAAXAEBVCRegion@@@Z @ 0x1802D70A0 (-AddDirtyRegion@CGDISubSectionBitmapRealization@@EEAAXAEBVCRegion@@@Z.c)
 *     ?UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802D8364 (-UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

CRegion *__fastcall CRegion::CRegion(CRegion *this, const struct MilRectU *a2)
{
  int v2; // r10d
  _DWORD *v3; // r8
  int v4; // r11d
  int v5; // eax
  int v6; // ebx

  v2 = *(_DWORD *)a2;
  v3 = (_DWORD *)((char *)this + 8);
  v4 = *((_DWORD *)a2 + 2);
  v5 = *((_DWORD *)a2 + 1);
  v6 = *((_DWORD *)a2 + 3);
  *(_QWORD *)this = (char *)this + 8;
  if ( v2 >= v4 || v5 >= v6 )
  {
    *v3 = 0;
  }
  else
  {
    *v3 = 2;
    *((_DWORD *)this + 3) = v2;
    *((_DWORD *)this + 5) = v5;
    *((_DWORD *)this + 4) = v4;
    *((_DWORD *)this + 6) = 16;
    *((_DWORD *)this + 9) = v2;
    *((_DWORD *)this + 10) = v4;
    *((_DWORD *)this + 7) = v6;
    *((_DWORD *)this + 8) = 16;
  }
  return this;
}

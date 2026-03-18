/*
 * XREFs of ??0CSurfaceBrush@@QEAA@PEAVCComposition@@@Z @ 0x180112A10
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180110938 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVCSurfaceBrush@@@Z @ 0x180113AB0 (-GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV-$TMi.c)
 * Callees:
 *     <none>
 */

CSurfaceBrush *__fastcall CSurfaceBrush::CSurfaceBrush(CSurfaceBrush *this, struct CComposition *a2)
{
  CSurfaceBrush *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *(_QWORD *)this = &CSurfaceBrush::`vftable'{for `CContent'};
  *((_QWORD *)this + 9) = &CBackdropBrush::`vftable'{for `IBrushChangeNotification'};
  *((_QWORD *)this + 13) = &CSurfaceBrush::`vftable';
  *((_QWORD *)this + 11) = 0LL;
  *((_BYTE *)this + 96) = 0;
  *((_DWORD *)this + 28) = 1056964608;
  *((_DWORD *)this + 29) = 1056964608;
  *((_DWORD *)this + 30) = 2;
  *((_QWORD *)this + 17) = &off_1803058B0;
  result = this;
  *((_DWORD *)this + 31) = 1;
  *((_QWORD *)this + 19) = 1065353216LL;
  *((_DWORD *)this + 40) = 0;
  *(_QWORD *)((char *)this + 164) = 1065353216LL;
  *(_QWORD *)((char *)this + 172) = 0LL;
  *(_QWORD *)((char *)this + 180) = 0LL;
  *((_DWORD *)this + 47) = 0;
  return result;
}

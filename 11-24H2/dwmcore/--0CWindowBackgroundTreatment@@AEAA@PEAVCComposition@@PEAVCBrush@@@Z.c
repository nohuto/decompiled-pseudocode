/*
 * XREFs of ??0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCBrush@@@Z @ 0x18006AF70
 * Callers:
 *     ?Create@CWindowBackgroundTreatment@@SAJPEAVCComposition@@PEAVCBrush@@PEAPEAV1@@Z @ 0x18006AEB0 (-Create@CWindowBackgroundTreatment@@SAJPEAVCComposition@@PEAVCBrush@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?UpdateBackdropFlags@CWindowBackgroundTreatment@@AEAAXXZ @ 0x18006CBB8 (-UpdateBackdropFlags@CWindowBackgroundTreatment@@AEAAXXZ.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180134738 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 */

CWindowBackgroundTreatment *__fastcall CWindowBackgroundTreatment::CWindowBackgroundTreatment(
        CWindowBackgroundTreatment *this,
        struct CComposition *a2,
        struct CBrush *a3)
{
  char v4; // al
  char v5; // al
  struct CResource *v6; // rdx
  int v7; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)this = &CWindowBackgroundTreatment::`vftable';
  *((_QWORD *)this + 9) = a3;
  *((_QWORD *)this + 10) = 0LL;
  *(_OWORD *)((char *)this + 88) = TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *((_QWORD *)this + 13) = 0LL;
  *((_OWORD *)this + 7) = TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *((_QWORD *)this + 16) = 0LL;
  *(_OWORD *)((char *)this + 136) = TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 56) = 0;
  *((_QWORD *)this + 20) = 1065353216LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 44) = 0;
  *(_QWORD *)((char *)this + 180) = 1065353216LL;
  *(_QWORD *)((char *)this + 188) = 0LL;
  *((_DWORD *)this + 49) = 0;
  *((_QWORD *)this + 25) = 1065353216LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_DWORD *)this + 54) = 0;
  *((_DWORD *)this + 55) = 1065353216;
  v4 = *((_BYTE *)this + 225);
  *((_BYTE *)this + 224) = -86;
  *((_BYTE *)this + 225) = v4 & 0xC0 | 0x29;
  *((_DWORD *)this + 57) = 0;
  *(_QWORD *)((char *)this + 292) = 1065353216LL;
  *((_QWORD *)this + 29) = 1065353216LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_DWORD *)this + 62) = 0;
  *(_QWORD *)((char *)this + 252) = 1065353216LL;
  *(_QWORD *)((char *)this + 260) = 0LL;
  *((_DWORD *)this + 67) = 0;
  *((_QWORD *)this + 34) = 1065353216LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_DWORD *)this + 72) = 0;
  v5 = *((_BYTE *)this + 297);
  *((_BYTE *)this + 296) = -86;
  *((_BYTE *)this + 297) = v5 & 0xC0 | 0x29;
  v6 = (struct CResource *)*((_QWORD *)this + 9);
  *((_WORD *)this + 150) = 0;
  *((_BYTE *)this + 302) = 0;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  v7 = CResource::RegisterNotifier(this, v6);
  if ( v7 < 0 )
    ModuleFailFastForHRESULT(v7, retaddr);
  CWindowBackgroundTreatment::UpdateBackdropFlags(this);
  return this;
}

/*
 * XREFs of ??0CCursorState@@QEAA@XZ @ 0x1802B16FC
 * Callers:
 *     ?EnsureCursorState@CCursorManager@@AEAAJ_KPEAPEAVCCursorState@@@Z @ 0x1802B04A0 (-EnsureCursorState@CCursorManager@@AEAAJ_KPEAPEAVCCursorState@@@Z.c)
 * Callees:
 *     ??0?$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ @ 0x18002465C (--0-$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ @ 0x18019D290 (--0-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUni.c)
 *     ??0?$shared_ptr@VShapeData@CCursorState@@@std@@QEAA@XZ @ 0x1802B16B8 (--0-$shared_ptr@VShapeData@CCursorState@@@std@@QEAA@XZ.c)
 */

CCursorState *__fastcall CCursorState::CCursorState(CCursorState *this)
{
  int v2; // edx
  _QWORD *v3; // rax
  CCursorState *result; // rax

  CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>::CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>((__int64)this);
  *((_QWORD *)this + 3) = 10LL;
  *(_QWORD *)this = &CCursorState::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 8) = 1065353216;
  *((_DWORD *)this + 9) = -1073741569;
  std::shared_ptr<CCursorState::ShapeData>::shared_ptr<CCursorState::ShapeData>((_QWORD *)this + 5);
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_WORD *)this + 40) = 0;
  *((_BYTE *)this + 82) = 0;
  TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>((_QWORD *)this + 11);
  *((_DWORD *)this + 28) = 0;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 42) = v2;
  std::shared_ptr<CCursorState::ShapeData>::shared_ptr<CCursorState::ShapeData>((_QWORD *)this + 22);
  *((_DWORD *)this + 48) = 0;
  *(_OWORD *)((char *)this + 196) = 0LL;
  *(_QWORD *)((char *)this + 212) = 0LL;
  TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>((_QWORD *)this + 28);
  *((_DWORD *)this + 62) = 0;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  v3 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x50uLL);
  *v3 = v3;
  v3[1] = v3;
  *((_QWORD *)this + 32) = v3;
  result = this;
  *((_QWORD *)this + 34) = g_qpcFrequency.QuadPart / 0x14uLL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  return result;
}

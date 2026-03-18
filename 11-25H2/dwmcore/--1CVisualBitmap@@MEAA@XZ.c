/*
 * XREFs of ??1CVisualBitmap@@MEAA@XZ @ 0x1801EFBF4
 * Callers:
 *     ??_ECVisualBitmap@@MEAAPEAXI@Z @ 0x180280A80 (--_ECVisualBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePresentData@@@Z @ 0x1800781CC (--$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePrese.c)
 */

void __fastcall CVisualBitmap::~CVisualBitmap(CVisualBitmap *this)
{
  *(_QWORD *)this = &CVisualBitmap::`vftable'{for `CVisualBitmapGeneratedT<CVisualBitmap,CContent>'};
  *((_QWORD *)this + 10) = &CVisualBitmap::`vftable'{for `IBitmapResource'};
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>(*((_QWORD *)this + 12));
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>(*((_QWORD *)this + 11));
  CVisualBitmapGeneratedT<CVisualBitmap,CContent>::~CVisualBitmapGeneratedT<CVisualBitmap,CContent>(this);
}

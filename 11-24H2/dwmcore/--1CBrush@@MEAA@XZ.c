/*
 * XREFs of ??1CBrush@@MEAA@XZ @ 0x18008F3CC
 * Callers:
 *     ??1CEffectBrush@@MEAA@XZ @ 0x18008D34C (--1CEffectBrush@@MEAA@XZ.c)
 *     ??_ECColorBrush@@MEAAPEAXI@Z @ 0x18008F380 (--_ECColorBrush@@MEAAPEAXI@Z.c)
 *     ??1CNineGridBrush@@MEAA@XZ @ 0x18013229C (--1CNineGridBrush@@MEAA@XZ.c)
 *     ??1CMaskBrush@@MEAA@XZ @ 0x18013277C (--1CMaskBrush@@MEAA@XZ.c)
 *     ??1CSurfaceBrush@@MEAA@XZ @ 0x1801337BC (--1CSurfaceBrush@@MEAA@XZ.c)
 *     ??1CGradientBrush@@MEAA@XZ @ 0x1801D408C (--1CGradientBrush@@MEAA@XZ.c)
 *     ??_GCWindowBackdropBrush@@UEAAPEAXI@Z @ 0x180211270 (--_GCWindowBackdropBrush@@UEAAPEAXI@Z.c)
 *     ??1CClipBrush@@MEAA@XZ @ 0x180293B1C (--1CClipBrush@@MEAA@XZ.c)
 *     ??1CCompositionMagnifierBrush@@MEAA@XZ @ 0x180295AD8 (--1CCompositionMagnifierBrush@@MEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x18008F428 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18008FCF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

void __fastcall CBrush::~CBrush(CBrush *this)
{
  __int64 v1; // rbx

  v1 = *((_QWORD *)this + 10);
  if ( v1 )
  {
    *(_DWORD *)(v1 + 40) = 0;
    DynArrayImpl<0>::ShrinkToSize(v1 + 16, 24LL);
    *(_BYTE *)(v1 + 200) = 1;
  }
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((char *)this + 80);
  CResource::~CResource(this);
}

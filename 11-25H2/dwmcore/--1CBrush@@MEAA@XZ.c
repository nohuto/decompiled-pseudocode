/*
 * XREFs of ??1CBrush@@MEAA@XZ @ 0x180133F8C
 * Callers:
 *     ??1CSurfaceBrush@@MEAA@XZ @ 0x18013310C (--1CSurfaceBrush@@MEAA@XZ.c)
 *     ??_ECColorBrush@@MEAAPEAXI@Z @ 0x180133F40 (--_ECColorBrush@@MEAAPEAXI@Z.c)
 *     ??1CGradientBrush@@MEAA@XZ @ 0x18019F6FC (--1CGradientBrush@@MEAA@XZ.c)
 *     ??1CMaskBrush@@MEAA@XZ @ 0x1801FEF1C (--1CMaskBrush@@MEAA@XZ.c)
 *     ??1CNineGridBrush@@MEAA@XZ @ 0x1802057BC (--1CNineGridBrush@@MEAA@XZ.c)
 *     ??1CEffectBrush@@MEAA@XZ @ 0x18020FE2C (--1CEffectBrush@@MEAA@XZ.c)
 *     ??_GCWindowBackdropBrush@@UEAAPEAXI@Z @ 0x18021CA40 (--_GCWindowBackdropBrush@@UEAAPEAXI@Z.c)
 *     ??1CClipBrush@@MEAA@XZ @ 0x18029F46C (--1CClipBrush@@MEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x180133FE8 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1801348B0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
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

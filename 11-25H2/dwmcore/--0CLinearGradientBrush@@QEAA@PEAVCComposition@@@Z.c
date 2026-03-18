/*
 * XREFs of ??0CLinearGradientBrush@@QEAA@PEAVCComposition@@@Z @ 0x1801ED99C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180110938 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ @ 0x1801ED43C (-EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ.c)
 * Callees:
 *     ??0CGradientBrush@@IEAA@PEAVCComposition@@_N@Z @ 0x1801EDA04 (--0CGradientBrush@@IEAA@PEAVCComposition@@_N@Z.c)
 */

CLinearGradientBrush *__fastcall CLinearGradientBrush::CLinearGradientBrush(
        CLinearGradientBrush *this,
        struct CComposition *a2)
{
  __int64 v2; // rcx

  CGradientBrush::CGradientBrush(this, a2, 1);
  *(_QWORD *)(v2 + 248) = 1065353216LL;
  *(_QWORD *)(v2 + 72) = &CBackdropBrush::`vftable'{for `IBrushChangeNotification'};
  *(_QWORD *)v2 = &CLinearGradientBrush::`vftable'{for `CContent'};
  *(_QWORD *)(v2 + 104) = &CLinearGradientBrush::`vftable'{for `IAtlasEntryOwner'};
  *(_QWORD *)(v2 + 112) = &CRadialGradientBrush::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)(v2 + 240) = 0LL;
  *(_DWORD *)(v2 + 244) = 0;
  *(_DWORD *)(v2 + 252) = 0;
  return (CLinearGradientBrush *)v2;
}

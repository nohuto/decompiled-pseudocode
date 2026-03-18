/*
 * XREFs of ??0CRadialGradientBrush@@QEAA@PEAVCComposition@@@Z @ 0x1801DE1D8
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800DB07C (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CGradientBrush@@IEAA@PEAVCComposition@@_N@Z @ 0x1801DE2B8 (--0CGradientBrush@@IEAA@PEAVCComposition@@_N@Z.c)
 */

CRadialGradientBrush *__fastcall CRadialGradientBrush::CRadialGradientBrush(
        CRadialGradientBrush *this,
        struct CComposition *a2)
{
  __int64 v2; // rcx
  CRadialGradientBrush *result; // rax

  CGradientBrush::CGradientBrush(this, a2, 0);
  *(_QWORD *)(v2 + 72) = &CBackdropBrush::`vftable'{for `IBrushChangeNotification'};
  *(_QWORD *)v2 = &CRadialGradientBrush::`vftable'{for `CContent'};
  *(_QWORD *)(v2 + 104) = &CRadialGradientBrush::`vftable'{for `IAtlasEntryOwner'};
  *(_QWORD *)(v2 + 112) = &CRadialGradientBrush::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)(v2 + 240) = 0LL;
  *(_DWORD *)(v2 + 248) = 1056964608;
  *(_DWORD *)(v2 + 252) = 1056964608;
  *(_DWORD *)(v2 + 256) = 1056964608;
  *(_QWORD *)(v2 + 260) = 1056964608LL;
  result = (CRadialGradientBrush *)v2;
  *(_DWORD *)(v2 + 268) = 0;
  *(_BYTE *)(v2 + 96) = 1;
  return result;
}

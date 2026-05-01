/*
 * XREFs of ?RuntimeClassInitialize@CGlyphButtonElement@@QEAAJGW4GlyphButtonFlags@@AEBUGlyphButtonMetrics@@IPEAUIWeakReference@WeakReference@@PEAUIDWriteTextFormat@@PEAUISwitchThumbnailFactory@@@Z @ 0x1804D1BC4
 * Callers:
 *     ??$MakeAndInitialize@VCGlyphButtonElement@@V1@AEAGAEAW4GlyphButtonFlags@@AEBUGlyphButtonMetrics@@AEAIAEAPEAUIWeakReference@WeakReference@@AEAPEAUIDWriteTextFormat@@AEAPEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJPEAPEAVCGlyphButtonElement@@AEAGAEAW4GlyphButtonFlags@@AEBUGlyphButtonMetrics@@AEAIAEAPEAUIWeakReference@WeakReference@@AEAPEAUIDWriteTextFormat@@AEAPEAUISwitchThumbnailFactory@@@Z @ 0x1804D1298 (--$MakeAndInitialize@VCGlyphButtonElement@@V1@AEAGAEAW4GlyphButtonFlags@@AEBUGlyphButtonMetrics@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UISwitchThumbnailFactory@@@WRL@Microsoft@@QEAAAEAV012@PEAUISwitchThumbnailFactory@@@Z @ 0x1804C16F4 (--4-$ComPtr@UISwitchThumbnailFactory@@@WRL@Microsoft@@QEAAAEAV012@PEAUISwitchThumbnailFactory@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGlyphButtonElement::RuntimeClassInitialize(
        __int64 a1,
        __int16 a2,
        int a3,
        _OWORD *a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // rsi
  __int64 (__fastcall *v10)(__int64, _QWORD, __int64, GUID *, __int64); // rdi
  int v11; // eax
  unsigned int v12; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_WORD *)(a1 + 232) = a2;
  *(_DWORD *)(a1 + 364) = a3;
  *(_OWORD *)(a1 + 236) = *a4;
  *(_OWORD *)(a1 + 252) = a4[1];
  *(_OWORD *)(a1 + 268) = a4[2];
  *(_OWORD *)(a1 + 284) = a4[3];
  *(_OWORD *)(a1 + 300) = a4[4];
  *(_OWORD *)(a1 + 316) = a4[5];
  *(_OWORD *)(a1 + 332) = a4[6];
  *(_OWORD *)(a1 + 348) = a4[7];
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 384), a6);
  Microsoft::WRL::ComPtr<ISwitchThumbnailFactory>::operator=((__int64 *)(a1 + 376), a8);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 368), a7);
  v9 = *(_QWORD *)(a1 + 376);
  *(_DWORD *)(a1 + 408) = a5;
  v10 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64))(*(_QWORD *)v9 + 112LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 88));
  v11 = v10(v9, 0LL, 0x100000001LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, a1 + 88);
  v12 = v11;
  if ( v11 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x49,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\glyphbuttonelement.cpp",
      (const char *)(unsigned int)v11);
  return v12;
}

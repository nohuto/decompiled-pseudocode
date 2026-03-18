/*
 * XREFs of ?CopyFrontToBackBuffer@CConversionSwapChain@@UEAAJXZ @ 0x180063990
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyRenderedRect@COverlaySwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18002C7D0 (-NotifyRenderedRect@COverlaySwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800615A0 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?CopyFrontToBackBuffer@COverlaySwapChain@@UEAAJXZ @ 0x180063B90 (-CopyFrontToBackBuffer@COverlaySwapChain@@UEAAJXZ.c)
 *     ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ @ 0x180063EA4 (-BeginIterator@CRegion@FastRegion@@QEBA-AVIterator@12@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CConversionSwapChain::CopyFrontToBackBuffer(CConversionSwapChain *this)
{
  int v1; // eax
  __int64 v3; // rdx
  FastRegion::Internal::CRgnData *v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  int v8[4]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v9[8]; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v10; // [rsp+48h] [rbp-30h]
  int *v11; // [rsp+50h] [rbp-28h]
  __int64 v12; // [rsp+58h] [rbp-20h]
  int v13; // [rsp+60h] [rbp-18h]

  v1 = *((_DWORD *)this + 129);
  if ( !v1 || v1 == 3 )
  {
    FastRegion::CRegion::BeginIterator((char *)this + 776, v9);
    while ( (unsigned __int64)v11 < v10 )
    {
      v8[1] = *v11;
      v8[3] = v11[2];
      v3 = 2 * v13;
      v8[0] = *(_DWORD *)(v12 + 4 * v3);
      v8[2] = *(_DWORD *)(v12 + 4 * v3 + 4);
      COverlaySwapChain::NotifyRenderedRect(this, v8);
      FastRegion::Internal::CRgnData::StepIterator(v4, (struct FastRegion::CRegion::Iterator *)v9);
    }
  }
  if ( ((*((_DWORD *)this + 129) - 1) & 0xFFFFFFFD) == 0 && *((_BYTE *)this + 880) )
    COverlaySwapChain::NotifyRenderedRect(this, (int *)this + 216);
  v5 = COverlaySwapChain::CopyFrontToBackBuffer(this);
  v6 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x9Eu, 0LL);
  return v6;
}

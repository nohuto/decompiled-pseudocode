/*
 * XREFs of ?Draw@CInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1802A63D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePresentData@@@Z @ 0x1800781CC (--$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePrese.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetD2DInk@CInk@@QEAAJPEAVCD3DDevice@@PEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x1802A6758 (-GetD2DInk@CInk@@QEAAJPEAVCD3DDevice@@PEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInk::Draw(
        CInk *this,
        struct CD3DDevice **a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  int D2DInk; // eax
  unsigned int v7; // ebx
  int v8; // eax
  struct ID2D1InkStyle *v10; // [rsp+30h] [rbp-18h] BYREF
  struct ID2D1Ink *v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = 0LL;
  v10 = 0LL;
  D2DInk = CInk::GetD2DInk(this, a2[5], &v11, &v10);
  v7 = D2DInk;
  if ( D2DInk < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, D2DInk, 0xF3u, 0LL);
  }
  else
  {
    v8 = (*((__int64 (__fastcall **)(char *, struct ID2D1Ink *, char *, struct ID2D1InkStyle *))a2[2] + 7))(
           (char *)a2 + 16,
           v11,
           (char *)this + 128,
           v10);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0xF5u, 0LL);
  }
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>((__int64)v11);
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>((__int64)v10);
  return v7;
}

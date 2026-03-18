/*
 * XREFs of ?CreateResource@CInk@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DInk@@@Z @ 0x1802A629C
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DInk@@VCInk@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DInk@@@Z @ 0x1802A648C (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DInk@@VCInk@@@@QEAAJPEAVCD3DDevice@@PEAPEA.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePresentData@@@Z @ 0x1800781CC (--$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePrese.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x1802A6840 (-GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 *     ?CreateD2DInk@CD2DContext@@UEAAJAEBUD2D1_INK_POINT@@AEBUD2D1_INK_STYLE_PROPERTIES@@PEAPEAVCD2DInk@@@Z @ 0x1802C4CD0 (-CreateD2DInk@CD2DContext@@UEAAJAEBUD2D1_INK_POINT@@AEBUD2D1_INK_STYLE_PROPERTIES@@PEAPEAVCD2DIn.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInk::CreateResource(CInk *this, struct CD3DDevice *a2, struct CD2DInk **a3)
{
  struct ID2D1Ink *v5; // rsi
  int v6; // eax
  unsigned int v7; // ebx
  struct CD2DInk *v8; // rdi
  int ID2D1InkAndInkStyle; // eax
  int v10; // eax
  struct ID2D1Ink *v12; // [rsp+60h] [rbp+8h] BYREF
  CD2DInk *v13; // [rsp+68h] [rbp+10h] BYREF
  struct ID2D1InkStyle *v14; // [rsp+78h] [rbp+20h] BYREF

  v13 = 0LL;
  v5 = 0LL;
  v14 = 0LL;
  v12 = 0LL;
  v6 = CD2DContext::CreateD2DInk(
         (struct CD3DDevice *)((char *)a2 + 16),
         (const struct D2D1_INK_POINT *)((char *)this + 176),
         (const struct D2D1_INK_STYLE_PROPERTIES *)((char *)this + 188),
         &v13);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x12Eu, 0LL);
    v8 = v13;
  }
  else
  {
    v8 = v13;
    ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(v13, &v12, &v14);
    v7 = ID2D1InkAndInkStyle;
    if ( ID2D1InkAndInkStyle < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ID2D1InkAndInkStyle, 0x130u, 0LL);
      v5 = v12;
    }
    else
    {
      v5 = v12;
      v10 = (*(__int64 (__fastcall **)(struct ID2D1Ink *, _QWORD, _QWORD))(*(_QWORD *)v12 + 48LL))(
              v12,
              *((_QWORD *)this + 18),
              *((unsigned int *)this + 42));
      v7 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x131u, 0LL);
      }
      else
      {
        *a3 = v8;
        v8 = 0LL;
      }
    }
  }
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>((__int64)v5);
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>((__int64)v14);
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>((__int64)v8);
  return v7;
}

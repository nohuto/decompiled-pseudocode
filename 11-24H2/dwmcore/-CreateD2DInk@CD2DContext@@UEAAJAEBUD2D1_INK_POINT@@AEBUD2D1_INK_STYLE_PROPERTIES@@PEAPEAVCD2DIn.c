/*
 * XREFs of ?CreateD2DInk@CD2DContext@@UEAAJAEBUD2D1_INK_POINT@@AEBUD2D1_INK_STYLE_PROPERTIES@@PEAPEAVCD2DInk@@@Z @ 0x1802BB670
 * Callers:
 *     ?CreateResource@CInk@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DInk@@@Z @ 0x18029C51C (-CreateResource@CInk@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DInk@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePresentData@@@Z @ 0x180024308 (--$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePrese.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD2DContext@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x1800F58F4 (-TranslateDXGIorD3DErrorInContext@CD2DContext@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?Create@CD2DInk@@SAJPEAVCD2DResourceManager@@PEAUID2D1Ink@@PEAUID2D1InkStyle@@PEAPEAV1@@Z @ 0x1802CCE4C (-Create@CD2DInk@@SAJPEAVCD2DResourceManager@@PEAUID2D1Ink@@PEAUID2D1InkStyle@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DContext::CreateD2DInk(
        CD2DContext *this,
        const struct D2D1_INK_POINT *a2,
        const struct D2D1_INK_STYLE_PROPERTIES *a3,
        struct CD2DInk **a4)
{
  __int64 v4; // rax
  int v8; // ebx
  int v9; // eax
  int v10; // r8d
  unsigned int v12; // [rsp+20h] [rbp-28h]
  struct ID2D1InkStyle *v13; // [rsp+30h] [rbp-18h] BYREF
  struct ID2D1Ink *v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = 0LL;
  v4 = (__int64)this + 1096;
  v13 = 0LL;
  if ( !this )
    v4 = 1112LL;
  if ( !*(_DWORD *)v4 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, const struct D2D1_INK_STYLE_PROPERTIES *, struct ID2D1InkStyle **))(**((_QWORD **)this + 25) + 768LL))(
           *((_QWORD *)this + 25),
           a3,
           &v13);
    v8 = v9;
    if ( v9 < 0 )
    {
      v12 = 337;
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, const struct D2D1_INK_POINT *, struct ID2D1Ink **))(**((_QWORD **)this + 25)
                                                                                                + 760LL))(
             *((_QWORD *)this + 25),
             a2,
             &v14);
      v8 = v9;
      if ( v9 < 0 )
      {
        v12 = 339;
      }
      else
      {
        v9 = CD2DInk::Create(*((struct CD2DResourceManager **)this + 21), v14, v13, a4);
        v8 = v9;
        if ( v9 >= 0 )
          goto LABEL_12;
        v12 = 341;
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, v12, 0LL);
    goto LABEL_12;
  }
  v8 = -2003304307;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304307, 0x14Fu, 0LL);
LABEL_12:
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>((__int64)v14);
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>((__int64)v13);
  return CD2DContext::TranslateDXGIorD3DErrorInContext((__int64)this, v8, v10);
}

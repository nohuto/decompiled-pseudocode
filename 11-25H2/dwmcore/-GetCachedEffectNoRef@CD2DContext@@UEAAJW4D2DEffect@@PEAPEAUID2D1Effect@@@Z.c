/*
 * XREFs of ?GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z @ 0x180118110
 * Callers:
 *     ?DrawMesh2D@CGlobalDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x1801164E0 (-DrawMesh2D@CGlobalDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z.c)
 *     ?RenderLayer@CColorTransformLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x180117910 (-RenderLayer@CColorTransformLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePresentData@@@Z @ 0x1800781CC (--$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePrese.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD2DContext@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180118204 (-TranslateDXGIorD3DErrorInContext@CD2DContext@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DContext::GetCachedEffectNoRef(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 v4; // rax
  unsigned int v6; // ebx
  __int64 v7; // r14
  __int64 v8; // rax
  int v10; // eax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  *a3 = 0LL;
  v4 = a1 + 1096;
  if ( !a1 )
    v4 = 1112LL;
  if ( *(_DWORD *)v4 )
  {
    v6 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304307, 0x58Bu, 0LL);
    goto LABEL_6;
  }
  v6 = 0;
  v7 = a1 + 8LL * a2;
  v8 = *(_QWORD *)(v7 + 216);
  if ( !v8 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64 *))(**(_QWORD **)(a1 + 200) + 504LL))(
            *(_QWORD *)(a1 + 200),
            (&off_1803073A8)[2 * a2],
            &v11);
    v6 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x590u, 0LL);
      goto LABEL_6;
    }
    v8 = v11;
    v11 = 0LL;
    *(_QWORD *)(v7 + 216) = v8;
  }
  *a3 = v8;
LABEL_6:
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>(v11);
  return CD2DContext::TranslateDXGIorD3DErrorInContext(a1, v6);
}

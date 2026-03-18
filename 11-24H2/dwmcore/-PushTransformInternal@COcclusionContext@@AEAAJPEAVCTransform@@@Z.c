/*
 * XREFs of ?PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z @ 0x1801A9A4C
 * Callers:
 *     ?PushTransform@COcclusionContext@@UEAAJPEAVCTransform@@@Z @ 0x1801A99C0 (-PushTransform@COcclusionContext@@UEAAJPEAVCTransform@@@Z.c)
 * Callees:
 *     ?Push@?$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAJAEBW4StackStateType@COcclusionContext@@@Z @ 0x18001DB70 (-Push@-$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAJAEBW4StackStateTyp.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x1800ABD60 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z @ 0x1801A9AE0 (-Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z.c)
 */

__int64 __fastcall COcclusionContext::PushTransformInternal(COcclusionContext *this, struct CTransform *a2)
{
  const struct CMILMatrix *Matrix; // rax
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  int v8; // [rsp+40h] [rbp+8h] BYREF

  Matrix = CTransform3D::GetMatrix(a2, 0LL);
  v4 = CMatrixStack::Push((COcclusionContext *)((char *)this + 32), Matrix, 1);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x613u, 0LL);
  }
  else
  {
    v8 = 1;
    v6 = CWatermarkStack<enum COcclusionContext::StackStateType,64,2,10>::Push((__int64)this + 1752, &v8);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x614u, 0LL);
  }
  return v5;
}

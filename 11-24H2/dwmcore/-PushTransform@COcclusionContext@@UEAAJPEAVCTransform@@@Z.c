/*
 * XREFs of ?PushTransform@COcclusionContext@@UEAAJPEAVCTransform@@@Z @ 0x1801A99C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x180072B00 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x1800ABD60 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z @ 0x1801A9A4C (-PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z.c)
 */

__int64 __fastcall COcclusionContext::PushTransform(COcclusionContext *this, struct CTransform *a2)
{
  unsigned int v2; // edi
  CMILMatrix *Matrix; // rax
  int v7; // eax

  v2 = 0;
  if ( !*((_DWORD *)this + 428)
    && a2
    && (Matrix = CTransform3D::GetMatrix(a2, 0LL), CMILMatrix::Is2DAxisAlignedPreserving(Matrix)) )
  {
    v7 = COcclusionContext::PushTransformInternal(this, a2);
    v2 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x4F5u, 0LL);
  }
  else
  {
    ++*((_DWORD *)this + 428);
  }
  return v2;
}

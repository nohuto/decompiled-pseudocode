/*
 * XREFs of ?PushTransform@COcclusionContext@@UEAAJPEAVCTransform@@@Z @ 0x1800267A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180019310 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z @ 0x18002682C (-PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x180091460 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
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
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x4E0u, 0LL);
  }
  else
  {
    ++*((_DWORD *)this + 428);
  }
  return v2;
}

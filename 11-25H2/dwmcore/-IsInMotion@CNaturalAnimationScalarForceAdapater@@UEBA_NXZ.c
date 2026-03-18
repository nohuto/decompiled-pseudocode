/*
 * XREFs of ?IsInMotion@CNaturalAnimationScalarForceAdapater@@UEBA_NXZ @ 0x1802B9BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D64C (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetTargetResource@?$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ @ 0x180060BE0 (-GetTargetResource@-$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ.c)
 *     ?IsInMotion@CScalarForceEvaluator@@QEBA_NXZ @ 0x1801CCB94 (-IsInMotion@CScalarForceEvaluator@@QEBA_NXZ.c)
 *     ?GetVector3Force@CNaturalAnimation@@QEBAXPEAPEAVCVector3Force@@@Z @ 0x1802B9B70 (-GetVector3Force@CNaturalAnimation@@QEBAXPEAPEAVCVector3Force@@@Z.c)
 */

char __fastcall CNaturalAnimationScalarForceAdapater::IsInMotion(CNaturalAnimationScalarForceAdapater *this)
{
  __int64 v1; // rcx
  char v2; // bl
  CNaturalAnimation *TargetResource; // rdi
  __int64 v4; // rdx
  __int64 v5; // rdx
  struct CVector3Force *v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 4);
  v2 = 0;
  v7 = 0LL;
  if ( v1 )
    TargetResource = (CNaturalAnimation *)CWeakReference<CGdiSpriteBitmap>::GetTargetResource(v1);
  else
    TargetResource = 0LL;
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v7);
  CNaturalAnimation::GetVector3Force(TargetResource, &v7);
  if ( CScalarForceEvaluator::IsInMotion((struct CVector3Force *)((char *)v7 + 16))
    || CScalarForceEvaluator::IsInMotion((CScalarForceEvaluator *)(v4 + 84))
    || CScalarForceEvaluator::IsInMotion((CScalarForceEvaluator *)(v5 + 152)) )
  {
    v2 = 1;
  }
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v7);
  return v2;
}

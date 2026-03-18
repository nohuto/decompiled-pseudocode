/*
 * XREFs of ?GetFinalValue@CNaturalAnimationScalarForceAdapater@@UEBAMM@Z @ 0x1802B9AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D64C (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetTargetResource@?$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ @ 0x180060BE0 (-GetTargetResource@-$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     ?GetVector3Force@CNaturalAnimation@@QEBAXPEAPEAVCVector3Force@@@Z @ 0x1802B9B70 (-GetVector3Force@CNaturalAnimation@@QEBAXPEAPEAVCVector3Force@@@Z.c)
 */

float __fastcall CNaturalAnimationScalarForceAdapater::GetFinalValue(
        CNaturalAnimationScalarForceAdapater *this,
        float a2)
{
  __int64 v3; // rcx
  CNaturalAnimation *TargetResource; // rdi
  int v5; // ecx
  float v6; // xmm6_4
  void *retaddr; // [rsp+38h] [rbp+0h]
  struct CVector3Force *v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
    TargetResource = (CNaturalAnimation *)CWeakReference<CGdiSpriteBitmap>::GetTargetResource(v3);
  else
    TargetResource = 0LL;
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v9);
  CNaturalAnimation::GetVector3Force(TargetResource, &v9);
  v5 = *((_DWORD *)this + 4);
  if ( v5 )
  {
    if ( v5 != 1 )
      ModuleFailFastForHRESULT(0x80004005, retaddr);
    v6 = *((float *)v9 + 86);
  }
  else
  {
    v6 = *((float *)v9 + 85);
  }
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v9);
  return v6;
}

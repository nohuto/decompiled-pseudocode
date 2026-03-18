/*
 * XREFs of ?GetCurrentState@CNaturalAnimationScalarForceAdapater@@UEBA?BUIntegrationState@@XZ @ 0x1802AFE20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTargetResource@?$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ @ 0x1800163B0 (-GetTargetResource@-$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18008E308 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ?GetVector3Force@CNaturalAnimation@@QEBAXPEAPEAVCVector3Force@@@Z @ 0x1802AFF80 (-GetVector3Force@CNaturalAnimation@@QEBAXPEAPEAVCVector3Force@@@Z.c)
 */

__int64 __fastcall CNaturalAnimationScalarForceAdapater::GetCurrentState(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  CNaturalAnimation *TargetResource; // rsi
  int v6; // ecx
  __int128 v7; // xmm0
  int v8; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct CVector3Force *v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0LL;
  v3 = *(_QWORD *)(a1 + 32);
  if ( v3 )
    TargetResource = (CNaturalAnimation *)CWeakReference<CGdiSpriteBitmap>::GetTargetResource(v3);
  else
    TargetResource = 0LL;
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v11);
  CNaturalAnimation::GetVector3Force(TargetResource, &v11);
  v6 = *(_DWORD *)(a1 + 16);
  *(_OWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  if ( v6 )
  {
    if ( v6 != 1 )
      ModuleFailFastForHRESULT(0x80004005, retaddr);
    v7 = *((_OWORD *)v11 + 6);
    v8 = *((_DWORD *)v11 + 28);
  }
  else
  {
    v7 = *(_OWORD *)((char *)v11 + 28);
    v8 = *((_DWORD *)v11 + 11);
  }
  *(_OWORD *)a2 = v7;
  *(_DWORD *)(a2 + 16) = v8;
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v11);
  return a2;
}

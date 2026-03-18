/*
 * XREFs of ?Update@CNaturalAnimationScalarForceAdapater@@UEAAMMPEAVCExpressionValueStack@@_K@Z @ 0x1802B9C50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTargetResource@?$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ @ 0x180060BE0 (-GetTargetResource@-$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18015F7F0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

float __fastcall CNaturalAnimationScalarForceAdapater::Update(
        CNaturalAnimationScalarForceAdapater *this,
        float a2,
        struct CExpressionValueStack *a3,
        __int64 a4)
{
  __int64 TargetResource; // rcx
  signed int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  float *v12; // rax
  float result; // xmm0_4
  void *retaddr; // [rsp+38h] [rbp+0h]
  char v15; // [rsp+40h] [rbp+8h] BYREF

  v15 = 0;
  TargetResource = *((_QWORD *)this + 4);
  if ( TargetResource )
    TargetResource = CWeakReference<CGdiSpriteBitmap>::GetTargetResource(TargetResource);
  v8 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, __int64, char *))(*(_QWORD *)TargetResource
                                                                                           + 248LL))(
         TargetResource,
         a3,
         a4,
         &v15);
  if ( v8 < 0 )
    ModuleFailFastForHRESULT(v8, retaddr);
  v9 = *((_QWORD *)this + 4);
  if ( v9 )
    v10 = CWeakReference<CGdiSpriteBitmap>::GetTargetResource(v9);
  else
    v10 = 0LL;
  v11 = *(_DWORD *)(v10 + 160);
  if ( v11 == 18 )
  {
    result = *(float *)CExpressionValueStack::PeekStackValue(a3, 0);
  }
  else
  {
    if ( v11 != 35 )
      ModuleFailFastForHRESULT(0x80004005, retaddr);
    v12 = (float *)CExpressionValueStack::PeekStackValue(a3, 0);
    result = *v12;
    if ( *((_DWORD *)this + 4) )
      result = v12[1];
  }
  --*((_DWORD *)a3 + 2);
  return result;
}

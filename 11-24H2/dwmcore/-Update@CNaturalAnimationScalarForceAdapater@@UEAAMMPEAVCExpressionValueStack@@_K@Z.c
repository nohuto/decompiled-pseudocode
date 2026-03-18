/*
 * XREFs of ?Update@CNaturalAnimationScalarForceAdapater@@UEAAMMPEAVCExpressionValueStack@@_K@Z @ 0x1802B0060
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTargetResource@?$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ @ 0x1800163B0 (-GetTargetResource@-$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18015B3A0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

float __fastcall CNaturalAnimationScalarForceAdapater::Update(
        CNaturalAnimationScalarForceAdapater *this,
        float a2,
        struct CExpressionValueStack *a3,
        __int64 a4)
{
  __int64 TargetResource; // rcx
  float v8; // xmm6_4
  signed int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  struct CExpressionValue *v13; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]
  char v16; // [rsp+50h] [rbp+8h] BYREF

  TargetResource = *((_QWORD *)this + 4);
  v16 = 0;
  v8 = 0.0;
  if ( TargetResource )
    TargetResource = CWeakReference<CGdiSpriteBitmap>::GetTargetResource(TargetResource);
  v9 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, __int64, char *))(*(_QWORD *)TargetResource
                                                                                           + 248LL))(
         TargetResource,
         a3,
         a4,
         &v16);
  if ( v9 < 0 )
    ModuleFailFastForHRESULT(v9, retaddr);
  if ( v9 != 1 )
  {
    v10 = *((_QWORD *)this + 4);
    if ( v10 )
      v11 = CWeakReference<CGdiSpriteBitmap>::GetTargetResource(v10);
    else
      v11 = 0LL;
    v12 = *(_DWORD *)(v11 + 160);
    if ( v12 == 18 )
    {
      v8 = *(float *)CExpressionValueStack::PeekStackValue(a3, 0);
    }
    else
    {
      if ( v12 != 35 )
        ModuleFailFastForHRESULT(0x80004005, retaddr);
      v13 = CExpressionValueStack::PeekStackValue(a3, 0);
      v8 = *(float *)v13;
      if ( *((_DWORD *)this + 4) )
        v8 = *((float *)v13 + 1);
    }
    --*((_DWORD *)a3 + 2);
  }
  return v8;
}

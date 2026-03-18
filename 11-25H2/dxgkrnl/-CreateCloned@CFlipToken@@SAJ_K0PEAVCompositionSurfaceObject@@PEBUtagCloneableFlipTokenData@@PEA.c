/*
 * XREFs of ?CreateCloned@CFlipToken@@SAJ_K0PEAVCompositionSurfaceObject@@PEBUtagCloneableFlipTokenData@@PEAPEAV1@@Z @ 0x140099B4C
 * Callers:
 *     ?InsertCompletedToken@CompositionSurfaceObject@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x14009AAB0 (-InsertCompletedToken@CompositionSurfaceObject@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0CFlipToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z @ 0x140030984 (--0CFlipToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z.c)
 *     ?InitializeCloned@CFlipToken@@IEAAJ_KPEBUtagCloneableFlipTokenData@@@Z @ 0x140099C04 (-InitializeCloned@CFlipToken@@IEAAJ_KPEBUtagCloneableFlipTokenData@@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CFlipToken::CreateCloned(
        __int64 a1,
        unsigned __int64 a2,
        struct CompositionSurfaceObject *a3,
        const struct tagCloneableFlipTokenData *a4,
        struct CFlipToken **a5)
{
  CFlipToken *v9; // rax
  CFlipToken *v10; // rax
  struct CFlipToken *v11; // rbx
  int v12; // edi

  *a5 = 0LL;
  v9 = (CFlipToken *)operator new(0x268uLL, 0x6F744D54u, 256LL, (__int64)a4);
  if ( v9 && (v10 = CFlipToken::CFlipToken(v9, a1, a3), (v11 = v10) != 0LL) )
  {
    v12 = CFlipToken::InitializeCloned(v10, a2, a4);
    if ( v12 < 0 )
      (**(void (__fastcall ***)(struct CFlipToken *, __int64))v11)(v11, 1LL);
    else
      *a5 = v11;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v12;
}

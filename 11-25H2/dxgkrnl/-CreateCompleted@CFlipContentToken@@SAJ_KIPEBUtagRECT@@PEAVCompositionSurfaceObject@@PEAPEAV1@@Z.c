/*
 * XREFs of ?CreateCompleted@CFlipContentToken@@SAJ_KIPEBUtagRECT@@PEAVCompositionSurfaceObject@@PEAPEAV1@@Z @ 0x14009F1E8
 * Callers:
 *     ?CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@PEAVCFlipPropertySet@@_NAEAU_LIST_ENTRY@@@Z @ 0x14004336C (-CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@PEAVCFlipProp.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0CFlipContentToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z @ 0x140039184 (--0CFlipContentToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z.c)
 *     ?Initialize@CFlipContentToken@@QEAAJIPEBUtagRECT@@@Z @ 0x14009F2C8 (-Initialize@CFlipContentToken@@QEAAJIPEBUtagRECT@@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CFlipContentToken::CreateCompleted(
        unsigned __int64 a1,
        unsigned int a2,
        const struct tagRECT *a3,
        struct CompositionSurfaceObject *a4,
        struct CFlipContentToken **a5)
{
  CFlipContentToken *v9; // rax
  CFlipContentToken *v10; // rax
  struct CFlipContentToken *v11; // rbx
  int v12; // edi

  *a5 = 0LL;
  v9 = (CFlipContentToken *)operator new(0x108uLL, 0x6F744D54u, 256LL, (__int64)a4);
  if ( v9 && (v10 = CFlipContentToken::CFlipContentToken(v9, a1, a4), (v11 = v10) != 0LL) )
  {
    v12 = CFlipContentToken::Initialize(v10, a2, a3);
    if ( v12 < 0 )
    {
      (**(void (__fastcall ***)(struct CFlipContentToken *, __int64))v11)(v11, 1LL);
    }
    else
    {
      (*(void (__fastcall **)(struct CFlipContentToken *))(*(_QWORD *)v11 + 24LL))(v11);
      *a5 = v11;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v12;
}

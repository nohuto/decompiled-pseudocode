/*
 * XREFs of ?Create@CDisableScanoutToken@@SAJPEAVCompositionSurfaceObject@@_KPEAPEAV1@@Z @ 0x14009F0F4
 * Callers:
 *     ?ClearCompositionSurfaceBinding@CContentResource@@QEAAJPEAPEAVCDisableScanoutToken@@@Z @ 0x140062A8C (-ClearCompositionSurfaceBinding@CContentResource@@QEAAJPEAPEAVCDisableScanoutToken@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0CToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z @ 0x140039200 (--0CToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CDisableScanoutToken::Create(
        struct CompositionSurfaceObject *a1,
        __int64 a2,
        struct CDisableScanoutToken **a3,
        __int64 a4)
{
  CToken *v7; // rax
  struct CDisableScanoutToken *v8; // rbx
  int v9; // edi
  __int64 v10; // rax

  *a3 = 0LL;
  v7 = (CToken *)operator new(0x68uLL, 0x6F744D54u, 256LL, a4);
  v8 = v7;
  if ( v7 )
  {
    CToken::CToken(v7, a2, a1);
    *(_QWORD *)v8 = &CDisableScanoutToken::`vftable';
    v9 = ((__int64 (__fastcall *)(struct CDisableScanoutToken *))*(&CDisableScanoutToken::`vftable' + 1))(v8);
    v10 = *(_QWORD *)v8;
    if ( v9 < 0 )
    {
      (*(void (__fastcall **)(struct CDisableScanoutToken *))(v10 + 56))(v8);
      (**(void (__fastcall ***)(struct CDisableScanoutToken *, __int64))v8)(v8, 1LL);
    }
    else
    {
      (*(void (__fastcall **)(struct CDisableScanoutToken *))(v10 + 24))(v8);
      *a3 = v8;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v9;
}

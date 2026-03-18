/*
 * XREFs of ?Create@CDisableScanoutToken@@SAJPEAVCompositionSurfaceObject@@_KPEAPEAV1@@Z @ 0x1400A1454
 * Callers:
 *     ?ClearCompositionSurfaceBinding@CContentResource@@QEAAJPEAPEAVCDisableScanoutToken@@@Z @ 0x14006337C (-ClearCompositionSurfaceBinding@CContentResource@@QEAAJPEAPEAVCDisableScanoutToken@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0CToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z @ 0x140039010 (--0CToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CDisableScanoutToken::Create(
        struct CompositionSurfaceObject *a1,
        __int64 a2,
        struct CDisableScanoutToken **a3)
{
  CToken *v6; // rax
  struct CDisableScanoutToken *v7; // rbx
  int v8; // edi
  __int64 v9; // rax

  *a3 = 0LL;
  v6 = (CToken *)operator new(0x68uLL, 0x6F744D54u, 256LL);
  v7 = v6;
  if ( v6 )
  {
    CToken::CToken(v6, a2, a1);
    *(_QWORD *)v7 = &CDisableScanoutToken::`vftable';
    v8 = ((__int64 (__fastcall *)(struct CDisableScanoutToken *))*(&CDisableScanoutToken::`vftable' + 1))(v7);
    v9 = *(_QWORD *)v7;
    if ( v8 < 0 )
    {
      (*(void (__fastcall **)(struct CDisableScanoutToken *))(v9 + 56))(v7);
      (**(void (__fastcall ***)(struct CDisableScanoutToken *, __int64))v7)(v7, 1LL);
    }
    else
    {
      (*(void (__fastcall **)(struct CDisableScanoutToken *))(v9 + 24))(v7);
      *a3 = v7;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v8;
}

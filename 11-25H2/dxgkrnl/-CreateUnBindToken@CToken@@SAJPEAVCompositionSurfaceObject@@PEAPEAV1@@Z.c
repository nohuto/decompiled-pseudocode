/*
 * XREFs of ?CreateUnBindToken@CToken@@SAJPEAVCompositionSurfaceObject@@PEAPEAV1@@Z @ 0x140098D84
 * Callers:
 *     ?AddUnBindToken@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z @ 0x140097EF0 (-AddUnBindToken@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0CToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z @ 0x140039200 (--0CToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CToken::CreateUnBindToken(
        struct CompositionSurfaceObject *a1,
        struct CToken **a2,
        __int64 a3,
        __int64 a4)
{
  CToken *v6; // rax
  CToken *v7; // rax
  struct CToken *v8; // rbx
  int v9; // edi
  void (__fastcall **v10)(_QWORD, _QWORD); // rax

  *a2 = 0LL;
  v6 = (CToken *)operator new(0x68uLL, 0x6F744D54u, 256LL, a4);
  if ( v6 && (v7 = CToken::CToken(v6, 0LL, a1), (v8 = v7) != 0LL) )
  {
    v9 = (*(__int64 (__fastcall **)(CToken *))(*(_QWORD *)v7 + 8LL))(v7);
    v10 = *(void (__fastcall ***)(_QWORD, _QWORD))v8;
    if ( v9 < 0 )
    {
      ((void (__fastcall *)(struct CToken *))v10[7])(v8);
      (**(void (__fastcall ***)(struct CToken *, __int64))v8)(v8, 1LL);
    }
    else
    {
      ((void (__fastcall *)(struct CToken *))v10[3])(v8);
      *a2 = v8;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v9;
}

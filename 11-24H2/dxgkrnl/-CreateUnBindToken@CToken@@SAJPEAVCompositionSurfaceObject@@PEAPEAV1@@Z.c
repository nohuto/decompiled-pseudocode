/*
 * XREFs of ?CreateUnBindToken@CToken@@SAJPEAVCompositionSurfaceObject@@PEAPEAV1@@Z @ 0x14009AED4
 * Callers:
 *     ?AddUnBindToken@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z @ 0x14009A120 (-AddUnBindToken@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0CToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z @ 0x140039010 (--0CToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CToken::CreateUnBindToken(struct CompositionSurfaceObject *a1, struct CToken **a2)
{
  CToken *v4; // rax
  CToken *v5; // rax
  struct CToken *v6; // rbx
  int v7; // edi
  void (__fastcall **v8)(_QWORD, _QWORD); // rax

  *a2 = 0LL;
  v4 = (CToken *)operator new(0x68uLL, 0x6F744D54u, 256LL);
  if ( v4 && (v5 = CToken::CToken(v4, 0LL, a1), (v6 = v5) != 0LL) )
  {
    v7 = (*(__int64 (__fastcall **)(CToken *))(*(_QWORD *)v5 + 8LL))(v5);
    v8 = *(void (__fastcall ***)(_QWORD, _QWORD))v6;
    if ( v7 < 0 )
    {
      ((void (__fastcall *)(struct CToken *))v8[7])(v6);
      (**(void (__fastcall ***)(struct CToken *, __int64))v6)(v6, 1LL);
    }
    else
    {
      ((void (__fastcall *)(struct CToken *))v8[3])(v6);
      *a2 = v6;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v7;
}

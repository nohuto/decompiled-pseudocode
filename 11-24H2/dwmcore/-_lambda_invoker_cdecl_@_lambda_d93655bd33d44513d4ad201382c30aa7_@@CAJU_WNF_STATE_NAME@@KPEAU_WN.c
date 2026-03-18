/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_d93655bd33d44513d4ad201382c30aa7_@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1802596D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall _lambda_d93655bd33d44513d4ad201382c30aa7_::_lambda_invoker_cdecl_(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        _QWORD *a4)
{
  __int64 v4; // rcx

  if ( (_DWORD)a2 )
  {
    v4 = a4[16];
    if ( !v4 )
      __fastfail(7u);
    (*(void (__fastcall **)(__int64, __int64, struct _WNF_TYPE_ID *))(*(_QWORD *)v4 + 32LL))(v4, a2, a3);
  }
  return 0LL;
}

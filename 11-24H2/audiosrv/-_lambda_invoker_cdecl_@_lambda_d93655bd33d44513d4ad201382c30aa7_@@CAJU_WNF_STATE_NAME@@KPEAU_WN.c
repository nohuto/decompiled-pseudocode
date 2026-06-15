/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_d93655bd33d44513d4ad201382c30aa7_@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800C7F50
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$function@$$A6AXXZ@wistd@@QEBAXXZ @ 0x1800C85A0 (--R-$function@$$A6AXXZ@wistd@@QEBAXXZ.c)
 */

__int64 __fastcall _lambda_d93655bd33d44513d4ad201382c30aa7_::_lambda_invoker_cdecl_(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        char *a4)
{
  if ( (_DWORD)a2 )
    wistd::function<void (void)>::operator()(a4 + 16, a2, a3);
  return 0LL;
}

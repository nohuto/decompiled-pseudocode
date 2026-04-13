/*
 * XREFs of ?__clone@?$__func@V_lambda_cc048563a57b57a885d4bf4143ff221c_@@$$A6AJPEA_W_KPEA_K@Z@__function@wistd@@UEBAXPEAV?$__base@$$A6AJPEA_W_KPEA_K@Z@23@@Z @ 0x1800A56C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void **__fastcall wistd::__function::__func<_lambda_cc048563a57b57a885d4bf4143ff221c_,long (wchar_t *,unsigned __int64,unsigned __int64 *)>::__clone(
        __int64 a1,
        __int64 a2)
{
  void **result; // rax

  result = &wistd::__function::__func<_lambda_cc048563a57b57a885d4bf4143ff221c_,long (wchar_t *,unsigned __int64,unsigned __int64 *)>::`vftable';
  *(_QWORD *)a2 = &wistd::__function::__func<_lambda_cc048563a57b57a885d4bf4143ff221c_,long (wchar_t *,unsigned __int64,unsigned __int64 *)>::`vftable';
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  return result;
}

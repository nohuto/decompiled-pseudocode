/*
 * XREFs of wistd::__function::__func__lambda_6aa3c142c77daea813d1cc0884a3b3db__void___cdecl(_SEB_EVENT_HEADER_const_&)_::__func__lambda_6aa3c142c77daea813d1cc0884a3b3db__void___cdecl(_SEB_EVENT_HEADER_const_&)_ @ 0x1802E0524
 * Callers:
 *     ?RegisterForEnergySaverStateChange@AcrylicPolicyManager@@AEAAJXZ @ 0x180113A28 (-RegisterForEnergySaverStateChange@AcrylicPolicyManager@@AEAAJXZ.c)
 *     wistd::__function::__func__lambda_6aa3c142c77daea813d1cc0884a3b3db__void___cdecl(_SEB_EVENT_HEADER_const_&)_::__move @ 0x1802E14A0 (wistd--__function--__func__lambda_6aa3c142c77daea813d1cc0884a3b3db__void___cdecl(_S_ea_1802E14A0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wistd::__function::__func__lambda_6aa3c142c77daea813d1cc0884a3b3db__void___cdecl__SEB_EVENT_HEADER_const____::__func__lambda_6aa3c142c77daea813d1cc0884a3b3db__void___cdecl__SEB_EVENT_HEADER_const____(
        _QWORD *a1,
        _QWORD *a2)
{
  *a1 = &off_18072C288;
  a1[1] = 0LL;
  if ( a1 + 1 != a2 )
  {
    a1[1] = *a2;
    *a2 = 0LL;
  }
  return a1;
}

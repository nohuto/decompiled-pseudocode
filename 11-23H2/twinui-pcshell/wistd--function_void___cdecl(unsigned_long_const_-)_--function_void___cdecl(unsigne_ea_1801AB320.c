/*
 * XREFs of wistd::function_void___cdecl(unsigned_long_const_&)_::function_void___cdecl(unsigned_long_const_&)___lambda_56f82e2d72bc142b92699b1566ad23a5__void_ @ 0x1801AB320
 * Callers:
 *     ?RegisterForPackageUpdatesWNF@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1800A2EF4 (-RegisterForPackageUpdatesWNF@CScreenClippingExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

_QWORD *__fastcall wistd::function_void___cdecl_unsigned_long_const____::function_void___cdecl_unsigned_long_const______lambda_56f82e2d72bc142b92699b1566ad23a5__void_(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v2; // r8
  __int64 *v3; // r9
  __int64 *v5; // rcx

  v2 = a1 + 1;
  a1[14] = 0LL;
  a1[1] = &off_1807C34B0;
  v3 = a1 + 3;
  v5 = a2 + 1;
  v2[1] = *a2;
  *v3 = 0LL;
  if ( v3 != a2 + 1 )
  {
    *v3 = *v5;
    *v5 = 0LL;
  }
  a1[14] = v2;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v5);
  return a1;
}

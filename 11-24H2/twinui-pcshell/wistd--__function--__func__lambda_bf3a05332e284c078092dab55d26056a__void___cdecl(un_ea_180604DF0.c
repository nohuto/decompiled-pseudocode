/*
 * XREFs of wistd::__function::__func__lambda_bf3a05332e284c078092dab55d26056a__void___cdecl(unsigned_long_const_&)_::operator() @ 0x180604DF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InitUserConfig@Theming@@YAXXZ @ 0x18010E724 (-InitUserConfig@Theming@@YAXXZ.c)
 *     ??$try_query@UIUnknown@@@?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@1@XZ @ 0x1805114C4 (--$try_query@UIUnknown@@@-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEBA-AV-.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wistd::__function::__func__lambda_bf3a05332e284c078092dab55d26056a__void___cdecl_unsigned_long_const____::operator()(
        __int64 a1,
        void *a2)
{
  __int64 v2; // rdx
  Theming *v3; // rcx
  void *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>::try_query<IUnknown>(
    (struct IWeakReference **)(a1 + 16),
    &v4);
  if ( v4 )
    Theming::InitUserConfig(v3, v2);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v4);
}

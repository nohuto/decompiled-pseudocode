/*
 * XREFs of _lambda_8c16e7598293d9a49fcaed3324cb1e66_::operator() @ 0x1805CD270
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_8c16e7598293d9a49fcaed3324cb1e66__bool_APP_LAYOUT_ENUM_ITEM_::_Do_call @ 0x1805CE790 (std--_Func_impl_no_alloc__lambda_8c16e7598293d9a49fcaed3324cb1e66__bool_APP_LAYOUT__ea_1805CE790.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009D028 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall lambda_8c16e7598293d9a49fcaed3324cb1e66_::operator()(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 *v4; // rcx
  unsigned __int64 **v5; // rbx
  int v6; // edx
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v8 = *(_QWORD *)(a2 + 16);
  v3 = v8;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v8);
  if ( (*(int (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v3 + 184LL))(v3, &v9) >= 0
    && !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 168LL))(*a1, v3) )
  {
    if ( (v4 = (__int64 *)a1[3], v5 = (unsigned __int64 **)(a1 + 2), !*v4)
      || (v6 = *((_DWORD *)a1 + 2), v6 == 1) && v9 < **v5
      || !v6 && v9 > **v5 )
    {
      Microsoft::WRL::ComPtr<IApplicationView>::operator=(v4, &v8);
      **v5 = v9;
    }
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v8);
  return 1;
}

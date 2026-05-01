/*
 * XREFs of ?GetUserSidString@KioskPositioner@@AEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAX@Z @ 0x1801FE4D4
 * Callers:
 *     ?LoadAssignedAccessConfiguration@KioskPositioner@@AEBA?AV?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@XZ @ 0x1801FE1D4 (-LoadAssignedAccessConfiguration@KioskPositioner@@AEBA-AV-$optional@UKioskPositionerConfiguratio.c)
 * Callees:
 *     ??$GetTokenInfoWrap@U_TOKEN_USER@@Uerr_exception_policy@wil@@$0A@@details@wil@@YA?AV?$unique_ptr@U_TOKEN_USER@@Utoken_info_deleter@details@wil@@@wistd@@PEAX@Z @ 0x18029C398 (--$GetTokenInfoWrap@U_TOKEN_USER@@Uerr_exception_policy@wil@@$0A@@details@wil@@YA-AV-$unique_ptr.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18029C3EC (-reset@-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_c.c)
 *     ??3@YAXPEAX@Z @ 0x1802D2320 (--3@YAXPEAX@Z.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18031DBA0 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
LPWSTR *__fastcall KioskPositioner::GetUserSidString(void *a1, LPWSTR *a2, __int64 a3)
{
  const char *v4; // r9
  void *v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *Block; // [rsp+40h] [rbp+8h] BYREF
  LPWSTR *v9; // [rsp+48h] [rbp+10h]

  v9 = a2;
  Block = a1;
  wil::details::GetTokenInfoWrap<_TOKEN_USER,wil::err_exception_policy,0>(&Block, a3);
  *a2 = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    a2,
    0LL);
  if ( !ConvertSidToStringSidW(*(PSID *)Block, a2) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x477,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      v4);
  v5 = Block;
  Block = 0LL;
  if ( v5 )
    operator delete(v5);
  return a2;
}

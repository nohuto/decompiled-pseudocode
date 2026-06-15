/*
 * XREFs of ?GetAssignedAccessTypeForUserWithoutGroup@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEBGPEAW4AssignedAccessType@234@@Z @ 0x18004AD1C
 * Callers:
 *     GetAssignedAccessTypeForUser @ 0x18001BE84 (GetAssignedAccessTypeForUser.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007BD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIAssignedAccessConfiguration@AssignedAccess@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A818 (--1-$com_ptr_t@UIAssignedAccessConfiguration@AssignedAccess@Internal@Windows@@Uerr_returncode_po.c)
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigurationHelper::FindUserInfoIf__lambda_661bc23c674c805837064d315685ee67___ @ 0x18004A978 (Windows--Internal--AssignedAccess--AssignedAccessConfigurationHelper--FindUserInfoIf__lambda_661.c)
 *     ?GetAssignedAccessConfiguration@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEAPEAUIAssignedAccessConfiguration@234@@Z @ 0x18004ACB4 (-GetAssignedAccessConfiguration@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEAPEAUIAs.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::AssignedAccess::AAManagerHelper::GetAssignedAccessTypeForUserWithoutGroup(
        Windows::Internal::AssignedAccess::AAManagerHelper *this,
        const unsigned __int16 *a2,
        enum Windows::Internal::AssignedAccess::AssignedAccessType *a3)
{
  int AssignedAccessConfiguration; // eax
  unsigned int v5; // ebx
  int UserInfoIf__lambda_661bc23c674c805837064d315685ee67; // eax
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  const unsigned __int16 *v10; // [rsp+48h] [rbp+28h] BYREF
  __int64 v11; // [rsp+50h] [rbp+30h] BYREF
  struct Windows::Internal::AssignedAccess::IAssignedAccessConfiguration *v12; // [rsp+58h] [rbp+38h] BYREF

  v10 = a2;
  *(_DWORD *)a3 = 0;
  v12 = 0LL;
  AssignedAccessConfiguration = Windows::Internal::AssignedAccess::AAManagerHelper::GetAssignedAccessConfiguration(
                                  this,
                                  &v12);
  v5 = AssignedAccessConfiguration;
  if ( AssignedAccessConfiguration >= 0 )
  {
    v11 = 0LL;
    UserInfoIf__lambda_661bc23c674c805837064d315685ee67 = Windows::Internal::AssignedAccess::AssignedAccessConfigurationHelper::FindUserInfoIf__lambda_661bc23c674c805837064d315685ee67___(
                                                            (__int64)&v10,
                                                            (__int64 *)v12,
                                                            &v11);
    v5 = UserInfoIf__lambda_661bc23c674c805837064d315685ee67;
    if ( UserInfoIf__lambda_661bc23c674c805837064d315685ee67 >= 0 )
    {
      if ( !v11
        || (UserInfoIf__lambda_661bc23c674c805837064d315685ee67 = (*(__int64 (__fastcall **)(__int64, enum Windows::Internal::AssignedAccess::AssignedAccessType *))(*(_QWORD *)v11 + 80LL))(
                                                                    v11,
                                                                    a3),
            v5 = UserInfoIf__lambda_661bc23c674c805837064d315685ee67,
            UserInfoIf__lambda_661bc23c674c805837064d315685ee67 >= 0) )
      {
        wil::com_ptr_t<Windows::Internal::AssignedAccess::IAssignedAccessConfiguration,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::AssignedAccess::IAssignedAccessConfiguration,wil::err_returncode_policy>(&v11);
        v5 = 0;
        goto LABEL_10;
      }
      v7 = 206LL;
    }
    else
    {
      v7 = 203LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\base\\embedded\\sys\\lockdown\\config\\lib\\aamanagerhelper.cpp",
      (const char *)(unsigned int)UserInfoIf__lambda_661bc23c674c805837064d315685ee67);
    wil::com_ptr_t<Windows::Internal::AssignedAccess::IAssignedAccessConfiguration,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::AssignedAccess::IAssignedAccessConfiguration,wil::err_returncode_policy>(&v11);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBF,
      (int)"onecoreuap\\base\\embedded\\sys\\lockdown\\config\\lib\\aamanagerhelper.cpp",
      (const char *)(unsigned int)AssignedAccessConfiguration);
  }
LABEL_10:
  wil::com_ptr_t<Windows::Internal::AssignedAccess::IAssignedAccessConfiguration,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::AssignedAccess::IAssignedAccessConfiguration,wil::err_returncode_policy>((__int64 *)&v12);
  return v5;
}

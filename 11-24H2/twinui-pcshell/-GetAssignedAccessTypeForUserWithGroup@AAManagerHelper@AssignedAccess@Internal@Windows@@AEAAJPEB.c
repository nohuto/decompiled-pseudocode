/*
 * XREFs of ?GetAssignedAccessTypeForUserWithGroup@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEBGPEAW4AssignedAccessType@234@@Z @ 0x180683F00
 * Callers:
 *     GetAssignedAccessTypeForUser_0 @ 0x1801055B8 (GetAssignedAccessTypeForUser_0.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180122480 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$com_ptr_t@VGamingPosturePositioner@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180213510 (--1-$com_ptr_t@VGamingPosturePositioner@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?GetAssignedAccessConfiguration@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEAPEAUIAssignedAccessConfiguration@234@@Z @ 0x180683E98 (-GetAssignedAccessConfiguration@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEAPEAUIAs.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::AssignedAccess::AAManagerHelper::GetAssignedAccessTypeForUserWithGroup(
        Windows::Internal::AssignedAccess::AAManagerHelper *this,
        const unsigned __int16 *a2,
        enum Windows::Internal::AssignedAccess::AssignedAccessType *a3)
{
  int AssignedAccessConfiguration; // eax
  unsigned int v5; // r8d
  unsigned int v6; // ebx
  struct Windows::Internal::AssignedAccess::IAssignedAccessConfiguration *v7; // rbx
  __int64 v8; // rax
  __int64 (__fastcall *v9)(struct Windows::Internal::AssignedAccess::IAssignedAccessConfiguration *, PVOID, __int64 *); // rdi
  HSTRING_HEADER *v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v14; // [rsp+20h] [rbp-40h] BYREF
  struct Windows::Internal::AssignedAccess::IAssignedAccessConfiguration *v15; // [rsp+28h] [rbp-38h] BYREF
  const WCHAR *v16; // [rsp+30h] [rbp-30h] BYREF
  HSTRING_HEADER v17; // [rsp+38h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  *(_DWORD *)a3 = 0;
  v15 = 0LL;
  v16 = a2;
  AssignedAccessConfiguration = Windows::Internal::AssignedAccess::AAManagerHelper::GetAssignedAccessConfiguration(
                                  this,
                                  &v15);
  v6 = AssignedAccessConfiguration;
  if ( AssignedAccessConfiguration >= 0 )
  {
    v7 = v15;
    v8 = *(_QWORD *)v15;
    v14 = 0LL;
    v9 = *(__int64 (__fastcall **)(struct Windows::Internal::AssignedAccess::IAssignedAccessConfiguration *, PVOID, __int64 *))(v8 + 96);
    v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v17, &v16, v5);
    v11 = v9(v7, v10[1].Reserved.Reserved1, &v14);
    v6 = v11;
    if ( v11 >= 0 )
    {
      if ( !v14
        || (v11 = (*(__int64 (__fastcall **)(__int64, enum Windows::Internal::AssignedAccess::AssignedAccessType *))(*(_QWORD *)v14 + 80LL))(
                    v14,
                    a3),
            v6 = v11,
            v11 >= 0) )
      {
        wil::com_ptr_t<GamingPosturePositioner,wil::err_exception_policy>::~com_ptr_t<GamingPosturePositioner,wil::err_exception_policy>(&v14);
        v6 = 0;
        goto LABEL_10;
      }
      v12 = 216LL;
    }
    else
    {
      v12 = 214LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"shellcommondesktopbase\\base\\embedded\\sys\\lockdown\\config\\lib\\aamanagerhelper.cpp",
      (const char *)(unsigned int)v11);
    wil::com_ptr_t<GamingPosturePositioner,wil::err_exception_policy>::~com_ptr_t<GamingPosturePositioner,wil::err_exception_policy>(&v14);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD4,
      (int)"shellcommondesktopbase\\base\\embedded\\sys\\lockdown\\config\\lib\\aamanagerhelper.cpp",
      (const char *)(unsigned int)AssignedAccessConfiguration);
  }
LABEL_10:
  wil::com_ptr_t<GamingPosturePositioner,wil::err_exception_policy>::~com_ptr_t<GamingPosturePositioner,wil::err_exception_policy>((__int64 *)&v15);
  return v6;
}

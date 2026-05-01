/*
 * XREFs of GetAssignedAccessTypeForUser_0 @ 0x1801055B8
 * Callers:
 *     IsUserAssignedAccessSingleApp @ 0x180104FBC (IsUserAssignedAccessSingleApp.c)
 *     IsUserSidAssignedAccessSingleAppClassicApp @ 0x180105188 (IsUserSidAssignedAccessSingleAppClassicApp.c)
 *     GetAssignedAccessTypeForUser @ 0x18010558C (GetAssignedAccessTypeForUser.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002AEA8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_e4f37fdae08429a84761ade0db4bdd38___ @ 0x1801051C0 (Windows--Internal--AssignedAccess--AssignedAccessConfigStoreHelper--FindIf__lambda_e4f37fdae0842.c)
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_49fe318f7c95465e9283e5ab1b54dbad___ @ 0x180105340 (Windows--Internal--AssignedAccess--AssignedAccessConfigStoreHelper--FindIf__lambda_49fe318f7c954.c)
 *     ?Initialize@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAA_NXZ @ 0x18010584C (-Initialize@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAA_NXZ.c)
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_47c177c364e43d13bff9c3e398002cbd___ @ 0x1801066F4 (Windows--Internal--AssignedAccess--AssignedAccessConfigStoreHelper--FindIf__lambda_47c177c364e43.c)
 *     ??1?$com_ptr_t@VGamingPosturePositioner@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180213510 (--1-$com_ptr_t@VGamingPosturePositioner@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_ptr@VAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@QEAAXPEAVAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@@Z @ 0x18021FB04 (-reset@-$unique_ptr@VAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@U-$default.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1802D2320 (--3@YAXPEAX@Z.c)
 *     ??0AAManagerHelper@AssignedAccess@Internal@Windows@@QEAA@XZ @ 0x180683D50 (--0AAManagerHelper@AssignedAccess@Internal@Windows@@QEAA@XZ.c)
 *     ?GetAssignedAccessTypeForUserWithGroup@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEBGPEAW4AssignedAccessType@234@@Z @ 0x180683F00 (-GetAssignedAccessTypeForUserWithGroup@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEB.c)
 *     ?GetAssignedAccessTypeForUserWithoutGroup@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEBGPEAW4AssignedAccessType@234@@Z @ 0x180684010 (-GetAssignedAccessTypeForUserWithoutGroup@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJ.c)
 */

__int64 __fastcall GetAssignedAccessTypeForUser_0(
        unsigned __int16 *a1,
        char a2,
        enum Windows::Internal::AssignedAccess::AssignedAccessType *a3)
{
  _DWORD *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  int AssignedAccessTypeForUserWithoutGroup; // eax
  unsigned int v12; // ebx
  _BYTE v13[16]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v14[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  _DWORD *v16; // [rsp+68h] [rbp+20h] BYREF

  v6 = operator new(0x20uLL);
  v6[7] = 0;
  *(_QWORD *)v6 = 0LL;
  *((_QWORD *)v6 + 1) = 0LL;
  *((_QWORD *)v6 + 2) = 0LL;
  v6[6] = 0;
  v16 = v6;
  if ( !Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::Initialize((Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper *)v6) )
  {
    wistd::unique_ptr<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper,wistd::default_delete<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper>>::reset(&v16);
    v6 = v16;
  }
  if ( v6 )
  {
    v14[0] = v6;
    v14[1] = a1;
    if ( Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_e4f37fdae08429a84761ade0db4bdd38___(
           v7,
           v14)
      || Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_49fe318f7c95465e9283e5ab1b54dbad___(
           v8,
           (__int64)v6)
      || (unsigned __int8)Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_47c177c364e43d13bff9c3e398002cbd___(
                            v9,
                            v6) )
    {
      Windows::Internal::AssignedAccess::AAManagerHelper::AAManagerHelper((Windows::Internal::AssignedAccess::AAManagerHelper *)v13);
      if ( a2 )
        AssignedAccessTypeForUserWithoutGroup = Windows::Internal::AssignedAccess::AAManagerHelper::GetAssignedAccessTypeForUserWithoutGroup(
                                                  (Windows::Internal::AssignedAccess::AAManagerHelper *)v13,
                                                  a1,
                                                  a3);
      else
        AssignedAccessTypeForUserWithoutGroup = Windows::Internal::AssignedAccess::AAManagerHelper::GetAssignedAccessTypeForUserWithGroup(
                                                  (Windows::Internal::AssignedAccess::AAManagerHelper *)v13,
                                                  a1,
                                                  a3);
      v12 = AssignedAccessTypeForUserWithoutGroup;
      if ( AssignedAccessTypeForUserWithoutGroup >= 0 )
        v12 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x31,
          (int)"shellcommondesktopbase\\base\\embedded\\sys\\lockdown\\config\\lib\\assignedaccessconfig.cpp",
          (const char *)(unsigned int)AssignedAccessTypeForUserWithoutGroup);
      wil::com_ptr_t<GamingPosturePositioner,wil::err_exception_policy>::~com_ptr_t<GamingPosturePositioner,wil::err_exception_policy>(v13);
      wistd::unique_ptr<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper,wistd::default_delete<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper>>::reset(&v16);
      return v12;
    }
    else
    {
      *(_DWORD *)a3 = 0;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v6);
      operator delete(v6);
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29,
      (int)"shellcommondesktopbase\\base\\embedded\\sys\\lockdown\\config\\lib\\assignedaccessconfig.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
}

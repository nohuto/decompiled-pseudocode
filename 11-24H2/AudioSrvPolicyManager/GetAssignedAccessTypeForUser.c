/*
 * XREFs of GetAssignedAccessTypeForUser @ 0x18001BFB4
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800060D0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180010AC0 (--3@YAXPEAX@Z.c)
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_e4f37fdae08429a84761ade0db4bdd38___ @ 0x180015204 (Windows--Internal--AssignedAccess--AssignedAccessConfigStoreHelper--FindIf__lambda_e4f37fdae0842.c)
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_47c177c364e43d13bff9c3e398002cbd___ @ 0x18001538C (Windows--Internal--AssignedAccess--AssignedAccessConfigStoreHelper--FindIf__lambda_47c177c364e43.c)
 *     ?Initialize@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAA_NXZ @ 0x18001C118 (-Initialize@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAA_NXZ.c)
 *     ?reset@?$unique_ptr@VAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@QEAAXPEAVAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@@Z @ 0x18001C238 (-reset@-$unique_ptr@VAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@U-$default.c)
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_49fe318f7c95465e9283e5ab1b54dbad___ @ 0x18001CB74 (Windows--Internal--AssignedAccess--AssignedAccessConfigStoreHelper--FindIf__lambda_49fe318f7c954.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001DA28 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??1?$com_ptr_t@UIAssignedAccessConfiguration@AssignedAccess@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180047FF8 (--1-$com_ptr_t@UIAssignedAccessConfiguration@AssignedAccess@Internal@Windows@@Uerr_returncode_po.c)
 *     ??0AAManagerHelper@AssignedAccess@Internal@Windows@@QEAA@XZ @ 0x180048298 (--0AAManagerHelper@AssignedAccess@Internal@Windows@@QEAA@XZ.c)
 *     ?GetAssignedAccessTypeForUserWithoutGroup@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEBGPEAW4AssignedAccessType@234@@Z @ 0x1800484FC (-GetAssignedAccessTypeForUserWithoutGroup@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJ.c)
 */

__int64 __fastcall GetAssignedAccessTypeForUser(unsigned __int16 *a1)
{
  HANDLE ProcessHeap; // rax
  _DWORD *v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int AssignedAccessTypeForUserWithoutGroup; // eax
  _BYTE v10[16]; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v11[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  unsigned int v13; // [rsp+58h] [rbp+18h] BYREF
  __int64 v14; // [rsp+60h] [rbp+20h] BYREF

  v13 = 0;
  ProcessHeap = GetProcessHeap();
  v3 = HeapAlloc(ProcessHeap, 0, 0x20uLL);
  v4 = (__int64)v3;
  if ( !v3 )
  {
    v14 = 0LL;
    goto LABEL_5;
  }
  v3[7] = 0;
  *(_QWORD *)v3 = 0LL;
  *((_QWORD *)v3 + 1) = 0LL;
  *((_QWORD *)v3 + 2) = 0LL;
  v3[6] = 0;
  v14 = (__int64)v3;
  if ( !Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::Initialize((Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper *)v3) )
  {
LABEL_5:
    wistd::unique_ptr<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper,wistd::default_delete<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper>>::reset(&v14);
    v4 = v14;
  }
  if ( !v4 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B,
      (int)"onecoreuap\\base\\embedded\\sys\\lockdown\\config\\lib\\assignedaccessconfig.cpp",
      (const char *)0x8000FFFFLL);
    return 0LL;
  }
  v11[0] = v4;
  v11[1] = a1;
  if ( Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_e4f37fdae08429a84761ade0db4bdd38___(
         v5,
         v11)
    || (unsigned __int8)Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_49fe318f7c95465e9283e5ab1b54dbad___(
                          v6,
                          v4)
    || Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_47c177c364e43d13bff9c3e398002cbd___(
         v7,
         v4) )
  {
    Windows::Internal::AssignedAccess::AAManagerHelper::AAManagerHelper((Windows::Internal::AssignedAccess::AAManagerHelper *)v10);
    AssignedAccessTypeForUserWithoutGroup = Windows::Internal::AssignedAccess::AAManagerHelper::GetAssignedAccessTypeForUserWithoutGroup(
                                              (Windows::Internal::AssignedAccess::AAManagerHelper *)v10,
                                              a1,
                                              (enum Windows::Internal::AssignedAccess::AssignedAccessType *)&v13);
    if ( AssignedAccessTypeForUserWithoutGroup < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x33,
        (int)"onecoreuap\\base\\embedded\\sys\\lockdown\\config\\lib\\assignedaccessconfig.cpp",
        (const char *)(unsigned int)AssignedAccessTypeForUserWithoutGroup);
      wil::com_ptr_t<Windows::Internal::AssignedAccess::IAssignedAccessConfiguration,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::AssignedAccess::IAssignedAccessConfiguration,wil::err_returncode_policy>(v10);
      wistd::unique_ptr<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper,wistd::default_delete<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper>>::reset(&v14);
      return 0LL;
    }
    wil::com_ptr_t<Windows::Internal::AssignedAccess::IAssignedAccessConfiguration,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::AssignedAccess::IAssignedAccessConfiguration,wil::err_returncode_policy>(v10);
  }
  else
  {
    v13 = 0;
  }
  wistd::unique_ptr<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper,wistd::default_delete<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper>>::reset(&v14);
  return v13;
}

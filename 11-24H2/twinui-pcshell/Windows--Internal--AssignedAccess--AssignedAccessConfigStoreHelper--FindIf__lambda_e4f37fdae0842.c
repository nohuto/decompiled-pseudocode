/*
 * XREFs of Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_e4f37fdae08429a84761ade0db4bdd38___ @ 0x1801051C0
 * Callers:
 *     GetAssignedAccessTypeForUser_0 @ 0x1801055B8 (GetAssignedAccessTypeForUser_0.c)
 * Callees:
 *     ?CreateInstance@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x1801054B8 (-CreateInstance@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     ?CreateInstance@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x18010573C (-CreateInstance@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     ?CreateInstance@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x180106568 (-CreateInstance@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_e4f37fdae08429a84761ade0db4bdd38___(
        __int64 a1,
        _QWORD *a2)
{
  void (__fastcall ***v3)(_QWORD, __int64); // rbx
  void (__fastcall ***v4)(_QWORD, __int64); // rdi
  void (__fastcall ***v5)(_QWORD, __int64); // rsi
  bool v6; // zf
  __int64 *v8; // r14
  __int64 v9; // r15
  void (__fastcall ***v10)(_QWORD, __int64); // [rsp+20h] [rbp-58h] BYREF
  void (__fastcall ***v11)(_QWORD, __int64); // [rsp+28h] [rbp-50h] BYREF
  void (__fastcall ***v12)(_QWORD, __int64); // [rsp+30h] [rbp-48h] BYREF
  _QWORD v13[3]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v14; // [rsp+50h] [rbp-28h] BYREF

  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0::CreateInstance(&v12);
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::CreateInstance(&v10);
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV2::CreateInstance(&v11);
  v3 = v12;
  v4 = v10;
  v5 = v11;
  if ( v12 && v10 )
  {
    v6 = v11 == 0LL;
    if ( !v11 )
      goto LABEL_3;
    v13[0] = v12;
    v8 = v13;
    v13[1] = v10;
    v13[2] = v11;
    while ( v8 != &v14 )
    {
      v9 = *v8;
      if ( *(_DWORD *)(*a2 + 24LL) <= (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)*v8 + 32LL))(*v8)
        && (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 8LL))(v9, a2[1]) )
      {
        if ( v5 )
          (**v5)(v5, 1LL);
        if ( v4 )
          (**v4)(v4, 1LL);
        if ( v3 )
          (**v3)(v3, 1LL);
        return 1;
      }
      ++v8;
    }
  }
  v6 = v5 == 0LL;
LABEL_3:
  if ( !v6 )
    (**v5)(v5, 1LL);
  if ( v4 )
    (**v4)(v4, 1LL);
  if ( v3 )
    (**v3)(v3, 1LL);
  return 0;
}

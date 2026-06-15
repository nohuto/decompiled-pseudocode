/*
 * XREFs of Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_49fe318f7c95465e9283e5ab1b54dbad___ @ 0x18001CB74
 * Callers:
 *     GetAssignedAccessTypeForUser @ 0x18001BFB4 (GetAssignedAccessTypeForUser.c)
 * Callees:
 *     ?CreateInstance@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x180015508 (-CreateInstance@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     ?CreateInstance@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x18001CCF0 (-CreateInstance@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     ?CreateInstance@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x18001CDFC (-CreateInstance@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     __security_check_cookie @ 0x1800201B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_49fe318f7c95465e9283e5ab1b54dbad___(
        __int64 a1,
        __int64 a2)
{
  void (__fastcall ***v3)(_QWORD, __int64); // rbx
  void (__fastcall ***v4)(_QWORD, __int64); // rdi
  void (__fastcall ***v5)(_QWORD, __int64); // rsi
  bool v6; // zf
  __int64 *v7; // r14
  __int64 v8; // r15
  void (__fastcall ***v10)(_QWORD, __int64); // [rsp+20h] [rbp-58h] BYREF
  void (__fastcall ***v11)(_QWORD, __int64); // [rsp+28h] [rbp-50h] BYREF
  void (__fastcall ***v12)(_QWORD, __int64); // [rsp+30h] [rbp-48h] BYREF
  _QWORD v13[3]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v14; // [rsp+50h] [rbp-28h] BYREF

  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0::CreateInstance((__int64)&v12);
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::CreateInstance(&v10);
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV2::CreateInstance(&v11);
  v3 = v12;
  v4 = v10;
  v5 = v11;
  if ( !v12 || !v10 )
  {
LABEL_16:
    v6 = v5 == 0LL;
    goto LABEL_17;
  }
  v6 = v11 == 0LL;
  if ( v11 )
  {
    v13[0] = v12;
    v7 = v13;
    v13[1] = v10;
    v13[2] = v11;
    while ( v7 != &v14 )
    {
      v8 = *v7;
      if ( *(_DWORD *)(a2 + 24) <= (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)*v7 + 32LL))(*v7)
        && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8) )
      {
        if ( v5 )
          (**v5)(v5, 1LL);
        if ( v4 )
          (**v4)(v4, 1LL);
        if ( v3 )
          (**v3)(v3, 1LL);
        return 1;
      }
      ++v7;
    }
    goto LABEL_16;
  }
LABEL_17:
  if ( !v6 )
    (**v5)(v5, 1LL);
  if ( v4 )
    (**v4)(v4, 1LL);
  if ( v3 )
    (**v3)(v3, 1LL);
  return 0;
}

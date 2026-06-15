/*
 * XREFs of ?CreateInstance@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x18001CCCC
 * Callers:
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_e4f37fdae08429a84761ade0db4bdd38___ @ 0x180014A84 (Windows--Internal--AssignedAccess--AssignedAccessConfigStoreHelper--FindIf__lambda_e4f37fdae0842.c)
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_47c177c364e43d13bff9c3e398002cbd___ @ 0x180014C0C (Windows--Internal--AssignedAccess--AssignedAccessConfigStoreHelper--FindIf__lambda_47c177c364e43.c)
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_49fe318f7c95465e9283e5ab1b54dbad___ @ 0x18001CA44 (Windows--Internal--AssignedAccess--AssignedAccessConfigStoreHelper--FindIf__lambda_49fe318f7c954.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180007070 (--2@YAPEAX_K@Z.c)
 *     ??0?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAA@$$QEAV01@@Z @ 0x18001CC5C (--0-$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAA@$$QEAV01@@Z.c)
 *     ?reset@?$unique_ptr@VAssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@QEAAXPEAVAssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@@Z @ 0x18001CC9C (-reset@-$unique_ptr@VAssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@U-$default_del.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::CreateInstance(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rcx
  unsigned __int8 (*v4)(void); // rax
  __int64 (__fastcall ***v6)(_QWORD, __int64); // [rsp+30h] [rbp+8h] BYREF

  v2 = operator new(0x20uLL);
  v3 = v2;
  if ( !v2 )
  {
    v6 = 0LL;
    goto LABEL_5;
  }
  v2[2] = 0LL;
  v2[3] = 0LL;
  *v2 = &Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::`vftable';
  v4 = (unsigned __int8 (*)(void))*(&Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::`vftable' + 5);
  v3[1] = 0LL;
  v3[2] = 0LL;
  v3[3] = 0LL;
  v6 = (__int64 (__fastcall ***)(_QWORD, __int64))v3;
  if ( !v4() )
LABEL_5:
    wistd::unique_ptr<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV2,wistd::default_delete<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV2>>::reset(&v6);
  wistd::unique_ptr<void,wil::process_heap_deleter>::unique_ptr<void,wil::process_heap_deleter>(a1, (__int64 *)&v6);
  if ( v6 )
    (**v6)(v6, 1LL);
  return a1;
}

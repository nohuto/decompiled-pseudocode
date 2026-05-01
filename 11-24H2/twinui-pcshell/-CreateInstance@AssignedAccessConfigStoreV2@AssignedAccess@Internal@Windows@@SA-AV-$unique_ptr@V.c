/*
 * XREFs of ?CreateInstance@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x1801054B8
 * Callers:
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_e4f37fdae08429a84761ade0db4bdd38___ @ 0x1801051C0 (Windows--Internal--AssignedAccess--AssignedAccessConfigStoreHelper--FindIf__lambda_e4f37fdae0842.c)
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_49fe318f7c95465e9283e5ab1b54dbad___ @ 0x180105340 (Windows--Internal--AssignedAccess--AssignedAccessConfigStoreHelper--FindIf__lambda_49fe318f7c954.c)
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_47c177c364e43d13bff9c3e398002cbd___ @ 0x1801066F4 (Windows--Internal--AssignedAccess--AssignedAccessConfigStoreHelper--FindIf__lambda_47c177c364e43.c)
 * Callees:
 *     ??0?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAA@$$QEAV01@@Z @ 0x18010554C (--0-$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAA@$$QEAV01@@Z.c)
 *     ??1?$unique_ptr@VISearchAppPositioner@@U?$default_delete@VISearchAppPositioner@@@wistd@@@wistd@@QEAA@XZ @ 0x1801FD1F0 (--1-$unique_ptr@VISearchAppPositioner@@U-$default_delete@VISearchAppPositioner@@@wistd@@@wistd@@.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV2::CreateInstance(__int64 a1)
{
  _QWORD *v2; // rax
  void (__fastcall ***v4)(_QWORD, __int64); // [rsp+30h] [rbp+8h] BYREF

  v2 = operator new(0x20uLL);
  v2[2] = 0LL;
  v2[3] = 0LL;
  v2[1] = 0LL;
  v2[2] = 0LL;
  v2[3] = 0LL;
  *v2 = &Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV2::`vftable';
  v4 = (void (__fastcall ***)(_QWORD, __int64))v2;
  if ( !Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::Initialize((Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1 *)v2) )
    wistd::unique_ptr<ISearchAppPositioner,wistd::default_delete<ISearchAppPositioner>>::~unique_ptr<ISearchAppPositioner,wistd::default_delete<ISearchAppPositioner>>(&v4);
  wistd::unique_ptr<void,wil::process_heap_deleter>::unique_ptr<void,wil::process_heap_deleter>(a1, &v4);
  if ( v4 )
    (**v4)(v4, 1LL);
  return a1;
}

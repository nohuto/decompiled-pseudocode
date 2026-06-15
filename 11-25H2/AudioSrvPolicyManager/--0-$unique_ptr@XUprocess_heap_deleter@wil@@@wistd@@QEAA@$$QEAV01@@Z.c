/*
 * XREFs of ??0?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAA@$$QEAV01@@Z @ 0x18001CC5C
 * Callers:
 *     ?CreateInstance@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x180014D88 (-CreateInstance@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     ?CreateInstance@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x18001CBC0 (-CreateInstance@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     ?CreateInstance@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x18001CCCC (-CreateInstance@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     ??0heap_buffer@details_abi@wil@@QEAA@$$QEAU012@@Z @ 0x1800225B8 (--0heap_buffer@details_abi@wil@@QEAA@$$QEAU012@@Z.c)
 * Callees:
 *     ??$?0PEAVAssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@@wistd@@@?$__compressed_pair@PEAVAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@QEAA@$$QEAPEAVAssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@$$QEAU?$default_delete@VAssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@@1@@Z @ 0x18001CC88 (--$-0PEAVAssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@U-$default_delete@VAssigne.c)
 */

__int64 __fastcall wistd::unique_ptr<void,wil::process_heap_deleter>::unique_ptr<void,wil::process_heap_deleter>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  *a2 = 0LL;
  v5 = v2;
  wistd::__compressed_pair<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreBase *,wistd::default_delete<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreBase>>::__compressed_pair<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreBase *,wistd::default_delete<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreBase>>(
    a1,
    &v5);
  return v3;
}

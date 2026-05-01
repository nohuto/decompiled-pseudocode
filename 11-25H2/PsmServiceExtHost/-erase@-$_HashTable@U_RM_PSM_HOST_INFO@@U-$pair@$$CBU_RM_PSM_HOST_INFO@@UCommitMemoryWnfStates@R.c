/*
 * XREFs of ?erase@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@QEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@2@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@2@@2@@Z @ 0x18005DEA4
 * Callers:
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z @ 0x180018448 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800739B8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::erase(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v6; // r8
  __int64 *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  _QWORD *result; // rax

  v6 = (8LL << *(_BYTE *)(a1 + 32)) - 1;
  v7 = (__int64 *)a3[1];
  v8 = *a3;
  *v7 = *a3;
  *(_QWORD *)(v8 + 8) = v7;
  v9 = *(_QWORD *)(a1 + 16);
  v10 = 2 * (v6 & a3[2]);
  if ( *(__int64 **)(v9 + 16 * (v6 & a3[2])) == a3 )
  {
    if ( *(__int64 **)(v9 + 16 * (v6 & a3[2]) + 8) == a3 )
    {
      v11 = 0LL;
      *(_QWORD *)(v9 + 16 * (v6 & a3[2]) + 8) = 0LL;
    }
    else
    {
      v11 = *a3;
    }
    *(_QWORD *)(v9 + 8 * v10) = v11;
  }
  else if ( *(__int64 **)(v9 + 16 * (v6 & a3[2]) + 8) == a3 )
  {
    *(_QWORD *)(v9 + 16 * (v6 & a3[2]) + 8) = a3[1];
  }
  --*(_QWORD *)(a1 + 24);
  operator delete(a3);
  result = a2;
  *a2 = v8;
  return result;
}

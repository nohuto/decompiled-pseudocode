/*
 * XREFs of ??0ResourceManager@ExecutionModel@@QEAA@XZ @ 0x18008669C
 * Callers:
 *     ?CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@PEAPEAVResourceManager@1@@Z @ 0x180086958 (-CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@P.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800574F0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0?$unordered_map@U_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@U?$hash@U_RM_PSM_HOST_INFO@@@utl@@U?$equal_to@U_RM_PSM_HOST_INFO@@@6@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@6@@utl@@QEAA@XZ @ 0x180086684 (--0-$unordered_map@U_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@U-.c)
 */

ExecutionModel::ResourceManager *__fastcall ExecutionModel::ResourceManager::ResourceManager(
        ExecutionModel::ResourceManager *this)
{
  __int64 v2; // rdx
  ExecutionModel::ResourceManager *result; // rax
  int v4; // edx

  *(_QWORD *)this = &ExecutionModel::ResourceManager::`vftable'{for `ExecutionModel::IExternalResourceRegister'};
  *((_QWORD *)this + 1) = &ExecutionModel::ResourceManager::`vftable'{for `IModernResourceEnforcerCallback'};
  *((_DWORD *)this + 4) = 1;
  `vector constructor iterator'(
    (char *)this + 24,
    8LL,
    2LL,
    (void (__fastcall *)(char *))ATL::CComPtr<ExecutionModel::BaseResourceSet>::CComPtr<ExecutionModel::BaseResourceSet>);
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  utl::unordered_map<_RM_PSM_HOST_INFO,ExecutionModel::ResourceManager::CommitMemoryWnfStates,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>>::unordered_map<_RM_PSM_HOST_INFO,ExecutionModel::ResourceManager::CommitMemoryWnfStates,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>>((__int64)this + 88);
  *((_QWORD *)this + 17) = v2;
  *((_QWORD *)this + 18) = v2;
  *((_QWORD *)this + 19) = v2;
  utl::unordered_map<_RM_PSM_HOST_INFO,ExecutionModel::ResourceManager::CommitMemoryWnfStates,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>>::unordered_map<_RM_PSM_HOST_INFO,ExecutionModel::ResourceManager::CommitMemoryWnfStates,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>>((__int64)this + 168);
  result = this;
  *((_DWORD *)this + 40) = v4;
  return result;
}

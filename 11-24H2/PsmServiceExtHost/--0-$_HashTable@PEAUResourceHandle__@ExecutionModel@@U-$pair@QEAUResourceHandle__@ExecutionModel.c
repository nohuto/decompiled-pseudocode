/*
 * XREFs of ??0?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@IEAA@XZ @ 0x180086660
 * Callers:
 *     ??0?$unordered_map@U_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@U?$hash@U_RM_PSM_HOST_INFO@@@utl@@U?$equal_to@U_RM_PSM_HOST_INFO@@@6@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@6@@utl@@QEAA@XZ @ 0x180086684 (--0-$unordered_map@U_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@U-.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>(
        __int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = a1;
  *(_QWORD *)(a1 + 8) = a1;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  result = a1;
  *(_WORD *)(a1 + 32) = 2048;
  return result;
}

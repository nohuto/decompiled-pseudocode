/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAUPMPolicyRetrievedInfo@@P6AJPEAU1@@Z$1?PolicyManager_FreeGetPolicyData@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800283C0
 * Callers:
 *     ?RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ @ 0x18002CC60 (-RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::unique_storage<wil::details::resource_policy<PMPolicyRetrievedInfo *,long (*)(PMPolicyRetrievedInfo *),&long PolicyManager_FreeGetPolicyData(PMPolicyRetrievedInfo *),wistd::integral_constant<unsigned __int64,0>,PMPolicyRetrievedInfo *,PMPolicyRetrievedInfo *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<PMPolicyRetrievedInfo *,long (*)(PMPolicyRetrievedInfo *),&long PolicyManager_FreeGetPolicyData(PMPolicyRetrievedInfo *),wistd::integral_constant<unsigned __int64,0>,PMPolicyRetrievedInfo *,PMPolicyRetrievedInfo *,0,std::nullptr_t>>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return PolicyManager_FreeGetPolicyData();
  return result;
}

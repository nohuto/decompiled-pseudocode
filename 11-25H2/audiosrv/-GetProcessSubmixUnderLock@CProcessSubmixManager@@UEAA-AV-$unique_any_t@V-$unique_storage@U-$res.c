/*
 * XREFs of ?GetProcessSubmixUnderLock@CProcessSubmixManager@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@PEAVCAppSubmixClient@@PEA_JPEAPEAV?$unordered_set@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@@std@@@Z @ 0x1800B1A70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CProcessSubmixManager::GetProcessSubmixUnderLock(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        _QWORD *a5)
{
  __int64 v5; // rbx

  v5 = a1 + 16;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  *a2 = v5;
  *a5 = *(_QWORD *)(a3 + 8) + 24LL;
  *a4 = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 80));
  return a2;
}

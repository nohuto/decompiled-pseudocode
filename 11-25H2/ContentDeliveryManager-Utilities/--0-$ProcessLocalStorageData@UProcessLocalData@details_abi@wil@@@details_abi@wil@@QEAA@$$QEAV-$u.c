/*
 * XREFs of ??0?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAA@$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@2@$$QEAVSemaphoreValue@12@@Z @ 0x180028F38
 * Callers:
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180034F64 (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 * Callees:
 *     memset_0 @ 0x180022921 (memset_0.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  *(_DWORD *)a1 = 1;
  *(_QWORD *)(a1 + 8) = *a2;
  *a2 = 0LL;
  *(_QWORD *)(a1 + 16) = *a3;
  *a3 = 0LL;
  *(_QWORD *)(a1 + 24) = a3[1];
  a3[1] = 0LL;
  memset_0((void *)(a1 + 34), 0, 0x56uLL);
  *(_WORD *)(a1 + 32) = 88;
  *(_DWORD *)(a1 + 36) = 1;
  memset_0((void *)(a1 + 40), 0, 0x50uLL);
  return a1;
}

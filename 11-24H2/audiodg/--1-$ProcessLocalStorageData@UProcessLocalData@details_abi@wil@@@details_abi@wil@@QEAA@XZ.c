/*
 * XREFs of ??1?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x14005C088
 * Callers:
 *     ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x14005DC40 (-Release@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x14001D314 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ??1?$ThreadLocalStorage@UThreadLocalData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x14005C13C (--1-$ThreadLocalStorage@UThreadLocalData@details_abi@wil@@@details_abi@wil@@QEAA@XZ.c)
 *     ??1SemaphoreValue@details_abi@wil@@QEAA@XZ @ 0x14005C300 (--1SemaphoreValue@details_abi@wil@@QEAA@XZ.c)
 */

void __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::~ProcessLocalStorageData<wil::details_abi::ProcessLocalData>(
        __int64 a1)
{
  void *v2; // rdx
  wil::details *v3; // rcx

  wil::details_abi::ThreadLocalStorage<wil::details_abi::ThreadLocalData>::~ThreadLocalStorage<wil::details_abi::ThreadLocalData>(a1 + 40);
  wil::details_abi::SemaphoreValue::~SemaphoreValue((wil::details_abi::SemaphoreValue *)(a1 + 16));
  v3 = *(wil::details **)(a1 + 8);
  if ( v3 )
    wil::details::CloseHandle(v3, v2);
}

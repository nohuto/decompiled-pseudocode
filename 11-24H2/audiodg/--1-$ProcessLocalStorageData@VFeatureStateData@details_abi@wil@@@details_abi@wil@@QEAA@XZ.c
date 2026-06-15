/*
 * XREFs of ??1?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x140076CC4
 * Callers:
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x14007C1F8 (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x14001D314 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ??1SemaphoreValue@details_abi@wil@@QEAA@XZ @ 0x14005C300 (--1SemaphoreValue@details_abi@wil@@QEAA@XZ.c)
 *     ??1FeatureStateData@details_abi@wil@@QEAA@XZ @ 0x140076EEC (--1FeatureStateData@details_abi@wil@@QEAA@XZ.c)
 */

void __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::~ProcessLocalStorageData<wil::details_abi::FeatureStateData>(
        _QWORD *a1)
{
  void *v2; // rdx
  void *v3; // rdx
  wil::details *v4; // rcx

  wil::details_abi::FeatureStateData::~FeatureStateData((wil::details_abi::FeatureStateData *)(a1 + 4));
  wil::details_abi::SemaphoreValue::~SemaphoreValue((wil::details_abi::SemaphoreValue *)(a1 + 2), v2);
  v4 = (wil::details *)a1[1];
  if ( v4 )
    wil::details::CloseHandle(v4, v3);
}

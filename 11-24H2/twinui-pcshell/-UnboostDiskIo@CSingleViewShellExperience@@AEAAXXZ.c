/*
 * XREFs of ?UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x1800B243C
 * Callers:
 *     ?ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x1800B2158 (-ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     wil::details::ScopeExitFn__lambda_9ae7f4b71f8554f9e67f674bf49c4d79___::_ScopeExitFn__lambda_9ae7f4b71f8554f9e67f674bf49c4d79___ @ 0x1800B2418 (wil--details--ScopeExitFn__lambda_9ae7f4b71f8554f9e67f674bf49c4d79___--_ScopeExitFn__lambda_9ae7.c)
 *     ?UnboostPriority@CSingleViewShellExperience@@QEAAXW4PriorityBoostReason@1@@Z @ 0x1800B33F0 (-UnboostPriority@CSingleViewShellExperience@@QEAAXW4PriorityBoostReason@1@@Z.c)
 *     _lambda_a7f15287e5878abd1220aaf01e051b7a_::operator() @ 0x180207D6C (_lambda_a7f15287e5878abd1220aaf01e051b7a_--operator().c)
 * Callees:
 *     ?SetImportanceValues@CSingleViewShellExperience@@AEAAJW4ImportanceVectorOptions@1@@Z @ 0x1800ADB70 (-SetImportanceValues@CSingleViewShellExperience@@AEAAJW4ImportanceVectorOptions@1@@Z.c)
 */

void __fastcall CSingleViewShellExperience::UnboostDiskIo(CSingleViewShellExperience *this)
{
  int v1; // edx
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_DWORD *)this + 40);
  if ( (v1 & 2) != 0 )
  {
    v2 = CSingleViewShellExperience::SetImportanceValues((__int64)this, v1 & 0xFD);
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4F4,
        (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v2);
  }
}

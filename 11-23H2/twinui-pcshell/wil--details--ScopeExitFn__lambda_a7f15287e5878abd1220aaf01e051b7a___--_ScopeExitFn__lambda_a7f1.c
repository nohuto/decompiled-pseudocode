/*
 * XREFs of wil::details::ScopeExitFn__lambda_a7f15287e5878abd1220aaf01e051b7a___::_ScopeExitFn__lambda_a7f15287e5878abd1220aaf01e051b7a___ @ 0x1807471B4
 * Callers:
 *     _CSingleViewShellExperience::Hide_::_1_::dtor$0 @ 0x1802BD6F2 (_CSingleViewShellExperience--Hide_--_1_--dtor$0.c)
 * Callees:
 *     ?UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x1800B3210 (-UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ?UnboostPriority@CSingleViewShellExperience@@QEAAXW4PriorityBoostReason@1@@Z @ 0x1800B588C (-UnboostPriority@CSingleViewShellExperience@@QEAAXW4PriorityBoostReason@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::ScopeExitFn__lambda_a7f15287e5878abd1220aaf01e051b7a___::_ScopeExitFn__lambda_a7f15287e5878abd1220aaf01e051b7a___(
        __int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // [rsp+20h] [rbp-8h]

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    CSingleViewShellExperience::UnboostPriority(*(_QWORD *)a1, 1);
    CSingleViewShellExperience::UnboostDiskIo(*(CSingleViewShellExperience **)a1, v2, v3, v4, v5);
  }
}

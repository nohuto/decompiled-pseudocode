/*
 * XREFs of ??$GetPropertyValue@_N@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAPEA_NI@Z @ 0x1801D02B0
 * Callers:
 *     ?GetProperty@CPropertySet@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1800339D0 (-GetProperty@CPropertySet@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetPropertyValue@DataSourcePropertySet@@QEAAJIPEAVCExpressionValue@@@Z @ 0x1801CFBC4 (-GetPropertyValue@DataSourcePropertySet@@QEAAJIPEAVCExpressionValue@@@Z.c)
 *     ??$SetProperty@_N@DataSourcePropertySet@@QEAAJIPEB_NW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1801D0044 (--$SetProperty@_N@DataSourcePropertySet@@QEAAJIPEB_NW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ??$UpdateProperty@_N@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z @ 0x180257B38 (--$UpdateProperty@_N@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetPropertyValue<bool>(
        __int64 a1,
        unsigned int a2)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 >= *(_DWORD *)(a1 + 24) )
    ModuleFailFastForHRESULT(-2147024809, retaddr);
  return *(_QWORD *)(a1 + 32) + (*(_DWORD *)(*(_QWORD *)a1 + 8LL * a2 + 4) & 0x1FFFFFFF);
}

/*
 * XREFs of ?value@?$optional@_K@std@@QEGAAAEA_KXZ @ 0x180063AD0
 * Callers:
 *     ?ClearInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@I@Z @ 0x180072A14 (-ClearInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@I@Z.c)
 *     ?UpdateInputDisabledStateOnWindowAddition@CUIHierarchy@@AEAAX_K@Z @ 0x1800AB7D8 (-UpdateInputDisabledStateOnWindowAddition@CUIHierarchy@@AEAAX_K@Z.c)
 *     ??0MPCTarget@@QEAA@PEAVInputSite@@W4FrameworkViewType@@K@Z @ 0x1800FDD2C (--0MPCTarget@@QEAA@PEAVInputSite@@W4FrameworkViewType@@K@Z.c)
 *     ?TransferForegroundToHost@CUIComponentInputObjectProxy@@MEAAJAEBUTransferForegroundInfo@@@Z @ 0x180130640 (-TransferForegroundToHost@CUIComponentInputObjectProxy@@MEAAJAEBUTransferForegroundInfo@@@Z.c)
 *     ?GetControllerForManualResize@ResizeProcessor@@AEAAXPEAVBamoManualResizeAreaClientProxy@@PEAPEAVBamoResizeControllerClientProxy@@PEAPEAVInputSite@@@Z @ 0x18014EB6C (-GetControllerForManualResize@ResizeProcessor@@AEAAXPEAVBamoManualResizeAreaClientProxy@@PEAPEAV.c)
 * Callees:
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x18009B5DC (-_Throw_bad_optional_access@std@@YAXXZ.c)
 */

__int64 __fastcall std::optional<unsigned __int64>::value(__int64 a1)
{
  if ( !*(_BYTE *)(a1 + 8) )
    std::_Throw_bad_optional_access();
  return a1;
}

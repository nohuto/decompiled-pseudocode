/*
 * XREFs of ??0?$vector@PEAVInputSite@@V?$allocator@PEAVInputSite@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800AA018
 * Callers:
 *     ?NotifyWindowOfActivationStateChange@CUIHierarchy@@AEAAXPEAUCUIWindow@@W4CUIActivationState@Input@Internal@UI@Windows@@_K@Z @ 0x1800AA900 (-NotifyWindowOfActivationStateChange@CUIHierarchy@@AEAAXPEAUCUIWindow@@W4CUIActivationState@Inpu.c)
 *     ?GetControllerForManualResize@ResizeProcessor@@AEAAXPEAVBamoManualResizeAreaClientProxy@@PEAPEAVBamoResizeControllerClientProxy@@PEAPEAVInputSite@@@Z @ 0x18014EB6C (-GetControllerForManualResize@ResizeProcessor@@AEAAXPEAVBamoManualResizeAreaClientProxy@@PEAPEAV.c)
 *     ?GetResizeControllerInputSite@ResizeProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAVBamoResizeControllerClientProxy@@@Z @ 0x18014EDC0 (-GetResizeControllerInputSite@ResizeProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@PEAVB.c)
 * Callees:
 *     ??$_Construct_n@AEBQEAPEAVInputSite@@AEBQEAPEAV1@@?$vector@PEAVInputSite@@V?$allocator@PEAVInputSite@@@std@@@std@@AEAAX_KAEBQEAPEAVInputSite@@1@Z @ 0x1800A9B2C (--$_Construct_n@AEBQEAPEAVInputSite@@AEBQEAPEAV1@@-$vector@PEAVInputSite@@V-$allocator@PEAVInput.c)
 */

_QWORD *__fastcall std::vector<InputSite *>::vector<InputSite *>(_QWORD *a1, __int64 a2)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  std::vector<InputSite *>::_Construct_n<InputSite * * const &,InputSite * * const &>(
    a1,
    (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 3,
    (const void **)a2,
    (_QWORD *)(a2 + 8));
  return a1;
}

/*
 * XREFs of ?terminate@details@gsl@@YAXXZ @ 0x1404F6130
 * Callers:
 *     ??$copy@$$CBE$0?0E$0?0@gsl@@YAXV?$span@$$CBE$0?0@0@V?$span@E$0?0@0@@Z @ 0x14049498C (--$copy@$$CBE$0-0E$0-0@gsl@@YAXV-$span@$$CBE$0-0@0@V-$span@E$0-0@0@@Z.c)
 *     RtlDoesRequireFunctionOverrideFixups @ 0x1409465B8 (RtlDoesRequireFunctionOverrideFixups.c)
 *     ?RtlpGetFunctionOverrideIndex@@YAPEBU_RTL_FUNCTION_OVERRIDE_INDEX@@PEBU_RTL_FUNCTION_OVERRIDE_INFORMATION@@K@Z @ 0x140946A04 (-RtlpGetFunctionOverrideIndex@@YAPEBU_RTL_FUNCTION_OVERRIDE_INDEX@@PEBU_RTL_FUNCTION_OVERRIDE_IN.c)
 *     MiInitializePrivateFixupBitmap @ 0x1409D86AC (MiInitializePrivateFixupBitmap.c)
 *     RtlCreateFunctionOverrideFixupInfo @ 0x1409F0820 (RtlCreateFunctionOverrideFixupInfo.c)
 *     ?RtlpFindFunctionOverrideDvrtRecord@@YAJV?$span@$$CBE$0?0@gsl@@PEAV12@@Z @ 0x1409F09AC (-RtlpFindFunctionOverrideDvrtRecord@@YAJV-$span@$$CBE$0-0@gsl@@PEAV12@@Z.c)
 *     ?RtlpCreateFunctionOverrideFixupInfo@@YAJV?$span@$$CBE$0?0@gsl@@KKPEBU_RTL_FUNCTION_OVERRIDE_CAPABILITIES@@PEAPEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@PEBU_RTL_SYSTEM_OVERRIDE_INFORMATION@@@Z @ 0x1409F0BC4 (-RtlpCreateFunctionOverrideFixupInfo@@YAJV-$span@$$CBE$0-0@gsl@@KKPEBU_RTL_FUNCTION_OVERRIDE_CAP.c)
 *     ?RtlpParseFunctionOverrideRelocations@@YAJKV?$span@$$CBE$0?0@gsl@@KPEAU_RTLP_PARSE_RELOCATIONS_PACKET@@@Z @ 0x1409F1254 (-RtlpParseFunctionOverrideRelocations@@YAJKV-$span@$$CBE$0-0@gsl@@KPEAU_RTLP_PARSE_RELOCATIONS_P.c)
 *     ?RtlpRecordFunctionOverrideRelocation@@YAXPEAU_RTLP_PARSE_RELOCATIONS_PACKET@@EKGGE@Z @ 0x1409F1570 (-RtlpRecordFunctionOverrideRelocation@@YAXPEAU_RTLP_PARSE_RELOCATIONS_PACKET@@EKGGE@Z.c)
 *     ?RtlpGetFunctionOverrideIndex@@YAPEAU_RTL_FUNCTION_OVERRIDE_INDEX@@PEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@K@Z @ 0x1409F16F8 (-RtlpGetFunctionOverrideIndex@@YAPEAU_RTL_FUNCTION_OVERRIDE_INDEX@@PEAU_RTL_FUNCTION_OVERRIDE_IN.c)
 *     ?RtlpParseBinaryDecisionDiagram@@YAJV?$span@$$CBE$0?0@gsl@@V?$span@$$CBK$0?0@2@KPEBU_RTL_FUNCTION_OVERRIDE_CAPABILITIES@@PEAU_RTL_FUNCTION_OVERRIDE_ENTRY@@PEBU_RTL_SYSTEM_OVERRIDE_INFORMATION@@K@Z @ 0x1409F1780 (-RtlpParseBinaryDecisionDiagram@@YAJV-$span@$$CBE$0-0@gsl@@V-$span@$$CBK$0-0@2@KPEBU_RTL_FUNCTIO.c)
 *     ?RtlpSelectFunctionFromBinaryDecisionDiagram@@YAXV?$span@$$CBU_IMAGE_BDD_DYNAMIC_RELOCATION@@$0?0@gsl@@V?$span@$$CBK$0?0@2@PEAU_RTL_FUNCTION_OVERRIDE_ENTRY@@PEBU_RTL_FUNCTION_OVERRIDE_CAPABILITIES@@EPEBU_RTL_SYSTEM_OVERRIDE_INFORMATION@@K@Z @ 0x1409F1968 (-RtlpSelectFunctionFromBinaryDecisionDiagram@@YAXV-$span@$$CBU_IMAGE_BDD_DYNAMIC_RELOCATION@@$0-.c)
 *     ?RtlpAllocateFunctionOverrideInfo@@YAJV?$span@$$CBK$0?0@gsl@@KPEAPEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@@Z @ 0x1409F1AB8 (-RtlpAllocateFunctionOverrideInfo@@YAJV-$span@$$CBK$0-0@gsl@@KPEAPEAU_RTL_FUNCTION_OVERRIDE_INFO.c)
 *     ?PspFinalizeScpCfgPage@@YAJV?$span@E$0?0@gsl@@W4_RTL_SCP_CFG_PAGE_TYPE@@PEAX2PEAU_RTL_SCP_CFG_NTDLL_EXPORTS@@PEAU_RTL_SCP_CFG_NTDLL_EXPORTS_ARM64EC@@EK@Z @ 0x140C24E60 (-PspFinalizeScpCfgPage@@YAJV-$span@E$0-0@gsl@@W4_RTL_SCP_CFG_PAGE_TYPE@@PEAX2PEAU_RTL_SCP_CFG_NT.c)
 *     PsInitializeScpCfgPages @ 0x140C252C0 (PsInitializeScpCfgPages.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall gsl::details::terminate(gsl::details *this, __int64 a2)
{
  guard_dispatch_icall_no_overrides(this, a2);
}

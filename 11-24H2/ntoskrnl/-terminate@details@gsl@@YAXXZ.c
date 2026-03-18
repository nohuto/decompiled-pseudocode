/*
 * XREFs of ?terminate@details@gsl@@YAXXZ @ 0x1404F8960
 * Callers:
 *     ??$copy@$$CBE$0?0E$0?0@gsl@@YAXV?$span@$$CBE$0?0@0@V?$span@E$0?0@0@@Z @ 0x140492648 (--$copy@$$CBE$0-0E$0-0@gsl@@YAXV-$span@$$CBE$0-0@0@V-$span@E$0-0@0@@Z.c)
 *     RtlDoesRequireFunctionOverrideFixups @ 0x140958E74 (RtlDoesRequireFunctionOverrideFixups.c)
 *     ?RtlpGetFunctionOverrideIndex@@YAPEBU_RTL_FUNCTION_OVERRIDE_INDEX@@PEBU_RTL_FUNCTION_OVERRIDE_INFORMATION@@K@Z @ 0x1409592B8 (-RtlpGetFunctionOverrideIndex@@YAPEBU_RTL_FUNCTION_OVERRIDE_INDEX@@PEBU_RTL_FUNCTION_OVERRIDE_IN.c)
 *     MiInitializePrivateFixupBitmap @ 0x1409DE038 (MiInitializePrivateFixupBitmap.c)
 *     RtlCreateFunctionOverrideFixupInfo @ 0x1409EB0E0 (RtlCreateFunctionOverrideFixupInfo.c)
 *     ?RtlpFindFunctionOverrideDvrtRecord@@YAJV?$span@$$CBE$0?0@gsl@@PEAV12@@Z @ 0x1409EB26C (-RtlpFindFunctionOverrideDvrtRecord@@YAJV-$span@$$CBE$0-0@gsl@@PEAV12@@Z.c)
 *     ?RtlpCreateFunctionOverrideFixupInfo@@YAJV?$span@$$CBE$0?0@gsl@@KKPEBU_RTL_FUNCTION_OVERRIDE_CAPABILITIES@@PEAPEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@PEBU_RTL_SYSTEM_OVERRIDE_INFORMATION@@@Z @ 0x1409EB484 (-RtlpCreateFunctionOverrideFixupInfo@@YAJV-$span@$$CBE$0-0@gsl@@KKPEBU_RTL_FUNCTION_OVERRIDE_CAP.c)
 *     ?RtlpParseFunctionOverrideRelocations@@YAJKV?$span@$$CBE$0?0@gsl@@KPEAU_RTLP_PARSE_RELOCATIONS_PACKET@@@Z @ 0x1409EBB14 (-RtlpParseFunctionOverrideRelocations@@YAJKV-$span@$$CBE$0-0@gsl@@KPEAU_RTLP_PARSE_RELOCATIONS_P.c)
 *     ?RtlpRecordFunctionOverrideRelocation@@YAXPEAU_RTLP_PARSE_RELOCATIONS_PACKET@@EKGGE@Z @ 0x1409EBE30 (-RtlpRecordFunctionOverrideRelocation@@YAXPEAU_RTLP_PARSE_RELOCATIONS_PACKET@@EKGGE@Z.c)
 *     ?RtlpGetFunctionOverrideIndex@@YAPEAU_RTL_FUNCTION_OVERRIDE_INDEX@@PEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@K@Z @ 0x1409EBFB8 (-RtlpGetFunctionOverrideIndex@@YAPEAU_RTL_FUNCTION_OVERRIDE_INDEX@@PEAU_RTL_FUNCTION_OVERRIDE_IN.c)
 *     ?RtlpParseBinaryDecisionDiagram@@YAJV?$span@$$CBE$0?0@gsl@@V?$span@$$CBK$0?0@2@KPEBU_RTL_FUNCTION_OVERRIDE_CAPABILITIES@@PEAU_RTL_FUNCTION_OVERRIDE_ENTRY@@PEBU_RTL_SYSTEM_OVERRIDE_INFORMATION@@K@Z @ 0x1409EC040 (-RtlpParseBinaryDecisionDiagram@@YAJV-$span@$$CBE$0-0@gsl@@V-$span@$$CBK$0-0@2@KPEBU_RTL_FUNCTIO.c)
 *     ?RtlpSelectFunctionFromBinaryDecisionDiagram@@YAXV?$span@$$CBU_IMAGE_BDD_DYNAMIC_RELOCATION@@$0?0@gsl@@V?$span@$$CBK$0?0@2@PEAU_RTL_FUNCTION_OVERRIDE_ENTRY@@PEBU_RTL_FUNCTION_OVERRIDE_CAPABILITIES@@EPEBU_RTL_SYSTEM_OVERRIDE_INFORMATION@@K@Z @ 0x1409EC228 (-RtlpSelectFunctionFromBinaryDecisionDiagram@@YAXV-$span@$$CBU_IMAGE_BDD_DYNAMIC_RELOCATION@@$0-.c)
 *     ?RtlpAllocateFunctionOverrideInfo@@YAJV?$span@$$CBK$0?0@gsl@@KPEAPEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@@Z @ 0x1409EC378 (-RtlpAllocateFunctionOverrideInfo@@YAJV-$span@$$CBK$0-0@gsl@@KPEAPEAU_RTL_FUNCTION_OVERRIDE_INFO.c)
 *     ?PspFinalizeScpCfgPage@@YAJV?$span@E$0?0@gsl@@W4_RTL_SCP_CFG_PAGE_TYPE@@PEAX2PEAU_RTL_SCP_CFG_NTDLL_EXPORTS@@PEAU_RTL_SCP_CFG_NTDLL_EXPORTS_ARM64EC@@EK@Z @ 0x140C3612C (-PspFinalizeScpCfgPage@@YAJV-$span@E$0-0@gsl@@W4_RTL_SCP_CFG_PAGE_TYPE@@PEAX2PEAU_RTL_SCP_CFG_NT.c)
 *     PsInitializeScpCfgPages @ 0x140C3658C (PsInitializeScpCfgPages.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall gsl::details::terminate(gsl::details *this, __int64 a2, __int64 a3, __int64 a4)
{
  guard_dispatch_icall_no_overrides(this, a2, a3, a4);
}

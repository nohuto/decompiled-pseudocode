/*
 * XREFs of ?HeatCoreProcessingEnabled@HeatProcessor@@AEAA_NXZ @ 0x18006A688
 * Callers:
 *     ?OnInputReport@HeatProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18006A5D0 (-OnInputReport@HeatProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ??1HeatProcessor@@MEAA@XZ @ 0x1801B19B0 (--1HeatProcessor@@MEAA@XZ.c)
 *     ?Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x1801B1C58 (-Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     ?OnDeviceArrival@HeatProcessor@@IEAAJPEAUDeviceInfo@@@Z @ 0x1801B1E14 (-OnDeviceArrival@HeatProcessor@@IEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@HeatProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1801B1ED0 (-OnDeviceRemoval@HeatProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceUpdate@HeatProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1801B1FB0 (-OnDeviceUpdate@HeatProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

bool __fastcall HeatProcessor::HeatCoreProcessingEnabled(HeatProcessor *this, __int64 a2, __int64 a3, const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !ISMScenarios::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismscenarios.cpp",
      a4);
  return *(_DWORD *)ISMScenarios::s_instance == 1;
}

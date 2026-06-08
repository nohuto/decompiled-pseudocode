/*
 * XREFs of WPP_RECORDER_SF_d @ 0x140005F14
 * Callers:
 *     ValidateCoordinatedState @ 0x14002E87C (ValidateCoordinatedState.c)
 *     AcpiEval_PSS @ 0x140031C38 (AcpiEval_PSS.c)
 *     AcpiEval_TSS @ 0x140031FE0 (AcpiEval_TSS.c)
 *     AcpiEval_XPSS @ 0x1400322EC (AcpiEval_XPSS.c)
 *     DisplayCpcResourcePriorityRegisterDescriptor @ 0x140033E84 (DisplayCpcResourcePriorityRegisterDescriptor.c)
 *     Display_CPC @ 0x140034044 (Display_CPC.c)
 *     Display_LPI @ 0x140034288 (Display_LPI.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x140039D18 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     HwDebugInitializeRegistryDebugParameter @ 0x14003A650 (HwDebugInitializeRegistryDebugParameter.c)
 *     HwDebugInitializeRegistryDebugRegister @ 0x14003AA2C (HwDebugInitializeRegistryDebugRegister.c)
 *     InitPepPerfStates @ 0x14003B3B4 (InitPepPerfStates.c)
 *     PepQueryPerfDomainInfo @ 0x14003BDA0 (PepQueryPerfDomainInfo.c)
 *     AcpiEval_CSD @ 0x14003EEEC (AcpiEval_CSD.c)
 *     AcpiEval_CST @ 0x14003F2EC (AcpiEval_CST.c)
 *     ValidatePlatformIdleState @ 0x1400403A0 (ValidatePlatformIdleState.c)
 *     ProcLibDeviceStart @ 0x1400408BC (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_d(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v7; // rbx
  unsigned int v9; // edi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  v7 = (unsigned __int64)a3 >> 16;
  v9 = a2;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v7 + 1) >= a2 )
    pfnWppTraceMessage(*((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v7), 43LL, a5, a4, va, 4LL, 0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, v9, a3, a5, v12, va, 4LL, 0LL);
}

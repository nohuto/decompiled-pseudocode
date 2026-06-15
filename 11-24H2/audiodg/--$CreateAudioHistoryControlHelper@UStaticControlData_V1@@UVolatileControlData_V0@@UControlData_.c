/*
 * XREFs of ??$CreateAudioHistoryControlHelper@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@YAJPEAPEAUICPAudioHistoryControl@@PEAUICrossProcessMemory@@@Z @ 0x14007F920
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@V?$CCPAudioHistoryControl@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UICPAudioHistoryControl@@AEAPEAUICrossProcessMemory@@@Details@WRL@Microsoft@@YAJPEAPEAUICPAudioHistoryControl@@AEAPEAUICrossProcessMemory@@@Z @ 0x14007F940 (--$MakeAndInitialize@V-$CCPAudioHistoryControl@UStaticControlData_V1@@UVolatileControlData_V0@@U.c)
 */

__int64 __fastcall CreateAudioHistoryControlHelper<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  return Microsoft::WRL::Details::MakeAndInitialize<CCPAudioHistoryControl<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>,ICPAudioHistoryControl,ICrossProcessMemory * &>(
           a1,
           &v3);
}

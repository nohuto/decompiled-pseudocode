/*
 * XREFs of ?ndisPeriodicReceivesAddCpu@@YAXK@Z @ 0x1400C1F40
 * Callers:
 *     ndisCpuHotAddHandler @ 0x1400A2B00 (ndisCpuHotAddHandler.c)
 * Callees:
 *     NdisInitializeTimer @ 0x14006CE00 (NdisInitializeTimer.c)
 *     ndisCreateThread @ 0x1400C1CC4 (ndisCreateThread.c)
 *     WPP_RECORDER_SF_dD @ 0x1400C22B8 (WPP_RECORDER_SF_dD_ea_1400C22B8.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140153F20 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall ndisPeriodicReceivesAddCpu(ULONG a1)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rcx
  int v4; // r8d
  int v5; // r9d
  _PROCESSOR_NUMBER ProcNumber; // [rsp+50h] [rbp+8h] BYREF

  ProcNumber = 0;
  v1 = a1;
  KeGetProcessorNumberFromIndex(a1, &ProcNumber);
  v2 = (unsigned __int64)(unsigned int)v1 << 7;
  NdisInitializeTimer((PNDIS_TIMER)((char *)qword_14011B4F0 + v2), (PNDIS_TIMER_FUNCTION)ndisPeriodicReceivesTimer, 0LL);
  KeSetTargetProcessorDpcEx((PKDPC)((char *)qword_14011B4F0 + v2 + 64), &ProcNumber);
  ndisWaitForKernelObject(&ndisPeriodicReceivesMutex);
  if ( byte_14011B4C1
    && (int)ndisCreateThread(v3, (void *)(unsigned int)v1, dword_14011B4C8, (PVOID *)qword_14011B508 + v1) < 0
    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_dD(*((_QWORD *)WPP_GLOBAL_Control + 8), (unsigned int)&WPP_RECORDER_INITIALIZED, v4, v5);
  }
  KeReleaseMutex(&ndisPeriodicReceivesMutex, 0);
}

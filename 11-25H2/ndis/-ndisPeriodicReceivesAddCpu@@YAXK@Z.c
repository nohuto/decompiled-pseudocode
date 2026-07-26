/*
 * XREFs of ?ndisPeriodicReceivesAddCpu@@YAXK@Z @ 0x1400C9170
 * Callers:
 *     ndisCpuHotAddHandler @ 0x1400AACB0 (ndisCpuHotAddHandler.c)
 * Callees:
 *     NdisInitializeTimer @ 0x140088F90 (NdisInitializeTimer.c)
 *     ndisCreateThread @ 0x1400C8EF4 (ndisCreateThread.c)
 *     WPP_RECORDER_SF_dD @ 0x1400C94E8 (WPP_RECORDER_SF_dD_ea_1400C94E8.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140160790 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
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
  NdisInitializeTimer((PNDIS_TIMER)((char *)qword_140125530 + v2), (PNDIS_TIMER_FUNCTION)ndisPeriodicReceivesTimer, 0LL);
  KeSetTargetProcessorDpcEx((PKDPC)((char *)qword_140125530 + v2 + 64), &ProcNumber);
  ndisWaitForKernelObject(&ndisPeriodicReceivesMutex);
  if ( byte_140125501
    && (int)ndisCreateThread(v3, (void *)(unsigned int)v1, dword_140125508, (PVOID *)qword_140125548 + v1) < 0
    && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_dD(*((_QWORD *)WPP_GLOBAL_Control + 8), (unsigned int)&WPP_RECORDER_INITIALIZED, v4, v5);
  }
  KeReleaseMutex(&ndisPeriodicReceivesMutex, 0);
}

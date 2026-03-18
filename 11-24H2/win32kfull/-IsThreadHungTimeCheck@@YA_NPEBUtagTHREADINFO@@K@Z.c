/*
 * XREFs of ?IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z @ 0x1402ACE84
 * Callers:
 *     xxxQueryInformationThread @ 0x14003E6F4 (xxxQueryInformationThread.c)
 *     xxxInterSendMsgEx @ 0x14011A1D0 (xxxInterSendMsgEx.c)
 *     ?IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z @ 0x140148A70 (-IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z.c)
 *     ?InterQueueMsgCleanup@@YAXK@Z @ 0x1401E851C (-InterQueueMsgCleanup@@YAXK@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

bool __fastcall IsThreadHungTimeCheck(const struct tagTHREADINFO *a1, unsigned int a2)
{
  __int64 v4; // rdx

  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 271);
  v4 = *((_QWORD *)a1 + 61);
  return (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
       - *(_DWORD *)(v4 + 20) > a2
      && (*(_DWORD *)(v4 + 16) & 0x1C07) == 0
      && !(unsigned int)PsGetThreadFreezeCount(*(_QWORD *)a1)
      && (*(_DWORD *)(*((_QWORD *)a1 + 58) + 12LL) & 0x40) == 0;
}

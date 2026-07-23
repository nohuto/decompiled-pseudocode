/*
 * XREFs of TpCheckTerminateWorker @ 0x1800AAF00
 * Callers:
 *     RtlExitUserThread @ 0x1800AADB0 (RtlExitUserThread.c)
 * Callees:
 *     DbgPrintEx @ 0x180074670 (DbgPrintEx.c)
 *     RtlRaiseException @ 0x18008CDF0 (RtlRaiseException.c)
 *     TppIsWorkerThread @ 0x1800AAF90 (TppIsWorkerThread.c)
 *     TppReportExceptionFilter @ 0x18015AB7C (TppReportExceptionFilter.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

void __cdecl TpCheckTerminateWorker(HANDLE Thread)
{
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  if ( (unsigned __int8)TppIsWorkerThread(Thread) )
  {
    DbgPrintEx(
      0x54u,
      0,
      "ThreadPool: attempt to terminate a worker thread via handle %p\n"
      "Contact the owner of the function calling Terminate/Exit thread.\n",
      Thread);
    memset_thunk_772440563353939046(&ExceptionRecord, 0, 0x98uLL);
    ExceptionRecord.ExceptionCode = -1073740004;
    ExceptionRecord.NumberParameters = 1;
    ExceptionRecord.ExceptionInformation[0] = (unsigned __int64)Thread;
    RtlRaiseException(&ExceptionRecord);
  }
}

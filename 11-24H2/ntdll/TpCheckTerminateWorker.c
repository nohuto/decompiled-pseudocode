/*
 * XREFs of TpCheckTerminateWorker @ 0x180004410
 * Callers:
 *     RtlExitUserThread @ 0x1800042C0 (RtlExitUserThread.c)
 * Callees:
 *     TppIsWorkerThread @ 0x1800044A0 (TppIsWorkerThread.c)
 *     DbgPrintEx @ 0x18005EA90 (DbgPrintEx.c)
 *     RtlRaiseException @ 0x180070510 (RtlRaiseException.c)
 *     TppReportExceptionFilter @ 0x18015C7BC (TppReportExceptionFilter.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

void __fastcall TpCheckTerminateWorker(const void *a1)
{
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  if ( (unsigned __int8)TppIsWorkerThread() )
  {
    DbgPrintEx(
      84LL,
      0LL,
      "ThreadPool: attempt to terminate a worker thread via handle %p\n"
      "Contact the owner of the function calling Terminate/Exit thread.\n",
      a1);
    memset_thunk_772440563353939046(&ExceptionRecord, 0, 0x98uLL);
    ExceptionRecord.ExceptionCode = -1073740004;
    ExceptionRecord.NumberParameters = 1;
    ExceptionRecord.ExceptionInformation[0] = (unsigned __int64)a1;
    RtlRaiseException(&ExceptionRecord);
  }
}

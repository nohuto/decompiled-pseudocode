/*
 * XREFs of TpCheckTerminateWorker @ 0x180008F30
 * Callers:
 *     RtlExitUserThread @ 0x180008DE0 (RtlExitUserThread.c)
 * Callees:
 *     TppIsWorkerThread @ 0x180008FC0 (TppIsWorkerThread.c)
 *     DbgPrintEx @ 0x18001A6F0 (DbgPrintEx.c)
 *     RtlRaiseException @ 0x180075020 (RtlRaiseException.c)
 *     TppReportExceptionFilter @ 0x18015DD1C (TppReportExceptionFilter.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
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

/*
 * XREFs of TppWorkerpOuterExceptionFilter @ 0x18015DF0C
 * Callers:
 *     TppWorkerThread @ 0x18007DCB0 (TppWorkerThread.c)
 * Callees:
 *     RtlReportException @ 0x1800CF050 (RtlReportException.c)
 *     TppExceptionFilter @ 0x18015DCDC (TppExceptionFilter.c)
 *     TppTerminateProcess @ 0x18015DD40 (TppTerminateProcess.c)
 */

__int64 __fastcall TppWorkerpOuterExceptionFilter(_EXCEPTION_POINTERS *a1, _DWORD *a2)
{
  unsigned __int32 v2; // ebx

  v2 = 0;
  if ( *a2 )
  {
    *a2 = 0;
  }
  else
  {
    v2 = TppExceptionFilter(a1);
    if ( v2 == 1 )
    {
      if ( a1->ExceptionRecord->ExceptionCode != -1073741571 )
      {
        TppTerminateProcess((NTSTATUS **)a1);
        __debugbreak();
      }
      RtlReportException(a1->ExceptionRecord, a1->ContextRecord, 3u);
    }
  }
  return v2;
}

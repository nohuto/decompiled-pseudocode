/*
 * XREFs of TppWorkerpInnerExceptionFilter @ 0x18015ACD4
 * Callers:
 *     TppWorkerThread @ 0x1800502D0 (TppWorkerThread.c)
 * Callees:
 *     RtlReportException @ 0x18010B4F0 (RtlReportException.c)
 *     TppExceptionFilter @ 0x18015AB3C (TppExceptionFilter.c)
 *     TppTerminateProcess @ 0x18015ABA0 (TppTerminateProcess.c)
 */

__int64 __fastcall TppWorkerpInnerExceptionFilter(_EXCEPTION_POINTERS *a1, __int64 a2, _DWORD *a3)
{
  LONG v5; // eax
  unsigned __int32 v6; // ebx
  EXCEPTION_RECORD *ExceptionRecord; // rcx

  v5 = TppExceptionFilter(a1);
  v6 = v5;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      ExceptionRecord = a1->ExceptionRecord;
      if ( a1->ExceptionRecord->ExceptionCode == -1073741571 )
      {
        RtlReportException(ExceptionRecord, a1->ContextRecord, 3u);
      }
      else
      {
        if ( ExceptionRecord->ExceptionCode != -1073740021
          && ExceptionRecord->ExceptionCode != -1073740020
          && ExceptionRecord->ExceptionCode != -1073740019
          && ExceptionRecord->ExceptionCode != -1073740018
          && ExceptionRecord->ExceptionCode != -1073740016 )
        {
          TppTerminateProcess((NTSTATUS **)a1);
          __debugbreak();
        }
        return (unsigned __int32)-1;
      }
    }
  }
  else
  {
    *a3 = 1;
  }
  return v6;
}

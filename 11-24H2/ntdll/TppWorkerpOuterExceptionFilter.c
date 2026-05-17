/*
 * XREFs of TppWorkerpOuterExceptionFilter @ 0x18015C9AC
 * Callers:
 *     TppWorkerThread @ 0x1800238D0 (TppWorkerThread.c)
 * Callees:
 *     RtlReportException @ 0x180001490 (RtlReportException.c)
 *     TppExceptionFilter @ 0x18015C77C (TppExceptionFilter.c)
 *     TppTerminateProcess @ 0x18015C7E0 (TppTerminateProcess.c)
 */

__int64 __fastcall TppWorkerpOuterExceptionFilter(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( *a2 )
  {
    *a2 = 0;
  }
  else
  {
    v2 = TppExceptionFilter((const void **)a1);
    if ( v2 == 1 )
    {
      if ( **(_DWORD **)a1 != -1073741571 )
      {
        TppTerminateProcess((unsigned int **)a1);
        __debugbreak();
      }
      RtlReportException(*(_QWORD *)a1, *(_QWORD *)(a1 + 8), 3u);
    }
  }
  return v2;
}

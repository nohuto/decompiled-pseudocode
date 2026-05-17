/*
 * XREFs of TppWorkerpInnerExceptionFilter @ 0x18015DE74
 * Callers:
 *     TppWorkerThread @ 0x18007DCB0 (TppWorkerThread.c)
 * Callees:
 *     RtlReportException @ 0x1800CF050 (RtlReportException.c)
 *     TppExceptionFilter @ 0x18015DCDC (TppExceptionFilter.c)
 *     TppTerminateProcess @ 0x18015DD40 (TppTerminateProcess.c)
 */

__int64 __fastcall TppWorkerpInnerExceptionFilter(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v5; // eax
  unsigned int v6; // ebx
  _DWORD *v7; // rcx

  v5 = TppExceptionFilter((const void **)a1);
  v6 = v5;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      v7 = *(_DWORD **)a1;
      if ( **(_DWORD **)a1 == -1073741571 )
      {
        RtlReportException(v7, *(_QWORD *)(a1 + 8), 3LL);
      }
      else
      {
        if ( *v7 != -1073740021 && *v7 != -1073740020 && *v7 != -1073740019 && *v7 != -1073740018 && *v7 != -1073740016 )
        {
          TppTerminateProcess((unsigned int **)a1);
          __debugbreak();
        }
        return (unsigned int)-1;
      }
    }
  }
  else
  {
    *a3 = 1;
  }
  return v6;
}

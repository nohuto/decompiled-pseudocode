/*
 * XREFs of PopSetHiberFileSize @ 0x1406F8024
 * Callers:
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 * Callees:
 *     PopSetHiberPersistedRegValue @ 0x1406F396C (PopSetHiberPersistedRegValue.c)
 *     PopSetHiberFileType @ 0x1406F780C (PopSetHiberFileType.c)
 *     PopCalculateHiberFileSize @ 0x14074FE78 (PopCalculateHiberFileSize.c)
 *     PopDiagTraceSetHiberFileFailurePoint @ 0x140755D94 (PopDiagTraceSetHiberFileFailurePoint.c)
 *     PopValidateHiberFileSize @ 0x140A725BC (PopValidateHiberFileSize.c)
 */

__int64 __fastcall PopSetHiberFileSize(unsigned int a1, _QWORD *a2, unsigned int *a3)
{
  int v5; // edi
  __int64 v6; // rbp
  int v7; // ebx
  unsigned int v8; // ecx
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0LL;
  v10 = 0;
  if ( a1 > 0x64 )
  {
    v8 = 2;
    v7 = -1073741811;
  }
  else
  {
    v5 = PopHiberFileSizePercent;
    PopHiberFileSizePercent = a1;
    PopCalculateHiberFileSize(&v11, 0LL);
    v6 = v11;
    v7 = PopValidateHiberFileSize(v11, 0LL, 0LL, &v10);
    if ( v7 >= 0 )
    {
      if ( (unsigned int)PopHiberFileSizePercent < 0x28 || (v7 = PopSetHiberFileType(2, 0LL, &v10), v7 >= 0) )
      {
        v7 = PopSetHiberPersistedRegValue(1, PopHiberFileSizePercent, (int *)&v10);
        if ( v7 >= 0 )
        {
          if ( a2 )
            *a2 = v6;
          return (unsigned int)v7;
        }
      }
    }
    v8 = v10;
    PopHiberFileSizePercent = v5;
  }
  if ( a3 )
    *a3 = v8;
  PopDiagTraceSetHiberFileFailurePoint((unsigned int)v7, v8);
  return (unsigned int)v7;
}

/*
 * XREFs of HalpScanForProfilingCorruptionInternal @ 0x1404358DC
 * Callers:
 *     HalpScanForProfilingCorruption @ 0x140435878 (HalpScanForProfilingCorruption.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x14055C7F0 (HalpTimerAlwaysOnClockInterrupt.c)
 * Callees:
 *     Feature_Test52061194__private_IsEnabledNoReportingNoInline @ 0x140435A90 (Feature_Test52061194__private_IsEnabledNoReportingNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpScanForProfilingCorruptionInternal(int a1, int a2, __int64 a3)
{
  unsigned int *v4; // rdi
  int v5; // ecx
  int v6; // ecx
  __int64 result; // rax
  __int64 v8; // rbp
  __int64 v9; // r14
  int v10; // edx
  __int64 i; // r9
  __int64 v12; // rsi

  v4 = *(unsigned int **)(KiProcessorBlock[a2] + 88);
  if ( a1 )
  {
    v5 = a1 - 1;
    if ( v5 )
    {
      v6 = v5 - 99;
      if ( v6 )
      {
        if ( v6 == 1 )
          v4 += 18;
        else
          v4 = 0LL;
      }
      else
      {
        v4 += 12;
      }
    }
    else
    {
      v4 += 6;
    }
  }
  result = Feature_Test52061194__private_IsEnabledNoReportingNoInline();
  v8 = 0LL;
  if ( (_DWORD)result )
  {
    result = v4[1];
    v9 = *((_QWORD *)v4 + 2);
    if ( (_DWORD)result )
    {
      do
      {
        v10 = 0;
        for ( i = 0LL; (unsigned int)i <= v4[2]; i = (unsigned int)(i + 1) )
        {
          if ( *(_DWORD *)(*((_QWORD *)v4 + 2) + 48 * i + 28) != 3 && ++v10 > (unsigned int)v8 )
            goto LABEL_24;
        }
        i = 0xFFFFFFFFLL;
LABEL_24:
        v12 = 6 * i;
        if ( !*(_BYTE *)(v9 + 48 * i + 40)
          && *(_DWORD *)(v9 + 48 * i + 24) <= 1u
          && (int)guard_dispatch_icall_no_overrides((unsigned int)i, *v4) >= 0 )
        {
          *(_QWORD *)(v9 + 8 * v12 + 8) = a3;
        }
        result = v4[1];
        LODWORD(v8) = v8 + 1;
      }
      while ( (unsigned int)v8 < (unsigned int)result );
    }
  }
  else if ( v4[1] )
  {
    do
    {
      result = *((_QWORD *)v4 + 2);
      if ( !*(_BYTE *)(result + 48 * v8 + 40) )
      {
        result = *(unsigned int *)(result + 48 * v8 + 24);
        if ( (unsigned int)result < 2 )
        {
          result = guard_dispatch_icall_no_overrides((unsigned int)v8, *v4);
          if ( (int)result >= 0 )
          {
            result = *((_QWORD *)v4 + 2);
            *(_QWORD *)(result + 48 * v8 + 8) = a3;
          }
        }
      }
      v8 = (unsigned int)(v8 + 1);
    }
    while ( (unsigned int)v8 < v4[1] );
  }
  return result;
}

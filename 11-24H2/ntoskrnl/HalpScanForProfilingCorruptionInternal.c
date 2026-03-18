/*
 * XREFs of HalpScanForProfilingCorruptionInternal @ 0x1404419E4
 * Callers:
 *     HalpScanForProfilingCorruption @ 0x140441980 (HalpScanForProfilingCorruption.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x14055EBC0 (HalpTimerAlwaysOnClockInterrupt.c)
 * Callees:
 *     Feature_Test52061194__private_IsEnabledNoReportingNoInline @ 0x140441B90 (Feature_Test52061194__private_IsEnabledNoReportingNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpScanForProfilingCorruptionInternal(int a1, int a2, __int64 a3)
{
  unsigned int *v4; // rdi
  int v5; // ecx
  int v6; // ecx
  __int64 result; // rax
  __int64 v8; // r9
  __int64 v9; // rbp
  __int64 v10; // r14
  int v11; // edx
  __int64 i; // r9
  __int64 v13; // rsi
  char v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = 0;
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
  v9 = 0LL;
  if ( (_DWORD)result )
  {
    result = v4[1];
    v10 = *((_QWORD *)v4 + 2);
    if ( (_DWORD)result )
    {
      do
      {
        v11 = 0;
        for ( i = 0LL; (unsigned int)i <= v4[2]; i = (unsigned int)(i + 1) )
        {
          if ( *(_DWORD *)(*((_QWORD *)v4 + 2) + 48 * i + 28) != 3 && ++v11 > (unsigned int)v9 )
            goto LABEL_26;
        }
        i = 0xFFFFFFFFLL;
LABEL_26:
        v13 = 6 * i;
        if ( !*(_BYTE *)(v10 + 48 * i + 40)
          && *(_DWORD *)(v10 + 48 * i + 24) <= 1u
          && (int)guard_dispatch_icall_no_overrides((unsigned int)i, *v4, &v14, i) >= 0 )
        {
          if ( v14 )
            *(_BYTE *)(v10 + 8 * v13 + 40) = 1;
          else
            *(_QWORD *)(v10 + 8 * v13 + 8) = a3;
        }
        result = v4[1];
        LODWORD(v9) = v9 + 1;
      }
      while ( (unsigned int)v9 < (unsigned int)result );
    }
  }
  else if ( v4[1] )
  {
    do
    {
      result = *((_QWORD *)v4 + 2);
      if ( !*(_BYTE *)(result + 48 * v9 + 40) )
      {
        result = *(unsigned int *)(result + 48 * v9 + 24);
        if ( (unsigned int)result < 2 )
        {
          result = guard_dispatch_icall_no_overrides((unsigned int)v9, *v4, &v14, v8);
          if ( (int)result >= 0 )
          {
            result = *((_QWORD *)v4 + 2);
            if ( v14 )
              *(_BYTE *)(result + 48 * v9 + 40) = 1;
            else
              *(_QWORD *)(result + 48 * v9 + 8) = a3;
          }
        }
      }
      v9 = (unsigned int)(v9 + 1);
    }
    while ( (unsigned int)v9 < v4[1] );
  }
  return result;
}

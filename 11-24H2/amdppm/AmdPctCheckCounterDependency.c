/*
 * XREFs of AmdPctCheckCounterDependency @ 0x1400236D0
 * Callers:
 *     AmdPctDiscoverPlatformCtrs @ 0x140023920 (AmdPctDiscoverPlatformCtrs.c)
 * Callees:
 *     AmdPctPlatformCounterState @ 0x140002D84 (AmdPctPlatformCounterState.c)
 */

unsigned __int64 __fastcall AmdPctCheckCounterDependency(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v4; // edi
  __int64 i; // rax
  unsigned int v6; // r11d
  __int64 v7; // rbp
  unsigned int v8; // r10d
  int v9; // r11d
  _BYTE *v10; // r14
  unsigned int v11; // edx
  union _LARGE_INTEGER Interval; // [rsp+50h] [rbp+18h] BYREF

  Interval.QuadPart = 0LL;
  v2 = a2;
  if ( (a2 & 0x800000000000LL) != 0 )
  {
    v4 = *(_DWORD *)(a1 + 1252) - *(_DWORD *)(a1 + 1248);
    for ( i = *(_QWORD *)(a1 + 1080); !*(_BYTE *)(i + 336); i = *(_QWORD *)(a1 + 1080) )
    {
      Interval.QuadPart = -100000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    v6 = *(_DWORD *)(a1 + 1248);
    if ( v6 < *(_DWORD *)(a1 + 1252) )
    {
      do
      {
        v7 = 6LL * v6;
        v10 = (_BYTE *)AmdPctPlatformCounterState(a1, v6);
        if ( *v10 && *(&AmdPctPlatformCounterCfg + v7 + 1) )
        {
          v11 = *((_DWORD *)&AmdPctPlatformCounterCfg + 2 * v7 + 7);
          if ( v11 > 2 || *(_BYTE *)AmdPctPlatformCounterState(a1, v11) )
            goto LABEL_12;
          *v10 = 0;
          v8 = *(_DWORD *)(a1 + 1252);
        }
        --v4;
LABEL_12:
        v6 = v9 + 1;
      }
      while ( v6 < v8 );
    }
    if ( !v4 )
      return v2 & 0xFFFF7FFFFFFFFFFFuLL;
  }
  return v2;
}

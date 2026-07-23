/*
 * XREFs of EtwpUpdateStackTracing @ 0x1409D1388
 * Callers:
 *     EtwpCheckForStackTracingExtension @ 0x1409D11F4 (EtwpCheckForStackTracingExtension.c)
 *     EtwSetPerformanceTraceInformation @ 0x140A39934 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     RtlClearAllBits @ 0x140441080 (RtlClearAllBits.c)
 *     EtwpInitializeClassicStackTracing @ 0x1409CF6F0 (EtwpInitializeClassicStackTracing.c)
 */

__int64 __fastcall EtwpUpdateStackTracing(_RTL_BITMAP *a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rbx
  int v7; // esi
  _BYTE *v9; // rcx
  int v10; // eax

  v6 = 0LL;
  v7 = 0;
  if ( a3 )
  {
    if ( a3 <= 0x100 )
    {
      if ( (a1[51].SizeOfBitMap & 0x80u) != 0 )
      {
        RtlClearAllBits(a1 + 65);
      }
      else
      {
        v7 = EtwpInitializeClassicStackTracing((__int64)a1);
        if ( v7 < 0 )
          return (unsigned int)v7;
      }
      while ( (unsigned int)v6 < a3 )
      {
        v9 = (char *)a1[65].Buffer + ((unsigned __int64)(*(_WORD *)(a2 + 4 * v6) & 0x1FFF) >> 3);
        v10 = (char)*v9;
        _bittestandset(&v10, *(_WORD *)(a2 + 4 * v6) & 7);
        *v9 = v10;
        v6 = (unsigned int)(v6 + 1);
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else if ( (a1[51].SizeOfBitMap & 0x80u) != 0 )
  {
    RtlClearAllBits(a1 + 65);
  }
  return (unsigned int)v7;
}

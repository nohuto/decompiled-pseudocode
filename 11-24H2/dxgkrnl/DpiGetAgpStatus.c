/*
 * XREFs of DpiGetAgpStatus @ 0x14024A6A4
 * Callers:
 *     DpiAddDevice @ 0x1402393B0 (DpiAddDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetAgpStatus(__int64 a1)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx
  unsigned int v3; // eax
  unsigned __int16 v4; // ax

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1112LL);
  if ( (*(_BYTE *)(v1 + 6) & 0x10) != 0 )
  {
    v3 = *(unsigned __int8 *)(v1 + 52);
    if ( v3 < 0x40 )
    {
      v2 = -1073741675;
      WdLogSingleEntry1(2LL, -1073741675LL);
      WdLogGlobalForLineNumber = 983;
    }
    else
    {
      while ( 1 )
      {
        v2 = 0;
        v4 = *(_WORD *)(v3 - 64 + v1 + 64);
        if ( (_BYTE)v4 == 2 )
          break;
        LOWORD(v3) = HIBYTE(v4);
        if ( !(_BYTE)v3 )
          return (unsigned int)-1073741823;
        v3 = (unsigned __int8)v3;
        if ( (unsigned __int8)v3 < 0x40u )
        {
          v2 = -1073741675;
          WdLogSingleEntry1(2LL, -1073741675LL);
          WdLogGlobalForLineNumber = 1015;
          return v2;
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v2;
}

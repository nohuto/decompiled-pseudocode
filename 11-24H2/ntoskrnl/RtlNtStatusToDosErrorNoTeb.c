/*
 * XREFs of RtlNtStatusToDosErrorNoTeb @ 0x140437E90
 * Callers:
 *     RtlNtStatusToDosError @ 0x14086B8C0 (RtlNtStatusToDosError.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlNtStatusToDosErrorNoTeb(NTSTATUS Status)
{
  ULONG result; // eax
  unsigned int v2; // r9d
  unsigned int v3; // r8d
  unsigned int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // r11
  unsigned int v7; // eax
  unsigned int v8; // r10d
  int v9; // eax

  if ( !Status )
    return 0;
  if ( Status == 259 )
    return 997;
  result = Status;
  if ( (Status & 0x20000000) == 0 )
  {
    if ( (Status & 0xFF0000) == 0x70000 && ((HIBYTE(Status) - 128) & 0xFFFFFFBF) == 0 )
      return (unsigned __int16)Status;
    v2 = Status & 0xCFFFFFFF;
    if ( (Status & 0xF0000000) != 0xD0000000 )
      v2 = Status;
    v3 = 0;
    v4 = 342;
    while ( 1 )
    {
      v5 = (v3 + v4) >> 1;
      v6 = v5;
      v7 = RtlpRunTable[v5];
      v8 = v2 - v7;
      if ( v2 >= v7 )
      {
        if ( v8 < BYTE4(RtlpRunTable[v6]) )
        {
          v9 = HIWORD(RtlpRunTable[v6]);
          if ( BYTE5(RtlpRunTable[v6]) == 1 )
            return (unsigned __int16)RtlpStatusTable[v8 + v9];
          else
            return (unsigned __int16)RtlpStatusTable[2 * v8 + v9] | ((unsigned __int16)RtlpStatusTable[2 * v8 + 1 + v9] << 16);
        }
        v3 = v5 + 1;
      }
      else
      {
        v4 = v5 - 1;
      }
      if ( v3 > v4 )
      {
        result = 317;
        if ( (v2 & 0xFFFF0000) == 0xC0010000 )
          return (unsigned __int16)v2;
        return result;
      }
    }
  }
  return result;
}

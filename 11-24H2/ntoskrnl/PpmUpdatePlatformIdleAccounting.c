/*
 * XREFs of PpmUpdatePlatformIdleAccounting @ 0x1405CCC84
 * Callers:
 *     PpmExitCoordinatedIdle @ 0x140371BCC (PpmExitCoordinatedIdle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmUpdatePlatformIdleAccounting(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 *v3; // r8

  result = 0LL;
  v3 = (unsigned __int64 *)&PpmIdleIntervalLimits;
  while ( a2 >= *v3 )
  {
    result = (unsigned int)(result + 1);
    v3 += 3;
    if ( (unsigned int)result >= 0x1A )
    {
      ++*(_DWORD *)(a1 + 40);
      goto LABEL_9;
    }
  }
  result = a1 + 32 * (result + 6);
  *(_QWORD *)result += a2;
  ++*(_DWORD *)(result + 24);
  if ( a2 < *(_QWORD *)(result + 8) )
    *(_QWORD *)(result + 8) = a2;
  if ( a2 > *(_QWORD *)(result + 16) )
    *(_QWORD *)(result + 16) = a2;
LABEL_9:
  if ( a2 < *(_QWORD *)(a1 + 24) )
    *(_QWORD *)(a1 + 24) = a2;
  if ( a2 > *(_QWORD *)(a1 + 16) )
    *(_QWORD *)(a1 + 16) = a2;
  return result;
}

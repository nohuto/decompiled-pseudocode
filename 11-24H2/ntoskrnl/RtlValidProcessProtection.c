/*
 * XREFs of RtlValidProcessProtection @ 0x140A82AA0
 * Callers:
 *     PspBuildCreateProcessContext @ 0x1408A2E70 (PspBuildCreateProcessContext.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlValidProcessProtection(unsigned __int8 a1)
{
  if ( a1 <= 0x51u )
  {
    if ( a1 == 81 || !a1 || a1 == 8 || a1 == 18 || a1 == 33 || a1 == 49 )
      return 1;
    return a1 == 65;
  }
  else
  {
    if ( a1 == 82 || a1 == 97 || a1 == 98 || a1 == 114 )
      return 1;
    return a1 == 129;
  }
}

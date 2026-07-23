/*
 * XREFs of PpmParkMaximumCoresParked @ 0x14047CC88
 * Callers:
 *     PpmCheckMakeupSkippedChecks @ 0x1402ADF00 (PpmCheckMakeupSkippedChecks.c)
 * Callees:
 *     <none>
 */

char PpmParkMaximumCoresParked()
{
  char v0; // r9
  unsigned __int16 i; // dx
  unsigned int v3; // r8d
  __int64 v4; // r10
  __int64 v5; // rcx

  v0 = 1;
  for ( i = 0; i < (unsigned int)PpmParkNumNodes; ++i )
  {
    v3 = 0;
    v4 = PpmParkNodes + 1296LL * i;
    while ( v3 < *(unsigned __int8 *)(v4 + 12) )
    {
      v5 = *(_QWORD *)(v4 + 1288) + 640LL * v3;
      if ( *(_WORD *)(v5 + 10) > *(_WORD *)(v5 + 2) )
      {
        v0 = 0;
        break;
      }
      ++v3;
    }
  }
  return v0;
}

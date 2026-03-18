/*
 * XREFs of PpmParkMaximumCoresParked @ 0x140203898
 * Callers:
 *     PpmCheckMakeupSkippedChecks @ 0x140204A70 (PpmCheckMakeupSkippedChecks.c)
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
    v4 = PpmParkNodes + 208LL * i;
    while ( v3 < *(unsigned __int8 *)(v4 + 11) )
    {
      v5 = *(_QWORD *)(v4 + 200) + 104LL * v3;
      if ( *(_BYTE *)(v5 + 5) > *(_BYTE *)(v5 + 1) )
      {
        v0 = 0;
        break;
      }
      ++v3;
    }
  }
  return v0;
}

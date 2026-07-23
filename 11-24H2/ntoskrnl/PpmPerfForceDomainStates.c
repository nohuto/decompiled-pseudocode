/*
 * XREFs of PpmPerfForceDomainStates @ 0x14048D450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char PpmPerfForceDomainStates()
{
  __int64 i; // r8
  unsigned int v1; // r9d
  __int64 v2; // rax

  for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 1213) )
    {
      v1 = 0;
      for ( *(_BYTE *)(i + 1212) = 1; v1 < *(_DWORD *)(i + 296); *(_BYTE *)(1192 * v2 + *(_QWORD *)(i + 312) + 140) = 1 )
        v2 = v1++;
    }
  }
  return 1;
}

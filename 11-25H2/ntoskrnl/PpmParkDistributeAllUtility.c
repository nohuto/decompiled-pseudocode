/*
 * XREFs of PpmParkDistributeAllUtility @ 0x140408810
 * Callers:
 *     <none>
 * Callees:
 *     PpmParkDistributeUtility @ 0x1404088A0 (PpmParkDistributeUtility.c)
 */

char PpmParkDistributeAllUtility()
{
  bool v0; // di
  unsigned int i; // ebx
  int v3; // [rsp+20h] [rbp-28h]

  v0 = BYTE3(PpmCurrentProfile[0][61 * dword_140F0B70C + 22]) != 0;
  for ( i = 0; i < PpmParkNumNodes; ++i )
  {
    LOBYTE(v3) = v0;
    PpmParkDistributeUtility(
      *(_QWORD *)(PpmParkNodes + 208LL * i + 16),
      *(_QWORD *)(PpmParkNodes + 208LL * i + 24),
      *(unsigned __int16 *)(PpmParkNodes + 208LL * i + 4),
      *(_BYTE *)(PpmParkNodes + 208LL * i + 118),
      v3,
      0,
      0LL);
  }
  return 1;
}

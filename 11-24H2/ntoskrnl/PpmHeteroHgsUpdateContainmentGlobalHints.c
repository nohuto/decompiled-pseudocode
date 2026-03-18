/*
 * XREFs of PpmHeteroHgsUpdateContainmentGlobalHints @ 0x1405D7664
 * Callers:
 *     PpmHeteroUpdateHgsConfiguration @ 0x140203248 (PpmHeteroUpdateHgsConfiguration.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmHeteroHgsUpdateContainmentGlobalHints(char a1)
{
  __int64 result; // rax
  unsigned int v2; // r8d
  unsigned __int16 i; // dx
  __int64 v4; // r9

  result = (unsigned int)PpmHeteroHgsContainmentState;
  if ( (PpmHeteroHgsContainmentState & 4) != 0 )
  {
    v2 = PpmParkNumNodes;
    for ( i = 0; i < v2; result = i )
    {
      v4 = *(_QWORD *)(1288LL * i + PpmParkNodes + 1272);
      if ( v4 )
        *(_BYTE *)(v4 + 827) = a1;
      ++i;
    }
  }
  return result;
}

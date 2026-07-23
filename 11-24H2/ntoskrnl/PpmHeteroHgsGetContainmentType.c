/*
 * XREFs of PpmHeteroHgsGetContainmentType @ 0x1404B5E60
 * Callers:
 *     PpmHeteroUpdateHgsConfiguration @ 0x1404E2E24 (PpmHeteroUpdateHgsConfiguration.c)
 * Callees:
 *     KeIsSubsetAffinityEx @ 0x1403A1D00 (KeIsSubsetAffinityEx.c)
 */

__int64 __fastcall PpmHeteroHgsGetContainmentType(unsigned __int16 *a1, unsigned int *a2)
{
  __int64 result; // rax
  __int64 v5; // rbp
  unsigned int **v6; // rsi
  unsigned int *v7; // rdi
  unsigned int v8; // ebx
  unsigned int v9; // r15d
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  *a2 = 3;
  if ( PpmParkNumNodes )
  {
    v5 = (unsigned int)PpmParkNumNodes;
    v6 = (unsigned int **)(PpmParkNodes + 1280);
    do
    {
      v7 = *v6;
      v8 = 0;
      v9 = **v6;
      while ( v8 < v9 )
      {
        result = KeIsSubsetAffinityEx(a1, (unsigned __int16 *)&v7[66 * v8 + 4]);
        if ( (_DWORD)result )
        {
          *a2 = v8;
          *((_BYTE *)v7 + 808) = 1;
          result = *a2;
          v7[203] = result;
          break;
        }
        ++v8;
      }
      v6 += 162;
      --v5;
    }
    while ( v5 );
  }
  return result;
}

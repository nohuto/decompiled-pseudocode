/*
 * XREFs of PpmPerfGetCurrentFrequency @ 0x1404016F0
 * Callers:
 *     PpmCheckComputeEnergy @ 0x140401530 (PpmCheckComputeEnergy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmPerfGetCurrentFrequency(__int64 a1, char a2)
{
  __int64 v2; // r8
  __int64 v4; // rax
  unsigned int v5; // edx
  __int64 result; // rax
  unsigned int v7; // ecx

  v2 = *(_QWORD *)(a1 + 35248);
  v4 = *(_QWORD *)(a1 + 35256);
  if ( !v2 || !v4 )
    return 100LL;
  if ( *(_BYTE *)(v4 + 112) )
  {
    result = *(unsigned int *)(v4 + 132);
    v5 = result;
    if ( !a2 )
      return result;
  }
  else
  {
    v5 = *(_DWORD *)(v4 + 80);
    result = v5;
  }
  v7 = *(_DWORD *)(v2 + 528);
  if ( v5 >= v7 )
    return v7;
  return result;
}

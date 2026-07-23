/*
 * XREFs of PopPowerAggregatorHandleSystemTransitionIntent @ 0x14099EAA0
 * Callers:
 *     <none>
 * Callees:
 *     PopPowerAggregatorDetermineTargetSystemPowerState @ 0x14099EB18 (PopPowerAggregatorDetermineTargetSystemPowerState.c)
 */

__int64 __fastcall PopPowerAggregatorHandleSystemTransitionIntent(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int *a4,
        __int64 a5)
{
  __int64 v5; // rbx
  int v6; // edi
  bool v7; // si
  __int64 result; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0;
  v5 = a2;
  if ( *(_DWORD *)(a1 + 16) == 3 )
    return 3221266435LL;
  v6 = *a4;
  v7 = a3 == 10;
  LOBYTE(a2) = a3 == 10;
  result = PopPowerAggregatorDetermineTargetSystemPowerState(*a4, a2, &v9, a5);
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(v5 + 28) = v9;
    result = 0LL;
    *(_DWORD *)v5 = 4;
    *(_BYTE *)(v5 + 24) = v7;
    *(_DWORD *)(v5 + 32) = v6;
  }
  return result;
}

/*
 * XREFs of PopPowerAggregatorHandleResumeIntent @ 0x1405D4E80
 * Callers:
 *     <none>
 * Callees:
 *     PopPowerAggregatorDetermineTargetSystemPowerState @ 0x14099EB18 (PopPowerAggregatorDetermineTargetSystemPowerState.c)
 */

__int64 __fastcall PopPowerAggregatorHandleResumeIntent(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // edi
  __int64 v6; // rsi
  bool v7; // zf
  char v9; // bp
  int v10; // ecx
  unsigned int v11; // ebx
  int v13; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  v6 = a2;
  v7 = *(_DWORD *)(a1 + 16) == 2;
  v13 = 0;
  if ( !v7 )
    return (unsigned int)-1073700861;
  v9 = *(_BYTE *)(a1 + 44);
  v10 = *(_DWORD *)(a1 + 40) - 1;
  if ( !v10 )
  {
    *(_DWORD *)a2 = 1;
    *(_BYTE *)(a2 + 24) = v9;
    return v5;
  }
  if ( v10 == 3 )
  {
    v11 = *(_DWORD *)(a1 + 48);
    LOBYTE(a2) = v9;
    PopPowerAggregatorDetermineTargetSystemPowerState(v11, a2, &v13, a5);
    *(_DWORD *)(v6 + 28) = v13;
    *(_DWORD *)v6 = 4;
    *(_BYTE *)(v6 + 24) = v9;
    *(_DWORD *)(v6 + 32) = v11;
  }
  else
  {
    return (unsigned int)-1073700861;
  }
  return v5;
}

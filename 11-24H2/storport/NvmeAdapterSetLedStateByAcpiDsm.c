/*
 * XREFs of NvmeAdapterSetLedStateByAcpiDsm @ 0x1400877CC
 * Callers:
 *     NvmeAdapterSetLedState @ 0x1400D70B0 (NvmeAdapterSetLedState.c)
 * Callees:
 *     NvmeDsmGetSupportedLedState @ 0x140087E18 (NvmeDsmGetSupportedLedState.c)
 *     NvmeDsmQuerySupportedFunctionForLedState @ 0x140087EF8 (NvmeDsmQuerySupportedFunctionForLedState.c)
 *     RaidDsmGetLedState @ 0x14008BC30 (RaidDsmGetLedState.c)
 *     RaidDsmSetLedState @ 0x14008BE68 (RaidDsmSetLedState.c)
 */

__int64 __fastcall NvmeAdapterSetLedStateByAcpiDsm(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 result; // rax
  unsigned int v6; // ebx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  v4 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v4 != 1314275652 )
    return 3221225659LL;
  if ( !v4 )
    return 3221225473LL;
  result = NvmeDsmQuerySupportedFunctionForLedState();
  if ( (int)result >= 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(v4 + 576) + 152LL) & 9) != 9 )
      return 3221225659LL;
    v6 = 4 * (*(_DWORD *)(a2 + 8) & 0x1FF);
    if ( (*(_DWORD *)(*(_QWORD *)(v4 + 576) + 152LL) & 2) != 0
      && (int)NvmeDsmGetSupportedLedState(a1) >= 0
      && (v6 & *(_DWORD *)(*(_QWORD *)(v4 + 576) + 156LL)) == 0 )
    {
      return 3221225659LL;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(v4 + 576) + 152LL) & 4) != 0 )
    {
      v7 = 0;
      result = RaidDsmGetLedState(a1, &v7);
      if ( (int)result >= 0 )
      {
        if ( *(_BYTE *)(a2 + 12) )
        {
          if ( (v6 & v7) != 0 )
            return result;
          v6 |= v7;
        }
        else
        {
          if ( (v6 & v7) == 0 )
            return result;
          v6 = v7 & ~v6;
        }
      }
    }
    return RaidDsmSetLedState(a1, v6);
  }
  return result;
}

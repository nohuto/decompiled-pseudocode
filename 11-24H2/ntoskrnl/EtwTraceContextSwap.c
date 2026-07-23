/*
 * XREFs of EtwTraceContextSwap @ 0x140415C40
 * Callers:
 *     SwapContext @ 0x1406B3AE0 (SwapContext.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x1403C3570 (PsGetEffectiveServerSilo.c)
 *     EtwpLogContextSwapEvent @ 0x140415D90 (EtwpLogContextSwapEvent.c)
 *     EtwpCoverageSamplerContextSwap @ 0x140650808 (EtwpCoverageSamplerContextSwap.c)
 */

__int64 __fastcall EtwTraceContextSwap(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 EffectiveServerSilo; // rsi
  __int64 v6; // rcx
  __int64 v7; // rbp
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx

  v4 = *(_QWORD *)(a1 + 1688);
  if ( v4 == -3 )
    EffectiveServerSilo = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 1520LL);
  else
    EffectiveServerSilo = PsGetEffectiveServerSilo(v4);
  v6 = *(_QWORD *)(a2 + 1688);
  if ( v6 == -3 )
    v7 = *(_QWORD *)(*(_QWORD *)(a2 + 544) + 1520LL);
  else
    v7 = PsGetEffectiveServerSilo(v6);
  v8 = &PspHostSiloGlobals;
  if ( EffectiveServerSilo )
    v9 = *(_QWORD **)(EffectiveServerSilo + 1504);
  else
    v9 = &PspHostSiloGlobals;
  v10 = v9[104];
  if ( v7 )
    v8 = *(_QWORD **)(v7 + 1504);
  v11 = v8[104];
  if ( EtwpHostSiloState != -4844 && (*(_DWORD *)(EtwpHostSiloState + 4848) & 4) != 0 )
    EtwpCoverageSamplerContextSwap(a2);
  result = EtwpLogContextSwapEvent(EtwpHostSiloState, a1, a2);
  if ( EffectiveServerSilo )
  {
    if ( EffectiveServerSilo == v7 )
    {
      if ( v10 )
      {
        v13 = a1;
        v14 = v10;
        return EtwpLogContextSwapEvent(v14, v13, a2);
      }
    }
    else if ( v10 )
    {
      result = EtwpLogContextSwapEvent(v10, a1, 0LL);
    }
  }
  if ( v7 && v11 )
  {
    v13 = 0LL;
    v14 = v11;
    return EtwpLogContextSwapEvent(v14, v13, a2);
  }
  return result;
}

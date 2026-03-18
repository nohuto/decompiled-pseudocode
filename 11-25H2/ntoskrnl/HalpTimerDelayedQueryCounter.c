/*
 * XREFs of HalpTimerDelayedQueryCounter @ 0x140544F00
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerGetInternalData @ 0x14027A960 (HalpTimerGetInternalData.c)
 *     HalpTimerScaleCounter @ 0x14028EF68 (HalpTimerScaleCounter.c)
 *     HalpHvCounterQueryCounter @ 0x14028FA00 (HalpHvCounterQueryCounter.c)
 *     HalpHpetQueryCounter @ 0x140350770 (HalpHpetQueryCounter.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpTimerDelayedQueryCounter(__int64 a1)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rsi
  unsigned __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rbp
  signed __int64 v10; // rax
  int v11; // r10d
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r11
  unsigned __int64 v15; // r11
  signed __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 InternalData; // rax
  __int64 (__fastcall *v19)(__int64, __int64); // rdx
  __int64 Counter; // rax
  signed __int32 v22[18]; // [rsp+0h] [rbp-48h] BYREF

  ++HalpTimerHeavilyPenalizedQpcCalls;
  *(_QWORD *)(HalpPerformanceCounter + 112) = HalpTimerDelayedQueryHardwareCount;
  HalpTimerDelayedQueryHardwareCount = 0LL;
  v2 = *(_QWORD *)(HalpTimerSavedPerformanceCounter + 16);
  if ( v2 )
  {
    do
    {
      v3 = HalpPerformanceCounter;
      v4 = *(_QWORD *)(HalpPerformanceCounter + 192);
      if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
      {
        InternalData = HalpTimerGetInternalData(HalpPerformanceCounter);
        v19 = *(__int64 (__fastcall **)(__int64, __int64))(v3 + 112);
        if ( v19 == HalpHvCounterQueryCounter )
          Counter = HalpHvCounterQueryCounter(InternalData, (__int64)v19);
        else
          Counter = guard_dispatch_icall_no_overrides(InternalData);
        v5 = *(_QWORD *)(v3 + 208);
        v16 = Counter;
      }
      else
      {
        do
        {
          v5 = *(_QWORD *)(v3 + 208);
          do
          {
            v6 = *(_QWORD *)(v3 + 200);
            v7 = HalpTimerGetInternalData(v3);
            if ( *(__int64 (**)())(v3 + 112) == HalpHpetQueryCounter )
              v8 = HalpHpetQueryCounter();
            else
              v8 = guard_dispatch_icall_no_overrides(v7);
            v9 = v8;
            _InterlockedOr(v22, 0);
            v10 = *(_QWORD *)(v3 + 200);
          }
          while ( v6 != v10 );
        }
        while ( v5 != *(_QWORD *)(v3 + 208) );
        v11 = *(_DWORD *)(v3 + 220);
        v12 = v6 ^ v9;
        if ( _bittest64((const __int64 *)&v12, (unsigned __int8)(v11 - 1)) )
        {
          v13 = 1LL;
          if ( v11 == 64 )
            v14 = -1LL;
          else
            v14 = (1LL << v11) - 1;
          v15 = v6 & v14;
          if ( v11 != 64 )
            v13 = 1LL << v11;
          v16 = (v9 | v6 ^ v15) + v13;
          if ( v9 >= v15 )
            v16 = v9 | v6 ^ v15;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 200), v16, v10);
        }
        else
        {
          if ( v11 == 64 )
            v17 = -1LL;
          else
            v17 = (1LL << v11) - 1;
          v16 = v9 | v6 & ~v17;
        }
      }
    }
    while ( HalpTimerScaleCounter(v5 + v16, v4, *(_QWORD *)(HalpTimerSavedPerformanceCounter + 192)) < v2 );
  }
  return guard_dispatch_icall_no_overrides(a1);
}

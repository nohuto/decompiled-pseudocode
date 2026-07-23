/*
 * XREFs of HalpTimerDelayedQueryCounter @ 0x1405450B0
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerScaleCounter @ 0x140314930 (HalpTimerScaleCounter.c)
 *     HalpTimerGetInternalData @ 0x14031B0F0 (HalpTimerGetInternalData.c)
 *     HalpHvCounterQueryCounter @ 0x1403BC300 (HalpHvCounterQueryCounter.c)
 *     HalpHpetQueryCounter @ 0x1403BC400 (HalpHpetQueryCounter.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpTimerDelayedQueryCounter(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 (*v9)(); // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // rbp
  signed __int64 v12; // rax
  int v13; // r10d
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r11
  unsigned __int64 v17; // r11
  signed __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 InternalData; // rax
  __int64 (__fastcall *v21)(__int64, __int64); // rdx
  __int64 Counter; // rax
  signed __int32 v24[18]; // [rsp+0h] [rbp-48h] BYREF

  ++HalpTimerHeavilyPenalizedQpcCalls;
  *(_QWORD *)(HalpPerformanceCounter + 112) = HalpTimerDelayedQueryHardwareCount;
  HalpTimerDelayedQueryHardwareCount = 0LL;
  v3 = *(_QWORD *)(HalpTimerSavedPerformanceCounter + 16);
  if ( v3 )
  {
    do
    {
      v4 = HalpPerformanceCounter;
      v5 = *(_QWORD *)(HalpPerformanceCounter + 192);
      if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
      {
        InternalData = HalpTimerGetInternalData(HalpPerformanceCounter);
        v21 = *(__int64 (__fastcall **)(__int64, __int64))(v4 + 112);
        if ( v21 == HalpHvCounterQueryCounter )
          Counter = HalpHvCounterQueryCounter(InternalData, (__int64)v21);
        else
          Counter = guard_dispatch_icall_no_overrides(InternalData, v21);
        v6 = *(_QWORD *)(v4 + 208);
        v18 = Counter;
      }
      else
      {
        do
        {
          v6 = *(_QWORD *)(v4 + 208);
          do
          {
            v7 = *(_QWORD *)(v4 + 200);
            v8 = HalpTimerGetInternalData(v4);
            v9 = *(__int64 (**)())(v4 + 112);
            if ( v9 == HalpHpetQueryCounter )
              v10 = HalpHpetQueryCounter();
            else
              v10 = guard_dispatch_icall_no_overrides(v8, v9);
            v11 = v10;
            _InterlockedOr(v24, 0);
            v12 = *(_QWORD *)(v4 + 200);
          }
          while ( v7 != v12 );
        }
        while ( v6 != *(_QWORD *)(v4 + 208) );
        v13 = *(_DWORD *)(v4 + 220);
        v14 = v7 ^ v11;
        if ( _bittest64((const __int64 *)&v14, (unsigned __int8)(v13 - 1)) )
        {
          v15 = 1LL;
          if ( v13 == 64 )
            v16 = -1LL;
          else
            v16 = (1LL << v13) - 1;
          v17 = v7 & v16;
          if ( v13 != 64 )
            v15 = 1LL << v13;
          v18 = (v11 | v7 ^ v17) + v15;
          if ( v11 >= v17 )
            v18 = v11 | v7 ^ v17;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 200), v18, v12);
        }
        else
        {
          if ( v13 == 64 )
            v19 = -1LL;
          else
            v19 = (1LL << v13) - 1;
          v18 = v11 | v7 & ~v19;
        }
      }
    }
    while ( HalpTimerScaleCounter(v6 + v18, v5, *(_QWORD *)(HalpTimerSavedPerformanceCounter + 192)) < v3 );
  }
  return guard_dispatch_icall_no_overrides(a1, a2);
}

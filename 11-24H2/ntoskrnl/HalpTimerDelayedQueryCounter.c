/*
 * XREFs of HalpTimerDelayedQueryCounter @ 0x1405477F0
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerScaleCounter @ 0x14030AA50 (HalpTimerScaleCounter.c)
 *     HalpTimerGetInternalData @ 0x14033BC10 (HalpTimerGetInternalData.c)
 *     HalpHvCounterQueryCounter @ 0x1403D6CB0 (HalpHvCounterQueryCounter.c)
 *     HalpHpetQueryCounter @ 0x1403D6DB0 (HalpHpetQueryCounter.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpTimerDelayedQueryCounter(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  __int64 v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 (*v13)(); // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // rbp
  signed __int64 v16; // rax
  int v17; // r10d
  unsigned __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r11
  unsigned __int64 v21; // r11
  signed __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 InternalData; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 (__fastcall *v27)(__int64, __int64, __int64, __int64); // rdx
  __int64 Counter; // rax
  signed __int32 v30[18]; // [rsp+0h] [rbp-48h] BYREF

  ++HalpTimerHeavilyPenalizedQpcCalls;
  *(_QWORD *)(HalpPerformanceCounter + 112) = HalpTimerDelayedQueryHardwareCount;
  HalpTimerDelayedQueryHardwareCount = 0LL;
  v5 = *(_QWORD *)(HalpTimerSavedPerformanceCounter + 16);
  if ( v5 )
  {
    do
    {
      v6 = HalpPerformanceCounter;
      v7 = *(_QWORD *)(HalpPerformanceCounter + 192);
      if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
      {
        InternalData = HalpTimerGetInternalData(HalpPerformanceCounter);
        v27 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v6 + 112);
        if ( v27 == HalpHvCounterQueryCounter )
          Counter = HalpHvCounterQueryCounter(InternalData, (__int64)v27, v25, v26);
        else
          Counter = guard_dispatch_icall_no_overrides(InternalData, v27, v25, v26);
        v8 = *(_QWORD *)(v6 + 208);
        v22 = Counter;
      }
      else
      {
        do
        {
          v8 = *(_QWORD *)(v6 + 208);
          do
          {
            v9 = *(_QWORD *)(v6 + 200);
            v10 = HalpTimerGetInternalData(v6);
            v13 = *(__int64 (**)())(v6 + 112);
            if ( v13 == HalpHpetQueryCounter )
              v14 = HalpHpetQueryCounter();
            else
              v14 = guard_dispatch_icall_no_overrides(v10, v13, v11, v12);
            v15 = v14;
            _InterlockedOr(v30, 0);
            v16 = *(_QWORD *)(v6 + 200);
          }
          while ( v9 != v16 );
        }
        while ( v8 != *(_QWORD *)(v6 + 208) );
        v17 = *(_DWORD *)(v6 + 220);
        v18 = v9 ^ v15;
        if ( _bittest64((const __int64 *)&v18, (unsigned __int8)(v17 - 1)) )
        {
          v19 = 1LL;
          if ( v17 == 64 )
            v20 = -1LL;
          else
            v20 = (1LL << v17) - 1;
          v21 = v9 & v20;
          if ( v17 != 64 )
            v19 = 1LL << v17;
          v22 = (v15 | v9 ^ v21) + v19;
          if ( v15 >= v21 )
            v22 = v15 | v9 ^ v21;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 200), v22, v16);
        }
        else
        {
          if ( v17 == 64 )
            v23 = -1LL;
          else
            v23 = (1LL << v17) - 1;
          v22 = v15 | v9 & ~v23;
        }
      }
    }
    while ( HalpTimerScaleCounter(v8 + v22, v7, *(_QWORD *)(HalpTimerSavedPerformanceCounter + 192)) < v5 );
  }
  return guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
}

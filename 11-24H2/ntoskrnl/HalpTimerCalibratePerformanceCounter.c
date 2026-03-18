/*
 * XREFs of HalpTimerCalibratePerformanceCounter @ 0x1403D69D4
 * Callers:
 *     HalpTimerRestorePerformanceCounter @ 0x1403D68C8 (HalpTimerRestorePerformanceCounter.c)
 *     HalCalibratePerformanceCounter @ 0x14053A440 (HalCalibratePerformanceCounter.c)
 *     HalpTimerInitialize @ 0x14053B368 (HalpTimerInitialize.c)
 *     HalpTimerPerformanceCounterPowerChange @ 0x140548008 (HalpTimerPerformanceCounterPowerChange.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14033BC10 (HalpTimerGetInternalData.c)
 *     HalpTimerPropagateQpcBiasUpdate @ 0x1403D6B54 (HalpTimerPropagateQpcBiasUpdate.c)
 *     HalpHvCounterQueryCounter @ 0x1403D6CB0 (HalpHvCounterQueryCounter.c)
 *     HalpHpetQueryCounter @ 0x1403D6DB0 (HalpHpetQueryCounter.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpTimerCalibratePerformanceCounter(__int64 a1, __int64 a2)
{
  __int64 InternalData; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(_QWORD); // rdx
  __int64 Counter; // rax
  __int64 v10; // rsi
  signed __int64 v11; // rdx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 (__fastcall *v17)(_QWORD); // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // r11
  signed __int64 v20; // rax
  int v21; // r8d
  unsigned __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r10
  unsigned __int64 v25; // r10
  signed __int32 v26[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( *(_DWORD *)(a1 + 220) == 64 )
  {
    InternalData = HalpTimerGetInternalData(a1);
    v8 = *(__int64 (__fastcall **)(_QWORD))(v7 + 112);
    if ( v8 == HalpHvCounterQueryCounter )
      Counter = HalpHvCounterQueryCounter(InternalData);
    else
      Counter = guard_dispatch_icall_no_overrides(InternalData, v8, v5, v6);
    v10 = *(_QWORD *)(a1 + 208);
    v11 = Counter;
  }
  else
  {
    do
    {
      v10 = *(_QWORD *)(a1 + 208);
      do
      {
        v13 = *(_QWORD *)(a1 + 200);
        v14 = HalpTimerGetInternalData(a1);
        v17 = *(__int64 (__fastcall **)(_QWORD))(a1 + 112);
        if ( v17 == HalpHpetQueryCounter )
          v18 = HalpHpetQueryCounter(v14);
        else
          v18 = guard_dispatch_icall_no_overrides(v14, v17, v15, v16);
        v19 = v18;
        _InterlockedOr(v26, 0);
        v20 = *(_QWORD *)(a1 + 200);
      }
      while ( v13 != v20 );
    }
    while ( v10 != *(_QWORD *)(a1 + 208) );
    v21 = *(_DWORD *)(a1 + 220);
    v22 = v13 ^ v19;
    if ( _bittest64((const __int64 *)&v22, (unsigned __int8)(v21 - 1)) )
    {
      v24 = -1LL;
      if ( v21 != 64 )
        v24 = (1LL << v21) - 1;
      v25 = v13 & v24;
      v11 = (v19 | v13 ^ v25) + (1LL << v21);
      if ( v19 >= v25 )
        v11 = v19 | v13 ^ v25;
      _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 200), v11, v20);
    }
    else
    {
      if ( v21 == 64 )
        v23 = -1LL;
      else
        v23 = (1LL << v21) - 1;
      v11 = v19 | v13 & ~v23;
    }
  }
  *(_QWORD *)(a1 + 208) = a2 + *(_QWORD *)(a1 + 208) - v10 - v11;
  HalpTimerPropagateQpcBiasUpdate(a1);
  return 0LL;
}

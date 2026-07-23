/*
 * XREFs of HalpTimerCalibratePerformanceCounter @ 0x1403BC024
 * Callers:
 *     HalpTimerRestorePerformanceCounter @ 0x1403BBF18 (HalpTimerRestorePerformanceCounter.c)
 *     HalCalibratePerformanceCounter @ 0x140537C80 (HalCalibratePerformanceCounter.c)
 *     HalpTimerInitialize @ 0x140538BA8 (HalpTimerInitialize.c)
 *     HalpTimerPerformanceCounterPowerChange @ 0x1405458C8 (HalpTimerPerformanceCounterPowerChange.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14031B0F0 (HalpTimerGetInternalData.c)
 *     HalpTimerPropagateQpcBiasUpdate @ 0x1403BC1A4 (HalpTimerPropagateQpcBiasUpdate.c)
 *     HalpHvCounterQueryCounter @ 0x1403BC300 (HalpHvCounterQueryCounter.c)
 *     HalpHpetQueryCounter @ 0x1403BC400 (HalpHpetQueryCounter.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpTimerCalibratePerformanceCounter(__int64 a1, __int64 a2)
{
  __int64 InternalData; // rax
  __int64 v5; // rcx
  __int64 (__fastcall *v6)(_QWORD); // rdx
  __int64 Counter; // rax
  __int64 v8; // rsi
  signed __int64 v9; // rdx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 (__fastcall *v13)(_QWORD); // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // r11
  signed __int64 v16; // rax
  int v17; // r8d
  unsigned __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r10
  unsigned __int64 v21; // r10
  signed __int32 v22[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( *(_DWORD *)(a1 + 220) == 64 )
  {
    InternalData = HalpTimerGetInternalData(a1);
    v6 = *(__int64 (__fastcall **)(_QWORD))(v5 + 112);
    if ( v6 == HalpHvCounterQueryCounter )
      Counter = HalpHvCounterQueryCounter(InternalData);
    else
      Counter = guard_dispatch_icall_no_overrides(InternalData, v6);
    v8 = *(_QWORD *)(a1 + 208);
    v9 = Counter;
  }
  else
  {
    do
    {
      v8 = *(_QWORD *)(a1 + 208);
      do
      {
        v11 = *(_QWORD *)(a1 + 200);
        v12 = HalpTimerGetInternalData(a1);
        v13 = *(__int64 (__fastcall **)(_QWORD))(a1 + 112);
        if ( v13 == HalpHpetQueryCounter )
          v14 = HalpHpetQueryCounter(v12);
        else
          v14 = guard_dispatch_icall_no_overrides(v12, v13);
        v15 = v14;
        _InterlockedOr(v22, 0);
        v16 = *(_QWORD *)(a1 + 200);
      }
      while ( v11 != v16 );
    }
    while ( v8 != *(_QWORD *)(a1 + 208) );
    v17 = *(_DWORD *)(a1 + 220);
    v18 = v11 ^ v15;
    if ( _bittest64((const __int64 *)&v18, (unsigned __int8)(v17 - 1)) )
    {
      v20 = -1LL;
      if ( v17 != 64 )
        v20 = (1LL << v17) - 1;
      v21 = v11 & v20;
      v9 = (v15 | v11 ^ v21) + (1LL << v17);
      if ( v15 >= v21 )
        v9 = v15 | v11 ^ v21;
      _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 200), v9, v16);
    }
    else
    {
      if ( v17 == 64 )
        v19 = -1LL;
      else
        v19 = (1LL << v17) - 1;
      v9 = v15 | v11 & ~v19;
    }
  }
  *(_QWORD *)(a1 + 208) = a2 + *(_QWORD *)(a1 + 208) - v8 - v9;
  HalpTimerPropagateQpcBiasUpdate(a1);
  return 0LL;
}

/*
 * XREFs of HalpTimerDpcRoutine @ 0x1403BBD10
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     HalpTimerGetInternalData @ 0x14031B0F0 (HalpTimerGetInternalData.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     HalpHvCounterQueryCounter @ 0x1403BC300 (HalpHvCounterQueryCounter.c)
 *     HalpHpetQueryCounter @ 0x1403BC400 (HalpHpetQueryCounter.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

BOOLEAN HalpTimerDpcRoutine()
{
  __int64 v0; // rdi
  __int64 InternalData; // rax
  __int64 (__fastcall *v2)(_QWORD); // rdx
  __int64 Counter; // rax
  __int64 v4; // rsi
  signed __int64 v5; // r8
  unsigned __int64 v6; // rbx
  BOOLEAN result; // al
  struct _KDPC *v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 (__fastcall *v11)(_QWORD); // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // rbp
  signed __int64 v14; // rax
  int v15; // r10d
  __int64 v16; // r9
  __int64 v17; // r8
  unsigned __int64 v18; // r9
  __int64 v19; // r8
  signed __int32 v20[8]; // [rsp+0h] [rbp-38h] BYREF

  KeQueryPerformanceCounter(0LL);
  v0 = HalpAlwaysOnCounter;
  if ( HalpAlwaysOnCounter )
  {
    if ( *(_DWORD *)(HalpAlwaysOnCounter + 220) == 64 )
    {
      InternalData = HalpTimerGetInternalData(HalpAlwaysOnCounter);
      v2 = *(__int64 (__fastcall **)(_QWORD))(v0 + 112);
      if ( v2 == HalpHvCounterQueryCounter )
        Counter = HalpHvCounterQueryCounter(InternalData);
      else
        Counter = guard_dispatch_icall_no_overrides(InternalData, v2);
      v4 = *(_QWORD *)(v0 + 208);
      v5 = Counter;
    }
    else
    {
      do
      {
        v4 = *(_QWORD *)(v0 + 208);
        do
        {
          v9 = *(_QWORD *)(v0 + 200);
          v10 = HalpTimerGetInternalData(v0);
          v11 = *(__int64 (__fastcall **)(_QWORD))(v0 + 112);
          if ( v11 == HalpHpetQueryCounter )
            v12 = HalpHpetQueryCounter(v10);
          else
            v12 = guard_dispatch_icall_no_overrides(v10, v11);
          v13 = v12;
          _InterlockedOr(v20, 0);
          v14 = *(_QWORD *)(v0 + 200);
        }
        while ( v9 != v14 );
      }
      while ( v4 != *(_QWORD *)(v0 + 208) );
      v15 = *(_DWORD *)(v0 + 220);
      if ( ((v9 ^ v13) & (1LL << ((unsigned __int8)v15 - 1))) != 0 )
      {
        if ( v15 == 64 )
          v16 = -1LL;
        else
          v16 = (1LL << v15) - 1;
        v17 = 0LL;
        v18 = v9 & v16;
        if ( v15 != 64 )
          v17 = 1LL << v15;
        v5 = (v13 | v9 ^ v18) + v17;
        if ( v13 >= v18 )
          v5 = v13 | v9 ^ v18;
        _InterlockedCompareExchange64((volatile signed __int64 *)(v0 + 200), v5, v14);
      }
      else
      {
        if ( v15 == 64 )
          v19 = -1LL;
        else
          v19 = (1LL << v15) - 1;
        v5 = v13 | v9 & ~v19;
      }
    }
    if ( v4 + v5 < HalpTimerLastAlwaysOnCounterValue )
      KeBugCheckEx(0x5Cu, 0x113uLL, 0x27uLL, v4 + v5, HalpTimerLastAlwaysOnCounterValue);
    HalpTimerLastAlwaysOnCounterValue = v4 + v5;
  }
  v6 = MEMORY[0xFFFFF78000000014];
  result = MEMORY[0xFFFFF78000000014] - HalpTimerLastDpc;
  if ( (unsigned __int64)(MEMORY[0xFFFFF78000000014] - HalpTimerLastDpc) >= 0x47868C00 )
  {
    result = KiProcessorBlock[0];
    v8 = (struct _KDPC *)_InterlockedExchange64((volatile __int64 *)(KiProcessorBlock[0] + 224), 0LL);
    if ( v8 )
      result = KeInsertQueueDpc(v8, (PVOID)(unsigned int)v6, (PVOID)HIDWORD(v6));
    HalpTimerLastDpc = v6;
  }
  return result;
}

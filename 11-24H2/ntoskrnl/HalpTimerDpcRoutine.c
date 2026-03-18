/*
 * XREFs of HalpTimerDpcRoutine @ 0x1403D66C0
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     HalpTimerGetInternalData @ 0x14033BC10 (HalpTimerGetInternalData.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     HalpHvCounterQueryCounter @ 0x1403D6CB0 (HalpHvCounterQueryCounter.c)
 *     HalpHpetQueryCounter @ 0x1403D6DB0 (HalpHpetQueryCounter.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

BOOLEAN HalpTimerDpcRoutine()
{
  __int64 v0; // rdi
  __int64 InternalData; // rax
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 (__fastcall *v4)(_QWORD); // rdx
  __int64 Counter; // rax
  __int64 v6; // rsi
  signed __int64 v7; // r8
  unsigned __int64 v8; // rbx
  BOOLEAN result; // al
  struct _KDPC *v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 (__fastcall *v15)(_QWORD); // rdx
  __int64 v16; // rax
  unsigned __int64 v17; // rbp
  signed __int64 v18; // rax
  int v19; // r10d
  __int64 v20; // r9
  __int64 v21; // r8
  unsigned __int64 v22; // r9
  __int64 v23; // r8
  signed __int32 v24[8]; // [rsp+0h] [rbp-38h] BYREF

  KeQueryPerformanceCounter(0LL);
  v0 = HalpAlwaysOnCounter;
  if ( HalpAlwaysOnCounter )
  {
    if ( *(_DWORD *)(HalpAlwaysOnCounter + 220) == 64 )
    {
      InternalData = HalpTimerGetInternalData(HalpAlwaysOnCounter);
      v4 = *(__int64 (__fastcall **)(_QWORD))(v0 + 112);
      if ( v4 == HalpHvCounterQueryCounter )
        Counter = HalpHvCounterQueryCounter(InternalData);
      else
        Counter = guard_dispatch_icall_no_overrides(InternalData, v4, v2, v3);
      v6 = *(_QWORD *)(v0 + 208);
      v7 = Counter;
    }
    else
    {
      do
      {
        v6 = *(_QWORD *)(v0 + 208);
        do
        {
          v11 = *(_QWORD *)(v0 + 200);
          v12 = HalpTimerGetInternalData(v0);
          v15 = *(__int64 (__fastcall **)(_QWORD))(v0 + 112);
          if ( v15 == HalpHpetQueryCounter )
            v16 = HalpHpetQueryCounter(v12);
          else
            v16 = guard_dispatch_icall_no_overrides(v12, v15, v13, v14);
          v17 = v16;
          _InterlockedOr(v24, 0);
          v18 = *(_QWORD *)(v0 + 200);
        }
        while ( v11 != v18 );
      }
      while ( v6 != *(_QWORD *)(v0 + 208) );
      v19 = *(_DWORD *)(v0 + 220);
      if ( ((v11 ^ v17) & (1LL << ((unsigned __int8)v19 - 1))) != 0 )
      {
        if ( v19 == 64 )
          v20 = -1LL;
        else
          v20 = (1LL << v19) - 1;
        v21 = 0LL;
        v22 = v11 & v20;
        if ( v19 != 64 )
          v21 = 1LL << v19;
        v7 = (v17 | v11 ^ v22) + v21;
        if ( v17 >= v22 )
          v7 = v17 | v11 ^ v22;
        _InterlockedCompareExchange64((volatile signed __int64 *)(v0 + 200), v7, v18);
      }
      else
      {
        if ( v19 == 64 )
          v23 = -1LL;
        else
          v23 = (1LL << v19) - 1;
        v7 = v17 | v11 & ~v23;
      }
    }
    if ( v6 + v7 < HalpTimerLastAlwaysOnCounterValue )
      KeBugCheckEx(0x5Cu, 0x113uLL, 0x27uLL, v6 + v7, HalpTimerLastAlwaysOnCounterValue);
    HalpTimerLastAlwaysOnCounterValue = v6 + v7;
  }
  v8 = MEMORY[0xFFFFF78000000014];
  result = MEMORY[0xFFFFF78000000014] - HalpTimerLastDpc;
  if ( (unsigned __int64)(MEMORY[0xFFFFF78000000014] - HalpTimerLastDpc) >= 0x47868C00 )
  {
    result = KiProcessorBlock[0];
    v10 = (struct _KDPC *)_InterlockedExchange64((volatile __int64 *)(KiProcessorBlock[0] + 224), 0LL);
    if ( v10 )
      result = KeInsertQueueDpc(v10, (PVOID)(unsigned int)v8, (PVOID)HIDWORD(v8));
    HalpTimerLastDpc = v8;
  }
  return result;
}

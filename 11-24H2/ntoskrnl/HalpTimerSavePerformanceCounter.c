/*
 * XREFs of HalpTimerSavePerformanceCounter @ 0x1403BBA50
 * Callers:
 *     HalpAcpiPreSleep @ 0x140B6DE6C (HalpAcpiPreSleep.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14031B0F0 (HalpTimerGetInternalData.c)
 *     HalpHvCounterQueryCounter @ 0x1403BC300 (HalpHvCounterQueryCounter.c)
 *     HalpHpetQueryCounter @ 0x1403BC400 (HalpHpetQueryCounter.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 HalpTimerSavePerformanceCounter()
{
  __int64 v0; // rdi
  __int64 v1; // rbp
  __int64 InternalData; // rax
  __int64 (__fastcall *v3)(_QWORD); // rdx
  __int64 Counter; // rax
  __int64 v5; // r14
  signed __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 (__fastcall *v10)(_QWORD); // rdx
  __int64 v11; // rax
  __int64 v12; // r14
  signed __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 (__fastcall *v16)(_QWORD); // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // r10
  signed __int64 v19; // rax
  int v20; // r9d
  unsigned __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 (__fastcall *v25)(_QWORD); // rdx
  __int64 v26; // rax
  unsigned __int64 v27; // r9
  signed __int64 v28; // rax
  int v29; // r8d
  unsigned __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r8
  unsigned __int64 v33; // r8
  __int64 v34; // rsi
  unsigned __int64 v35; // rbp
  signed __int32 v36[14]; // [rsp+0h] [rbp-38h] BYREF

  v0 = HalpPerformanceCounter;
  v1 = -1LL;
  if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
  {
    InternalData = HalpTimerGetInternalData(HalpPerformanceCounter);
    v3 = *(__int64 (__fastcall **)(_QWORD))(v0 + 112);
    if ( v3 == HalpHvCounterQueryCounter )
      Counter = HalpHvCounterQueryCounter(InternalData);
    else
      Counter = guard_dispatch_icall_no_overrides(InternalData, v3);
    v5 = *(_QWORD *)(v0 + 208);
    v6 = Counter;
  }
  else
  {
    do
    {
      v5 = *(_QWORD *)(v0 + 208);
      do
      {
        v14 = *(_QWORD *)(v0 + 200);
        v15 = HalpTimerGetInternalData(v0);
        v16 = *(__int64 (__fastcall **)(_QWORD))(v0 + 112);
        if ( v16 == HalpHpetQueryCounter )
          v17 = HalpHpetQueryCounter(v15);
        else
          v17 = guard_dispatch_icall_no_overrides(v15, v16);
        v18 = v17;
        _InterlockedOr(v36, 0);
        v19 = *(_QWORD *)(v0 + 200);
      }
      while ( v14 != v19 );
    }
    while ( v5 != *(_QWORD *)(v0 + 208) );
    v20 = *(_DWORD *)(v0 + 220);
    v21 = v14 ^ v18;
    if ( _bittest64((const __int64 *)&v21, (unsigned __int8)(v20 - 1)) )
    {
      v32 = -1LL;
      if ( v20 != 64 )
        v32 = (1LL << v20) - 1;
      v33 = v14 & v32;
      v6 = (v18 | v14 ^ v33) + (1LL << v20);
      if ( v18 >= v33 )
        v6 = v18 | v14 ^ v33;
      _InterlockedCompareExchange64((volatile signed __int64 *)(v0 + 200), v6, v19);
    }
    else
    {
      if ( v20 == 64 )
        v22 = -1LL;
      else
        v22 = (1LL << v20) - 1;
      v6 = v18 | v14 & ~v22;
    }
  }
  result = v5 + v6;
  *(_QWORD *)(v0 + 16) = v5 + v6;
  v8 = HalpAlwaysOnCounter;
  if ( HalpAlwaysOnCounter )
  {
    if ( *(_DWORD *)(HalpAlwaysOnCounter + 220) == 64 )
    {
      v9 = HalpTimerGetInternalData(HalpAlwaysOnCounter);
      v10 = *(__int64 (__fastcall **)(_QWORD))(v8 + 112);
      if ( v10 == HalpHvCounterQueryCounter )
        v11 = HalpHvCounterQueryCounter(v9);
      else
        v11 = guard_dispatch_icall_no_overrides(v9, v10);
      v12 = *(_QWORD *)(v8 + 208);
      v13 = v11;
    }
    else
    {
      do
      {
        v12 = *(_QWORD *)(v8 + 208);
        do
        {
          v23 = *(_QWORD *)(v8 + 200);
          v24 = HalpTimerGetInternalData(v8);
          v25 = *(__int64 (__fastcall **)(_QWORD))(v8 + 112);
          if ( v25 == HalpHpetQueryCounter )
            v26 = HalpHpetQueryCounter(v24);
          else
            v26 = guard_dispatch_icall_no_overrides(v24, v25);
          v27 = v26;
          _InterlockedOr(v36, 0);
          v28 = *(_QWORD *)(v8 + 200);
        }
        while ( v23 != v28 );
      }
      while ( v12 != *(_QWORD *)(v8 + 208) );
      v29 = *(_DWORD *)(v8 + 220);
      v30 = v23 ^ v27;
      if ( _bittest64((const __int64 *)&v30, (unsigned __int8)(v29 - 1)) )
      {
        v34 = 1LL << v29;
        if ( v29 != 64 )
          v1 = v34 - 1;
        v35 = v23 & v1;
        v13 = (v27 | v23 ^ v35) + v34;
        if ( v27 >= v35 )
          v13 = v27 | v23 ^ v35;
        _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 200), v13, v28);
      }
      else
      {
        if ( v29 == 64 )
          v31 = -1LL;
        else
          v31 = (1LL << v29) - 1;
        v13 = v27 | v23 & ~v31;
      }
    }
    result = v12 + v13;
    *(_QWORD *)(v8 + 16) = v12 + v13;
  }
  return result;
}

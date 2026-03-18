/*
 * XREFs of HalpTimerSavePerformanceCounter @ 0x1403D6404
 * Callers:
 *     HalpAcpiPreSleep @ 0x140B6C5C8 (HalpAcpiPreSleep.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14033BC10 (HalpTimerGetInternalData.c)
 *     HalpHvCounterQueryCounter @ 0x1403D6CB0 (HalpHvCounterQueryCounter.c)
 *     HalpHpetQueryCounter @ 0x1403D6DB0 (HalpHpetQueryCounter.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 HalpTimerSavePerformanceCounter()
{
  __int64 v0; // rdi
  __int64 v1; // rbp
  __int64 InternalData; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 (__fastcall *v5)(_QWORD); // rdx
  __int64 Counter; // rax
  __int64 v7; // r14
  signed __int64 v8; // rdx
  __int64 result; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 (__fastcall *v14)(_QWORD); // rdx
  __int64 v15; // rax
  __int64 v16; // r14
  signed __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 (__fastcall *v22)(_QWORD); // rdx
  __int64 v23; // rax
  unsigned __int64 v24; // r10
  signed __int64 v25; // rax
  int v26; // r9d
  unsigned __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 (__fastcall *v33)(_QWORD); // rdx
  __int64 v34; // rax
  unsigned __int64 v35; // r9
  signed __int64 v36; // rax
  int v37; // r8d
  unsigned __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // r8
  unsigned __int64 v41; // r8
  __int64 v42; // rsi
  unsigned __int64 v43; // rbp
  signed __int32 v44[14]; // [rsp+0h] [rbp-38h] BYREF

  v0 = HalpPerformanceCounter;
  v1 = -1LL;
  if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
  {
    InternalData = HalpTimerGetInternalData(HalpPerformanceCounter);
    v5 = *(__int64 (__fastcall **)(_QWORD))(v0 + 112);
    if ( v5 == HalpHvCounterQueryCounter )
      Counter = HalpHvCounterQueryCounter(InternalData);
    else
      Counter = guard_dispatch_icall_no_overrides(InternalData, v5, v3, v4);
    v7 = *(_QWORD *)(v0 + 208);
    v8 = Counter;
  }
  else
  {
    do
    {
      v7 = *(_QWORD *)(v0 + 208);
      do
      {
        v18 = *(_QWORD *)(v0 + 200);
        v19 = HalpTimerGetInternalData(v0);
        v22 = *(__int64 (__fastcall **)(_QWORD))(v0 + 112);
        if ( v22 == HalpHpetQueryCounter )
          v23 = HalpHpetQueryCounter(v19);
        else
          v23 = guard_dispatch_icall_no_overrides(v19, v22, v20, v21);
        v24 = v23;
        _InterlockedOr(v44, 0);
        v25 = *(_QWORD *)(v0 + 200);
      }
      while ( v18 != v25 );
    }
    while ( v7 != *(_QWORD *)(v0 + 208) );
    v26 = *(_DWORD *)(v0 + 220);
    v27 = v18 ^ v24;
    if ( _bittest64((const __int64 *)&v27, (unsigned __int8)(v26 - 1)) )
    {
      v40 = -1LL;
      if ( v26 != 64 )
        v40 = (1LL << v26) - 1;
      v41 = v18 & v40;
      v8 = (v24 | v18 ^ v41) + (1LL << v26);
      if ( v24 >= v41 )
        v8 = v24 | v18 ^ v41;
      _InterlockedCompareExchange64((volatile signed __int64 *)(v0 + 200), v8, v25);
    }
    else
    {
      if ( v26 == 64 )
        v28 = -1LL;
      else
        v28 = (1LL << v26) - 1;
      v8 = v24 | v18 & ~v28;
    }
  }
  result = v7 + v8;
  *(_QWORD *)(v0 + 16) = v7 + v8;
  v10 = HalpAlwaysOnCounter;
  if ( HalpAlwaysOnCounter )
  {
    if ( *(_DWORD *)(HalpAlwaysOnCounter + 220) == 64 )
    {
      v11 = HalpTimerGetInternalData(HalpAlwaysOnCounter);
      v14 = *(__int64 (__fastcall **)(_QWORD))(v10 + 112);
      if ( v14 == HalpHvCounterQueryCounter )
        v15 = HalpHvCounterQueryCounter(v11);
      else
        v15 = guard_dispatch_icall_no_overrides(v11, v14, v12, v13);
      v16 = *(_QWORD *)(v10 + 208);
      v17 = v15;
    }
    else
    {
      do
      {
        v16 = *(_QWORD *)(v10 + 208);
        do
        {
          v29 = *(_QWORD *)(v10 + 200);
          v30 = HalpTimerGetInternalData(v10);
          v33 = *(__int64 (__fastcall **)(_QWORD))(v10 + 112);
          if ( v33 == HalpHpetQueryCounter )
            v34 = HalpHpetQueryCounter(v30);
          else
            v34 = guard_dispatch_icall_no_overrides(v30, v33, v31, v32);
          v35 = v34;
          _InterlockedOr(v44, 0);
          v36 = *(_QWORD *)(v10 + 200);
        }
        while ( v29 != v36 );
      }
      while ( v16 != *(_QWORD *)(v10 + 208) );
      v37 = *(_DWORD *)(v10 + 220);
      v38 = v29 ^ v35;
      if ( _bittest64((const __int64 *)&v38, (unsigned __int8)(v37 - 1)) )
      {
        v42 = 1LL << v37;
        if ( v37 != 64 )
          v1 = v42 - 1;
        v43 = v29 & v1;
        v17 = (v35 | v29 ^ v43) + v42;
        if ( v35 >= v43 )
          v17 = v35 | v29 ^ v43;
        _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 200), v17, v36);
      }
      else
      {
        if ( v37 == 64 )
          v39 = -1LL;
        else
          v39 = (1LL << v37) - 1;
        v17 = v35 | v29 & ~v39;
      }
    }
    result = v16 + v17;
    *(_QWORD *)(v10 + 16) = v16 + v17;
  }
  return result;
}

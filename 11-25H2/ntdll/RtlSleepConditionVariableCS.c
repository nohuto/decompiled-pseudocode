/*
 * XREFs of RtlSleepConditionVariableCS @ 0x18007ADC0
 * Callers:
 *     EtwpSwitchBuffer @ 0x180091120 (EtwpSwitchBuffer.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlpWakeSingle @ 0x18009E500 (RtlpWakeSingle.c)
 *     RtlpWakeConditionVariable @ 0x18009E650 (RtlpWakeConditionVariable.c)
 *     NtWaitForAlertByThreadId @ 0x180166E70 (NtWaitForAlertByThreadId.c)
 */

NTSTATUS __cdecl RtlSleepConditionVariableCS(
        PRTL_CONDITION_VARIABLE ConditionVariable,
        PRTL_CRITICAL_SECTION CriticalSection,
        PLARGE_INTEGER Timeout)
{
  NTSTATUS v3; // esi
  unsigned __int64 Value; // rdi
  unsigned __int64 v8; // rbx
  _QWORD *v9; // rax
  signed __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  signed __int64 v15; // rax
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r8
  NTSTATUS v18; // ebx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  int i; // ecx
  _QWORD v24[4]; // [rsp+20h] [rbp-48h] BYREF
  int v25; // [rsp+40h] [rbp-28h]
  signed __int32 v26; // [rsp+44h] [rbp-24h] BYREF
  __int64 v27; // [rsp+48h] [rbp-20h]

  v3 = 0;
  v25 = 0;
  _m_prefetchw(ConditionVariable);
  Value = ConditionVariable->Value;
  v24[2] = 0LL;
  v26 = 2;
  v27 = 0LL;
  v24[3] = NtCurrentTeb()->ClientId.UniqueThread;
  while ( 1 )
  {
    v8 = (unsigned __int64)v24 | Value & 0xF;
    v9 = v24;
    v24[0] = Value & 0xFFFFFFFFFFFFFFF0uLL;
    if ( (Value & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      v9 = 0LL;
    v24[1] = v9;
    if ( (Value & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      v8 |= 8uLL;
    v10 = _InterlockedCompareExchange64((volatile signed __int64 *)ConditionVariable, v8, Value);
    if ( Value == v10 )
      break;
    Value = v10;
  }
  RtlLeaveCriticalSection(CriticalSection);
  if ( (((unsigned __int8)Value ^ (unsigned __int8)v8) & 8) != 0 )
  {
    v11 = v8;
    while ( 1 )
    {
      v12 = v11 & 0xFFFFFFFFFFFFFFF0uLL;
      v13 = (_QWORD *)v12;
      if ( !*(_QWORD *)(v12 + 8) )
      {
        do
        {
          v14 = v13;
          v13 = (_QWORD *)*v13;
          v13[2] = v14;
        }
        while ( !v13[1] );
      }
      *(_QWORD *)(v12 + 8) = v13[1];
      v15 = _InterlockedCompareExchange64((volatile signed __int64 *)ConditionVariable, v12, v8);
      v11 = v15;
      if ( v8 == v15 )
        break;
      v8 = v15;
      if ( (v15 & 7) != 0 )
      {
        RtlpWakeConditionVariable(ConditionVariable, v15, 0LL);
        break;
      }
    }
  }
  if ( MEMORY[0x7FFE036A] > 1u )
  {
    if ( MEMORY[0x7FFE0297] )
    {
      v16 = __rdtsc();
      v17 = v16 + (unsigned int)ConditionVariableSpinCycleCount;
      while ( 1 )
      {
        __asm { monitorx rax, rcx, rdx }
        if ( (v26 & 2) == 0 )
          break;
        v21 = v16;
        v22 = __rdtsc();
        v16 = v22;
        if ( v22 < v21 || v22 >= v17 )
          break;
        __asm { mwaitx  rax, rcx, rbx }
      }
    }
    else
    {
      for ( i = 0; (v26 & 2) != 0 && i != ConditionVariableSpinCycleCount / (unsigned int)MEMORY[0x7FFE02D6]; ++i )
        _mm_pause();
    }
  }
  v18 = 0;
  if ( !_interlockedbittestandreset(&v26, 1u) )
  {
    _InterlockedOr(&v26, 4u);
LABEL_20:
    if ( (v26 & 4) != 0 )
      goto LABEL_21;
    goto LABEL_30;
  }
  v18 = NtWaitForAlertByThreadId(CriticalSection, Timeout);
  if ( v18 != 258 )
    goto LABEL_20;
LABEL_30:
  if ( (unsigned __int8)RtlpWakeSingle(ConditionVariable, v24) )
  {
    if ( v18 != 258 )
      v18 = 0;
    v3 = v18;
  }
  else
  {
    do
      NtWaitForAlertByThreadId(CriticalSection, 0LL);
    while ( (v26 & 4) == 0 );
  }
LABEL_21:
  RtlEnterCriticalSection(CriticalSection);
  return v3;
}

/*
 * XREFs of RtlTryAcquireSRWLockShared @ 0x180044A70
 * Callers:
 *     EtwpFindRegistration @ 0x1800448E0 (EtwpFindRegistration.c)
 *     RtlQueryCriticalSectionOwner @ 0x180099E40 (RtlQueryCriticalSectionOwner.c)
 *     EtwpGetNextRegistration @ 0x1800E63E0 (EtwpGetNextRegistration.c)
 * Callees:
 *     RtlAbPostRelease @ 0x1800A0360 (RtlAbPostRelease.c)
 */

BOOLEAN __cdecl RtlTryAcquireSRWLockShared(PRTL_SRWLOCK SRWLock)
{
  __int64 v2; // r8
  PRTL_SRWLOCK *v3; // r11
  _QWORD *SchedulerSharedDataSlot; // rcx
  __int64 v5; // rax
  _QWORD *v6; // rdx
  unsigned __int64 Value; // rax
  signed __int64 v9; // rcx
  unsigned int v10; // r9d
  unsigned __int64 v11; // rax
  unsigned int v12; // eax
  unsigned int i; // ecx

  v2 = 0LL;
  v3 = 0LL;
  SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    v5 = 0LL;
    v6 = SchedulerSharedDataSlot;
    while ( *v6 )
    {
      v5 = (unsigned int)(v5 + 1);
      ++v6;
      if ( (unsigned int)v5 >= 8 )
        goto LABEL_8;
    }
    v3 = (PRTL_SRWLOCK *)&SchedulerSharedDataSlot[v5];
    if ( v3 )
      *v3 = SRWLock;
  }
LABEL_8:
  Value = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, 17LL, 0LL);
  if ( !Value )
    return 1;
  while ( (Value & 2) == 0 && ((Value & 1) == 0 || (Value & 0xFFFFFFFFFFFFFFF0uLL) != 0)
       || RtlpSrwLockAllowImplicitUpgrade && (Value & 1) == 0 )
  {
    v9 = (Value | 1) + 16;
    if ( (Value & 2) != 0 )
      v9 = Value | 1;
    if ( Value == _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, v9, Value) )
      return 1;
    v10 = v2;
    if ( (_DWORD)v2 )
    {
      if ( (unsigned int)v2 < 0x1FFF )
        v10 = 2 * v2;
    }
    else
    {
      if ( NtCurrentTeb()->ProcessEnvironmentBlock->NumberOfProcessors == 1 )
        goto LABEL_25;
      v10 = 64;
    }
    v2 = v10;
    v11 = __rdtsc();
    v12 = 10 * (((v10 - 1) & (unsigned int)v11) + v10) / MEMORY[0x7FFE02D6];
    for ( i = 0; i < v12; ++i )
      _mm_pause();
LABEL_25:
    _m_prefetchw(SRWLock);
    Value = SRWLock->Value;
  }
  RtlAbPostRelease(SRWLock, v3, v2);
  return 0;
}

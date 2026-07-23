/*
 * XREFs of HalpTscSynchronizationWorker @ 0x140547220
 * Callers:
 *     HalpPostSleepMP @ 0x140B70824 (HalpPostSleepMP.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x1402C9320 (HalpDisableInterrupts.c)
 *     HalpTscAdvSynchTarget @ 0x140481B44 (HalpTscAdvSynchTarget.c)
 *     HalpTscAdvSynchLeader @ 0x140546820 (HalpTscAdvSynchLeader.c)
 *     HalpTscCompatibilitySynchronization @ 0x140546CA4 (HalpTscCompatibilitySynchronization.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char __fastcall HalpTscSynchronizationWorker(ULONG_PTR Argument)
{
  char result; // al
  volatile signed __int32 *v2; // rdx
  bool v3; // bl
  _QWORD v4[8]; // [rsp+60h] [rbp+0h] BYREF

  *(_QWORD *)((unsigned __int64)v4 & 0xFFFFFFFFFFFFFFC0uLL) = Argument;
  result = (unsigned __int8)memset_0((void *)(((unsigned __int64)v4 & 0xFFFFFFFFFFFFFFC0uLL) + 64), 0, 0xC0uLL);
  if ( *(_DWORD *)(*(_QWORD *)((unsigned __int64)v4 & 0xFFFFFFFFFFFFFFC0uLL) + 40LL) >= 2u )
  {
    if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
    {
      *(_QWORD *)(((unsigned __int64)KeGetCurrentPrcb()->Number << 7) + TscRequest + 16) = ((unsigned __int64)v4 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                         + 128;
      v3 = HalpDisableInterrupts();
      if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) != 1 )
      {
        do
          _mm_pause();
        while ( *v2 );
      }
      if ( KeGetCurrentPrcb()->Number == HalpTscRequestedLeadProcessor )
        result = HalpTscAdvSynchLeader((__int64)v2);
      else
        result = HalpTscAdvSynchTarget();
      if ( v3 )
        _enable();
    }
    else
    {
      return HalpTscCompatibilitySynchronization();
    }
  }
  return result;
}

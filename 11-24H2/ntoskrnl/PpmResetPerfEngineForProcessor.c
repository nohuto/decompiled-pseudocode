/*
 * XREFs of PpmResetPerfEngineForProcessor @ 0x140440520
 * Callers:
 *     PopHandleNextState @ 0x140B67F50 (PopHandleNextState.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14031C170 (RtlGetInterruptTimePrecise.c)
 *     PpmResetPerfTimes @ 0x14044063C (PpmResetPerfTimes.c)
 *     PpmHeteroHgsProcessorThreadFeedbackInit @ 0x1404F85E8 (PpmHeteroHgsProcessorThreadFeedbackInit.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PpmResetPerfEngineForProcessor(__int64 a1, __int64 a2)
{
  char v2; // bp
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rsi
  unsigned int k; // esi
  __int64 v9; // rcx
  int v10; // eax
  __int64 i; // rbx
  LARGE_INTEGER InterruptTimePrecise; // rax
  unsigned int j; // edi
  __int64 v14; // rcx
  LARGE_INTEGER PerformanceCounter; // [rsp+40h] [rbp+8h] BYREF

  v2 = a2;
  if ( !*(_DWORD *)(a1 + 36) )
  {
    for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
    {
      if ( *(_DWORD *)(i + 304) )
      {
        for ( j = 0; j < *(_DWORD *)(i + 296); ++j )
        {
          v14 = *(_QWORD *)(i + 312) + 1192LL * j;
          if ( v2 )
          {
            if ( *(_DWORD *)(v14 + 16) == 1 )
              PpmResetPerfTimes(*(_QWORD *)v14);
          }
          else if ( *(_QWORD *)(i + 368) )
          {
            guard_dispatch_icall_no_overrides(*(_QWORD *)(v14 + 8), a2);
          }
        }
      }
    }
  }
  v4 = a1 + 35248;
  v5 = *(_QWORD *)(a1 + 35248);
  v6 = *(_QWORD *)(a1 + 35256);
  if ( v5 && v6 )
  {
    if ( v2 )
    {
      if ( *(_QWORD *)(v5 + 416) )
      {
        InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
        guard_dispatch_icall_no_overrides(*(_QWORD *)(v6 + 8), (LARGE_INTEGER)InterruptTimePrecise.QuadPart);
      }
    }
    else if ( *(_QWORD *)(v5 + 368) )
    {
      guard_dispatch_icall_no_overrides(*(_QWORD *)(v6 + 8), a2);
    }
    if ( v4 == *(_QWORD *)(v5 + 16) )
    {
      for ( k = 0; k < *(_DWORD *)(v5 + 296); ++k )
      {
        v9 = *(_QWORD *)(v5 + 312) + 1192LL * k;
        v10 = *(_DWORD *)(v9 + 16);
        if ( v10 )
        {
          if ( v2 )
          {
            if ( v10 == 1 )
              PpmResetPerfTimes(*(_QWORD *)v9);
          }
          else if ( *(_QWORD *)(v5 + 368) )
          {
            guard_dispatch_icall_no_overrides(*(_QWORD *)(v9 + 8), a2);
          }
        }
      }
    }
  }
  if ( v2 )
    return PpmResetPerfTimes(v4);
  else
    return PpmHeteroHgsProcessorThreadFeedbackInit();
}

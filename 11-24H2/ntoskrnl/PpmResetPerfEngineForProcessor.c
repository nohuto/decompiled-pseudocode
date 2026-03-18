/*
 * XREFs of PpmResetPerfEngineForProcessor @ 0x140447E00
 * Callers:
 *     PopHandleNextState @ 0x140B65E10 (PopHandleNextState.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14033CC90 (RtlGetInterruptTimePrecise.c)
 *     PpmResetPerfTimes @ 0x140447F1C (PpmResetPerfTimes.c)
 *     PpmHeteroHgsProcessorThreadFeedbackInit @ 0x1404FAD08 (PpmHeteroHgsProcessorThreadFeedbackInit.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PpmResetPerfEngineForProcessor(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bp
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rsi
  unsigned int k; // esi
  __int64 v11; // rcx
  int v12; // eax
  __int64 i; // rbx
  __int64 InterruptTimePrecise; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int j; // edi
  __int64 v18; // rcx
  unsigned __int64 v19; // [rsp+40h] [rbp+8h] BYREF

  v4 = a2;
  if ( !*(_DWORD *)(a1 + 36) )
  {
    for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
    {
      if ( *(_DWORD *)(i + 304) )
      {
        for ( j = 0; j < *(_DWORD *)(i + 296); ++j )
        {
          v18 = *(_QWORD *)(i + 312) + 1192LL * j;
          if ( v4 )
          {
            if ( *(_DWORD *)(v18 + 16) == 1 )
              PpmResetPerfTimes(*(_QWORD *)v18);
          }
          else if ( *(_QWORD *)(i + 368) )
          {
            guard_dispatch_icall_no_overrides(*(_QWORD *)(v18 + 8), a2, a3, a4);
          }
        }
      }
    }
  }
  v6 = a1 + 35248;
  v7 = *(_QWORD *)(a1 + 35248);
  v8 = *(_QWORD *)(a1 + 35256);
  if ( v7 && v8 )
  {
    if ( v4 )
    {
      if ( *(_QWORD *)(v7 + 416) )
      {
        InterruptTimePrecise = RtlGetInterruptTimePrecise(&v19);
        LOBYTE(v15) = 1;
        guard_dispatch_icall_no_overrides(*(_QWORD *)(v8 + 8), InterruptTimePrecise, v15, v16);
      }
    }
    else if ( *(_QWORD *)(v7 + 368) )
    {
      guard_dispatch_icall_no_overrides(*(_QWORD *)(v8 + 8), a2, a3, a4);
    }
    if ( v6 == *(_QWORD *)(v7 + 16) )
    {
      for ( k = 0; k < *(_DWORD *)(v7 + 296); ++k )
      {
        v11 = *(_QWORD *)(v7 + 312) + 1192LL * k;
        v12 = *(_DWORD *)(v11 + 16);
        if ( v12 )
        {
          if ( v4 )
          {
            if ( v12 == 1 )
              PpmResetPerfTimes(*(_QWORD *)v11);
          }
          else if ( *(_QWORD *)(v7 + 368) )
          {
            guard_dispatch_icall_no_overrides(*(_QWORD *)(v11 + 8), a2, a3, a4);
          }
        }
      }
    }
  }
  if ( v4 )
    return PpmResetPerfTimes(v6);
  else
    return PpmHeteroHgsProcessorThreadFeedbackInit();
}

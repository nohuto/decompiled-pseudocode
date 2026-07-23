/*
 * XREFs of EtwInitialize @ 0x1407A65A0
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x1407CF6FC (CmCompleteRegistryInitialization.c)
 *     InitBootProcessor @ 0x140C0CC88 (InitBootProcessor.c)
 *     IoInitSystemPreDrivers @ 0x140C1CA4C (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     EtwpBuffersFlushRequired @ 0x14027D9C4 (EtwpBuffersFlushRequired.c)
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KeGetEffectiveIrql @ 0x1402883D0 (KeGetEffectiveIrql.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140289C10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140405330 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpInitialize @ 0x140C3F24C (EtwpInitialize.c)
 */

void __fastcall EtwInitialize(unsigned int a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx

  if ( a2 && (v3 = *(_QWORD *)(a2 + 240)) != 0 && *(_QWORD *)(v3 + 3680) && *(_QWORD *)(v3 + 3688) )
    v4 = v3 + 3672;
  else
    v4 = 0LL;
  if ( a1 )
  {
    if ( a1 < 3 )
    {
      while ( (unsigned __int8)EtwpBootPhase <= a1 )
        EtwpInitialize((unsigned __int8)EtwpBootPhase, a1, v4);
    }
    else if ( a1 == 3 )
    {
      v5 = EtwpHostSiloState;
      v6 = 0LL;
      ++EtwpBootPhase;
      if ( *(_DWORD *)(EtwpHostSiloState + 16) )
      {
        do
        {
          if ( ExAcquireRundownProtectionCacheAwareEx(
                 *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v5 + 704) + 8 * v6),
                 1u) )
          {
            if ( (unsigned int)v6 < *(_DWORD *)(EtwpHostSiloState + 16) )
            {
              v7 = *(_QWORD *)(EtwpHostSiloState + 712);
              v8 = *(_QWORD *)(v7 + 8 * v6);
              if ( (v8 & 1) == 0
                && (*(_DWORD *)(v8 + 12) & 0x400) == 0
                && EtwpBuffersFlushRequired(*(_QWORD *)(v7 + 8 * v6)) )
              {
                if ( KeGetEffectiveIrql(v10, v9) > 2u )
                {
                  if ( !_interlockedbittestandset((volatile signed __int32 *)(v8 + 824), 8u) )
                    KeInsertQueueDpc((PRKDPC)(v8 + 568), 0LL, 0LL);
                }
                else
                {
                  KeSetEvent((PRKEVENT)(v8 + 480), 0, 0);
                }
              }
            }
            ExReleaseRundownProtectionCacheAwareEx(
              *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(EtwpHostSiloState + 704) + 8 * v6),
              1u);
          }
          v5 = EtwpHostSiloState;
          v6 = (unsigned int)(v6 + 1);
        }
        while ( (unsigned int)v6 < *(_DWORD *)(EtwpHostSiloState + 16) );
      }
    }
  }
  else if ( v4 )
  {
    if ( *(_QWORD *)(v4 + 8) != v4 + 8 )
      EtwpInitialize((unsigned __int8)EtwpBootPhase, 0LL, v4);
  }
}

/*
 * XREFs of PpmRegisterPerfCap @ 0x1404188A0
 * Callers:
 *     <none>
 * Callees:
 *     PpmReleaseLock @ 0x1402AE140 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402AE7DC (PpmAcquireLock.c)
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x140418A80 (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PpmEventBiosCapChange @ 0x140418DBC (PpmEventBiosCapChange.c)
 *     PpmEventThermalCapChange @ 0x140418EB4 (PpmEventThermalCapChange.c)
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x1405D2AC8 (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     PpmEventHiddenProcessorBiosCapChange @ 0x1405D694C (PpmEventHiddenProcessorBiosCapChange.c)
 *     PpmEventHiddenProcessorThermalCapChange @ 0x1405D6A4C (PpmEventHiddenProcessorThermalCapChange.c)
 *     PpmCheckApplyPerfConstraints @ 0x140A8ACF8 (PpmCheckApplyPerfConstraints.c)
 */

__int64 __fastcall PpmRegisterPerfCap(_DWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // r13d
  __int64 Prcb; // rax
  __int64 v7; // rdi
  __int64 v8; // rsi
  unsigned int v9; // r14d
  unsigned int v10; // r12d
  int v11; // eax
  __int64 v12; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned int i; // r8d
  __int64 v17; // r9

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, a2, a3);
  v4 = 0;
  if ( !a1[5] )
  {
    v5 = a1[1];
    if ( v5 != -1 )
    {
      Prcb = KeGetPrcb(v5);
      v7 = *(_QWORD *)(Prcb + 35256);
      v8 = *(_QWORD *)(Prcb + 35248);
      goto LABEL_4;
    }
LABEL_18:
    v4 = -1073741811;
    PpmReleaseLock(&PpmPerfPolicyLock);
    return v4;
  }
  v15 = PpmPerfDomainHead;
  v5 = -1;
  v7 = 0LL;
  if ( (__int64 *)PpmPerfDomainHead == &PpmPerfDomainHead )
    goto LABEL_18;
  do
  {
    v8 = v15;
    for ( i = 0; i < *(_DWORD *)(v15 + 296); ++i )
    {
      v17 = *(_QWORD *)(v15 + 312) + 1192LL * i;
      if ( *(_DWORD *)(v17 + 16) && *(_DWORD *)(v17 + 20) == a1[1] )
      {
        v7 = *(_QWORD *)(v15 + 312) + 1192LL * i;
        if ( v17 )
          goto LABEL_4;
        break;
      }
    }
    v15 = *(_QWORD *)v15;
  }
  while ( (__int64 *)v15 != &PpmPerfDomainHead );
LABEL_4:
  if ( !v8 || !v7 )
    goto LABEL_18;
  v9 = a1[2];
  v10 = a1[3];
  *(_DWORD *)(v7 + 32) = a1[4];
  v11 = *(_DWORD *)(v7 + 24);
  if ( v11 != v9 )
  {
    if ( v11 == 100 )
    {
      *(_QWORD *)(v7 + 40) = MEMORY[0xFFFFF78000000008];
    }
    else if ( v9 == 100 )
    {
      PopDiagTraceProcessorThrottleDurationPerfTrack(
        (MEMORY[0xFFFFF78000000008] - *(_QWORD *)(v7 + 40)) / 0x2710uLL,
        v5);
      *(_QWORD *)(v7 + 40) = 0LL;
    }
    v12 = *(_QWORD *)v7;
    *(_DWORD *)(v7 + 24) = v9;
    if ( v12 )
    {
      PpmEventBiosCapChange(v12, v9);
    }
    else if ( !*(_DWORD *)(v8 + 304) )
    {
      PpmEventHiddenProcessorBiosCapChange(*(_QWORD *)(v8 + 16) - 35248LL, (unsigned int)a1[1], v9);
    }
    PopDiagTraceProcessorThrottlePerfTrack(100 - v9, v5);
  }
  if ( *(_DWORD *)(v7 + 28) != v10 )
  {
    v14 = *(_QWORD *)v7;
    *(_DWORD *)(v7 + 28) = v10;
    if ( v14 )
    {
      PpmEventThermalCapChange(v14, v10);
    }
    else if ( !*(_DWORD *)(v8 + 304) )
    {
      PpmEventHiddenProcessorThermalCapChange(*(_QWORD *)(v8 + 16) - 35248LL, (unsigned int)a1[1], v10);
    }
  }
  *(_BYTE *)(v8 + 1213) = 1;
  PpmCheckApplyPerfConstraints(0LL);
  return v4;
}

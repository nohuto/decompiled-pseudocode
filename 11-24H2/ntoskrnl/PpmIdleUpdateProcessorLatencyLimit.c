/*
 * XREFs of PpmIdleUpdateProcessorLatencyLimit @ 0x1402AE9D0
 * Callers:
 *     PpmIdleUpdateSystemLatencyLimit @ 0x1402AEDA4 (PpmIdleUpdateSystemLatencyLimit.c)
 *     PpmParkReportUnparkedCore @ 0x1402B0778 (PpmParkReportUnparkedCore.c)
 *     PpmParkReportParkedCore @ 0x1402B0804 (PpmParkReportParkedCore.c)
 *     PpmParkReportSoftParkChange @ 0x1403D7120 (PpmParkReportSoftParkChange.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     PpmEventTraceProcessorLatencyLimitChange @ 0x1402AECA0 (PpmEventTraceProcessorLatencyLimitChange.c)
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     ?KiAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x14032DF20 (-KiAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z.c)
 *     KeCheckProcessorAffinityEx @ 0x1403A4AD0 (KeCheckProcessorAffinityEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall PpmIdleUpdateProcessorLatencyLimit(struct _KPRCB *a1, struct _KAFFINITY_EX *a2)
{
  unsigned __int8 CurrentIrql; // r14
  unsigned int v5; // edi
  unsigned int IdleWakeLatencyLimit; // ebp
  _PPM_IDLE_STATES *IdleStates; // r11
  unsigned int v8; // eax
  unsigned int v9; // r15d
  unsigned int v10; // ebx
  unsigned int v11; // r9d
  unsigned int Latency; // r8d
  int v13; // edx
  int v14; // ecx
  __int64 result; // rax
  unsigned int v16; // ecx
  __int64 v17; // r13
  int v18; // eax
  struct _KAFFINITY_EX *v19; // r12
  unsigned __int64 v20; // rdx
  unsigned __int16 v21; // r8
  unsigned int Count; // ecx
  unsigned __int64 v23; // rax
  struct _KPRCB *Prcb; // rax
  __int16 v25; // [rsp+60h] [rbp+8h]
  __int64 v27; // [rsp+70h] [rbp+18h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  v5 = PpmIdleUnparkedLatencyLimit;
  if ( a1->PowerState.Parked )
  {
    v16 = PpmIdleParkedLatencyLimit;
    if ( a1->PowerState.SoftParked )
      v16 = PpmIdleSoftParkedLatencyLimit;
    if ( v16 > PpmIdleUnparkedLatencyLimit )
      v5 = v16;
  }
  IdleWakeLatencyLimit = a1->PowerState.IdleWakeLatencyLimit;
  if ( IdleWakeLatencyLimit != v5 )
  {
    PpmEventTraceProcessorLatencyLimitChange(a1, v5);
    if ( a1 != KeGetCurrentPrcb() && a1->CurrentThread == a1->IdleThread )
    {
      IdleStates = a1->PowerState.IdleStates;
      if ( IdleStates )
      {
        if ( IdleStates->EnforceStateConstraints )
        {
          v8 = 1;
          v9 = 0;
          v10 = 0;
          while ( 1 )
          {
            v11 = v10;
            if ( v8 >= IdleStates->ProcessorIdleCount )
              break;
            Latency = IdleStates->State[v8].Latency;
            if ( Latency != -1 )
            {
              v13 = 0;
              v14 = 0;
              v10 = IdleStates->State[v8].Latency;
              if ( v11 > Latency )
                v10 = v11;
              LOBYTE(v13) = v5 > Latency;
              LOBYTE(v14) = IdleWakeLatencyLimit > Latency;
              if ( v14 != v13 )
              {
                KeAddProcessorAffinityEx(&a2->Count, a1->Number);
                goto LABEL_17;
              }
            }
            ++v8;
          }
          if ( PpmPlatformStates )
          {
            while ( v9 < *(_DWORD *)PpmPlatformStates )
            {
              v17 = PpmPlatformStates + 448LL * v9;
              if ( !*(_BYTE *)(v17 + 121) )
              {
                v19 = (struct _KAFFINITY_EX *)(v17 + 128);
                if ( (unsigned int)KeCheckProcessorAffinityEx(v17 + 128, a1->Number) )
                {
                  v20 = *(_QWORD *)(v17 + 136);
                  v21 = 0;
                  v25 = 0;
                  while ( 2 )
                  {
                    if ( v17 == -128 )
                      Count = v21 + 1;
                    else
                      Count = v19->Count;
                    while ( !v20 )
                    {
                      v25 = ++v21;
                      if ( v21 >= Count )
                      {
                        LODWORD(v20) = KeGetPcr()->Prcb.Number;
                        if ( !(unsigned int)KeCheckProcessorAffinityEx(v17 + 128, v20) )
                        {
                          v18 = *(_DWORD *)(v17 + 72);
                          if ( (*(_BYTE *)(v17 + 123) || IdleWakeLatencyLimit < v10 + v18 || v5 < v10 + v18)
                            && !KiAndAffinityExNoResult(v19, a2) )
                          {
                            KeAddProcessorAffinityEx(&a2->Count, a1->Number);
                            goto LABEL_17;
                          }
                        }
                        goto LABEL_27;
                      }
                      v20 = v19->Bitmap[v21];
                    }
                    _BitScanForward64(&v23, v20);
                    v27 = v20 & ~(1LL << v23);
                    Prcb = (struct _KPRCB *)KeGetPrcb(v9);
                    if ( Prcb != KeGetCurrentPrcb() && Prcb->CurrentThread == Prcb->IdleThread )
                    {
                      v20 = v27;
                      v21 = v25;
                      continue;
                    }
                    break;
                  }
                }
              }
LABEL_27:
              ++v9;
            }
          }
        }
      }
    }
  }
LABEL_17:
  a1->PowerState.IdleWakeLatencyLimit = v5;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}

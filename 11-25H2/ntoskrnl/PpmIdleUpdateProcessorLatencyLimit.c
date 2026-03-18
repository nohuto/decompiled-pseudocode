/*
 * XREFs of PpmIdleUpdateProcessorLatencyLimit @ 0x140204140
 * Callers:
 *     PpmIdleUpdateSystemLatencyLimit @ 0x140203EC4 (PpmIdleUpdateSystemLatencyLimit.c)
 *     PpmParkReportUnparkedCore @ 0x1403B0910 (PpmParkReportUnparkedCore.c)
 *     PpmParkReportParkedCore @ 0x1403B0AB8 (PpmParkReportParkedCore.c)
 *     PpmParkReportSoftParkChange @ 0x1403DFE2C (PpmParkReportSoftParkChange.c)
 * Callees:
 *     PpmEventTraceProcessorLatencyLimitChange @ 0x140204410 (PpmEventTraceProcessorLatencyLimitChange.c)
 *     KeAddProcessorAffinityEx @ 0x140256160 (KeAddProcessorAffinityEx.c)
 *     ?KiAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x14026704C (-KiAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z.c)
 *     KeCheckProcessorAffinityEx @ 0x14026BAA0 (KeCheckProcessorAffinityEx.c)
 *     KeGetPrcb @ 0x1403B0CC0 (KeGetPrcb.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall PpmIdleUpdateProcessorLatencyLimit(struct _KPRCB *a1, struct _KAFFINITY_EX *a2)
{
  unsigned __int8 CurrentIrql; // r14
  unsigned int v5; // edi
  unsigned int IdleWakeLatencyLimit; // ebp
  __int64 Latency; // r8
  _PPM_IDLE_STATES *IdleStates; // r11
  unsigned int v9; // eax
  unsigned int v10; // r15d
  unsigned int v11; // ebx
  __int64 v12; // r9
  int v13; // edx
  int v14; // ecx
  __int64 result; // rax
  unsigned int v16; // ecx
  __int64 v17; // r13
  int v18; // eax
  struct _KAFFINITY_EX *v19; // r12
  unsigned __int64 v20; // rdx
  __int64 v21; // r8
  unsigned int Count; // ecx
  unsigned __int64 v23; // rax
  struct _KPRCB *Prcb; // rax
  unsigned __int16 v25; // [rsp+60h] [rbp+8h]
  __int64 v27; // [rsp+70h] [rbp+18h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
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
          v9 = 1;
          v10 = 0;
          v11 = 0;
          while ( 1 )
          {
            v12 = v11;
            if ( v9 >= IdleStates->ProcessorIdleCount )
              break;
            Latency = IdleStates->State[v9].Latency;
            if ( (_DWORD)Latency != -1 )
            {
              v13 = 0;
              v14 = 0;
              v11 = IdleStates->State[v9].Latency;
              if ( (unsigned int)v12 > (unsigned int)Latency )
                v11 = v12;
              LOBYTE(v13) = v5 > (unsigned int)Latency;
              LOBYTE(v14) = IdleWakeLatencyLimit > (unsigned int)Latency;
              if ( v14 != v13 )
              {
                KeAddProcessorAffinityEx(a2, a1->Number);
                goto LABEL_17;
              }
            }
            ++v9;
          }
          if ( PpmPlatformStates )
          {
            while ( v10 < *(_DWORD *)PpmPlatformStates )
            {
              v17 = PpmPlatformStates + 448LL * v10;
              if ( !*(_BYTE *)(v17 + 121) )
              {
                v19 = (struct _KAFFINITY_EX *)(v17 + 128);
                if ( (unsigned int)KeCheckProcessorAffinityEx(v17 + 128, a1->Number, Latency, v12) )
                {
                  v20 = *(_QWORD *)(v17 + 136);
                  v21 = 0LL;
                  v25 = 0;
                  while ( 2 )
                  {
                    if ( v17 == -128 )
                      Count = (unsigned __int16)v21 + 1;
                    else
                      Count = v19->Count;
                    while ( !v20 )
                    {
                      LOWORD(v21) = v21 + 1;
                      v25 = v21;
                      if ( (unsigned __int16)v21 >= Count )
                      {
                        LODWORD(v20) = KeGetPcr()->Prcb.Number;
                        if ( !(unsigned int)KeCheckProcessorAffinityEx(v17 + 128, v20, v21, v12) )
                        {
                          v18 = *(_DWORD *)(v17 + 72);
                          if ( (*(_BYTE *)(v17 + 123) || IdleWakeLatencyLimit < v11 + v18 || v5 < v11 + v18)
                            && !KiAndAffinityExNoResult(v19, a2) )
                          {
                            KeAddProcessorAffinityEx(a2, a1->Number);
                            goto LABEL_17;
                          }
                        }
                        goto LABEL_27;
                      }
                      v20 = v19->Bitmap[(unsigned __int16)v21];
                    }
                    _BitScanForward64(&v23, v20);
                    v27 = v20 & ~(1LL << v23);
                    Prcb = (struct _KPRCB *)KeGetPrcb(v10);
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
              ++v10;
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

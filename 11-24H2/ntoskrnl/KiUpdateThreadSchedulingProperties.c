/*
 * XREFs of KiUpdateThreadSchedulingProperties @ 0x14047C4A8
 * Callers:
 *     KiRemoveThreadFromSchedulingGroup @ 0x1402A7194 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiSetThreadSchedulingGroup @ 0x14047C324 (KiSetThreadSchedulingGroup.c)
 * Callees:
 *     KiQueryEffectivePriorityThread @ 0x14034BFE0 (KiQueryEffectivePriorityThread.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1403B25A0 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiPrcbArrayForIsolationWidth @ 0x1403F52C0 (KiPrcbArrayForIsolationWidth.c)
 *     KiSetSchedulerAssistPriority @ 0x140465FD0 (KiSetSchedulerAssistPriority.c)
 *     KiUpdateStandbyStealSummaryForStandbyChange @ 0x1404E95F0 (KiUpdateStandbyStealSummaryForStandbyChange.c)
 *     KiUpdateThreadQosGroupingSummaries @ 0x1404E9670 (KiUpdateThreadQosGroupingSummaries.c)
 */

__int64 KiUpdateThreadSchedulingProperties(__int64 a1, _DWORD a2, _DWORD a3, struct _KPRCB **a4, ...)
{
  __int64 result; // rax
  char v6; // r10
  __int64 v7; // r11
  unsigned int v8; // edx
  struct _KPRCB **v9; // rsi
  __int64 v10; // rbp
  struct _KPRCB *v11; // rdi
  unsigned __int8 *PriorityState; // r14
  char EffectivePriorityThread; // al
  unsigned __int8 v14; // cl
  int v15; // edx
  __int64 v16; // rdx
  __int64 v17; // r8
  _KPRIORITY_STATE *v18; // r9
  char v19; // al
  char v20; // al
  unsigned int v21; // [rsp+48h] [rbp+10h] BYREF
  struct _KPRCB **v22; // [rsp+58h] [rbp+20h] BYREF
  __int64 v23; // [rsp+60h] [rbp+28h] BYREF
  va_list va; // [rsp+60h] [rbp+28h]
  va_list va1; // [rsp+68h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v23 = va_arg(va1, _QWORD);
  v22 = a4;
  result = KiUpdateSharedReadyQueueAffinityThread(0LL, a1);
  if ( v6 == 2 && !*(_QWORD *)(v7 + 16) || v6 == 3 )
  {
    v8 = *(_DWORD *)(a1 + 120);
    v22 = 0LL;
    v21 = 0;
    v23 = v7;
    result = KiPrcbArrayForIsolationWidth((__int64)va, (v8 >> 1) & 1, &v22, &v21);
    if ( v21 )
    {
      v9 = v22;
      v10 = v21;
      do
      {
        v11 = *v9;
        PriorityState = (unsigned __int8 *)(*v9)->PriorityState;
        if ( (*(_BYTE *)(a1 + 2) & 4) != 0 )
          EffectivePriorityThread = KiQueryEffectivePriorityThread(a1, *v9);
        else
          EffectivePriorityThread = *(_BYTE *)(a1 + 195);
        v14 = EffectivePriorityThread & 0x7F | ((unsigned __int8)(*(_DWORD *)(a1 + 120) >> 1) << 7);
        *PriorityState = v14;
        if ( v11->SchedulerAssist )
        {
          if ( (_KTHREAD *)a1 == v11->IdleThread )
            v15 = KiVpThreadSystemWorkPriority;
          else
            v15 = v14 & 0x7F;
          KiSetSchedulerAssistPriority((volatile signed __int32 *)v11->SchedulerAssist, v15, 0);
        }
        v16 = *(unsigned int *)(a1 + 84);
        v17 = *(unsigned int *)(a1 + 80);
        v18 = v11->PriorityState;
        v19 = (*(_BYTE *)(a1 + 516) ^ v18[64].AllFields) & 7 ^ v18[64].AllFields;
        v20 = (v19 ^ (8 * *(_BYTE *)(a1 + 517))) & 0x38 ^ v19;
        if ( (unsigned int)v17 <= (unsigned int)v16 )
          v17 = (unsigned int)v16;
        LOBYTE(v16) = (unsigned int)v17 >= KiDynamicHeteroCpuPolicyExpectedCycles ? 0x40 : 0;
        v18[64].AllFields = v16 | v20 & 0xBF;
        KiUpdateThreadQosGroupingSummaries(v11, v16, v17, v18);
        result = KiUpdateStandbyStealSummaryForStandbyChange(v11);
        ++v9;
        --v10;
      }
      while ( v10 );
    }
  }
  return result;
}

/*
 * XREFs of KiUpdateThreadSchedulingProperties @ 0x1403A9D6C
 * Callers:
 *     KiSetThreadSchedulingGroup @ 0x1403A9BE8 (KiSetThreadSchedulingGroup.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1403AB9B4 (KiRemoveThreadFromSchedulingGroup.c)
 * Callees:
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x140271CE0 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiSetSchedulerAssistPriority @ 0x1402F6DA4 (KiSetSchedulerAssistPriority.c)
 *     KiUpdateThreadQosGroupingSummaries @ 0x140317BD0 (KiUpdateThreadQosGroupingSummaries.c)
 *     KiQueryEffectivePriorityThread @ 0x1403188E0 (KiQueryEffectivePriorityThread.c)
 *     Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline @ 0x1404EFFC4 (Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline.c)
 *     KiUpdateStandbyStealSummaryForStandbyChange @ 0x1404F06D4 (KiUpdateStandbyStealSummaryForStandbyChange.c)
 */

_BYTE *__fastcall KiUpdateThreadSchedulingProperties(__int64 a1)
{
  _BYTE *result; // rax
  __int64 v3; // r10
  char v4; // r11
  int v5; // ecx
  unsigned int v6; // ecx
  struct _KPRCB **v7; // rsi
  __int64 v8; // rbp
  int v9; // edx
  unsigned int v10; // edx
  __int64 v11; // r8
  char v12; // al
  char v13; // al
  __int64 v14; // rcx
  __int64 v15; // rdi
  unsigned __int8 *PriorityState; // r14
  char EffectivePriorityThread; // al
  unsigned __int8 v18; // cl
  __int64 v19; // [rsp+20h] [rbp-18h] BYREF

  result = (_BYTE *)KiUpdateSharedReadyQueueAffinityThread(0LL, a1);
  if ( v4 == 2 && !*(_QWORD *)(v3 + 16) || v4 == 3 )
  {
    v5 = *(_DWORD *)(a1 + 120) >> 1;
    v19 = v3;
    if ( (v5 & 1) != 0 )
    {
      result = *(_BYTE **)(v3 + 36440);
      v6 = (unsigned __int8)*result;
      v7 = (struct _KPRCB **)(result + 8);
      if ( !*result )
        return result;
    }
    else
    {
      v7 = (struct _KPRCB **)&v19;
      v6 = 1;
    }
    v8 = v6;
    do
    {
      v15 = (__int64)*v7;
      PriorityState = (unsigned __int8 *)(*v7)->PriorityState;
      if ( (*(_BYTE *)(a1 + 2) & 4) != 0 )
        EffectivePriorityThread = KiQueryEffectivePriorityThread(a1, *v7);
      else
        EffectivePriorityThread = *(_BYTE *)(a1 + 195);
      v18 = EffectivePriorityThread & 0x7F | ((unsigned __int8)(*(_DWORD *)(a1 + 120) >> 1) << 7);
      *PriorityState = v18;
      if ( *(_QWORD *)(v15 + 36536) )
      {
        if ( a1 == *(_QWORD *)(v15 + 24) )
          v9 = KiVpThreadSystemWorkPriority;
        else
          v9 = v18 & 0x7F;
        KiSetSchedulerAssistPriority(*(volatile signed __int32 **)(v15 + 36536), v9, 0);
      }
      v10 = *(_DWORD *)(a1 + 80);
      v11 = *(_QWORD *)(v15 + 56);
      v12 = (*(_BYTE *)(a1 + 516) ^ *(_BYTE *)(v11 + 64)) & 7 ^ *(_BYTE *)(v11 + 64);
      v13 = (v12 ^ (8 * *(_BYTE *)(a1 + 517))) & 0x38 ^ v12;
      if ( v10 <= *(_DWORD *)(a1 + 84) )
        v10 = *(_DWORD *)(a1 + 84);
      *(_BYTE *)(v11 + 64) = (v10 >= KiDynamicHeteroCpuPolicyExpectedCycles ? 0x40 : 0) | v13 & 0xBF;
      KiUpdateThreadQosGroupingSummaries(v15);
      result = (_BYTE *)Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline(v14);
      if ( (_DWORD)result )
        result = (_BYTE *)KiUpdateStandbyStealSummaryForStandbyChange(v15);
      ++v7;
      --v8;
    }
    while ( v8 );
  }
  return result;
}

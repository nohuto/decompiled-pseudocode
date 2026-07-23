/*
 * XREFs of KiUpdateThreadSchedulingProperties @ 0x1402D6DAC
 * Callers:
 *     KiRemoveThreadFromSchedulingGroup @ 0x1402D68C4 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiSetThreadSchedulingGroup @ 0x1402D6FE8 (KiSetThreadSchedulingGroup.c)
 * Callees:
 *     KiQueryEffectivePriorityThread @ 0x14036A4C0 (KiQueryEffectivePriorityThread.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1403A0DB0 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiPrcbArrayForIsolationWidth @ 0x1403EB700 (KiPrcbArrayForIsolationWidth.c)
 *     KiSetSchedulerAssistPriority @ 0x14045D62C (KiSetSchedulerAssistPriority.c)
 *     KiUpdateStandbyStealSummaryForStandbyChange @ 0x1404E02F0 (KiUpdateStandbyStealSummaryForStandbyChange.c)
 *     KiUpdateThreadQosGroupingSummaries @ 0x1404E0370 (KiUpdateThreadQosGroupingSummaries.c)
 */

__int64 KiUpdateThreadSchedulingProperties(__int64 a1, _DWORD a2, _DWORD a3, _QWORD *a4, ...)
{
  __int64 result; // rax
  char v6; // r10
  __int64 v7; // r11
  unsigned int v8; // edx
  _QWORD *v9; // rsi
  __int64 v10; // rbp
  _QWORD *v11; // rdi
  _BYTE *v12; // r14
  char EffectivePriorityThread; // al
  char v14; // cl
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  char v19; // al
  char v20; // al
  unsigned int v21; // [rsp+48h] [rbp+10h] BYREF
  _QWORD *v22; // [rsp+58h] [rbp+20h] BYREF
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
    result = KiPrcbArrayForIsolationWidth((__int64 *)va, (v8 >> 1) & 1, &v22, &v21);
    if ( v21 )
    {
      v9 = v22;
      v10 = v21;
      do
      {
        v11 = (_QWORD *)*v9;
        v12 = *(_BYTE **)(*v9 + 56LL);
        if ( (*(_BYTE *)(a1 + 2) & 4) != 0 )
          EffectivePriorityThread = KiQueryEffectivePriorityThread(a1, *v9);
        else
          EffectivePriorityThread = *(_BYTE *)(a1 + 195);
        v14 = EffectivePriorityThread & 0x7F | ((unsigned __int8)(*(_DWORD *)(a1 + 120) >> 1) << 7);
        *v12 = v14;
        if ( v11[4567] )
        {
          if ( a1 == v11[3] )
            v15 = (unsigned int)KiVpThreadSystemWorkPriority;
          else
            v15 = v14 & 0x7F;
          KiSetSchedulerAssistPriority(v11[4567], v15, 0LL);
        }
        v16 = *(unsigned int *)(a1 + 84);
        v17 = *(unsigned int *)(a1 + 80);
        v18 = v11[7];
        v19 = (*(_BYTE *)(a1 + 516) ^ *(_BYTE *)(v18 + 64)) & 7 ^ *(_BYTE *)(v18 + 64);
        v20 = (v19 ^ (8 * *(_BYTE *)(a1 + 517))) & 0x38 ^ v19;
        if ( (unsigned int)v17 <= (unsigned int)v16 )
          v17 = (unsigned int)v16;
        LOBYTE(v16) = (unsigned int)v17 >= KiDynamicHeteroCpuPolicyExpectedCycles ? 0x40 : 0;
        *(_BYTE *)(v18 + 64) = v16 | v20 & 0xBF;
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

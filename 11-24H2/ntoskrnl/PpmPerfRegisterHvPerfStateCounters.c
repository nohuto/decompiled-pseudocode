/*
 * XREFs of PpmPerfRegisterHvPerfStateCounters @ 0x1407637F0
 * Callers:
 *     <none>
 * Callees:
 *     PpmReleaseLock @ 0x1402AE140 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402AE7DC (PpmAcquireLock.c)
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     HvlGetLpIndexFromProcessorIndex @ 0x140440D30 (HvlGetLpIndexFromProcessorIndex.c)
 *     HvlRegisterPerfFeedbackCounters @ 0x140586924 (HvlRegisterPerfFeedbackCounters.c)
 *     PpmRegisterPerfStates @ 0x14074E1F4 (PpmRegisterPerfStates.c)
 */

__int64 __fastcall PpmPerfRegisterHvPerfStateCounters(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  __int64 v4; // r15
  unsigned int v5; // r13d
  unsigned int i; // edi
  __int64 v7; // rsi
  int *v8; // rax
  int v9; // ecx
  int LpIndexFromProcessorIndex; // r14d
  unsigned int v11; // ebx
  int v12; // ebx

  if ( (HvlEnlightenments & 0x400) == 0 )
    return (unsigned int)-1073741637;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_DWORD *)(v3 + 16);
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, a2, a3);
  for ( i = 0; i < v5; ++i )
  {
    v7 = 0LL;
    v8 = (int *)(*(_QWORD *)(v3 + 568) + 32LL * i);
    v9 = v8[7];
    if ( v9 == 1 )
    {
      LpIndexFromProcessorIndex = *v8;
    }
    else
    {
      if ( v9 == 2 )
        continue;
      v11 = *v8;
      if ( *v8 == -1 )
      {
        v12 = -1073741811;
LABEL_16:
        PpmReleaseLock(&PpmPerfPolicyLock);
        return (unsigned int)v12;
      }
      LpIndexFromProcessorIndex = HvlGetLpIndexFromProcessorIndex(v11);
      v7 = KeGetPrcb(v11) + 34880;
    }
    if ( v4 )
    {
      if ( LpIndexFromProcessorIndex != -1 )
      {
        v12 = HvlRegisterPerfFeedbackCounters(LpIndexFromProcessorIndex, v4 + 104LL * i);
        if ( v12 < 0 )
          goto LABEL_16;
      }
    }
    if ( v7 )
      *(_DWORD *)(v7 + 224) = 3;
  }
  return (unsigned int)PpmRegisterPerfStates(v3, 1);
}

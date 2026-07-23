/*
 * XREFs of PspImplicitAssignProcessToJob @ 0x1408D79EC
 * Callers:
 *     PspInsertProcess @ 0x1408FD2CC (PspInsertProcess.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x1403C3570 (PsGetEffectiveServerSilo.c)
 *     PspLockJobChain @ 0x1408D7F38 (PspLockJobChain.c)
 *     PspUnlockJobChain @ 0x1408D80E0 (PspUnlockJobChain.c)
 *     PspValidateJobChainLimits @ 0x1408D81A8 (PspValidateJobChainLimits.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x1408D8304 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspIncrementJobChainProcessCounts @ 0x1408D851C (PspIncrementJobChainProcessCounts.c)
 *     PspApplyJobChainLimitsToProcess @ 0x1408D85E4 (PspApplyJobChainLimitsToProcess.c)
 *     MmAssignProcessToJob @ 0x1408D8B78 (MmAssignProcessToJob.c)
 *     PspEstablishJobHierarchy @ 0x14091B360 (PspEstablishJobHierarchy.c)
 */

__int64 __fastcall PspImplicitAssignProcessToJob(_DWORD *Object, __int64 a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // r15
  _DWORD *EffectiveServerSilo; // rbx
  int v8; // eax
  int v9; // esi
  __int64 v11; // rcx
  volatile signed __int32 *v12; // rax
  __int64 v13; // rcx
  int v14; // ebx

  CurrentThread = KeGetCurrentThread();
  PspLockJobChain(Object, CurrentThread, 0LL);
  if ( (a3 & 0x400) != 0 )
  {
    EffectiveServerSilo = (_DWORD *)PsGetEffectiveServerSilo((__int64)Object);
    goto LABEL_8;
  }
  EffectiveServerSilo = Object;
  if ( Object )
  {
    while ( 1 )
    {
      v8 = EffectiveServerSilo[64];
      if ( (v8 & 0x1000) == 0 )
      {
        if ( (a3 & 1) == 0 )
          goto LABEL_8;
        if ( (v8 & 0x800) == 0 )
          break;
      }
      EffectiveServerSilo = (_DWORD *)*((_QWORD *)EffectiveServerSilo + 163);
      if ( !EffectiveServerSilo )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    if ( (a3 & 1) == 0 )
      goto LABEL_8;
  }
  if ( EffectiveServerSilo == Object && (EffectiveServerSilo[388] & 0x40000000) == 0 )
  {
    v9 = -1073741790;
    goto LABEL_10;
  }
LABEL_8:
  if ( !EffectiveServerSilo )
  {
    v9 = 0;
LABEL_10:
    PspUnlockJobChain(Object, CurrentThread);
    return (unsigned int)v9;
  }
  v11 = *((_QWORD *)EffectiveServerSilo + 224);
  if ( (unsigned __int64)(v11 - 1) <= 0xFFFFFFFFFFFFFFFDuLL
    && *(_QWORD *)(a2 + 1880) != v11
    && a2 != *(_QWORD *)(v11 + 120) )
  {
    v9 = -1073741637;
    goto LABEL_10;
  }
  v9 = PspValidateJobChainLimits(EffectiveServerSilo, 0LL, a2, a3);
  if ( v9 < 0 )
    goto LABEL_10;
  v9 = PspEstablishJobHierarchy(EffectiveServerSilo);
  if ( v9 < 0 )
    goto LABEL_10;
  PspIncrementJobChainProcessCounts(EffectiveServerSilo, 0LL, a2, a3);
  PspApplyJobChainLimitsToProcess(EffectiveServerSilo, 0LL, a2);
  if ( (EffectiveServerSilo[388] & 0x1000) != 0 )
  {
    v12 = (volatile signed __int32 *)(a2 + 1832);
    v13 = 7LL;
    do
    {
      _interlockedbittestandset(v12++, 0x1Fu);
      --v13;
    }
    while ( v13 );
    _interlockedbittestandset((volatile signed __int32 *)(a2 + 1868), 0x1Fu);
  }
  PspUnlockJobChain(Object, CurrentThread);
  v14 = PspApplyWorkingSetLimitsToProcess(a2);
  if ( v14 >= 0 && !(unsigned int)MmAssignProcessToJob(a2, 0LL, 0LL) )
    return (unsigned int)-1073741756;
  return (unsigned int)v14;
}

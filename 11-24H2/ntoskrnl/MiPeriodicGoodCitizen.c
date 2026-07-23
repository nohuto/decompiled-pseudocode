/*
 * XREFs of MiPeriodicGoodCitizen @ 0x14023D8A0
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x14023DD10 (MiWalkPageTablesRecursively.c)
 *     MiWalkLeap @ 0x140339C60 (MiWalkLeap.c)
 * Callees:
 *     EtwTraceShouldYieldProcessor @ 0x14023D6E0 (EtwTraceShouldYieldProcessor.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 */

_BOOL8 __fastcall MiPeriodicGoodCitizen(int *a1, unsigned __int64 a2)
{
  int v3; // ecx
  __int64 v4; // r8
  int v5; // ecx
  int v6; // ebx
  __int64 *v7; // rax
  __int64 v8; // r11
  unsigned int *MmInternal; // rcx
  __int64 v10; // rax
  unsigned int i; // r10d
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  int v15; // eax
  bool v16; // zf
  struct _KPRCB *v17; // rcx
  int v18; // r8d
  __int64 v19; // r9
  volatile int DpcRequestSummary; // edx
  unsigned int DpcWatchdogCount; // edi
  unsigned int DpcTimeCount; // esi
  _KTHREAD *NextThread; // rax
  unsigned __int64 v24; // rcx
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  struct _KPRCB *CurrentPrcb; // rdx
  char v30; // al
  __int64 v31; // rcx
  struct _KPRCB *v32; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v34; // eax
  __int64 v35; // rdx
  unsigned __int32 v36; // ett

  v3 = *a1;
  if ( (v3 & 2) == 0 || ((_BYTE)a1[2] & (_BYTE)a1[40]) != 0 )
    return 0LL;
  v4 = *((_QWORD *)a1 + 4);
  v5 = v3 & 4;
  v6 = 0;
  if ( (*(_DWORD *)(v4 + 184) & 0xFu) <= 5 )
  {
    if ( (*(_DWORD *)(v4 + 184) & 0xF) == 1 )
      v7 = (__int64 *)&unk_140E38880;
    else
      v7 = (__int64 *)(v4 + 192);
    v8 = *v7;
    if ( v5 )
    {
      MmInternal = (unsigned int *)KeGetCurrentPrcb()->MmInternal;
      if ( MmInternal )
        v10 = MmInternal[81];
      else
        v10 = 0LL;
      if ( (*(_DWORD *)((v10 << 6) + v8) & 0x40000000) != 0 )
        return 1LL;
    }
    else
    {
      for ( i = 0; i < 4; ++i )
      {
        if ( (*(_DWORD *)(((unsigned __int64)i << 6) + v8) & 0x40000000) != 0 )
          return 1LL;
      }
    }
  }
  if ( (*a1 & 4) == 0 )
    goto LABEL_30;
  v13 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v13 == 0xFFFFF6FB7DBEDF68uLL )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v30 = *(_DWORD *)(v4 + 184) & 0xF;
    if ( v30 )
    {
      if ( v30 == 7 )
      {
        v16 = CurrentPrcb->SelfmapLockHandle[1].LockQueue.Next == 0LL;
LABEL_29:
        if ( v16 )
          goto LABEL_30;
        return 1LL;
      }
      v31 = 3LL;
      if ( v30 == 5 )
        v31 = 0LL;
    }
    else
    {
      v31 = 2LL;
    }
    v16 = CurrentPrcb->SelfmapLockHandle[v31].LockQueue.Next == 0LL;
    goto LABEL_29;
  }
  if ( (*(_DWORD *)(v4 + 184) & 0xF) == 0 && v13 >= 0xFFFFF6FB7DBED000uLL && v13 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    v24 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7];
    if ( v24 )
    {
      v15 = (*(_DWORD *)(v24 + 4LL * (((unsigned int)v13 >> 3) & 0x1FF)) & 0x40000000) != 0;
LABEL_28:
      v16 = v15 == 0;
      goto LABEL_29;
    }
  }
  if ( (*(_DWORD *)(v4 + 184) & 0xF) == 0 || v13 < 0xFFFFF6FB7DBED000uLL || v13 > 0xFFFFF6FB7DBEDFFFuLL )
  {
    v14 = *(_QWORD *)v13;
    if ( v13 >= 0xFFFFF6FB7DBED000uLL
      && v13 <= 0xFFFFF6FB7DBED7F8uLL
      && (v14 & 1) != 0
      && ((v14 & 0x42) == 0 || (v14 & 0x20) == 0)
      && (MiFlags & 0x600000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        KernelWaitTime = Process[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v27 = *(_QWORD *)(KernelWaitTime + 8 * ((v13 >> 3) & 0x1FF));
          if ( (v27 & 0x20) != 0 )
            v14 |= 0x20uLL;
          v28 = v14;
          v14 |= 0x42uLL;
          if ( (v27 & 0x42) == 0 )
            v14 = v28;
        }
      }
    }
    v15 = (v14 >> 60) & 2;
    goto LABEL_28;
  }
  if ( (((unsigned int)dword_140E2F1EC[(unsigned __int64)(2 * (unsigned int)((__int64)(v13 + 0x90482413000LL) >> 3)) >> 5] >> ((2 * ((__int64)(v13 + 0x90482413000LL) >> 3)) & 0x1F)) & 2) != 0 )
    return 1LL;
LABEL_30:
  if ( *((_BYTE *)a1 + 9) >= 2u )
    return 0LL;
  v17 = KeGetCurrentPrcb();
  v18 = 0;
  v19 = 0LL;
  DpcRequestSummary = v17->DpcRequestSummary;
  DpcWatchdogCount = v17->DpcWatchdogCount;
  DpcTimeCount = v17->DpcTimeCount;
  if ( (DpcRequestSummary & 1) != 0 )
  {
    v18 = 1;
    if ( DpcTimeCount <= 7 )
      goto LABEL_36;
    if ( v17->QuantumEnd )
    {
      v6 = 1;
      goto LABEL_56;
    }
  }
  else
  {
    if ( !v17->NestingLevel )
    {
      if ( (DpcRequestSummary & 0x1E) != 0 )
      {
        v6 = 2;
        goto LABEL_56;
      }
      if ( v17->QuantumEnd )
      {
        v6 = 3;
        goto LABEL_56;
      }
      NextThread = v17->NextThread;
      if ( NextThread && NextThread != v17->CurrentThread )
      {
        v6 = 4;
        goto LABEL_56;
      }
LABEL_36:
      if ( DpcWatchdogCount <= 7 )
        return 0LL;
      if ( !v18 )
        goto LABEL_71;
      goto LABEL_38;
    }
    v19 = 1LL;
    if ( DpcWatchdogCount <= 7 )
      return 0LL;
    if ( v17->QuantumEnd )
    {
      v6 = 7;
      goto LABEL_56;
    }
  }
LABEL_38:
  if ( (DpcRequestSummary & 0x1E) != 0 )
  {
    v6 = 5;
    goto LABEL_56;
  }
  if ( v17->CurrentThread != v17->IdleThread )
  {
    v6 = 6;
    goto LABEL_56;
  }
LABEL_71:
  _disable();
  v17->DpcWatchdogCount = 0;
  v17->DpcTimeCount = 0;
  v32 = KeGetCurrentPrcb();
  SchedulerAssist = (unsigned __int32 *)v32->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v34 = *SchedulerAssist;
    do
    {
      v35 = v34;
      LODWORD(v35) = v34 & 0xFFDFFFFF;
      v36 = v34;
      v34 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v34 & 0xFFDFFFFF, v34);
    }
    while ( v36 != v34 );
    if ( (v34 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(v32, v35, SchedulerAssist, v19);
  }
  _enable();
LABEL_56:
  if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
    EtwTraceShouldYieldProcessor(v6, DpcWatchdogCount, DpcTimeCount);
  return v6 != 0;
}

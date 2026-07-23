/*
 * XREFs of PspProcessDynamicEHContinuationTargets @ 0x140774F18
 * Callers:
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     RtlAvlRemoveNode @ 0x1402911D0 (RtlAvlRemoveNode.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlAddDynamicEHContinuationTarget @ 0x140787498 (RtlAddDynamicEHContinuationTarget.c)
 *     RtlpDynamicEHContinuationTargetsTreeCompare @ 0x140A249D0 (RtlpDynamicEHContinuationTargetsTreeCompare.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspProcessDynamicEHContinuationTargets(
        ULONG_PTR BugCheckParameter1,
        __int64 a2,
        unsigned __int16 a3,
        _DWORD *a4)
{
  __int64 v5; // r14
  unsigned int v6; // esi
  __int64 v7; // r12
  _KPROCESS *Process; // rbp
  int v9; // esi
  char v10; // bl
  unsigned int v11; // ecx
  unsigned int v12; // r13d
  char *v13; // rax
  char *v14; // rsi
  __int64 v15; // r14
  __int64 v16; // rbp
  __int64 v17; // r13
  _QWORD *v18; // rsi
  int v19; // eax
  char v20; // bl
  __int64 v21; // r8
  __int64 v22; // r9
  int v24; // [rsp+20h] [rbp-98h]
  unsigned int v25; // [rsp+24h] [rbp-94h]
  struct _KTHREAD *CurrentThread; // [rsp+28h] [rbp-90h]
  struct _EX_RUNDOWN_REF *RunRef; // [rsp+38h] [rbp-80h]
  _OWORD v30[3]; // [rsp+48h] [rbp-70h] BYREF

  memset(v30, 0, sizeof(v30));
  v5 = 0LL;
  v6 = a3;
  v7 = a2;
  CurrentThread = KeGetCurrentThread();
  v24 = 0;
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->KernelApcDisable;
  RunRef = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 488);
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 488)) )
  {
    v10 = 2;
    v11 = 0;
    v25 = v6;
    v12 = v6;
    while ( v11 < v6 )
    {
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
      {
        v9 = -1073741749;
        goto LABEL_47;
      }
      if ( (*(_DWORD *)(BugCheckParameter1 + 500) & 0x40000008) != 0 )
      {
        v9 = -1073741558;
        goto LABEL_47;
      }
      if ( (unsigned __int64)(*(_QWORD *)(v7 + 16LL * v11) - 0x10000LL) > 0x7FFFFFFDFFFFLL )
      {
        v9 = -1073741503;
        goto LABEL_47;
      }
      if ( (*(_QWORD *)(v7 + 16LL * v11 + 8) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      {
        v9 = -1073741811;
LABEL_47:
        ExReleaseRundownProtection_0(RunRef);
        goto LABEL_48;
      }
      ++v11;
    }
    if ( (_KPROCESS *)BugCheckParameter1 != Process )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v30);
      v10 = 3;
    }
    v13 = (char *)KeAbPreAcquire(BugCheckParameter1 + 1928, 0LL);
    v14 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 1928), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter1 + 1928), v13, BugCheckParameter1 + 1928);
    if ( v14 )
      v14[10] = 1;
    while ( (unsigned int)v5 < v12 )
    {
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
      {
        v9 = -1073741749;
        goto LABEL_40;
      }
      if ( (*(_DWORD *)(BugCheckParameter1 + 500) & 0x40000008) != 0 )
      {
        v9 = -1073741558;
        goto LABEL_40;
      }
      v15 = 2 * v5;
      v16 = *(_QWORD *)(v7 + 8 * v15 + 8);
      v17 = *(_QWORD *)(v7 + 8 * v15);
      if ( (v16 & 1) != 0 )
      {
        v9 = RtlAddDynamicEHContinuationTarget(BugCheckParameter1 + 1920, v17);
        if ( v9 < 0 )
          goto LABEL_36;
      }
      else
      {
        v18 = *(_QWORD **)(BugCheckParameter1 + 1920);
        while ( v18 )
        {
          v19 = RtlpDynamicEHContinuationTargetsTreeCompare(v17, v18);
          if ( v19 >= 0 )
          {
            if ( v19 <= 0 )
              break;
            v18 = (_QWORD *)v18[1];
          }
          else
          {
            v18 = (_QWORD *)*v18;
          }
        }
        if ( !v18 )
        {
          v9 = -1073741275;
LABEL_36:
          LODWORD(v5) = v24;
          goto LABEL_40;
        }
        RtlAvlRemoveNode((unsigned __int64 *)(BugCheckParameter1 + 1920), (__int64)v18);
        ExFreePoolWithTag(v18, 0);
      }
      v7 = a2;
      v12 = v25;
      *(_QWORD *)(a2 + 8 * v15 + 8) = v16 | 2;
      v5 = (unsigned int)++v24;
    }
    v9 = 0;
LABEL_40:
    v20 = v10 | 4;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 1928), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter1 + 1928));
    KeAbPostRelease(BugCheckParameter1 + 1928);
    if ( (v20 & 1) != 0 )
      KiUnstackDetachProcess((__int64)v30, 0, v21, v22);
    if ( (v20 & 2) != 0 )
      goto LABEL_47;
  }
  else
  {
    v9 = -1073741558;
  }
LABEL_48:
  KeLeaveCriticalRegion();
  *a4 = v5;
  return (unsigned int)v9;
}

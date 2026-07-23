/*
 * XREFs of PspProcessDynamicEnforcedAddressRanges @ 0x1407751F4
 * Callers:
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlAddDynamicEnforcedAddressRange @ 0x140787544 (RtlAddDynamicEnforcedAddressRange.c)
 *     RtlRemoveDynamicEnforcedAddressRange @ 0x14078760C (RtlRemoveDynamicEnforcedAddressRange.c)
 */

__int64 __fastcall PspProcessDynamicEnforcedAddressRanges(
        ULONG_PTR BugCheckParameter1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        _DWORD *a5)
{
  unsigned __int64 *v5; // r14
  unsigned int v7; // ebx
  __int64 v8; // rsi
  __int64 v9; // r12
  _KPROCESS *Process; // r15
  unsigned int v11; // esi
  int v12; // ebp
  __int64 v13; // rcx
  unsigned __int64 v14; // r8
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  char *v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  char *v21; // rbx
  __int64 v22; // r15
  int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // r8
  int v26; // eax
  unsigned int v28; // [rsp+20h] [rbp-A8h]
  struct _KTHREAD *CurrentThread; // [rsp+28h] [rbp-A0h]
  struct _EX_RUNDOWN_REF *RunRef; // [rsp+40h] [rbp-88h]
  _OWORD v33[3]; // [rsp+50h] [rbp-78h] BYREF

  v5 = (unsigned __int64 *)(a2 + 8);
  memset(v33, 0, sizeof(v33));
  v7 = a4;
  v8 = a3;
  v9 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->KernelApcDisable;
  RunRef = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 488);
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 488)) )
  {
    v12 = 2;
    v13 = 0LL;
    v28 = v7;
    while ( (unsigned int)v13 < v7 )
    {
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
      {
        v11 = -1073741749;
        goto LABEL_44;
      }
      if ( (*(_DWORD *)(BugCheckParameter1 + 500) & 0x40000008) != 0 )
      {
        v11 = -1073741558;
        goto LABEL_44;
      }
      v14 = *(_QWORD *)(v8 + 24 * v13);
      v15 = *(_QWORD *)(v8 + 24 * v13 + 8);
      if ( v14 < 0x10000 )
        goto LABEL_18;
      v16 = v14 + v15 - 1;
      if ( !v15 )
        v16 = *(_QWORD *)(v8 + 24 * v13);
      if ( v16 < v14 )
        goto LABEL_18;
      v17 = v15 + v14 - 1;
      if ( !v15 )
        v17 = *(_QWORD *)(v8 + 24 * v13);
      if ( v17 > 0x7FFFFFFEFFFFLL || !v15 )
      {
LABEL_18:
        v11 = -1073741503;
        goto LABEL_44;
      }
      if ( (*(_DWORD *)(v8 + 24 * v13 + 16) & 0xFFFFFFFE) != 0 )
      {
        v11 = -1073741811;
        goto LABEL_44;
      }
      v13 = (unsigned int)(v13 + 1);
    }
    if ( (_KPROCESS *)BugCheckParameter1 != Process )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v33);
      v12 = 3;
    }
    v18 = (char *)KeAbPreAcquire((__int64)v5, 0LL);
    v21 = v18;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
      ExfAcquirePushLockExclusiveEx(v5, v18, (__int64)v5);
    if ( v21 )
      v21[10] = 1;
    while ( (unsigned int)v9 < v28 )
    {
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
      {
        v11 = -1073741749;
        goto LABEL_38;
      }
      if ( (*(_DWORD *)(BugCheckParameter1 + 500) & 0x40000008) != 0 )
      {
        v11 = -1073741558;
        goto LABEL_38;
      }
      v22 = 3 * v9;
      v23 = *(_DWORD *)(v8 + 24 * v9 + 16);
      v24 = *(_QWORD *)(v8 + 24 * v9);
      v25 = *(_QWORD *)(v8 + 24 * v9 + 8);
      if ( (v23 & 1) != 0 )
        v26 = RtlAddDynamicEnforcedAddressRange(a2, v24, v25);
      else
        v26 = RtlRemoveDynamicEnforcedAddressRange(a2, v24, v25);
      v11 = v26;
      if ( v26 < 0 )
        goto LABEL_38;
      v8 = a3;
      v9 = (unsigned int)(v9 + 1);
      *(_DWORD *)(a3 + 8 * v22 + 16) = v23 | 2;
    }
    v11 = 0;
LABEL_38:
    if ( (v12 | 4u) >= 4 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v5);
      KeAbPostRelease((ULONG_PTR)v5);
    }
    if ( (v12 & 1) != 0 )
      KiUnstackDetachProcess((__int64)v33, 0, v19, v20);
LABEL_44:
    ExReleaseRundownProtection_0(RunRef);
  }
  else
  {
    v11 = -1073741558;
  }
  KeLeaveCriticalRegion();
  *a5 = v9;
  return v11;
}

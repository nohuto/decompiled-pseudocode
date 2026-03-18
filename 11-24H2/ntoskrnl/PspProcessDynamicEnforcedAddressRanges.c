/*
 * XREFs of PspProcessDynamicEnforcedAddressRanges @ 0x140774FD4
 * Callers:
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     RtlAddDynamicEnforcedAddressRange @ 0x140787614 (RtlAddDynamicEnforcedAddressRange.c)
 *     RtlRemoveDynamicEnforcedAddressRange @ 0x1407876DC (RtlRemoveDynamicEnforcedAddressRange.c)
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
  _QWORD *v18; // rax
  _QWORD *v19; // rbx
  __int64 v20; // r15
  int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // eax
  unsigned int v26; // [rsp+20h] [rbp-A8h]
  struct _KTHREAD *CurrentThread; // [rsp+28h] [rbp-A0h]
  struct _EX_RUNDOWN_REF *RunRef; // [rsp+40h] [rbp-88h]
  _OWORD v31[3]; // [rsp+50h] [rbp-78h] BYREF

  v5 = (unsigned __int64 *)(a2 + 8);
  memset(v31, 0, sizeof(v31));
  v7 = a4;
  v8 = a3;
  v9 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->KernelApcDisable;
  RunRef = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 488);
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 488)) )
  {
    v12 = 2;
    v13 = 0LL;
    v26 = v7;
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
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v31);
      v12 = 3;
    }
    v18 = KeAbPreAcquire((__int64)v5, 0LL);
    v19 = v18;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
      ExfAcquirePushLockExclusiveEx(v5, (__int64)v18, (__int64)v5);
    if ( v19 )
      *((_BYTE *)v19 + 10) = 1;
    while ( (unsigned int)v9 < v26 )
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
      v20 = 3 * v9;
      v21 = *(_DWORD *)(v8 + 24 * v9 + 16);
      v22 = *(_QWORD *)(v8 + 24 * v9);
      v23 = *(_QWORD *)(v8 + 24 * v9 + 8);
      if ( (v21 & 1) != 0 )
        v24 = RtlAddDynamicEnforcedAddressRange(a2, v22, v23);
      else
        v24 = RtlRemoveDynamicEnforcedAddressRange(a2, v22, v23);
      v11 = v24;
      if ( v24 < 0 )
        goto LABEL_38;
      v8 = a3;
      v9 = (unsigned int)(v9 + 1);
      *(_DWORD *)(a3 + 8 * v20 + 16) = v21 | 2;
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
      KiUnstackDetachProcess((__int64)v31, 0);
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

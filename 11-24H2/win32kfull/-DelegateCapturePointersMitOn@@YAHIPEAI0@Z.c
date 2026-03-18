/*
 * XREFs of ?DelegateCapturePointersMitOn@@YAHIPEAI0@Z @ 0x1400A5FD8
 * Callers:
 *     NtUserDelegateCapturePointers @ 0x140212D70 (NtUserDelegateCapturePointers.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1400A63D0 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     _DelegateCapturePointers @ 0x1400A6408 (_DelegateCapturePointers.c)
 *     ValidateDelegatePointerList @ 0x1400A6DC8 (ValidateDelegatePointerList.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x14027A054 (--0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 */

__int64 __fastcall DelegateCapturePointersMitOn(unsigned int a1, unsigned int *a2, unsigned int *a3)
{
  __int64 v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  struct CEResourceLock *TouchProcessorLock; // rax
  void *v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // edi
  __int64 CurrentProcessWow64Process; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  unsigned __int64 v22; // rsi
  int v23; // ecx
  __int64 v24; // rax
  void *v25; // rbx
  __int64 v26; // rcx
  _BYTE v28[16]; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v29[56]; // [rsp+48h] [rbp-50h] BYREF

  v5 = a1;
  EnterCrit(0LL, 0LL);
  UserSessionState = W32GetUserSessionState(v7, v6);
  TouchProcessorLock = CTouchProcessor::GetTouchProcessorLock(*(CTouchProcessor **)(UserSessionState + 3264));
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v29, TouchProcessorLock, v10);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v28);
  v14 = *((unsigned int *)PtiCurrent(v12, v11) + 340);
  v16 = 0;
  if ( (v14 & 0x2000) == 0 )
  {
    v23 = 5;
    goto LABEL_8;
  }
  if ( !(_DWORD)v5
    || !a2
    || !a3
    || a2 == a3
    || (CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v14, v13, v15),
        ProbeForRead(a2, 4 * v5, CurrentProcessWow64Process != 0 ? 1 : 4),
        v21 = PsGetCurrentProcessWow64Process(v19, v18, v20),
        ProbeForRead(a3, 4 * v5, v21 != 0 ? 1 : 4),
        v22 = (unsigned __int64)(unsigned int)v5 << 7,
        v22 > 0xFFFFFFFF) )
  {
    v23 = 87;
LABEL_8:
    UserSetLastError(v23);
    goto LABEL_14;
  }
  if ( (unsigned int)v22 >= 0x2710000
    || (v24 = Win32AllocPoolZInit((unsigned int)v22, 1885631317LL), (v25 = (void *)v24) == 0LL) )
  {
    v23 = 8;
    goto LABEL_8;
  }
  if ( (unsigned int)ValidateDelegatePointerList((unsigned int)v5, a2, a3, v24) )
    v16 = DelegateCapturePointers((unsigned int)v5, v25);
  else
    UserSetLastError(87);
  Win32FreePool(v25);
LABEL_14:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v28);
  CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v29);
  UserSessionSwitchLeaveCrit(v26);
  return v16;
}

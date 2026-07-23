/*
 * XREFs of PspSetUILimitJobObject @ 0x140778788
 * Callers:
 *     PsSystemSetUILimitJobObject @ 0x1407775B0 (PsSystemSetUILimitJobObject.c)
 *     NtSetInformationJobObject @ 0x140ACC7F0 (NtSetInformationJobObject.c)
 * Callees:
 *     PspLockJobChain @ 0x1408D7F38 (PspLockJobChain.c)
 *     PspUnlockJobChain @ 0x1408D80E0 (PspUnlockJobChain.c)
 *     PspBindProcessSessionToJob @ 0x14091B844 (PspBindProcessSessionToJob.c)
 *     PspDoesJobHierarchyPermitUILimits @ 0x140ACF180 (PspDoesJobHierarchyPermitUILimits.c)
 */

__int64 __fastcall PspSetUILimitJobObject(__int64 a1, __int64 a2, int a3, char a4)
{
  unsigned int v8; // edi
  int v9; // r14d

  if ( (a3 & 0xFFFFFC00) != 0 )
    return (unsigned int)-1073741811;
  PspLockJobChain(a1, a2, 0LL);
  v9 = a4 & 1;
  v8 = 0;
  if ( !(unsigned __int8)PspDoesJobHierarchyPermitUILimits(a1) )
  {
    v8 = -1073741637;
LABEL_5:
    PspUnlockJobChain(a1, a2);
    return v8;
  }
  if ( *(_DWORD *)(a1 + 576) == -2 )
  {
    v8 = -1073741790;
    goto LABEL_5;
  }
  PspBindProcessSessionToJob(a1, KeGetCurrentThread()->ApcState.Process);
  if ( *(_DWORD *)(a1 + 576) > 0xFFFFFFFD
    || *(_DWORD *)(a1 + 544) == a3
    || !(unsigned __int8)IsWin32kJobNotifyCallOutPresent() )
  {
    goto LABEL_5;
  }
  *(_DWORD *)(a1 + 544) = a3;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1552), 0x10u);
  if ( v9 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1556), 0x10u);
  PspUnlockJobChain(a1, a2);
  Win32kJobUpdateUIRestrictionsNotify(a1);
  return v8;
}

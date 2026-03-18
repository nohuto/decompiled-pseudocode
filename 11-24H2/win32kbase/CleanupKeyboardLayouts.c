/*
 * XREFs of CleanupKeyboardLayouts @ 0x14020FB14
 * Callers:
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x140165460 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 * Callees:
 *     HMAssignmentUnlock @ 0x14005F130 (HMAssignmentUnlock.c)
 *     _lambda_003a05ce5104f89dcc953024da4d9dc6_::operator() @ 0x14014835C (_lambda_003a05ce5104f89dcc953024da4d9dc6_--operator().c)
 *     Feature_PreserveActiveHklInDesktopSwitching__private_IsEnabledDeviceUsageNoInline @ 0x14020FBE8 (Feature_PreserveActiveHklInDesktopSwitching__private_IsEnabledDeviceUsageNoInline.c)
 */

int *__fastcall CleanupKeyboardLayouts(__int64 a1)
{
  __int64 v1; // rcx
  __int64 UserSessionState; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  int *result; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx

  if ( *(_QWORD *)(W32GetUserSessionState(a1) + 14240) )
  {
    UserSessionState = W32GetUserSessionState(v1);
    HMAssignmentUnlock((__int64 *)(UserSessionState + 14240));
  }
  if ( (unsigned int)Feature_PreserveActiveHklInDesktopSwitching__private_IsEnabledDeviceUsageNoInline()
    && *(_QWORD *)(W32GetUserSessionState(v3) + 14248) )
  {
    v4 = W32GetUserSessionState(v3);
    HMAssignmentUnlock((__int64 *)(v4 + 14248));
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v3) + 14712) )
  {
    v6 = W32GetUserSessionState(v5);
    lambda_003a05ce5104f89dcc953024da4d9dc6_::operator()(v7, *(_QWORD *)(v6 + 14712));
  }
  result = (int *)W32GetUserSessionState(v5);
  if ( *((_QWORD *)result + 1784) )
  {
    v10 = W32GetUserSessionState(v9);
    return lambda_003a05ce5104f89dcc953024da4d9dc6_::operator()(v11, *(_QWORD *)(v10 + 14272));
  }
  return result;
}

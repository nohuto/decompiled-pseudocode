/*
 * XREFs of NtUserSetMaxTouchpadSensitivity @ 0x1C013BE40
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     Feature_Backport_DisableTouchpadAAPAPI__private_IsEnabledDeviceUsage @ 0x1C013BCDC (Feature_Backport_DisableTouchpadAAPAPI__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall NtUserSetMaxTouchpadSensitivity(int a1)
{
  __int64 v2; // r8
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  char v10; // [rsp+38h] [rbp+10h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v10);
  v3 = 0LL;
  if ( (unsigned int)Feature_Backport_DisableTouchpadAAPAPI__private_IsEnabledDeviceUsage() )
  {
    LOBYTE(v3) = a1 != 0;
    v4 = *(_QWORD *)(gptiCurrent + 424LL);
    *(_QWORD *)(v4 + 832) = *(_QWORD *)(v4 + 832) & 0xFFFFFFFFFFFFFFFEuLL | v3;
    v3 = 1LL;
  }
  else
  {
    UserSetLastError(5023);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v10, v4, v2);
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v3;
}

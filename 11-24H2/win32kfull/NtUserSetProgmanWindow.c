/*
 * XREFs of NtUserSetProgmanWindow @ 0x14029E930
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetProgmanWindow(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 *v6; // rax
  _QWORD *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD v11[2]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v12[24]; // [rsp+30h] [rbp-18h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v12);
  v4 = 0LL;
  if ( a1 )
  {
    v5 = ValidateHwnd(a1);
    if ( !v5 )
      goto LABEL_11;
  }
  else
  {
    v5 = 0LL;
  }
  v6 = (__int64 *)*((_QWORD *)PtiCurrent(v3, v2) + 63);
  v7 = v6 + 24;
  if ( v5 && *v7 )
  {
    UserSetLastError(5);
  }
  else
  {
    v8 = *v6;
    if ( v5 )
      v4 = *(_QWORD *)(v5 + 48);
    *(_QWORD *)(v8 + 40) = v4;
    v11[0] = v7;
    v11[1] = v5;
    HMAssignmentLock(v11, 0LL);
    v4 = 1LL;
  }
LABEL_11:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v12);
  UserSessionSwitchLeaveCrit(v9);
  return v4;
}

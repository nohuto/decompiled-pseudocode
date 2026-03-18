/*
 * XREFs of NtUserSetActivationFilter @ 0x1400F4130
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     IAMThreadAccessGranted @ 0x1400F5BC0 (IAMThreadAccessGranted.c)
 *     IsIAMThread @ 0x140156680 (IsIAMThread.c)
 *     _SetActivationFilter @ 0x1401AA35C (_SetActivationFilter.c)
 */

__int64 __fastcall NtUserSetActivationFilter(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct tagTHREADINFO *v6; // rax
  int v7; // ebx
  int v8; // ecx
  __int64 v9; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  _BYTE v14[24]; // [rsp+20h] [rbp-18h] BYREF

  EnterCrit(0LL, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v14);
  v6 = PtiCurrent(v5, v4);
  v7 = 0;
  if ( (unsigned int)IAMThreadAccessGranted(v6) )
  {
    v11 = ValidateHwnd(a1);
    if ( v11 && (unsigned __int8)IsIAMThread(*(_QWORD *)(v11 + 16), v12, v11) )
    {
      v7 = SetActivationFilter(v13, a2);
      goto LABEL_4;
    }
    v8 = 87;
  }
  else
  {
    v8 = 5;
  }
  UserSetLastError(v8);
LABEL_4:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v14);
  UserSessionSwitchLeaveCrit(v9);
  return v7;
}

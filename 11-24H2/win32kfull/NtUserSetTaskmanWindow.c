/*
 * XREFs of NtUserSetTaskmanWindow @ 0x14021E970
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     _SetTaskmanWindow @ 0x14021A97C (_SetTaskmanWindow.c)
 */

__int64 __fastcall NtUserSetTaskmanWindow(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rcx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v7);
  v3 = 0;
  if ( a1 )
  {
    v4 = ValidateHwnd(a1);
    if ( !v4 )
      goto LABEL_6;
  }
  else
  {
    v4 = 0LL;
  }
  v3 = SetTaskmanWindow(v4, v2);
LABEL_6:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v7);
  UserSessionSwitchLeaveCrit(v5);
  return v3;
}

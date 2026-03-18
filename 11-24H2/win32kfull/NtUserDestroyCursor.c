/*
 * XREFs of NtUserDestroyCursor @ 0x1400778B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     HMValidateHandleWithDescriptor @ 0x140077C08 (HMValidateHandleWithDescriptor.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1400786A4 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 */

_BOOL8 __fastcall NtUserDestroyCursor(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  _BOOL8 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rsi
  int v9; // ecx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 CurrentProcessWin32Process; // rax
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v13);
  LOBYTE(v4) = 3;
  v5 = 0LL;
  v7 = HMValidateHandleWithDescriptor(a1, v4);
  if ( v7 )
  {
    if ( a2 )
    {
      if ( a2 != 1 )
      {
        v9 = 87;
        goto LABEL_8;
      }
    }
    else
    {
      v10 = *(_QWORD *)(W32GetUserGdiSessionState(v6) + 40);
      if ( PsGetCurrentProcess() != v10 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
        if ( CurrentProcessWin32Process )
          CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
        if ( *(_QWORD *)(v7 + 24) != CurrentProcessWin32Process )
        {
LABEL_7:
          v9 = 5;
LABEL_8:
          UserSetLastError(v9);
          goto LABEL_6;
        }
      }
    }
    if ( *(_QWORD *)(v7 + 48) == v7 )
    {
      v5 = _DestroyCursor((struct tagCURSOR *)v7, a2);
      goto LABEL_6;
    }
    goto LABEL_7;
  }
LABEL_6:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v13);
  UserSessionSwitchLeaveCrit();
  return v5;
}

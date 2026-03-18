/*
 * XREFs of NtUserAssociateInputContext @ 0x1401C7C90
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     HMValidateHandleWithDescriptor @ 0x140077C08 (HMValidateHandleWithDescriptor.c)
 *     ?AssociateInputContextEx@@YA?AW4_AIC_STATUS@@PEAUtagWND@@PEAUtagIMC@@K@Z @ 0x1401C7D5C (-AssociateInputContextEx@@YA-AW4_AIC_STATUS@@PEAUtagWND@@PEAUtagIMC@@K@Z.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x140291AF0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 */

__int64 __fastcall NtUserAssociateInputContext(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  _BYTE v14[24]; // [rsp+20h] [rbp-18h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v14);
  v8 = ValidateReceivingHwnd(a1, 1LL);
  if ( !v8 )
    goto LABEL_2;
  if ( (**(_DWORD **)(W32GetUserSessionState(v7, v6) + 19928) & 4) != 0 )
  {
    if ( !a2 )
    {
      v13 = 0LL;
LABEL_7:
      v9 = AssociateInputContextEx(v8, v13, a3);
      goto LABEL_3;
    }
    LOBYTE(v12) = 17;
    v13 = HMValidateHandleWithDescriptor(a2, v12);
    if ( v13 )
      goto LABEL_7;
  }
  else
  {
    UserSetLastError(120);
  }
LABEL_2:
  v9 = 2;
LABEL_3:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v14);
  UserSessionSwitchLeaveCrit(v10);
  return v9;
}

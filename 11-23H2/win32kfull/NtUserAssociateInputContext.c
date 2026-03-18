/*
 * XREFs of NtUserAssociateInputContext @ 0x1C01CC3A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C0049CA8 (HMValidateHandle.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     ?AssociateInputContextEx@@YA?AW4_AIC_STATUS@@PEAUtagWND@@PEAUtagIMC@@K@Z @ 0x1C01B6DAC (-AssociateInputContextEx@@YA-AW4_AIC_STATUS@@PEAUtagWND@@PEAUtagIMC@@K@Z.c)
 */

__int64 __fastcall NtUserAssociateInputContext(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rdx
  struct tagWND *v7; // rbx
  __int64 v8; // r8
  unsigned int v9; // ebx
  struct tagIMC *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char v16; // [rsp+48h] [rbp+20h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v16);
  v7 = (struct tagWND *)ValidateHwnd(a1);
  if ( !v7 )
    goto LABEL_2;
  if ( (*gpsi & 4) != 0 )
  {
    if ( a2 )
    {
      v10 = (struct tagIMC *)HMValidateHandle(a2, 0x11u);
      if ( !v10 )
        goto LABEL_2;
    }
    else
    {
      v10 = 0LL;
    }
    v9 = AssociateInputContextEx(v7, v10, a3);
    goto LABEL_10;
  }
  UserSetLastError(120);
LABEL_2:
  v9 = 2;
LABEL_10:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v16, v6, v8);
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v9;
}

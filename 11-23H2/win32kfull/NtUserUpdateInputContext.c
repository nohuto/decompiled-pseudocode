/*
 * XREFs of NtUserUpdateInputContext @ 0x1C00416A0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateInputContext@@YAHPEAUtagIMC@@W4_UPDATEINPUTCONTEXTCLASS@@_K@Z @ 0x1C0041638 (-UpdateInputContext@@YAHPEAUtagIMC@@W4_UPDATEINPUTCONTEXTCLASS@@_K@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C0049CA8 (HMValidateHandle.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall NtUserUpdateInputContext(__int64 a1, int a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  int updated; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  char v14; // [rsp+48h] [rbp+20h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v14);
  if ( (*gpsi & 4) != 0 )
  {
    LOBYTE(v6) = 17;
    v7 = HMValidateHandle(a1, v6);
    updated = 0;
    if ( v7 )
      updated = UpdateInputContext(v7, a2, a3);
  }
  else
  {
    UserSetLastError(120LL);
    updated = 0;
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v14);
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return updated;
}

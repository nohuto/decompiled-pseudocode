/*
 * XREFs of NtUserDestroyInputContext @ 0x1C01CDD10
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C0049CA8 (HMValidateHandle.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     ?DestroyInputContext@@YAHPEAUtagIMC@@@Z @ 0x1C01B6F54 (-DestroyInputContext@@YAHPEAUtagIMC@@@Z.c)
 */

__int64 __fastcall NtUserDestroyInputContext(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  int v4; // ebx
  struct tagIMC *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  char v11; // [rsp+38h] [rbp+10h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v11);
  if ( (*gpsi & 4) != 0 )
  {
    v5 = (struct tagIMC *)HMValidateHandle(a1, 0x11u);
    v4 = 0;
    if ( v5 )
      v4 = DestroyInputContext(v5);
  }
  else
  {
    UserSetLastError(120);
    v4 = 0;
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v11, v2, v3);
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v4;
}

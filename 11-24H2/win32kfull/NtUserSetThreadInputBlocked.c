/*
 * XREFs of NtUserSetThreadInputBlocked @ 0x1401AA880
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetThreadInputBlocked(int a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct tagTHREADINFO *v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v12);
  if ( a1 != 4096 )
  {
    UserSetLastError(87);
    v7 = 0LL;
    goto LABEL_6;
  }
  v6 = PtiCurrent(v5, v4);
  v7 = 0LL;
  v8 = *((_QWORD *)v6 + 170);
  if ( a2 )
  {
    if ( (v8 & 0x8000) == 0 )
    {
      v9 = v8 | 0x8000;
      goto LABEL_5;
    }
LABEL_10:
    UserSetLastError(87);
    goto LABEL_6;
  }
  if ( (v8 & 0x8000) == 0 )
    goto LABEL_10;
  v9 = v8 & 0xFFFFFFFFFFFF7FFFuLL;
LABEL_5:
  *((_QWORD *)v6 + 170) = v9;
  v7 = 1LL;
LABEL_6:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v12);
  UserSessionSwitchLeaveCrit(v10);
  return v7;
}

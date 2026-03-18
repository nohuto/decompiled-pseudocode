/*
 * XREFs of W32ExecuteUsingSessionGlobal__lambda_89689e9a6337494d9eadd66ceb53b672___ @ 0x1401B1CA8
 * Callers:
 *     ??0tagPROCESSINFO@@QEAA@PEAU_EPROCESS@@@Z @ 0x140166A04 (--0tagPROCESSINFO@@QEAA@PEAU_EPROCESS@@@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 */

__int64 __fastcall W32ExecuteUsingSessionGlobal__lambda_89689e9a6337494d9eadd66ceb53b672_(unsigned int a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  __int64 ReferencedSessionProcessWithTag; // rax
  void *v7; // rdi
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  if ( a1 == (unsigned int)W32GetCurrentWin32kSessionId() )
  {
    *(_QWORD *)(*(_QWORD *)a2 + 1216LL) = W32GetUserSessionState(v4);
    return 0LL;
  }
  else
  {
    v9 = 0LL;
    v5 = -1073741811;
    ReferencedSessionProcessWithTag = W32GetReferencedSessionProcessWithTag(a1, 1198682965LL, &v9);
    v7 = (void *)ReferencedSessionProcessWithTag;
    if ( ReferencedSessionProcessWithTag )
    {
      v5 = PsAcquireProcessExitSynchronization(ReferencedSessionProcessWithTag);
      if ( v5 >= 0 )
      {
        v5 = 0;
        *(_QWORD *)(*(_QWORD *)a2 + 1216LL) = v9;
        PsReleaseProcessExitSynchronization(v7);
      }
      ObfDereferenceObjectWithTag(v7, 0x47727355u);
    }
    return (unsigned int)v5;
  }
}

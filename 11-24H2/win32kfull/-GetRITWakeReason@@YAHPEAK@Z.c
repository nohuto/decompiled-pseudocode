/*
 * XREFs of ?GetRITWakeReason@@YAHPEAK@Z @ 0x1401DCFB4
 * Callers:
 *     RawInputThread @ 0x140230DC0 (RawInputThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetRITWakeReason(unsigned int *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // edi

  v2 = 0;
  if ( a1 )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    v6 = *(unsigned int *)(UserSessionState + 18748);
    v7 = v6 & -*(_DWORD *)(UserSessionState + 18748);
    if ( v7 )
    {
      _InterlockedAnd((volatile signed __int32 *)(W32GetUserSessionState(v6, v5) + 18748), ~v7);
      *a1 = v7;
      return 1;
    }
  }
  else
  {
    LOBYTE(v2) = *(_DWORD *)(W32GetUserSessionState(0LL, a2) + 18748) != 0;
  }
  return v2;
}

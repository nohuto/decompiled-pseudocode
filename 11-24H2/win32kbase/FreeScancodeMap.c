/*
 * XREFs of FreeScancodeMap @ 0x14014E340
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 */

__int64 __fastcall FreeScancodeMap(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx

  if ( *(_QWORD *)(W32GetUserSessionState(a1) + 12896) )
  {
    UserSessionState = W32GetUserSessionState(v1);
    GreDeleteFastMutex(*(char **)(UserSessionState + 12896));
    *(_QWORD *)(W32GetUserSessionState(v5) + 12896) = 0LL;
  }
  result = W32GetUserSessionState(v1);
  if ( *(_QWORD *)(result + 12904) )
  {
    v6 = W32GetUserSessionState(v3);
    GreDeleteFastMutex(*(char **)(v6 + 12904));
    *(_QWORD *)(W32GetUserSessionState(v7) + 12904) = 0LL;
    result = W32GetUserSessionState(v8);
    *(_DWORD *)(result + 12912) = 0;
  }
  return result;
}

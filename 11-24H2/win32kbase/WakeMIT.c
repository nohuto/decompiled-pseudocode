/*
 * XREFs of WakeMIT @ 0x1400DCC50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall WakeMIT(__int64 a1)
{
  int v1; // edi
  __int64 v2; // rcx
  char v3; // bl
  __int64 UserSessionState; // rdx
  signed __int32 v5; // eax
  __int64 v6; // rcx
  signed __int32 v7; // ett
  __int64 v8; // rax

  v1 = a1;
  if ( !*(_DWORD *)(W32GetUserSessionState(a1) + 18800) )
    return 0;
  v3 = 1;
  UserSessionState = W32GetUserSessionState(v2);
  _m_prefetchw((const void *)(UserSessionState + 18788));
  v5 = *(_DWORD *)(UserSessionState + 18788);
  do
  {
    v6 = v1 | (unsigned int)v5;
    v7 = v5;
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)(UserSessionState + 18788), v6, v5);
  }
  while ( v7 != v5 );
  if ( !v5 )
  {
    v8 = W32GetUserSessionState(v6);
    ZwSetEvent(*(HANDLE *)(v8 + 18792), 0LL);
  }
  return v3;
}

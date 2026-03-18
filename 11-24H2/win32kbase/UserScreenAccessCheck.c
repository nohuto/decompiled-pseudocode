/*
 * XREFs of UserScreenAccessCheck @ 0x1400D62E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSurfaceAccessCheck @ 0x1400D6330 (UserSurfaceAccessCheck.c)
 */

__int64 __fastcall UserScreenAccessCheck(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx

  v1 = 0LL;
  if ( *(_QWORD *)(W32GetUserSessionState(a1) + 19200) )
    v1 = ***(_QWORD ***)(*(_QWORD *)(W32GetUserSessionState(v2) + 19200) + 8LL);
  return UserSurfaceAccessCheck(v1);
}

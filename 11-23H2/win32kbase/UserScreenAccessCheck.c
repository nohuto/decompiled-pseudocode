/*
 * XREFs of UserScreenAccessCheck @ 0x1C0096C20
 * Callers:
 *     <none>
 * Callees:
 *     UserSurfaceAccessCheck @ 0x1C0096C50 (UserSurfaceAccessCheck.c)
 */

__int64 UserScreenAccessCheck()
{
  __int64 v0; // rcx

  v0 = 0LL;
  if ( grpdeskRitInput )
    v0 = ***((_QWORD ***)grpdeskRitInput + 1);
  return UserSurfaceAccessCheck(v0);
}

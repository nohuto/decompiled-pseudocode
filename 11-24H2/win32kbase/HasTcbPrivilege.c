/*
 * XREFs of HasTcbPrivilege @ 0x1401AD540
 * Callers:
 *     <none>
 * Callees:
 *     HasPrivilege @ 0x1401AD4C0 (HasPrivilege.c)
 */

bool __fastcall HasTcbPrivilege(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return HasPrivilege(7LL, a2, a3, a4);
}

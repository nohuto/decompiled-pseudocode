/*
 * XREFs of ObAssignSecurity @ 0x140A9D250
 * Callers:
 *     <none>
 * Callees:
 *     ObpAssignSecurity @ 0x140854270 (ObpAssignSecurity.c)
 */

__int64 __fastcall ObAssignSecurity(__int64 a1, __int64 a2, __int64 a3, struct _OBJECT_TYPE *a4)
{
  return ObpAssignSecurity(a1, a2, a3, a4, 0, 0);
}

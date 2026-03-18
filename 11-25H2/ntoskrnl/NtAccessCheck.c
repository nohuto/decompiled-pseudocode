/*
 * XREFs of NtAccessCheck @ 0x140362480
 * Callers:
 *     <none>
 * Callees:
 *     SeAccessCheckByType @ 0x140363B20 (SeAccessCheckByType.c)
 */

__int64 __fastcall NtAccessCheck(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  return SeAccessCheckByType(a1, 0LL, a2, a3, 0LL, 0, a4, a5);
}

/*
 * XREFs of NtLoadKey2 @ 0x140A8FBC0
 * Callers:
 *     <none>
 * Callees:
 *     CmLoadDifferencingKey @ 0x14092C750 (CmLoadDifferencingKey.c)
 */

__int64 __fastcall NtLoadKey2(__int64 a1, __int64 a2, unsigned int a3)
{
  return CmLoadDifferencingKey(a1, a2, a3, 0LL, 0LL, 0LL, 0, 0LL, 0, 0LL, 0, 0LL, KeGetCurrentThread()->PreviousMode);
}

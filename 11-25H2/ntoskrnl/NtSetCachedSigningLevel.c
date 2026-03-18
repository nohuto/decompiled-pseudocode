/*
 * XREFs of NtSetCachedSigningLevel @ 0x1408657E0
 * Callers:
 *     <none>
 * Callees:
 *     NtSetCachedSigningLevel2 @ 0x140865810 (NtSetCachedSigningLevel2.c)
 */

__int64 __fastcall NtSetCachedSigningLevel(__int64 a1, __int64 a2)
{
  return NtSetCachedSigningLevel2(a1, a2);
}

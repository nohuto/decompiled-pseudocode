/*
 * XREFs of RtlCopyExtendedContext @ 0x1405DE220
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCopyExtendedContext @ 0x14025F9E0 (RtlpCopyExtendedContext.c)
 */

__int64 __fastcall RtlCopyExtendedContext(__int64 a1, unsigned int a2, __int64 a3)
{
  return RtlpCopyExtendedContext(1u, a1, 0LL, a2, a3, 0LL);
}

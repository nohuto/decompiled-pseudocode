/*
 * XREFs of RtlCopyExtendedContext @ 0x180143A20
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCopyExtendedContext @ 0x180143A40 (RtlpCopyExtendedContext.c)
 */

__int64 __fastcall RtlCopyExtendedContext(int a1, int a2, __int64 a3)
{
  return RtlpCopyExtendedContext(a1, a1, a3, a2, a3);
}

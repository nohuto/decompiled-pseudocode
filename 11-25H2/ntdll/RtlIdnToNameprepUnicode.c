/*
 * XREFs of RtlIdnToNameprepUnicode @ 0x180147DF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpNameprepAsciiWorker @ 0x1800BED20 (RtlpNameprepAsciiWorker.c)
 */

__int64 __fastcall RtlIdnToNameprepUnicode(unsigned int a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  return RtlpNameprepAsciiWorker(a1, a2, a3, a4, a5, 0);
}

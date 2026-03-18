/*
 * XREFs of RtlCrc64 @ 0x1405DE660
 * Callers:
 *     <none>
 * Callees:
 *     RtlpComputeCrcInternal @ 0x140452CD0 (RtlpComputeCrcInternal.c)
 */

__int64 __fastcall RtlCrc64(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  return RtlpComputeCrcInternal(a1, a2, a3, (__int64)&Crc64Ctrl);
}

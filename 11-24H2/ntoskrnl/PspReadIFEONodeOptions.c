/*
 * XREFs of PspReadIFEONodeOptions @ 0x140A22D58
 * Callers:
 *     PspAllocateProcess @ 0x140A1C4C0 (PspAllocateProcess.c)
 * Callees:
 *     KeIsEmptyGroupMask @ 0x140208940 (KeIsEmptyGroupMask.c)
 *     RtlQueryImageFileKeyOption @ 0x140A22FB0 (RtlQueryImageFileKeyOption.c)
 */

__int64 __fastcall PspReadIFEONodeOptions(__int64 a1, void *a2)
{
  __int64 result; // rax

  result = RtlQueryImageFileKeyOption(a2, 4, 0LL);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}

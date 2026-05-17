/*
 * XREFs of RtlCopyMappedMemory @ 0x1800F9D30
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCopyMappedMemoryEx @ 0x1800F9D50 (RtlpCopyMappedMemoryEx.c)
 */

__int64 __fastcall RtlCopyMappedMemory(__int64 a1, __int64 a2, __int64 a3)
{
  return RtlpCopyMappedMemoryEx(a1, a1, a2, a3);
}

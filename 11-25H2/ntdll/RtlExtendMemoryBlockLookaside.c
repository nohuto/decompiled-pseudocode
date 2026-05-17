/*
 * XREFs of RtlExtendMemoryBlockLookaside @ 0x180116E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlExtendMemoryBlockLookaside(__int64 a1, __int64 a2)
{
  return RtlExtendMemoryZone(*(_QWORD *)(a1 + 16), a2);
}

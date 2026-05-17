/*
 * XREFs of RtlExtendMemoryBlockLookaside @ 0x180113F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlExtendMemoryBlockLookaside(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  return RtlExtendMemoryZone(*(_QWORD *)(a1 + 16), a2, a3);
}

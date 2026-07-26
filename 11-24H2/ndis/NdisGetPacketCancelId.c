/*
 * XREFs of NdisGetPacketCancelId @ 0x1400B88E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisGetPacketCancelId(__int64 a1)
{
  return *(_QWORD *)(*(unsigned __int16 *)(a1 + 42) + a1 + 104);
}

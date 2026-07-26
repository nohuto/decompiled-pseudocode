/*
 * XREFs of NetioCopyOpaqueNetBufferListInformation @ 0x140060310
 * Callers:
 *     NdisAllocateReassembledNetBufferList @ 0x1400CDA20 (NdisAllocateReassembledNetBufferList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NetioCopyOpaqueNetBufferListInformation(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 272) = *(_QWORD *)(a2 + 272);
  if ( (*(_QWORD *)(a2 + 224) & 0xFFFFFFFFFFFFFFFCuLL) != 0 && (*(_QWORD *)(a2 + 224) & 1) == 0 )
    return WfpNblInfoClone(a2, a1, 0LL, 0LL);
  else
    return 0LL;
}

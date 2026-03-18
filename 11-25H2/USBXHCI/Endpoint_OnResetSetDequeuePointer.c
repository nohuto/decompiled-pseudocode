/*
 * XREFs of Endpoint_OnResetSetDequeuePointer @ 0x14001563C
 * Callers:
 *     Endpoint_OnResetEndpointResetCompletion @ 0x140015310 (Endpoint_OnResetEndpointResetCompletion.c)
 * Callees:
 *     Command_SendCommand @ 0x140008550 (Command_SendCommand.c)
 *     Endpoint_GetDequeuePointer @ 0x14001053C (Endpoint_GetDequeuePointer.c)
 *     Endpoint_IsTransferRingEmpty @ 0x1400105BC (Endpoint_IsTransferRingEmpty.c)
 *     Endpoint_StreamsOnResetSetDequeuePointerComplete @ 0x140034E78 (Endpoint_StreamsOnResetSetDequeuePointerComplete.c)
 *     memset @ 0x140059AC0 (memset.c)
 */

__int64 __fastcall Endpoint_OnResetSetDequeuePointer(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v5; // rbx
  unsigned int v6; // r9d
  int v7; // r9d

  v2 = *a1;
  if ( *(_BYTE *)(*a1 + 37) )
  {
    if ( Endpoint_IsTransferRingEmpty(v2, a2) )
      return Endpoint_StreamsOnResetSetDequeuePointerComplete(a1, a2);
    v5 = 104LL * (a2 - 1) + *(_QWORD *)(v2 + 136) + 56LL;
  }
  else
  {
    v5 = v2 + 160;
  }
  memset((void *)v5, 0, 0x60uLL);
  v6 = *(_DWORD *)(v5 + 36) & 0xFFFF43FF;
  *(_QWORD *)(v5 + 40) = Endpoint_OnResetSetDequeuePointerCompletion;
  *(_QWORD *)(v5 + 48) = a1;
  *(_DWORD *)(v5 + 36) = v6 | 0x4000;
  *(_QWORD *)(v5 + 24) = Endpoint_GetDequeuePointer(v2, a2);
  *(_DWORD *)(v5 + 36) = v7 ^ (v7 ^ (*(_DWORD *)(v2 + 144) << 16)) & 0x1F0000;
  *(_BYTE *)(v5 + 39) = *(_BYTE *)(*(_QWORD *)(v2 + 16) + 135LL);
  if ( *(_BYTE *)(v2 + 37) )
    *(_WORD *)(v5 + 34) = a2;
  *(_QWORD *)(v5 + 72) = 0LL;
  *(_DWORD *)(v5 + 80) = 0;
  *(_DWORD *)(v5 + 84) = 0;
  *(_QWORD *)(v5 + 88) = 0LL;
  return Command_SendCommand(*(_QWORD *)(*(_QWORD *)v2 + 144LL), v5);
}

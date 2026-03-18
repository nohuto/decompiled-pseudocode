/*
 * XREFs of Endpoint_OnResetSetDequeuePointer @ 0x140008E8C
 * Callers:
 *     Endpoint_OnResetEndpointResetCompletion @ 0x140008B60 (Endpoint_OnResetEndpointResetCompletion.c)
 * Callees:
 *     Endpoint_IsTransferRingEmpty @ 0x140009ED8 (Endpoint_IsTransferRingEmpty.c)
 *     Endpoint_GetDequeuePointer @ 0x14000A01C (Endpoint_GetDequeuePointer.c)
 *     Command_SendCommand @ 0x14000BCD4 (Command_SendCommand.c)
 *     Endpoint_StreamsOnResetSetDequeuePointerComplete @ 0x1400331C8 (Endpoint_StreamsOnResetSetDequeuePointerComplete.c)
 *     memset @ 0x140058EC0 (memset.c)
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
    if ( (unsigned __int8)Endpoint_IsTransferRingEmpty(v2) )
      return Endpoint_StreamsOnResetSetDequeuePointerComplete(a1, a2);
    v5 = 104LL * (a2 - 1) + *(_QWORD *)(v2 + 144) + 56LL;
  }
  else
  {
    v5 = v2 + 168;
  }
  memset((void *)v5, 0, 0x60uLL);
  v6 = *(_DWORD *)(v5 + 36) & 0xFFFF43FF;
  *(_QWORD *)(v5 + 40) = Endpoint_OnResetSetDequeuePointerCompletion;
  *(_QWORD *)(v5 + 48) = a1;
  *(_DWORD *)(v5 + 36) = v6 | 0x4000;
  *(_QWORD *)(v5 + 24) = Endpoint_GetDequeuePointer(v2, a2);
  *(_DWORD *)(v5 + 36) = v7 ^ (v7 ^ (*(_DWORD *)(v2 + 152) << 16)) & 0x1F0000;
  *(_BYTE *)(v5 + 39) = *(_BYTE *)(*(_QWORD *)(v2 + 16) + 143LL);
  if ( *(_BYTE *)(v2 + 37) )
    *(_WORD *)(v5 + 34) = a2;
  *(_QWORD *)(v5 + 72) = 0LL;
  *(_DWORD *)(v5 + 80) = 0;
  *(_DWORD *)(v5 + 84) = 0;
  *(_QWORD *)(v5 + 88) = 0LL;
  return Command_SendCommand(*(_QWORD *)(*(_QWORD *)v2 + 144LL), v5);
}

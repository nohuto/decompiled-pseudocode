/*
 * XREFs of NdisPacketSize @ 0x140030BF0
 * Callers:
 *     NdisAllocatePacketPoolEx @ 0x1400302A0 (NdisAllocatePacketPoolEx.c)
 *     ndisMIsLoopbackPacket @ 0x140030780 (ndisMIsLoopbackPacket.c)
 * Callees:
 *     <none>
 */

UINT __stdcall NdisPacketSize(UINT ProtocolReservedSize)
{
  unsigned int v2; // edx
  UINT v3; // ecx
  unsigned int v4; // ecx

  if ( 48 * ndisPacketStackSize + 56 < 48 * ndisPacketStackSize + 16 )
    return 0;
  v2 = 48 * ndisPacketStackSize + 152;
  if ( v2 < 48 * ndisPacketStackSize + 56 )
    return 0;
  v3 = ProtocolReservedSize + 96;
  if ( v3 < 0x60 )
    return 0;
  if ( v3 + 7 < v3 )
    return 0;
  v4 = ((v3 + 7) & 0xFFFFFFF8) + v2;
  if ( v4 < v2 || v4 + 15 < v4 )
    return 0;
  else
    return (v4 + 15) & 0xFFFFFFF0;
}

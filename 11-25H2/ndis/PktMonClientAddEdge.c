/*
 * XREFs of PktMonClientAddEdge @ 0x1400759C0
 * Callers:
 *     ndisPktMonOpenRegister @ 0x14016D210 (ndisPktMonOpenRegister.c)
 *     ndisPktMonFilterRegister @ 0x14016FF90 (ndisPktMonFilterRegister.c)
 *     ndisPktMonMiniportRegister @ 0x140173910 (ndisPktMonMiniportRegister.c)
 * Callees:
 *     MediaTypeToPacketType @ 0x140075A30 (MediaTypeToPacketType.c)
 *     PktMonClientAddEdgeEx @ 0x140075B20 (PktMonClientAddEdgeEx.c)
 */

__int64 __fastcall PktMonClientAddEdge(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  int v6; // eax
  int v7; // r9d
  int v8; // r10d

  v6 = MediaTypeToPacketType(a5, a2, a3, a2);
  return PktMonClientAddEdgeEx(v8, v7, a6, v7, v6, a6);
}

/*
 * XREFs of PktMonClientAddEdge @ 0x14005AF90
 * Callers:
 *     ndisPktMonOpenRegister @ 0x140160F70 (ndisPktMonOpenRegister.c)
 *     ndisPktMonFilterRegister @ 0x140164210 (ndisPktMonFilterRegister.c)
 *     ndisPktMonMiniportRegister @ 0x14016BAF0 (ndisPktMonMiniportRegister.c)
 * Callees:
 *     MediaTypeToPacketType @ 0x14005B000 (MediaTypeToPacketType.c)
 *     PktMonClientAddEdgeEx @ 0x14005B0F0 (PktMonClientAddEdgeEx.c)
 */

__int64 __fastcall PktMonClientAddEdge(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  int v6; // eax
  int v7; // r9d
  int v8; // r10d

  v6 = MediaTypeToPacketType(a5, a2, a3, a2);
  return PktMonClientAddEdgeEx(v8, v7, a6, v7, v6, a6);
}

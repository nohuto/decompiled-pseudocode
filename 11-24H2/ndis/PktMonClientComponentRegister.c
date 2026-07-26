/*
 * XREFs of PktMonClientComponentRegister @ 0x14005AFD0
 * Callers:
 *     ndisPktMonOpenRegister @ 0x140160F70 (ndisPktMonOpenRegister.c)
 *     ndisPktMonFilterRegister @ 0x140164210 (ndisPktMonFilterRegister.c)
 *     ndisPktMonMiniportRegister @ 0x14016BAF0 (ndisPktMonMiniportRegister.c)
 * Callees:
 *     MediaTypeToPacketType @ 0x14005B000 (MediaTypeToPacketType.c)
 *     PktMonClientComponentRegisterEx @ 0x14005B030 (PktMonClientComponentRegisterEx.c)
 */

__int64 __fastcall PktMonClientComponentRegister(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  int v5; // eax
  int v6; // r8d
  int v7; // r9d
  int v8; // r10d
  int v9; // r11d

  v5 = MediaTypeToPacketType(a5, a2, a3, a4);
  return PktMonClientComponentRegisterEx(v9, v8, v6, v7, v5);
}

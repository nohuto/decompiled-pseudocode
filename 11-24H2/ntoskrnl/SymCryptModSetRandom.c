/*
 * XREFs of SymCryptModSetRandom @ 0x140523EF0
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x140521068 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptEcpointGenericSetRandom @ 0x140529C30 (SymCryptEcpointGenericSetRandom.c)
 *     SymCryptFdefModInvGeneric @ 0x140536010 (SymCryptFdefModInvGeneric.c)
 * Callees:
 *     SymCryptFdefModSetRandomGeneric @ 0x1405368D0 (SymCryptFdefModSetRandomGeneric.c)
 */

void __fastcall __noreturn SymCryptModSetRandom(int a1, int a2, int a3, int a4, __int64 a5)
{
  SymCryptFdefModSetRandomGeneric(a1, a2, a3, a4, a5);
}

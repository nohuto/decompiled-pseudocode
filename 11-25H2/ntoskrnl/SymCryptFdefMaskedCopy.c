/*
 * XREFs of SymCryptFdefMaskedCopy @ 0x140534D54
 * Callers:
 *     SymCryptEcpointMaskedCopy @ 0x1405283D8 (SymCryptEcpointMaskedCopy.c)
 *     SymCryptFdefModAddGeneric @ 0x1405331A0 (SymCryptFdefModAddGeneric.c)
 *     SymCryptFdefModElementMaskedCopy @ 0x1405335B0 (SymCryptFdefModElementMaskedCopy.c)
 *     SymCryptFdefModSubGeneric @ 0x1405343F0 (SymCryptFdefModSubGeneric.c)
 * Callees:
 *     SymCryptFdefMaskedCopyAsm @ 0x140535570 (SymCryptFdefMaskedCopyAsm.c)
 */

__int64 __fastcall SymCryptFdefMaskedCopy(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return SymCryptFdefMaskedCopyAsm(a1, a2, a3, a4);
}

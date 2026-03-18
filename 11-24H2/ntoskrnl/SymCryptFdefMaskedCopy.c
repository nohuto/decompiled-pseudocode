/*
 * XREFs of SymCryptFdefMaskedCopy @ 0x140537504
 * Callers:
 *     SymCryptEcpointMaskedCopy @ 0x14052AB88 (SymCryptEcpointMaskedCopy.c)
 *     SymCryptFdefModAddGeneric @ 0x140535950 (SymCryptFdefModAddGeneric.c)
 *     SymCryptFdefModElementMaskedCopy @ 0x140535D60 (SymCryptFdefModElementMaskedCopy.c)
 *     SymCryptFdefModSubGeneric @ 0x140536BA0 (SymCryptFdefModSubGeneric.c)
 * Callees:
 *     SymCryptFdefMaskedCopyAsm @ 0x140537D20 (SymCryptFdefMaskedCopyAsm.c)
 */

__int64 __fastcall SymCryptFdefMaskedCopy(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return SymCryptFdefMaskedCopyAsm(a1, a2, a3, a4);
}

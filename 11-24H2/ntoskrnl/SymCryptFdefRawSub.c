/*
 * XREFs of SymCryptFdefRawSub @ 0x140529CAC
 * Callers:
 *     SymCryptFdefModAddGeneric @ 0x14052FDF0 (SymCryptFdefModAddGeneric.c)
 *     SymCryptFdefModNegGeneric @ 0x140530B60 (SymCryptFdefModNegGeneric.c)
 *     SymCryptFdefModSubGeneric @ 0x140531040 (SymCryptFdefModSubGeneric.c)
 * Callees:
 *     SymCryptFdefRawSubAsm @ 0x140532160 (SymCryptFdefRawSubAsm.c)
 */

__int64 __fastcall SymCryptFdefRawSub(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return SymCryptFdefRawSubAsm(a1, a2, a3, a4);
}

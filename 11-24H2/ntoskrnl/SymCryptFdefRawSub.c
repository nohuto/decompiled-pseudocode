/*
 * XREFs of SymCryptFdefRawSub @ 0x14052F804
 * Callers:
 *     SymCryptFdefModAddGeneric @ 0x140535950 (SymCryptFdefModAddGeneric.c)
 *     SymCryptFdefModNegGeneric @ 0x1405366C0 (SymCryptFdefModNegGeneric.c)
 *     SymCryptFdefModSubGeneric @ 0x140536BA0 (SymCryptFdefModSubGeneric.c)
 * Callees:
 *     SymCryptFdefRawSubAsm @ 0x140537CC0 (SymCryptFdefRawSubAsm.c)
 */

__int64 __fastcall SymCryptFdefRawSub(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return SymCryptFdefRawSubAsm(a1, a2, a3, a4);
}

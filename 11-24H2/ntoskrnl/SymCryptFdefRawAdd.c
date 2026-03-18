/*
 * XREFs of SymCryptFdefRawAdd @ 0x14052F32C
 * Callers:
 *     SymCryptFdefModAddGeneric @ 0x140535950 (SymCryptFdefModAddGeneric.c)
 *     SymCryptFdefModSubGeneric @ 0x140536BA0 (SymCryptFdefModSubGeneric.c)
 * Callees:
 *     SymCryptFdefRawAddAsm @ 0x140537C60 (SymCryptFdefRawAddAsm.c)
 */

__int64 __fastcall SymCryptFdefRawAdd(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return SymCryptFdefRawAddAsm(a1, a2, a3, a4);
}

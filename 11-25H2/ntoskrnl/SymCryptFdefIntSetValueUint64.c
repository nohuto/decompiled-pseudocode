/*
 * XREFs of SymCryptFdefIntSetValueUint64 @ 0x140534D0C
 * Callers:
 *     SymCryptIntSetValueUint64 @ 0x1405212B4 (SymCryptIntSetValueUint64.c)
 * Callees:
 *     SymCryptWipe @ 0x14051B4B4 (SymCryptWipe.c)
 */

__int64 __fastcall SymCryptFdefIntSetValueUint64(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = SymCryptWipe(a2 + 32, (unsigned int)(*(_DWORD *)(a2 + 4) << 6));
  *(_QWORD *)(a2 + 32) = a1;
  return result;
}

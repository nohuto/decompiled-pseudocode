/*
 * XREFs of SymCryptFdefIntBitsizeOfObject @ 0x1405370FC
 * Callers:
 *     SymCryptIntBitsizeOfObject @ 0x1405237B4 (SymCryptIntBitsizeOfObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefIntBitsizeOfObject(__int64 a1)
{
  return (unsigned int)(*(_DWORD *)(a1 + 4) << 9);
}

/*
 * XREFs of SymCryptFdefIntCopy @ 0x140534A28
 * Callers:
 *     SymCryptIntCopy @ 0x140521090 (SymCryptIntCopy.c)
 *     SymCryptFdefIntToDivisor @ 0x14052CA9C (SymCryptFdefIntToDivisor.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 */

void *__fastcall SymCryptFdefIntCopy(__int64 a1, __int64 a2)
{
  void *result; // rax

  if ( a1 != a2 )
    return memmove((void *)(a2 + 32), (const void *)(a1 + 32), (unsigned int)(*(_DWORD *)(a2 + 4) << 6));
  return result;
}

/*
 * XREFs of SymCryptFdefIntAllocate @ 0x14053709C
 * Callers:
 *     SymCryptIntAllocate @ 0x14052379C (SymCryptIntAllocate.c)
 * Callees:
 *     SymCryptIntCreate @ 0x140523844 (SymCryptIntCreate.c)
 *     SymCryptCallbackAlloc @ 0x1406A5810 (SymCryptCallbackAlloc.c)
 */

__int64 __fastcall SymCryptFdefIntAllocate(int a1)
{
  __int64 v1; // rbx

  v1 = 0LL;
  if ( (unsigned int)(a1 - 1) <= 0x7FF && SymCryptCallbackAlloc((unsigned int)((a1 << 6) + 32)) )
    return SymCryptIntCreate();
  return v1;
}

/*
 * XREFs of SymCryptFdefIntAllocate @ 0x1405348EC
 * Callers:
 *     SymCryptIntAllocate @ 0x140521018 (SymCryptIntAllocate.c)
 * Callees:
 *     SymCryptIntCreate @ 0x1405210C0 (SymCryptIntCreate.c)
 *     SymCryptCallbackAlloc @ 0x14069A5E0 (SymCryptCallbackAlloc.c)
 */

__int64 __fastcall SymCryptFdefIntAllocate(int a1)
{
  __int64 v1; // rbx

  v1 = 0LL;
  if ( (unsigned int)(a1 - 1) <= 0x7FF && SymCryptCallbackAlloc((unsigned int)((a1 << 6) + 32)) )
    return SymCryptIntCreate();
  return v1;
}

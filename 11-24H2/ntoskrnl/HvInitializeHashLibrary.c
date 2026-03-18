/*
 * XREFs of HvInitializeHashLibrary @ 0x1407DDD54
 * Callers:
 *     CmInitSystem1 @ 0x140C44EC0 (CmInitSystem1.c)
 * Callees:
 *     SymCryptMarvin32ExpandSeed @ 0x14051D958 (SymCryptMarvin32ExpandSeed.c)
 *     SymCryptInit @ 0x1405B14A8 (SymCryptInit.c)
 */

__int64 HvInitializeHashLibrary()
{
  unsigned __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  SymCryptInit();
  v1 = 0x82EF4D887A4E55C5uLL;
  return (unsigned int)SymCryptMarvin32ExpandSeed(HvSymcryptSeed, &v1, 8LL) != 0 ? 0xC0000001 : 0;
}

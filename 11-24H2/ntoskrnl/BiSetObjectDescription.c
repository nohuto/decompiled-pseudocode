/*
 * XREFs of BiSetObjectDescription @ 0x14085F3C4
 * Callers:
 *     BiCreateObject @ 0x14085E04C (BiCreateObject.c)
 * Callees:
 *     BiCloseKey @ 0x14085CB80 (BiCloseKey.c)
 *     BiCreateKey @ 0x14085DB5C (BiCreateKey.c)
 *     BiSetRegistryValue @ 0x14085DF2C (BiSetRegistryValue.c)
 */

__int64 __fastcall BiSetObjectDescription(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  bool v5; // [rsp+50h] [rbp+18h] BYREF
  void *v6; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0LL;
  result = BiCreateKey(a1, L"Description", 0x20019u, 1u, &v6, &v5);
  if ( (int)result >= 0 )
  {
    BiCloseKey(v6);
    return BiSetRegistryValue(a1, L"Type", L"Description", 4u, (PVOID)(a2 + 4), 4u);
  }
  return result;
}

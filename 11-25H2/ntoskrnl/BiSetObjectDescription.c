/*
 * XREFs of BiSetObjectDescription @ 0x140A64424
 * Callers:
 *     BiCreateObject @ 0x140A262E4 (BiCreateObject.c)
 * Callees:
 *     BiCloseKey @ 0x140966980 (BiCloseKey.c)
 *     BiSetRegistryValue @ 0x140A25BA8 (BiSetRegistryValue.c)
 *     BiCreateKey @ 0x140A644B0 (BiCreateKey.c)
 */

__int64 __fastcall BiSetObjectDescription(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF
  void *v6; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0LL;
  result = BiCreateKey(a1, L"Description", 131097LL, 1LL, &v6, &v5);
  if ( (int)result >= 0 )
  {
    BiCloseKey(v6);
    return BiSetRegistryValue(a1, L"Type", L"Description", 4u, (PVOID)(a2 + 4), 4u);
  }
  return result;
}

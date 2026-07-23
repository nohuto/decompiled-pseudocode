/*
 * XREFs of BiSetObjectDescription @ 0x140AAAEDC
 * Callers:
 *     BiCreateObject @ 0x140859DBC (BiCreateObject.c)
 * Callees:
 *     BiCloseKey @ 0x1408588F0 (BiCloseKey.c)
 *     BiCreateKey @ 0x1408598CC (BiCreateKey.c)
 *     BiSetRegistryValue @ 0x140859C9C (BiSetRegistryValue.c)
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

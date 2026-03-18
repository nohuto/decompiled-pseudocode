/*
 * XREFs of MiUpdateEnclavePfnProtection @ 0x140675344
 * Callers:
 *     MiProtectEnclavePages @ 0x1404CAFB0 (MiProtectEnclavePages.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiUpdateEnclavePfnProtection(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 result; // rax
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  v3 = a2;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v5);
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(a1 + 16) = (32 * v3) ^ (*(_QWORD *)(a1 + 16) ^ (32 * v3)) & 0xFFFFFFFFFFFFFC1FuLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}

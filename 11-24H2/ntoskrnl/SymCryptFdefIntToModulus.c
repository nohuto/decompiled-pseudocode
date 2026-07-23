/*
 * XREFs of SymCryptFdefIntToModulus @ 0x14052FD34
 * Callers:
 *     SymCryptIntToModulus @ 0x140521414 (SymCryptIntToModulus.c)
 * Callees:
 *     SymCryptIntGetValueLsbits64 @ 0x140521270 (SymCryptIntGetValueLsbits64.c)
 *     SymCryptIntToDivisor @ 0x1405213C8 (SymCryptIntToDivisor.c)
 *     SymCryptFdefDecideModulusType @ 0x14052FB68 (SymCryptFdefDecideModulusType.c)
 *     SymCryptInverseMod2e64 @ 0x140531B80 (SymCryptInverseMod2e64.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SymCryptFdefIntToModulus(__int64 a1, __int64 a2, unsigned int a3, int a4, __int64 a5, __int64 a6)
{
  char v6; // bl
  __int64 ValueLsbits64; // rax

  v6 = a4;
  *(_DWORD *)(a2 + 12) = a4;
  SymCryptIntToDivisor(a1, a2 + 64, a3, a4 & 1, a5, a6);
  *(_DWORD *)a2 = SymCryptFdefDecideModulusType(a1, *(_DWORD *)(a2 + 4), a3, v6);
  ValueLsbits64 = SymCryptIntGetValueLsbits64();
  *(_QWORD *)(a2 + 24) = -SymCryptInverseMod2e64(ValueLsbits64);
  return guard_dispatch_icall_no_overrides(a2, a5);
}

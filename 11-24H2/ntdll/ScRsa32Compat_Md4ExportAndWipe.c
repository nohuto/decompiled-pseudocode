/*
 * XREFs of ScRsa32Compat_Md4ExportAndWipe @ 0x18015A060
 * Callers:
 *     MD4Init @ 0x180159F00 (MD4Init.c)
 *     MD4Update @ 0x180159F90 (MD4Update.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ScRsa32Compat_Md4ExportAndWipe(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = 8LL * *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v2;
  *(_DWORD *)(a2 + 16) = v2;
  *(_DWORD *)(a2 + 20) = HIDWORD(*(_QWORD *)(a1 + 16));
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 96);
  *(_OWORD *)(a2 + 24) = *(_OWORD *)(a1 + 32);
  *(_OWORD *)(a2 + 40) = *(_OWORD *)(a1 + 48);
  *(_OWORD *)(a2 + 56) = *(_OWORD *)(a1 + 64);
  *(_OWORD *)(a2 + 72) = *(_OWORD *)(a1 + 80);
  return SymCryptWipeAsm(a1, 0x70uLL);
}

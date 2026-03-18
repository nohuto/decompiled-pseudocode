/*
 * XREFs of SymCryptFdef369ModulusInitMontgomery @ 0x140538EC0
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptFdefModulusInitMontgomeryInternal @ 0x140536D50 (SymCryptFdefModulusInitMontgomeryInternal.c)
 */

__int64 __fastcall SymCryptFdef369ModulusInitMontgomery(__int64 a1, _DWORD *a2)
{
  return SymCryptFdefModulusInitMontgomeryInternal(a1, 6 * (*(_DWORD *)(a1 + 4) + 1), a2);
}

/*
 * XREFs of SymCryptFdefDivisorCreate @ 0x1405314CC
 * Callers:
 *     SymCryptDivisorCreate @ 0x140521054 (SymCryptDivisorCreate.c)
 *     SymCryptFdefModulusCreate @ 0x14053111C (SymCryptFdefModulusCreate.c)
 * Callees:
 *     SymCryptIntCreate @ 0x14052115C (SymCryptIntCreate.c)
 *     SymCryptSizeofDivisorFromDigits @ 0x1405218FC (SymCryptSizeofDivisorFromDigits.c)
 */

_DWORD *__fastcall SymCryptFdefDivisorCreate(_DWORD *a1, unsigned __int64 a2, int a3)
{
  _DWORD *v6; // rdi
  unsigned int v7; // eax

  v6 = 0LL;
  v7 = SymCryptSizeofDivisorFromDigits();
  if ( v7 && a2 >= v7 )
  {
    a1[2] = v7;
    *a1 = 1732509696;
    a1[1] = a3;
    v6 = a1;
    SymCryptIntCreate();
  }
  return v6;
}

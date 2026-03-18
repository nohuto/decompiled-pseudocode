/*
 * XREFs of SymCryptEcurveIsSame @ 0x140522A18
 * Callers:
 *     SymCryptEcDhSecretAgreement @ 0x140538EE8 (SymCryptEcDhSecretAgreement.c)
 * Callees:
 *     SymCryptIntFromModulus @ 0x1405238E0 (SymCryptIntFromModulus.c)
 *     SymCryptIntIsEqual @ 0x140523970 (SymCryptIntIsEqual.c)
 *     SymCryptModElementIsEqual @ 0x140523C24 (SymCryptModElementIsEqual.c)
 */

bool __fastcall SymCryptEcurveIsSame(__int64 a1, __int64 a2)
{
  char v2; // di
  __int64 v5; // rbx
  __int64 v6; // rax

  v2 = 0;
  if ( a1 == a2 )
    return 1;
  if ( *(_DWORD *)(a1 + 4) == *(_DWORD *)(a2 + 4) )
  {
    v5 = SymCryptIntFromModulus(*(_QWORD *)(a2 + 616));
    v6 = SymCryptIntFromModulus(*(_QWORD *)(a1 + 616));
    if ( (unsigned int)SymCryptIntIsEqual(v6, v5) )
    {
      if ( (unsigned int)SymCryptModElementIsEqual(*(_QWORD *)(a1 + 616), *(_QWORD *)(a1 + 632), *(_QWORD *)(a2 + 632)) )
        return (unsigned int)SymCryptModElementIsEqual(
                               *(_QWORD *)(a1 + 616),
                               *(_QWORD *)(a1 + 640),
                               *(_QWORD *)(a2 + 640)) != 0;
    }
  }
  return v2;
}

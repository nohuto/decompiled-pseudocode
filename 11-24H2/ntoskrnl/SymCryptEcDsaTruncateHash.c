/*
 * XREFs of SymCryptEcDsaTruncateHash @ 0x140521F1C
 * Callers:
 *     SymCryptEcDsaSignEx @ 0x14052195C (SymCryptEcDsaSignEx.c)
 *     SymCryptEcDsaVerify @ 0x140521FF0 (SymCryptEcDsaVerify.c)
 * Callees:
 *     SymCryptEcurveBitsizeofGroupOrder @ 0x14051FD34 (SymCryptEcurveBitsizeofGroupOrder.c)
 *     SymCryptIntDivPow2 @ 0x1405211A0 (SymCryptIntDivPow2.c)
 *     SymCryptIntSetValue @ 0x140521320 (SymCryptIntSetValue.c)
 *     SymCryptIntToModElement @ 0x1405213F4 (SymCryptIntToModElement.c)
 */

__int64 __fastcall SymCryptEcDsaTruncateHash(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  char v8; // r14
  unsigned int v11; // esi
  unsigned int v12; // edi
  unsigned int v13; // ebx

  v8 = a4;
  if ( (a4 & 0xFFFFFFF7) != 0 )
  {
    return 32782;
  }
  else
  {
    v12 = SymCryptEcurveBitsizeofGroupOrder(a1);
    if ( 8 * a3 > v12 )
      a3 = (unsigned __int64)(v12 + 7) >> 3;
    v11 = SymCryptIntSetValue();
    if ( !v11 )
    {
      v13 = 8 * a3;
      if ( (v8 & 8) == 0 && v13 > v12 )
        SymCryptIntDivPow2();
      SymCryptIntToModElement(a6, *(_QWORD *)(a1 + 624), a5, a7, a8);
    }
  }
  return v11;
}

/*
 * XREFs of SymCryptEckeyPerformPublicKeyValidation @ 0x14052070C
 * Callers:
 *     SymCryptEckeySetValue @ 0x140520824 (SymCryptEckeySetValue.c)
 * Callees:
 *     SymCryptIntFromModulus @ 0x1405211F8 (SymCryptIntFromModulus.c)
 *     SymCryptIntIsEqualUint32 @ 0x1405212A0 (SymCryptIntIsEqualUint32.c)
 *     SymCryptEcpointCreate @ 0x140528190 (SymCryptEcpointCreate.c)
 *     SymCryptSizeofEcpointFromCurve @ 0x140528AE0 (SymCryptSizeofEcpointFromCurve.c)
 *     SymCryptEcpointIsZero @ 0x140528C18 (SymCryptEcpointIsZero.c)
 *     SymCryptEcpointOnCurve @ 0x140528CE0 (SymCryptEcpointOnCurve.c)
 *     SymCryptEcpointScalarMul @ 0x140528D0C (SymCryptEcpointScalarMul.c)
 */

__int64 __fastcall SymCryptEckeyPerformPublicKeyValidation(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v9; // r15
  __int64 v10; // rbx
  __int64 v11; // r15
  __int64 v12; // rsi
  __int64 v13; // rbp
  int v14; // eax
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 8);
  v9 = (unsigned int)SymCryptSizeofEcpointFromCurve(v4);
  if ( (unsigned int)SymCryptEcpointIsZero(v4, *(_QWORD *)(a1 + 16), a3, a4)
    || *(_DWORD *)(v4 + 4) != 3 && !(unsigned int)SymCryptEcpointOnCurve(v4, *(_QWORD *)(a1 + 16), a3, a4) )
  {
    return 32782LL;
  }
  if ( (a2 & 1) == 0 || (unsigned int)SymCryptIntIsEqualUint32(*(_QWORD *)(v4 + 656), 1LL) )
    return 0LL;
  v10 = v9;
  v11 = SymCryptEcpointCreate(a3, v9, v4);
  v12 = v10 + a3;
  v13 = a4 - v10;
  v14 = SymCryptIntFromModulus(*(_QWORD *)(v4 + 624));
  result = SymCryptEcpointScalarMul(v4, v14, *(_QWORD *)(a1 + 16), 0, v11, v12, v13);
  if ( !(_DWORD)result )
    return (unsigned int)SymCryptEcpointIsZero(v4, v11, v12, v13) == 0 ? 0x800E : 0;
  return result;
}

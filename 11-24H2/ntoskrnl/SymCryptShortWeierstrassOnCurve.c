/*
 * XREFs of SymCryptShortWeierstrassOnCurve @ 0x14052E400
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptModAdd @ 0x140523B40 (SymCryptModAdd.c)
 *     SymCryptModElementCreate @ 0x140523BD8 (SymCryptModElementCreate.c)
 *     SymCryptModElementIsEqual @ 0x140523C24 (SymCryptModElementIsEqual.c)
 *     SymCryptModMul @ 0x140523E80 (SymCryptModMul.c)
 *     SymCryptModSquare @ 0x140523F5C (SymCryptModSquare.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall SymCryptShortWeierstrassOnCurve(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // r12
  __int64 *v4; // rbx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v12; // [rsp+38h] [rbp-60h] BYREF
  __int64 v13; // [rsp+40h] [rbp-58h]

  v3 = *(_DWORD **)(a1 + 616);
  v4 = &v12;
  v13 = 0LL;
  v7 = 2LL;
  do
  {
    v8 = SymCryptModElementCreate();
    a3 += *(unsigned int *)(a1 + 36);
    *v4++ = v8;
    --v7;
  }
  while ( v7 );
  v9 = v12;
  SymCryptModSquare(v3);
  v10 = v13;
  SymCryptModSquare(v3);
  SymCryptModMul(v3, v9);
  SymCryptModMul(v3, v9);
  SymCryptModMul(v3, v10);
  SymCryptModMul(v3, v10);
  SymCryptModAdd(v3, v9);
  SymCryptModSquare(v3);
  SymCryptModMul(v3, v9);
  SymCryptModAdd(v3, v9);
  SymCryptModSquare(v3);
  return SymCryptModElementIsEqual();
}

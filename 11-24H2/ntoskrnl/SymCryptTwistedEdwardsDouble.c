/*
 * XREFs of SymCryptTwistedEdwardsDouble @ 0x1405356E0
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptModAdd @ 0x140521458 (SymCryptModAdd.c)
 *     SymCryptModElementCreate @ 0x1405214F0 (SymCryptModElementCreate.c)
 *     SymCryptModMul @ 0x140521798 (SymCryptModMul.c)
 *     SymCryptModSquare @ 0x140521874 (SymCryptModSquare.c)
 *     SymCryptModSub @ 0x1405218A8 (SymCryptModSub.c)
 *     SymCryptSizeofModElementFromModulus @ 0x14052192C (SymCryptSizeofModElementFromModulus.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall SymCryptTwistedEdwardsDouble(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _DWORD *v9; // r12
  __int64 *v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // r14
  __int64 v15; // rbp
  __int64 v16; // r15
  __int64 v17; // rsi
  __int64 v18; // rdi
  _QWORD v21[7]; // [rsp+60h] [rbp-88h] BYREF

  memset_0(v21, 0, 0x40uLL);
  v9 = *(_DWORD **)(a1 + 616);
  v11 = v21;
  v12 = (unsigned int)SymCryptSizeofModElementFromModulus((__int64)v9);
  v13 = 8LL;
  do
  {
    a5 += v12;
    *v11 = SymCryptModElementCreate();
    a6 -= v12;
    ++v11;
    --v13;
  }
  while ( v13 );
  SymCryptModSquare(v9);
  SymCryptModSquare(v9);
  v14 = v21[2];
  SymCryptModSquare(v9);
  SymCryptModAdd(v9, v14);
  v15 = v21[3];
  SymCryptModMul(v9, *(_QWORD *)(a1 + 632));
  v16 = v21[4];
  SymCryptModAdd(v9, a2 + 32);
  SymCryptModSquare(v9);
  SymCryptModSub(v9, v16);
  SymCryptModSub(v9, v16);
  v17 = v21[6];
  SymCryptModAdd(v9, v15);
  v18 = v21[5];
  SymCryptModSub(v9, v17);
  SymCryptModSub(v9, v15);
  SymCryptModMul(v9, v16);
  SymCryptModMul(v9, v17);
  SymCryptModMul(v9, v16);
  return SymCryptModMul(v9, v18);
}

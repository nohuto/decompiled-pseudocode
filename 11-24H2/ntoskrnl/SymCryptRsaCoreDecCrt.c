/*
 * XREFs of SymCryptRsaCoreDecCrt @ 0x1405225B4
 * Callers:
 *     SymCryptRsaPkcs1Sign @ 0x140522D90 (SymCryptRsaPkcs1Sign.c)
 * Callees:
 *     SymCryptDivisorFromModulus @ 0x14052106C (SymCryptDivisorFromModulus.c)
 *     SymCryptIntBitsizeOfValue @ 0x1405210E4 (SymCryptIntBitsizeOfValue.c)
 *     SymCryptIntCreate @ 0x14052115C (SymCryptIntCreate.c)
 *     SymCryptIntDivMod @ 0x140521174 (SymCryptIntDivMod.c)
 *     SymCryptIntGetValue @ 0x140521240 (SymCryptIntGetValue.c)
 *     SymCryptIntIsEqual @ 0x140521288 (SymCryptIntIsEqual.c)
 *     SymCryptIntSetValue @ 0x140521320 (SymCryptIntSetValue.c)
 *     SymCryptIntSetValueUint64 @ 0x140521350 (SymCryptIntSetValueUint64.c)
 *     SymCryptIntToModElement @ 0x1405213F4 (SymCryptIntToModElement.c)
 *     SymCryptModElementCreate @ 0x1405214F0 (SymCryptModElementCreate.c)
 *     SymCryptModElementToInt @ 0x1405216A0 (SymCryptModElementToInt.c)
 *     SymCryptModExp @ 0x140521718 (SymCryptModExp.c)
 *     SymCryptSizeofIntFromDigits @ 0x140521914 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptSizeofModElementFromModulus @ 0x14052192C (SymCryptSizeofModElementFromModulus.c)
 *     SymCryptRsaCoreVerifyInput @ 0x140522CCC (SymCryptRsaCoreVerifyInput.c)
 *     SymCryptCrtSolve @ 0x140526744 (SymCryptCrtSolve.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall SymCryptRsaCoreDecCrt(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  bool v10; // zf
  __int64 result; // rax
  unsigned int v12; // eax
  __int64 v13; // rbp
  unsigned int v14; // eax
  unsigned int v15; // ecx
  __int64 *v16; // rdx
  __int64 v17; // r9
  __int64 v18; // r12
  __int64 v19; // rsi
  __int64 v20; // r14
  __int64 v21; // rbp
  __int64 i; // rsi
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rbp
  __int64 v26; // rsi
  unsigned int v27; // ecx
  __int64 v28; // r14
  int v29; // eax
  int v30; // eax
  unsigned int v31; // [rsp+40h] [rbp-A8h]
  int v32; // [rsp+40h] [rbp-A8h]
  unsigned int v33; // [rsp+48h] [rbp-A0h]
  unsigned int v34; // [rsp+4Ch] [rbp-9Ch]
  int v35; // [rsp+50h] [rbp-98h]
  int v36; // [rsp+58h] [rbp-90h]
  __int64 v37; // [rsp+70h] [rbp-78h]
  __int64 v38; // [rsp+80h] [rbp-68h] BYREF
  __int128 v39; // [rsp+88h] [rbp-60h] BYREF

  v38 = 0LL;
  v10 = *(_BYTE *)(a1 + 8) == 0;
  v39 = 0LL;
  if ( v10 )
    return 32782LL;
  result = SymCryptRsaCoreVerifyInput(a1, a2, a3, a4, a7, a8);
  if ( !(_DWORD)result )
  {
    if ( *(_DWORD *)(a1 + 28) > 2u )
      return 32782LL;
    v12 = SymCryptSizeofIntFromDigits();
    v13 = v12;
    v33 = v12;
    v14 = SymCryptSizeofIntFromDigits();
    v15 = *(_DWORD *)(a1 + 28);
    v31 = v14;
    if ( v15 )
    {
      v16 = &v38;
      v17 = v15;
      do
      {
        *(_DWORD *)v16 = ((*(_DWORD *)((char *)v16 + a1 - (_QWORD)&v38 + 32) >> 9)
                        + (((*(_DWORD *)((_BYTE *)v16 + a1 - (_QWORD)&v38 + 32) & 0x1FFu) + 511) >> 9)) << 6;
        v16 = (__int64 *)((char *)v16 + 4);
        --v17;
      }
      while ( v17 );
    }
    v34 = SymCryptSizeofModElementFromModulus(*(_QWORD *)(a1 + 120));
    v37 = SymCryptIntCreate();
    v18 = v37;
    v19 = a9 - v13 - v13;
    v35 = SymCryptIntCreate();
    v20 = 0LL;
    v21 = v31 + v13 + a8 + v13;
    v36 = SymCryptIntCreate();
    for ( i = v19 - v31; (unsigned int)v20 < *(_DWORD *)(a1 + 28); i -= v23 )
    {
      *((_QWORD *)&v39 + v20) = SymCryptModElementCreate();
      v23 = *((unsigned int *)&v38 + v20);
      v20 = (unsigned int)(v20 + 1);
      v21 += v23;
    }
    v32 = SymCryptIntCreate();
    v24 = SymCryptModElementCreate();
    v25 = v34 + v33 + v21;
    v26 = i - v33 - v34;
    result = SymCryptIntSetValue();
    if ( !(_DWORD)result )
    {
      v27 = *(_DWORD *)(a1 + 28);
      v28 = 0LL;
      if ( v27 )
      {
        do
        {
          v29 = SymCryptDivisorFromModulus();
          SymCryptIntDivMod(v35, v29, 0, v36, v25, v26);
          SymCryptIntToModElement(v36, *(_QWORD *)(a1 + 8 * v28 + 128), *((_QWORD *)&v39 + v28), v25, v26);
          SymCryptModExp(
            *(_QWORD *)(a1 + 8 * v28 + 128),
            *((_QWORD *)&v39 + v28),
            *(_QWORD *)(a1 + 8 * v28 + 168),
            *(_DWORD *)(a1 + 4 * v28 + 32),
            0,
            *((_QWORD *)&v39 + v28),
            v25,
            v26);
          v27 = *(_DWORD *)(a1 + 28);
          v28 = (unsigned int)(v28 + 1);
        }
        while ( (unsigned int)v28 < v27 );
        v18 = v37;
      }
      result = SymCryptCrtSolve(v27, (int)a1 + 128, (int)a1 + 144, (unsigned int)&v39, 0, v18, v25, v26);
      if ( !(_DWORD)result )
      {
        SymCryptIntToModElement(v18, *(_QWORD *)(a1 + 120), v24, v25, v26);
        SymCryptIntSetValueUint64();
        v30 = SymCryptIntBitsizeOfValue();
        SymCryptModExp(*(_QWORD *)(a1 + 120), v24, v36, v30, 1, v24, v25, v26);
        SymCryptModElementToInt(*(_DWORD **)(a1 + 120), v24, v32, v25, v26);
        if ( (unsigned int)SymCryptIntIsEqual() )
          return SymCryptIntGetValue();
        else
          return 32778LL;
      }
    }
  }
  return result;
}

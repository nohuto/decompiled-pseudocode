/*
 * XREFs of MD5Update @ 0x1801181E0
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptWipeAsm @ 0x18012F7C0 (SymCryptWipeAsm.c)
 *     SymCryptHashAppendInternal @ 0x180159AD4 (SymCryptHashAppendInternal.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 __fastcall MD5Update(unsigned int *a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v4; // rcx
  __int128 v5; // xmm1
  __int64 v6; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm0
  __int64 v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v15; // [rsp+20h] [rbp-29h] BYREF
  unsigned __int128 v16; // [rsp+30h] [rbp-19h]
  __int128 v17; // [rsp+40h] [rbp-9h]
  __int128 v18; // [rsp+50h] [rbp+7h]
  __int128 v19; // [rsp+60h] [rbp+17h]
  __int128 v20; // [rsp+70h] [rbp+27h]
  __int128 v21; // [rsp+80h] [rbp+37h]

  v4 = *a1;
  v16 = 0LL;
  v5 = *(_OWORD *)(a1 + 10);
  v6 = a1[1];
  v15 = 0LL;
  v7 = *(_OWORD *)(a1 + 2);
  v18 = v5;
  v8 = *(_OWORD *)(a1 + 18);
  v16 = (unsigned __int64)(v6 << 29) | (unsigned __int128)(v4 >> 3);
  v21 = v7;
  v9 = *(_OWORD *)(a1 + 6);
  LODWORD(v15) = (v4 >> 3) & 0x3F;
  v20 = v8;
  v17 = v9;
  v19 = *(_OWORD *)(a1 + 14);
  ((void (__fastcall *)(__int64 (__fastcall **)(), __int128 *, __int64, _QWORD))SymCryptHashAppendInternal)(
    SymCryptMd5Algorithm_default,
    &v15,
    a2,
    a3);
  v10 = v21;
  v11 = v16;
  *(_OWORD *)(a1 + 6) = v17;
  v11 *= 8LL;
  v12 = v19;
  *(_OWORD *)(a1 + 2) = v10;
  *(_QWORD *)&v16 = v11;
  *(_OWORD *)(a1 + 10) = v18;
  *a1 = v11;
  v13 = v20;
  *(_OWORD *)(a1 + 14) = v12;
  a1[1] = HIDWORD(v11);
  *(_OWORD *)(a1 + 18) = v13;
  return SymCryptWipeAsm(&v15, 112LL);
}

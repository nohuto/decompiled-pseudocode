/*
 * XREFs of MD5Final @ 0x180118010
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptMd5Result @ 0x1801571F0 (SymCryptMd5Result.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall MD5Final(unsigned int *a1)
{
  unsigned __int64 v2; // rbx
  __int128 v3; // xmm1
  unsigned __int64 v4; // rax
  __int128 v5; // xmm0
  unsigned __int64 v6; // rbx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm0
  __int64 result; // rax
  _DWORD v11[4]; // [rsp+28h] [rbp-39h] BYREF
  unsigned __int64 v12; // [rsp+38h] [rbp-29h]
  __int64 v13; // [rsp+40h] [rbp-21h]
  __int128 v14; // [rsp+48h] [rbp-19h]
  __int128 v15; // [rsp+58h] [rbp-9h]
  __int128 v16; // [rsp+68h] [rbp+7h]
  __int128 v17; // [rsp+78h] [rbp+17h]
  __int128 v18; // [rsp+88h] [rbp+27h]
  __int128 v19; // [rsp+98h] [rbp+37h] BYREF

  v11[1] = 0;
  memset_thunk_772440563353939046(v11, 0, 0x6CuLL);
  v2 = *a1;
  v3 = *(_OWORD *)(a1 + 10);
  v4 = (unsigned __int64)a1[1] << 29;
  v18 = *(_OWORD *)(a1 + 2);
  v5 = *(_OWORD *)(a1 + 6);
  v6 = v4 | (v2 >> 3);
  v19 = 0uLL;
  v15 = v3;
  v7 = *(_OWORD *)(a1 + 18);
  v14 = v5;
  v8 = *(_OWORD *)(a1 + 14);
  v12 = v6;
  v17 = v7;
  v16 = v8;
  v13 = 0LL;
  v11[0] = v6 & 0x3F;
  SymCryptMd5Result(v11, &v19);
  v9 = v19;
  *(_QWORD *)a1 = (8 * v6 + 576) & 0x7FFFFFE00LL;
  *((_QWORD *)a1 + 1) = v19;
  a1[4] = DWORD2(v19);
  result = HIDWORD(v19);
  a1[5] = HIDWORD(v19);
  *((_QWORD *)a1 + 3) = 0LL;
  *((_QWORD *)a1 + 4) = 0LL;
  *((_QWORD *)a1 + 5) = 0LL;
  *((_QWORD *)a1 + 6) = 0LL;
  *((_QWORD *)a1 + 7) = 0LL;
  *((_QWORD *)a1 + 8) = 0LL;
  *((_QWORD *)a1 + 9) = 0LL;
  *((_QWORD *)a1 + 10) = 0LL;
  *(_OWORD *)(a1 + 22) = v9;
  return result;
}

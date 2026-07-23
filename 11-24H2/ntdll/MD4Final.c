/*
 * XREFs of MD4Final @ 0x180159DC0
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptMd4Result @ 0x18015FAE0 (SymCryptMd4Result.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

unsigned __int64 __fastcall MD4Final(__int128 *a1)
{
  unsigned __int64 v2; // rbx
  __int128 v3; // xmm1
  unsigned __int64 v4; // rax
  __int128 v5; // xmm0
  unsigned __int64 v6; // rbx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm0
  unsigned __int64 v10; // rax
  unsigned __int64 result; // rax
  _DWORD v12[4]; // [rsp+28h] [rbp-39h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-29h]
  __int64 v14; // [rsp+40h] [rbp-21h]
  __int128 v15; // [rsp+48h] [rbp-19h]
  __int128 v16; // [rsp+58h] [rbp-9h]
  __int128 v17; // [rsp+68h] [rbp+7h]
  __int128 v18; // [rsp+78h] [rbp+17h]
  __int128 v19; // [rsp+88h] [rbp+27h]
  __int128 v20; // [rsp+98h] [rbp+37h] BYREF

  v12[1] = 0;
  memset_thunk_772440563353939046(v12, 0, 0x6CuLL);
  v2 = *((unsigned int *)a1 + 4);
  v3 = *(__int128 *)((char *)a1 + 40);
  v4 = (unsigned __int64)*((unsigned int *)a1 + 5) << 29;
  v19 = *a1;
  v5 = *(__int128 *)((char *)a1 + 24);
  v6 = v4 | (v2 >> 3);
  v20 = 0uLL;
  v16 = v3;
  v7 = *(__int128 *)((char *)a1 + 72);
  v15 = v5;
  v8 = *(__int128 *)((char *)a1 + 56);
  v13 = v6;
  v18 = v7;
  v17 = v8;
  v14 = 0LL;
  v12[0] = v6 & 0x3F;
  SymCryptMd4Result(v12, &v20);
  v9 = v20;
  *a1 = v20;
  v10 = (8 * v6 + 576) & 0x7FFFFFE00LL;
  *((_DWORD *)a1 + 4) = v10;
  result = HIDWORD(v10);
  *((_DWORD *)a1 + 5) = result;
  *((_QWORD *)a1 + 3) = 0LL;
  *((_QWORD *)a1 + 4) = 0LL;
  *((_QWORD *)a1 + 5) = 0LL;
  *((_QWORD *)a1 + 6) = 0LL;
  *((_QWORD *)a1 + 7) = 0LL;
  *((_QWORD *)a1 + 8) = 0LL;
  *((_QWORD *)a1 + 9) = 0LL;
  *((_QWORD *)a1 + 10) = 0LL;
  *(__int128 *)((char *)a1 + 88) = v9;
  return result;
}

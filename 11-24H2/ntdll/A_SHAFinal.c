/*
 * XREFs of A_SHAFinal @ 0x180117D20
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptWipeAsm @ 0x18012F7C0 (SymCryptWipeAsm.c)
 *     SymCryptSha1Result @ 0x1801584C0 (SymCryptSha1Result.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 __fastcall A_SHAFinal(__int128 *a1, __int64 a2)
{
  __int128 v2; // xmm1
  int v4; // eax
  __int128 v5; // xmm0
  __int64 v6; // rax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm0
  unsigned __int64 v10; // rcx
  __int64 v11; // rcx
  __int128 v12; // xmm1
  int v13; // eax
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v17; // [rsp+20h] [rbp-39h] BYREF
  __int128 v18; // [rsp+30h] [rbp-29h]
  __int128 v19; // [rsp+40h] [rbp-19h]
  __int128 v20; // [rsp+50h] [rbp-9h]
  __int128 v21; // [rsp+60h] [rbp+7h]
  __int128 v22; // [rsp+70h] [rbp+17h]
  __int128 v23; // [rsp+80h] [rbp+27h]
  __int64 v24; // [rsp+90h] [rbp+37h]
  int v25; // [rsp+98h] [rbp+3Fh]

  v2 = a1[1];
  v24 = 0LL;
  v18 = 0LL;
  v25 = 0;
  v4 = *((_DWORD *)a1 + 20);
  v17 = 0LL;
  LODWORD(v24) = v4;
  v5 = *a1;
  v6 = *((unsigned int *)a1 + 22);
  v20 = v2;
  v7 = a1[3];
  v19 = v5;
  v8 = a1[2];
  v22 = v7;
  v21 = v8;
  v9 = a1[4];
  v10 = v6 | ((unsigned __int64)*((unsigned int *)a1 + 21) << 32);
  v23 = v9;
  v18 = v10;
  LODWORD(v17) = v10 & 0x3F;
  SymCryptSha1Result(&v17, a2);
  v11 = v18;
  v12 = v20;
  v13 = v24;
  *a1 = v19;
  v14 = v21;
  a1[1] = v12;
  v15 = v22;
  a1[2] = v14;
  a1[4] = v23;
  *((_DWORD *)a1 + 20) = v13;
  a1[3] = v15;
  *((_DWORD *)a1 + 22) = v11;
  *((_DWORD *)a1 + 21) = HIDWORD(v11);
  return SymCryptWipeAsm(&v17, 128LL);
}

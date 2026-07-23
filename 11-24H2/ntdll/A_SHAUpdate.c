/*
 * XREFs of A_SHAUpdate @ 0x180117F10
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptWipeAsm @ 0x18012F7C0 (SymCryptWipeAsm.c)
 *     SymCryptSha1Append @ 0x180157290 (SymCryptSha1Append.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 __fastcall A_SHAUpdate(__int128 *a1, __int64 a2, unsigned int a3)
{
  __int128 v3; // xmm1
  __int128 v5; // xmm0
  int v6; // eax
  __int128 v7; // xmm1
  __int64 v8; // rax
  __int128 v9; // xmm0
  __int128 v10; // xmm0
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  __int128 v13; // xmm1
  int v14; // eax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v18; // [rsp+20h] [rbp-39h] BYREF
  __int128 v19; // [rsp+30h] [rbp-29h]
  __int128 v20; // [rsp+40h] [rbp-19h]
  __int128 v21; // [rsp+50h] [rbp-9h]
  __int128 v22; // [rsp+60h] [rbp+7h]
  __int128 v23; // [rsp+70h] [rbp+17h]
  __int128 v24; // [rsp+80h] [rbp+27h]
  __int64 v25; // [rsp+90h] [rbp+37h]
  int v26; // [rsp+98h] [rbp+3Fh]

  v3 = a1[1];
  v19 = 0LL;
  v25 = 0LL;
  v18 = 0LL;
  v26 = 0;
  v5 = *a1;
  v6 = *((_DWORD *)a1 + 20);
  v21 = v3;
  v7 = a1[3];
  LODWORD(v25) = v6;
  v8 = *((unsigned int *)a1 + 22);
  v20 = v5;
  v9 = a1[2];
  v23 = v7;
  v22 = v9;
  v10 = a1[4];
  v11 = v8 | ((unsigned __int64)*((unsigned int *)a1 + 21) << 32);
  v24 = v10;
  v19 = v11;
  LODWORD(v18) = v11 & 0x3F;
  SymCryptSha1Append(&v18, a2, a3);
  v12 = v19;
  v13 = v21;
  v14 = v25;
  *a1 = v20;
  v15 = v22;
  a1[1] = v13;
  v16 = v23;
  a1[2] = v15;
  a1[4] = v24;
  *((_DWORD *)a1 + 20) = v14;
  a1[3] = v16;
  *((_DWORD *)a1 + 22) = v12;
  *((_DWORD *)a1 + 21) = HIDWORD(v12);
  return SymCryptWipeAsm(&v18, 128LL);
}

/*
 * XREFs of A_SHAInit @ 0x180117E20
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptWipeAsm @ 0x18012F7C0 (SymCryptWipeAsm.c)
 *     SymCryptSha1Init @ 0x180158490 (SymCryptSha1Init.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 __fastcall A_SHAInit(__int64 a1)
{
  __int64 v2; // rcx
  __int128 v3; // xmm1
  int v4; // eax
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v8; // [rsp+20h] [rbp-98h] BYREF
  __int128 v9; // [rsp+30h] [rbp-88h]
  __int128 v10; // [rsp+40h] [rbp-78h]
  __int128 v11; // [rsp+50h] [rbp-68h]
  __int128 v12; // [rsp+60h] [rbp-58h]
  __int128 v13; // [rsp+70h] [rbp-48h]
  __int128 v14; // [rsp+80h] [rbp-38h]
  __int64 v15; // [rsp+90h] [rbp-28h]
  int v16; // [rsp+98h] [rbp-20h]

  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v15 = 0LL;
  v14 = 0LL;
  v16 = 0;
  SymCryptWipeAsm(&v8, 128LL);
  SymCryptSha1Init(&v8);
  v2 = v9;
  v3 = v11;
  v4 = v15;
  *(_OWORD *)a1 = v10;
  v5 = v12;
  *(_OWORD *)(a1 + 16) = v3;
  v6 = v13;
  *(_OWORD *)(a1 + 32) = v5;
  *(_OWORD *)(a1 + 64) = v14;
  *(_DWORD *)(a1 + 80) = v4;
  *(_OWORD *)(a1 + 48) = v6;
  *(_DWORD *)(a1 + 88) = v2;
  *(_DWORD *)(a1 + 84) = HIDWORD(v2);
  return SymCryptWipeAsm(&v8, 128LL);
}

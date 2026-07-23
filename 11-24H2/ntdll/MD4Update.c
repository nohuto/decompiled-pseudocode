/*
 * XREFs of MD4Update @ 0x180159F90
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptHashAppendInternal @ 0x180159AD4 (SymCryptHashAppendInternal.c)
 *     ScRsa32Compat_Md4ExportAndWipe @ 0x18015A060 (ScRsa32Compat_Md4ExportAndWipe.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall MD4Update(__int128 *a1, char *a2, unsigned int a3)
{
  __int128 v6; // xmm0
  __int64 v7; // rcx
  __int128 v8; // xmm1
  unsigned __int64 v9; // rax
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  unsigned int v14[4]; // [rsp+20h] [rbp-39h] BYREF
  __int64 v15; // [rsp+30h] [rbp-29h]
  __int64 v16; // [rsp+38h] [rbp-21h]
  __int128 v17; // [rsp+40h] [rbp-19h]
  __int128 v18; // [rsp+50h] [rbp-9h]
  __int128 v19; // [rsp+60h] [rbp+7h]
  __int128 v20; // [rsp+70h] [rbp+17h]
  __int128 v21; // [rsp+80h] [rbp+27h]

  v14[1] = 0;
  memset_thunk_772440563353939046(v14, 0, 0x6CuLL);
  v6 = *a1;
  v7 = *((unsigned int *)a1 + 5);
  v8 = *(__int128 *)((char *)a1 + 40);
  v9 = *((unsigned int *)a1 + 4);
  v16 = 0LL;
  v21 = v6;
  v9 >>= 3;
  v10 = *(__int128 *)((char *)a1 + 24);
  v18 = v8;
  v11 = *(__int128 *)((char *)a1 + 72);
  v15 = v9 | (v7 << 29);
  v17 = v10;
  v12 = *(__int128 *)((char *)a1 + 56);
  v14[0] = v9 & 0x3F;
  v20 = v11;
  v19 = v12;
  SymCryptHashAppendInternal((__int64)SymCryptMd4Algorithm_default, v14, a2, a3);
  return ScRsa32Compat_Md4ExportAndWipe(v14, a1);
}

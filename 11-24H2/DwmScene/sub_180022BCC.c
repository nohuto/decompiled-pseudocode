/*
 * XREFs of sub_180022BCC @ 0x180022BCC
 * Callers:
 *     sub_180021200 @ 0x180021200 (sub_180021200.c)
 *     sub_180021350 @ 0x180021350 (sub_180021350.c)
 *     sub_1800215E0 @ 0x1800215E0 (sub_1800215E0.c)
 *     sub_180021900 @ 0x180021900 (sub_180021900.c)
 *     sub_180021A50 @ 0x180021A50 (sub_180021A50.c)
 *     sub_180021CE0 @ 0x180021CE0 (sub_180021CE0.c)
 *     sub_180021F30 @ 0x180021F30 (sub_180021F30.c)
 *     sub_180022060 @ 0x180022060 (sub_180022060.c)
 *     sub_1800222D0 @ 0x1800222D0 (sub_1800222D0.c)
 *     sub_180022420 @ 0x180022420 (sub_180022420.c)
 *     sub_1800227B0 @ 0x1800227B0 (sub_1800227B0.c)
 *     sub_1800228E0 @ 0x1800228E0 (sub_1800228E0.c)
 *     sub_180022A80 @ 0x180022A80 (sub_180022A80.c)
 * Callees:
 *     sub_1800208E4 @ 0x1800208E4 (sub_1800208E4.c)
 *     sub_180020958 @ 0x180020958 (sub_180020958.c)
 *     sub_18002312C @ 0x18002312C (sub_18002312C.c)
 */

__int64 __fastcall sub_180022BCC(char *Str, __int64 a2)
{
  unsigned __int8 v3; // al
  int v4; // ebx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  char *v7; // rax
  _BYTE *v8; // rdi
  unsigned int v9; // eax
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 result; // rax

  LOBYTE(a2) = 1;
  v3 = sub_18002312C(Str, a2);
  v4 = v3;
  if ( !v3 )
    return 0LL;
  v5 = -1LL;
  do
    ++v5;
  while ( Str[v5] );
  v6 = 64LL;
  if ( (_BYTE)v4 != 1 )
    v6 = 129LL;
  if ( v5 >= v6 )
    return 0LL;
  v7 = strrchr(Str, 46);
  if ( !v7 )
    return 0LL;
  v8 = v7 + 1;
  o__set_errno(0LL);
  v9 = o_strtol(v8, 0LL, 10LL);
  v10 = v9;
  if ( !v9 && *v8 != 48 && v8[1] )
    return 0LL;
  if ( *(_DWORD *)o__errno() == 34 )
    return 0LL;
  if ( v4 == 1 )
  {
    v13 = o__aligned_malloc(160LL, 8LL);
    if ( v13 )
    {
      v12 = sub_1800208E4(v13);
      goto LABEL_18;
    }
  }
  else
  {
    if ( v4 != 2 )
      return 0LL;
    v11 = o__aligned_malloc(160LL, 8LL);
    if ( v11 )
    {
      v12 = sub_180020958(v11);
LABEL_18:
      v14 = v12;
      goto LABEL_20;
    }
  }
  v14 = 0LL;
LABEL_20:
  if ( v14 )
  {
    v15 = v8 - Str;
    o_strncpy_s(v14, 129LL, Str, v15);
    *(_QWORD *)(v14 + 136) = v15;
    v16 = *(_QWORD *)(v14 + 136);
    result = v14;
    *(_QWORD *)(v14 + 144) = v10 | ((v15 + 2) << 32);
    *(_BYTE *)(v14 + v16) = 0;
    return result;
  }
  return 0LL;
}

/*
 * XREFs of sub_180022A6C @ 0x180022A6C
 * Callers:
 *     sub_1800210A0 @ 0x1800210A0 (sub_1800210A0.c)
 *     sub_1800211F0 @ 0x1800211F0 (sub_1800211F0.c)
 *     sub_180021480 @ 0x180021480 (sub_180021480.c)
 *     sub_1800217A0 @ 0x1800217A0 (sub_1800217A0.c)
 *     sub_1800218F0 @ 0x1800218F0 (sub_1800218F0.c)
 *     sub_180021B80 @ 0x180021B80 (sub_180021B80.c)
 *     sub_180021DD0 @ 0x180021DD0 (sub_180021DD0.c)
 *     sub_180021F00 @ 0x180021F00 (sub_180021F00.c)
 *     sub_180022170 @ 0x180022170 (sub_180022170.c)
 *     sub_1800222C0 @ 0x1800222C0 (sub_1800222C0.c)
 *     sub_180022650 @ 0x180022650 (sub_180022650.c)
 *     sub_180022780 @ 0x180022780 (sub_180022780.c)
 *     sub_180022920 @ 0x180022920 (sub_180022920.c)
 * Callees:
 *     sub_180020784 @ 0x180020784 (sub_180020784.c)
 *     sub_1800207F8 @ 0x1800207F8 (sub_1800207F8.c)
 *     sub_180022FCC @ 0x180022FCC (sub_180022FCC.c)
 */

__int64 __fastcall sub_180022A6C(char *Str, __int64 a2)
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
  v3 = sub_180022FCC(Str, a2);
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
      v12 = sub_180020784(v13);
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
      v12 = sub_1800207F8(v11);
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

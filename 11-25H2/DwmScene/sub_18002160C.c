/*
 * XREFs of sub_18002160C @ 0x18002160C
 * Callers:
 *     sub_180021480 @ 0x180021480 (sub_180021480.c)
 *     sub_180021B80 @ 0x180021B80 (sub_180021B80.c)
 *     sub_180022170 @ 0x180022170 (sub_180022170.c)
 *     sub_180022920 @ 0x180022920 (sub_180022920.c)
 * Callees:
 *     sub_180020784 @ 0x180020784 (sub_180020784.c)
 *     sub_1800207F8 @ 0x1800207F8 (sub_1800207F8.c)
 *     sub_180022FCC @ 0x180022FCC (sub_180022FCC.c)
 */

__int64 __fastcall sub_18002160C(__int64 a1, __int64 a2)
{
  char v3; // al
  __int64 v4; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 result; // rax

  LOBYTE(a2) = 1;
  v3 = sub_180022FCC(a1, a2);
  if ( !v3 )
    return 0LL;
  v4 = -1LL;
  do
    ++v4;
  while ( *(_BYTE *)(a1 + v4) );
  v5 = 64LL;
  if ( v3 != 1 )
    v5 = 129LL;
  if ( v4 + 3 > v5 )
    return 0LL;
  if ( v3 == 1 )
  {
    v8 = o__aligned_malloc(160LL, 8LL);
    if ( v8 )
    {
      v7 = sub_180020784(v8);
      goto LABEL_13;
    }
  }
  else
  {
    if ( v3 != 2 )
      return 0LL;
    v6 = o__aligned_malloc(160LL, 8LL);
    if ( v6 )
    {
      v7 = sub_1800207F8(v6);
LABEL_13:
      v9 = v7;
      goto LABEL_15;
    }
  }
  v9 = 0LL;
LABEL_15:
  if ( v9 )
  {
    o_strncpy_s(v9, 129LL, a1, v4);
    *(_BYTE *)(v9 + v4) = 46;
    *(_QWORD *)(v9 + 136) = v4 + 1;
    result = v9;
    *(_QWORD *)(v9 + 144) = (v4 + 3) << 32;
    *(_BYTE *)(v9 + *(_QWORD *)(v9 + 136)) = 0;
    return result;
  }
  return 0LL;
}

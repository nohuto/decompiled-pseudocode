/*
 * XREFs of sub_18007D76C @ 0x18007D76C
 * Callers:
 *     sub_18004126C @ 0x18004126C (sub_18004126C.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 *     sub_180037634 @ 0x180037634 (sub_180037634.c)
 *     sub_1800391E4 @ 0x1800391E4 (sub_1800391E4.c)
 *     sub_1800407EC @ 0x1800407EC (sub_1800407EC.c)
 *     sub_18007B39C @ 0x18007B39C (sub_18007B39C.c)
 *     sub_18007D894 @ 0x18007D894 (sub_18007D894.c)
 */

__int64 *__fastcall sub_18007D76C(_QWORD *a1, __int64 *a2, int a3, int a4, char a5)
{
  unsigned int v9; // esi
  __int64 *v10; // r14
  _QWORD *v11; // rdx
  __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 *result; // rax
  __int64 v15; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+28h] [rbp-30h]

  sub_180011B04(*a2 + 72, &v15);
  sub_18007D894(a1, &v15);
  v9 = 0;
  v10 = (__int64 *)(a1[2] + 256LL);
  do
  {
    if ( ((v9 & 0xFFFFFFFC) != 0 || v9 == 1) && *v10 )
      sub_18007B39C(*v10, a2, a4);
    ++v9;
    v10 += 2;
  }
  while ( v9 < 0xA );
  v11 = a1 + 6;
  if ( a3 )
  {
    if ( a5 && a1[12] )
      v11 = a1 + 12;
  }
  else if ( a5 )
  {
    v11 = (_QWORD *)((char *)a1 + (((unsigned __int128)-(__int128)(unsigned __int64)a1[10] >> 64) & 0x20) + 48);
  }
  else if ( a1[8] )
  {
    v11 = a1 + 8;
  }
  sub_180037634(*a2, v11);
  sub_1800391E4((_QWORD *)(*(_QWORD *)(*a2 + 96) + 9784LL), a1 + 22);
  v12 = *a2;
  v13 = sub_1800407EC((__int64)a1, &v15);
  result = sub_18001244C((__int64 *)(*(_QWORD *)(v12 + 96) + 8LL), v13);
  if ( v16 )
    return (__int64 *)sub_18001050C(v16);
  return result;
}

/*
 * XREFs of sub_18007D8CC @ 0x18007D8CC
 * Callers:
 *     sub_1800413CC @ 0x1800413CC (sub_1800413CC.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 *     sub_180037794 @ 0x180037794 (sub_180037794.c)
 *     sub_180039344 @ 0x180039344 (sub_180039344.c)
 *     sub_18004094C @ 0x18004094C (sub_18004094C.c)
 *     sub_18007B4FC @ 0x18007B4FC (sub_18007B4FC.c)
 *     sub_18007D9F4 @ 0x18007D9F4 (sub_18007D9F4.c)
 */

__int64 *__fastcall sub_18007D8CC(_QWORD *a1, __int64 *a2, int a3, int a4, char a5)
{
  unsigned int v9; // esi
  __int64 *v10; // r14
  _QWORD *v11; // rdx
  __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 *result; // rax
  __int64 v15; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+28h] [rbp-30h]

  sub_180011C04(*a2 + 72, &v15);
  sub_18007D9F4(a1, &v15);
  v9 = 0;
  v10 = (__int64 *)(a1[2] + 256LL);
  do
  {
    if ( ((v9 & 0xFFFFFFFC) != 0 || v9 == 1) && *v10 )
      sub_18007B4FC(*v10, a2, a4);
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
  sub_180037794(*a2, v11);
  sub_180039344((_QWORD *)(*(_QWORD *)(*a2 + 96) + 9784LL), a1 + 22);
  v12 = *a2;
  v13 = sub_18004094C((__int64)a1, &v15);
  result = sub_18001254C((__int64 *)(*(_QWORD *)(v12 + 96) + 8LL), v13);
  if ( v16 )
    return (__int64 *)sub_18001060C(v16);
  return result;
}

/*
 * XREFs of sub_180028D00 @ 0x180028D00
 * Callers:
 *     sub_18002A7CC @ 0x18002A7CC (sub_18002A7CC.c)
 * Callees:
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_18001BB4C @ 0x18001BB4C (sub_18001BB4C.c)
 *     sub_18001C22C @ 0x18001C22C (sub_18001C22C.c)
 *     sub_18001CA04 @ 0x18001CA04 (sub_18001CA04.c)
 *     sub_18001CC04 @ 0x18001CC04 (sub_18001CC04.c)
 *     sub_180029314 @ 0x180029314 (sub_180029314.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180028D00(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 *v7; // r13
  __int64 *v8; // rbx
  __int64 *v9; // rsi
  const void *v10; // rdi
  const void *v11; // rax
  size_t v12; // rdx
  int v13; // eax
  const void *v14; // rax
  const void *v15; // r8
  size_t v16; // r9
  int v17; // eax
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int128 v21; // [rsp+20h] [rbp-30h] BYREF
  __int128 v22; // [rsp+30h] [rbp-20h]

  v5 = a2;
  v7 = (__int64 *)*a1;
  v8 = *(__int64 **)(*a1 + 8LL);
  v22 = (unsigned __int64)v8;
  v9 = v7;
  if ( !*((_BYTE *)v8 + 25) )
  {
    v10 = (const void *)sub_1800137F8(a3);
    do
    {
      *(_QWORD *)&v22 = v8;
      v11 = (const void *)sub_1800137F8((__int64)(v8 + 4));
      LOBYTE(v13) = sub_18001BB4C(v11, v12, v10, *(_QWORD *)(a3 + 16));
      if ( v13 >= 0 )
      {
        DWORD2(v22) = 1;
        v9 = v8;
        v8 = (__int64 *)*v8;
      }
      else
      {
        DWORD2(v22) = 0;
        v8 = (__int64 *)v8[2];
      }
    }
    while ( !*((_BYTE *)v8 + 25) );
    v5 = a2;
  }
  if ( *((_BYTE *)v9 + 25)
    || (sub_1800137F8((__int64)(v9 + 4)),
        v14 = (const void *)sub_1800137F8(a3),
        LOBYTE(v17) = sub_18001BB4C(v14, *(_QWORD *)(a3 + 16), v15, v16),
        v17 < 0) )
  {
    if ( a1[1] == 0x38E38E38E38E38ELL )
      sub_18001CC04();
    v18 = sub_18001B098(72LL);
    sub_180029314(v19, v18 + 32, a3, a4, a1, v18);
    *(_QWORD *)v18 = v7;
    *(_QWORD *)(v18 + 8) = v7;
    *(_QWORD *)(v18 + 16) = v7;
    *(_WORD *)(v18 + 24) = 0;
    *((_QWORD *)&v21 + 1) = 0LL;
    sub_18001C22C((__int64)&v21);
    v21 = v22;
    *(_QWORD *)v5 = sub_18001CA04((__int64)a1, (__int64)&v21, v18);
    *(_BYTE *)(v5 + 8) = 1;
  }
  else
  {
    *(_QWORD *)v5 = v9;
    *(_BYTE *)(v5 + 8) = 0;
  }
  return v5;
}

/*
 * XREFs of sub_180028E60 @ 0x180028E60
 * Callers:
 *     sub_18002A92C @ 0x18002A92C (sub_18002A92C.c)
 * Callees:
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18001BCAC @ 0x18001BCAC (sub_18001BCAC.c)
 *     sub_18001C38C @ 0x18001C38C (sub_18001C38C.c)
 *     sub_18001CB64 @ 0x18001CB64 (sub_18001CB64.c)
 *     sub_18001CD64 @ 0x18001CD64 (sub_18001CD64.c)
 *     sub_180029474 @ 0x180029474 (sub_180029474.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180028E60(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
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
    v10 = (const void *)sub_1800138F8(a3);
    do
    {
      *(_QWORD *)&v22 = v8;
      v11 = (const void *)sub_1800138F8((__int64)(v8 + 4));
      LOBYTE(v13) = sub_18001BCAC(v11, v12, v10, *(_QWORD *)(a3 + 16));
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
    || (sub_1800138F8((__int64)(v9 + 4)),
        v14 = (const void *)sub_1800138F8(a3),
        LOBYTE(v17) = sub_18001BCAC(v14, *(_QWORD *)(a3 + 16), v15, v16),
        v17 < 0) )
  {
    if ( a1[1] == 0x38E38E38E38E38ELL )
      sub_18001CD64();
    v18 = sub_18001B1F8(72LL);
    sub_180029474(v19, v18 + 32, a3, a4, a1, v18);
    *(_QWORD *)v18 = v7;
    *(_QWORD *)(v18 + 8) = v7;
    *(_QWORD *)(v18 + 16) = v7;
    *(_WORD *)(v18 + 24) = 0;
    *((_QWORD *)&v21 + 1) = 0LL;
    sub_18001C38C((__int64)&v21);
    v21 = v22;
    *(_QWORD *)v5 = sub_18001CB64((__int64)a1, (__int64)&v21, v18);
    *(_BYTE *)(v5 + 8) = 1;
  }
  else
  {
    *(_QWORD *)v5 = v9;
    *(_BYTE *)(v5 + 8) = 0;
  }
  return v5;
}

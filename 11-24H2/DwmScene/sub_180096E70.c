/*
 * XREFs of sub_180096E70 @ 0x180096E70
 * Callers:
 *     sub_180097738 @ 0x180097738 (sub_180097738.c)
 *     sub_18009855C @ 0x18009855C (sub_18009855C.c)
 * Callees:
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18001BCAC @ 0x18001BCAC (sub_18001BCAC.c)
 *     sub_18001CB64 @ 0x18001CB64 (sub_18001CB64.c)
 *     sub_18001CD64 @ 0x18001CD64 (sub_18001CD64.c)
 *     sub_180097128 @ 0x180097128 (sub_180097128.c)
 *     sub_18009742C @ 0x18009742C (sub_18009742C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180096E70(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rsi
  __int64 v9; // r12
  __int64 v10; // rcx
  __int64 *v11; // rbx
  size_t v12; // rdi
  const void *v13; // rsi
  const void *v14; // rax
  size_t v15; // r9
  int v16; // eax
  __int128 v18; // [rsp+20h] [rbp-30h] BYREF
  __int128 v19; // [rsp+30h] [rbp-20h]

  v8 = *a1;
  *(_QWORD *)&v18 = a1;
  v9 = sub_18001B1F8(464LL);
  sub_180097128(v10, v9 + 32, a3, a4, v18, v9);
  *(_QWORD *)v9 = v8;
  *(_QWORD *)(v9 + 8) = v8;
  *(_QWORD *)(v9 + 16) = v8;
  *(_WORD *)(v9 + 24) = 0;
  v11 = *(__int64 **)(*a1 + 8LL);
  v19 = (unsigned __int64)v11;
  if ( !*((_BYTE *)v11 + 25) )
  {
    v12 = *(_QWORD *)(v9 + 48);
    v13 = (const void *)sub_1800138F8(v9 + 32);
    do
    {
      *(_QWORD *)&v19 = v11;
      v14 = (const void *)sub_1800138F8((__int64)(v11 + 4));
      LOBYTE(v16) = sub_18001BCAC(v13, v12, v14, v15);
      if ( v16 >= 0 )
      {
        DWORD2(v19) = 0;
        v11 = (__int64 *)v11[2];
      }
      else
      {
        DWORD2(v19) = 1;
        v11 = (__int64 *)*v11;
      }
    }
    while ( !*((_BYTE *)v11 + 25) );
  }
  if ( a1[1] == 0x8D3DCB08D3DCB0LL )
    sub_18001CD64();
  *((_QWORD *)&v18 + 1) = 0LL;
  sub_18009742C(&v18);
  v18 = v19;
  *(_QWORD *)a2 = sub_18001CB64((__int64)a1, (__int64)&v18, v9);
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}

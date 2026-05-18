/*
 * XREFs of sub_1800531A8 @ 0x1800531A8
 * Callers:
 *     sub_180018DD0 @ 0x180018DD0 (sub_180018DD0.c)
 *     sub_180031110 @ 0x180031110 (sub_180031110.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180010AE8 @ 0x180010AE8 (sub_180010AE8.c)
 *     sub_180011B30 @ 0x180011B30 (sub_180011B30.c)
 *     sub_180036994 @ 0x180036994 (sub_180036994.c)
 *     sub_1800527B4 @ 0x1800527B4 (sub_1800527B4.c)
 */

// Hidden C++ exception states: #wind=2
int __fastcall sub_1800531A8(_QWORD *a1, __int64 *a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 *v11; // rcx
  __int128 v13; // [rsp+20h] [rbp-48h] BYREF
  __int64 v14; // [rsp+30h] [rbp-38h] BYREF
  __int64 v15; // [rsp+38h] [rbp-30h]
  struct _Mtx_internal_imp_t *v16; // [rsp+70h] [rbp+8h]

  v4 = (struct _Mtx_internal_imp_t *)(a1 + 16);
  v16 = (struct _Mtx_internal_imp_t *)(a1 + 16);
  sub_180011B30((__int64)(a1 + 16));
  v5 = a1[8];
  v6 = a1[9];
  while ( v5 != v6 )
  {
    v7 = *sub_180036994(v5, &v14);
    v8 = *a2;
    if ( v15 )
      sub_18001050C(v15);
    if ( v7 == v8 )
      break;
    v5 += 16LL;
  }
  if ( v5 == a1[9] )
  {
    v13 = 0LL;
    v9 = a2[1];
    if ( v9 )
    {
      *(_QWORD *)&v13 = *a2;
      *((_QWORD *)&v13 + 1) = v9;
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 12));
      v4 = v16;
    }
    v10 = a1[9];
    v11 = a1 + 8;
    if ( v10 == a1[10] )
      sub_1800527B4(v11, v10, &v13);
    else
      sub_180010AE8((__int64)v11, &v13);
    if ( *((_QWORD *)&v13 + 1) )
      sub_180010544(*((volatile signed __int32 **)&v13 + 1));
  }
  return Mtx_unlock(v4);
}

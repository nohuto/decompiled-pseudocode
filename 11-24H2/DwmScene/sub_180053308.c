/*
 * XREFs of sub_180053308 @ 0x180053308
 * Callers:
 *     sub_180018E90 @ 0x180018E90 (sub_180018E90.c)
 *     sub_180031270 @ 0x180031270 (sub_180031270.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_180010BE8 @ 0x180010BE8 (sub_180010BE8.c)
 *     sub_180011C30 @ 0x180011C30 (sub_180011C30.c)
 *     sub_180036AF4 @ 0x180036AF4 (sub_180036AF4.c)
 *     sub_180052914 @ 0x180052914 (sub_180052914.c)
 */

// Hidden C++ exception states: #wind=2
int __fastcall sub_180053308(_QWORD *a1, __int64 *a2)
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
  sub_180011C30((__int64)(a1 + 16));
  v5 = a1[8];
  v6 = a1[9];
  while ( v5 != v6 )
  {
    v7 = *sub_180036AF4(v5, &v14);
    v8 = *a2;
    if ( v15 )
      sub_18001060C(v15);
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
      sub_180052914(v11, v10, &v13);
    else
      sub_180010BE8((__int64)v11, &v13);
    if ( *((_QWORD *)&v13 + 1) )
      sub_180010644(*((volatile signed __int32 **)&v13 + 1));
  }
  return Mtx_unlock(v4);
}

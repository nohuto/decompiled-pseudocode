/*
 * XREFs of sub_1800699F0 @ 0x1800699F0
 * Callers:
 *     sub_180048B78 @ 0x180048B78 (sub_180048B78.c)
 *     sub_18008FEF0 @ 0x18008FEF0 (sub_18008FEF0.c)
 * Callees:
 *     sub_180011AC0 @ 0x180011AC0 (sub_180011AC0.c)
 *     sub_180011B30 @ 0x180011B30 (sub_180011B30.c)
 *     sub_18002DE9C @ 0x18002DE9C (sub_18002DE9C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800699F0(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r14
  struct _Mtx_internal_imp_t *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // r14
  struct _Mtx_internal_imp_t *v10; // [rsp+20h] [rbp-38h]
  _BYTE v11[48]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  v3 = a3;
  v6 = (struct _Mtx_internal_imp_t *)(a1 + 24);
  v10 = (struct _Mtx_internal_imp_t *)(a1 + 24);
  sub_180011B30(a1 + 24);
  v7 = 0LL;
  if ( a2 )
  {
    v8 = v3 << 32;
    v12 = v8 | a2;
    sub_180011AC0((__int64 *)(a1 + 88), (__int64)&v13, &v12);
    if ( v13 == *(_QWORD *)(a1 + 88) )
    {
      v7 = v8 | (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 120));
      *(_QWORD *)(*(_QWORD *)sub_18002DE9C((__int64 *)(a1 + 88), (__int64)v11, &v12) + 40LL) = v7;
      v6 = v10;
    }
    else
    {
      v7 = *(_QWORD *)(v13 + 40);
    }
  }
  Mtx_unlock(v6);
  return v7;
}

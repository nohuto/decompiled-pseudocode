/*
 * XREFs of sub_180069B50 @ 0x180069B50
 * Callers:
 *     sub_180048CD8 @ 0x180048CD8 (sub_180048CD8.c)
 *     sub_180090050 @ 0x180090050 (sub_180090050.c)
 * Callees:
 *     sub_180011BC0 @ 0x180011BC0 (sub_180011BC0.c)
 *     sub_180011C30 @ 0x180011C30 (sub_180011C30.c)
 *     sub_18002DFFC @ 0x18002DFFC (sub_18002DFFC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180069B50(__int64 a1, unsigned int a2, unsigned int a3)
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
  sub_180011C30(a1 + 24);
  v7 = 0LL;
  if ( a2 )
  {
    v8 = v3 << 32;
    v12 = v8 | a2;
    sub_180011BC0((__int64 *)(a1 + 88), (__int64)&v13, &v12);
    if ( v13 == *(_QWORD *)(a1 + 88) )
    {
      v7 = v8 | (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 120));
      *(_QWORD *)(*(_QWORD *)sub_18002DFFC((__int64 *)(a1 + 88), (__int64)v11, &v12) + 40LL) = v7;
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

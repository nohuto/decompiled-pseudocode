/*
 * XREFs of sub_18003606C @ 0x18003606C
 * Callers:
 *     sub_180031F90 @ 0x180031F90 (sub_180031F90.c)
 * Callees:
 *     sub_180011B30 @ 0x180011B30 (sub_180011B30.c)
 *     sub_1800296E0 @ 0x1800296E0 (sub_1800296E0.c)
 *     sub_180029B80 @ 0x180029B80 (sub_180029B80.c)
 *     sub_180040290 @ 0x180040290 (sub_180040290.c)
 */

void __fastcall sub_18003606C(__int64 a1)
{
  _QWORD *v1; // rsi
  _QWORD *i; // rdi
  __int64 v3; // rbp
  struct _Mtx_internal_imp_t *v4; // rbx
  __int64 v5; // rbx
  _Mtx_t v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_QWORD **)(a1 + 168);
  for ( i = (_QWORD *)*v1; i != v1; i = (_QWORD *)*i )
  {
    v3 = i[2];
    v4 = (struct _Mtx_internal_imp_t *)(v3 + 128);
    sub_180011B30(v3 + 128);
    LODWORD(v3) = *(_DWORD *)(v3 + 36);
    Mtx_unlock(v4);
    if ( (_DWORD)v3 == 1 )
    {
      v5 = i[2];
      sub_1800296E0((__int64)v6, v5 + 128);
      while ( (unsigned __int8)sub_180040290(v5 + 376) )
        Cnd_wait((_Cnd_t)(v5 + 232), v6[0]);
      sub_180029B80((__int64)v6);
    }
  }
}

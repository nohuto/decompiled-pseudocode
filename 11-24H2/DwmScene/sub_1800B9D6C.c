/*
 * XREFs of sub_1800B9D6C @ 0x1800B9D6C
 * Callers:
 *     sub_1800BB2F8 @ 0x1800BB2F8 (sub_1800BB2F8.c)
 * Callees:
 *     sub_180011C30 @ 0x180011C30 (sub_180011C30.c)
 *     sub_18001C420 @ 0x18001C420 (sub_18001C420.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_1800B9D6C(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  char v3; // si
  __int64 v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h]

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 3832);
  v7 = a1 + 3832;
  sub_180011C30(a1 + 3832);
  v3 = 0;
  v4 = **(_QWORD **)(a1 + 3800);
  v6 = v4;
  while ( !*(_BYTE *)(v4 + 25) )
  {
    if ( v3 || (***(unsigned __int8 (__fastcall ****)(_QWORD))(v4 + 32))(*(_QWORD *)(v4 + 32)) )
      v3 = 1;
    sub_18001C420(&v6);
    v4 = v6;
  }
  Mtx_unlock(v2);
  return v3;
}

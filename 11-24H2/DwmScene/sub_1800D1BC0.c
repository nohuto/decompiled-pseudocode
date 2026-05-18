/*
 * XREFs of sub_1800D1BC0 @ 0x1800D1BC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011C30 @ 0x180011C30 (sub_180011C30.c)
 *     sub_18001C420 @ 0x18001C420 (sub_18001C420.c)
 *     sub_180024A88 @ 0x180024A88 (sub_180024A88.c)
 *     sub_1800CFE98 @ 0x1800CFE98 (sub_1800CFE98.c)
 *     sub_1800D19C0 @ 0x1800D19C0 (sub_1800D19C0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D1BC0(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  char v3; // si
  __int64 v4; // rdi
  _QWORD *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  _QWORD *v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  sub_1800D19C0((__int64 *)&v9);
  v2 = (struct _Mtx_internal_imp_t *)(a1 + 8);
  sub_180011C30(a1 + 8);
  v3 = *(_BYTE *)(a1 + 64);
  *(_BYTE *)(a1 + 64) = 1;
  v4 = a1 + 48;
  if ( &v9 != (_QWORD **)v4 )
  {
    v5 = v9;
    v9 = *(_QWORD **)v4;
    *(_QWORD *)v4 = v5;
    v6 = v10;
    v10 = *(_QWORD *)(v4 + 8);
    *(_QWORD *)(v4 + 8) = v6;
  }
  Mtx_unlock(v2);
  if ( !v3 )
  {
    v7 = *v9;
    v11 = *v9;
    while ( !*(_BYTE *)(v7 + 25) )
    {
      sub_180024A88(v7 + 40);
      sub_18001C420(&v11);
      v7 = v11;
    }
  }
  return sub_1800CFE98((void **)&v9);
}

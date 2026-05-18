/*
 * XREFs of sub_1800303DC @ 0x1800303DC
 * Callers:
 *     sub_180036310 @ 0x180036310 (sub_180036310.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180012040 @ 0x180012040 (sub_180012040.c)
 */

void __fastcall sub_1800303DC(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *(_QWORD *)(a1 + 96);
  if ( v2 )
    sub_18001050C(v2);
  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 56));
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
  {
    sub_180012040(v3, *(_QWORD *)(a1 + 32));
    sub_180010134(*(void **)(a1 + 24), (*(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 24)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  if ( *(_QWORD *)a1 )
  {
    sub_180012040(*(_QWORD *)a1, *(_QWORD *)(a1 + 8));
    sub_180010134(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}

/*
 * XREFs of sub_18003053C @ 0x18003053C
 * Callers:
 *     sub_180036470 @ 0x180036470 (sub_180036470.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180012140 @ 0x180012140 (sub_180012140.c)
 */

void __fastcall sub_18003053C(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *(_QWORD *)(a1 + 96);
  if ( v2 )
    sub_18001060C(v2);
  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 56));
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
  {
    sub_180012140(v3, *(_QWORD *)(a1 + 32));
    sub_180010234(*(void **)(a1 + 24), (*(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 24)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  if ( *(_QWORD *)a1 )
  {
    sub_180012140(*(_QWORD *)a1, *(_QWORD *)(a1 + 8));
    sub_180010234(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}

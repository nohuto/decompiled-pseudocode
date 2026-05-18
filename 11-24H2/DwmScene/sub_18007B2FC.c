/*
 * XREFs of sub_18007B2FC @ 0x18007B2FC
 * Callers:
 *     sub_18007AAC0 @ 0x18007AAC0 (sub_18007AAC0.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180026614 @ 0x180026614 (sub_180026614.c)
 *     sub_180078718 @ 0x180078718 (sub_180078718.c)
 */

__int64 __fastcall sub_18007B2FC(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rcx
  void *v6; // rcx
  __int64 v7; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::ShaderPropertyBlock::`vftable';
  v2 = *(_QWORD *)(a1 + 136);
  if ( v2 )
    sub_18001060C(v2);
  v3 = *(_QWORD *)(a1 + 120);
  if ( v3 )
    sub_18001060C(v3);
  result = sub_180026614((void **)(a1 + 88));
  v5 = *(_QWORD *)(a1 + 56);
  if ( v5 )
  {
    sub_180078718(v5, *(_QWORD *)(a1 + 64));
    result = sub_180010234(*(void **)(a1 + 56), 8 * ((__int64)(*(_QWORD *)(a1 + 72) - *(_QWORD *)(a1 + 56)) >> 3));
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_QWORD *)(a1 + 64) = 0LL;
    *(_QWORD *)(a1 + 72) = 0LL;
  }
  v6 = *(void **)(a1 + 32);
  if ( v6 )
  {
    result = sub_180010234(v6, (*(_QWORD *)(a1 + 48) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFFCuLL);
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  v7 = *(_QWORD *)(a1 + 24);
  if ( v7 )
    return sub_18001060C(v7);
  return result;
}

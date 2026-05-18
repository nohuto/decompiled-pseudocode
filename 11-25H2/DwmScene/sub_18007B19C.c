/*
 * XREFs of sub_18007B19C @ 0x18007B19C
 * Callers:
 *     sub_18007A960 @ 0x18007A960 (sub_18007A960.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_1800264B4 @ 0x1800264B4 (sub_1800264B4.c)
 *     sub_1800785B8 @ 0x1800785B8 (sub_1800785B8.c)
 */

__int64 __fastcall sub_18007B19C(__int64 a1)
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
    sub_18001050C(v2);
  v3 = *(_QWORD *)(a1 + 120);
  if ( v3 )
    sub_18001050C(v3);
  result = sub_1800264B4((void **)(a1 + 88));
  v5 = *(_QWORD *)(a1 + 56);
  if ( v5 )
  {
    sub_1800785B8(v5, *(_QWORD *)(a1 + 64));
    result = sub_180010134(*(void **)(a1 + 56), 8 * ((__int64)(*(_QWORD *)(a1 + 72) - *(_QWORD *)(a1 + 56)) >> 3));
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_QWORD *)(a1 + 64) = 0LL;
    *(_QWORD *)(a1 + 72) = 0LL;
  }
  v6 = *(void **)(a1 + 32);
  if ( v6 )
  {
    result = sub_180010134(v6, (*(_QWORD *)(a1 + 48) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFFCuLL);
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  v7 = *(_QWORD *)(a1 + 24);
  if ( v7 )
    return sub_18001050C(v7);
  return result;
}

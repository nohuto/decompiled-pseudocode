/*
 * XREFs of sub_180036028 @ 0x180036028
 * Callers:
 *     sub_1800320F0 @ 0x1800320F0 (sub_1800320F0.c)
 * Callees:
 *     sub_18001EE34 @ 0x18001EE34 (sub_18001EE34.c)
 *     sub_180028B8C @ 0x180028B8C (sub_180028B8C.c)
 *     sub_18003C99C @ 0x18003C99C (sub_18003C99C.c)
 */

char *__fastcall sub_180036028(__int64 a1)
{
  _QWORD *v2; // rcx
  char *v3; // r8
  char *v4; // r9
  __int64 v5; // rax
  char *v6; // r8
  char *v7; // r10
  _QWORD *v8; // r9
  __int64 v9; // rcx
  char *result; // rax
  __int64 v11; // [rsp+28h] [rbp-10h]

  sub_18001EE34(
    *(_QWORD **)(a1 + 464),
    0,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    1661,
    (__int64)"UpdateStatistics",
    (__int64)"FrameTick");
  v11 = *(_QWORD *)(a1 + 944);
  v2 = *(_QWORD **)(a1 + 464);
  *(_QWORD *)(a1 + 944) = v11 + 1;
  sub_180028B8C(
    v2,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    1662,
    (__int64)"UpdateStatistics",
    (__int64)"FrameTick_FrameNumber",
    v11);
  v3 = (char *)&unk_1801C4580;
  do
  {
    v4 = v3 - 144;
    do
    {
      v5 = sub_18003C99C(v4 - 16);
      *v8 += v5;
      *(v8 - 1) = v5;
      v9 = v8[1];
      v4 = (char *)(v8 + 4);
      if ( v9 < v5 )
        v9 = v5;
      *((_QWORD *)v4 - 3) = v9;
      _InterlockedExchange64((volatile __int64 *)v4 - 6, 0LL);
    }
    while ( v4 - 16 != v6 );
    v3 = v6 + 160;
    result = &byte_1801C4E40;
  }
  while ( v7 != &byte_1801C4E40 );
  return result;
}

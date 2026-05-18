/*
 * XREFs of sub_180078D38 @ 0x180078D38
 * Callers:
 *     sub_18004A1F4 @ 0x18004A1F4 (sub_18004A1F4.c)
 * Callees:
 *     memset @ 0x18000C088 (memset.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 */

__int64 __fastcall sub_180078D38(__int64 a1, _QWORD *a2, int a3)
{
  unsigned __int64 v4; // r8
  _WORD *v5; // rax
  _WORD *v6; // rdi
  __int64 i; // rcx

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 15LL;
  *(_BYTE *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 48) = a3;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  unknown_libname_81((_QWORD *)(a1 + 1152), a2);
  *(_QWORD *)(a1 + 1168) = 0LL;
  *(_QWORD *)(a1 + 1176) = 0LL;
  *(_QWORD *)(a1 + 1184) = 0LL;
  *(_QWORD *)(a1 + 1192) = 0LL;
  *(_QWORD *)(a1 + 1200) = 0LL;
  *(_QWORD *)(a1 + 1208) = 0LL;
  *(_QWORD *)(a1 + 1216) = 0LL;
  *(_QWORD *)(a1 + 1224) = 0LL;
  *(_QWORD *)(a1 + 1232) = 0LL;
  *(_WORD *)(a1 + 1240) = 0;
  *(_BYTE *)(a1 + 1242) = 0;
  v5 = (_WORD *)(a1 + 128);
  if ( a1 + 128 <= v4 && (a1 + 128 > (unsigned __int64)&word_180105050 || a1 + 1150 < (unsigned __int64)&word_180105050) )
  {
    v6 = (_WORD *)(a1 + 128);
    for ( i = 512LL; i; --i )
      *v6++ = -1;
    v5 = (_WORD *)(a1 + 1152);
  }
  while ( v5 != (_WORD *)v4 )
    *v5++ = -1;
  return a1;
}

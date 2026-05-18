/*
 * XREFs of sub_18007E24C @ 0x18007E24C
 * Callers:
 *     sub_180073F3C @ 0x180073F3C (sub_180073F3C.c)
 *     sub_180074660 @ 0x180074660 (sub_180074660.c)
 *     sub_1800759D0 @ 0x1800759D0 (sub_1800759D0.c)
 *     sub_1800764D0 @ 0x1800764D0 (sub_1800764D0.c)
 *     sub_180076860 @ 0x180076860 (sub_180076860.c)
 *     sub_180077900 @ 0x180077900 (sub_180077900.c)
 *     sub_18008DDEC @ 0x18008DDEC (sub_18008DDEC.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 */

__int64 __fastcall sub_18007E24C(__int64 a1, int a2, int a3, int a4, char a5)
{
  char v6; // r10
  __int64 result; // rax
  __int128 v8; // [rsp+20h] [rbp-10h] BYREF

  v6 = a5 & 0xE | 1;
  if ( *(_BYTE *)(a1 + 124) != v6
    || *(_DWORD *)(a1 + 112) != a2
    || *(_DWORD *)(a1 + 116) != a3
    || *(_DWORD *)(a1 + 120) != a4
    || (result = a5 & 1, *(_BYTE *)(a1 + 125) != (_BYTE)result) )
  {
    *(_DWORD *)(a1 + 112) = a2;
    *(_BYTE *)(a1 + 125) = a5 & 1;
    *(_DWORD *)(a1 + 116) = a3;
    *(_DWORD *)(a1 + 120) = a4;
    *(_BYTE *)(a1 + 124) = v6;
    v8 = 0LL;
    sub_180011010((_QWORD *)(a1 + 48), (__int64 *)&v8);
    if ( *((_QWORD *)&v8 + 1) )
      sub_18001050C(*((__int64 *)&v8 + 1));
    v8 = 0LL;
    sub_180011010((_QWORD *)(a1 + 64), (__int64 *)&v8);
    if ( *((_QWORD *)&v8 + 1) )
      sub_18001050C(*((__int64 *)&v8 + 1));
    v8 = 0LL;
    sub_180011010((_QWORD *)(a1 + 80), (__int64 *)&v8);
    if ( *((_QWORD *)&v8 + 1) )
      sub_18001050C(*((__int64 *)&v8 + 1));
    v8 = 0LL;
    result = (__int64)sub_180011010((_QWORD *)(a1 + 96), (__int64 *)&v8);
    if ( *((_QWORD *)&v8 + 1) )
      return sub_18001050C(*((__int64 *)&v8 + 1));
  }
  return result;
}

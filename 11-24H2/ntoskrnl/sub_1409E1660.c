/*
 * XREFs of sub_1409E1660 @ 0x1409E1660
 * Callers:
 *     sub_1409E0BD4 @ 0x1409E0BD4 (sub_1409E0BD4.c)
 * Callees:
 *     sub_1409E0E1C @ 0x1409E0E1C (sub_1409E0E1C.c)
 *     sub_1409E0E44 @ 0x1409E0E44 (sub_1409E0E44.c)
 *     sub_1409E0F54 @ 0x1409E0F54 (sub_1409E0F54.c)
 *     sub_140A2BB08 @ 0x140A2BB08 (sub_140A2BB08.c)
 */

__int64 __fastcall sub_1409E1660(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // esi
  unsigned int v4; // r8d
  unsigned int v5; // edx
  void *v7; // rsi
  int v8; // edi
  _DWORD *v9; // r14
  unsigned int v10; // ecx
  _DWORD *v12; // [rsp+88h] [rbp+10h] BYREF
  PMDL Mdl; // [rsp+90h] [rbp+18h] BYREF

  v2 = a2[1];
  v4 = *a2;
  v5 = a2[2];
  v12 = 0LL;
  v7 = (void *)(*(_QWORD *)(a1 + 32) + (v2 & 0xFFFFFFF));
  Mdl = 0LL;
  v8 = sub_1409E0E44(v7, v5 & 0xFFFFFFF, (v4 & 2) == 0);
  if ( v8 >= 0 )
  {
    v8 = sub_1409E0F54(v7, a2[2] & 0xFFFFFFF, (*a2 & 2) == 0, (__int64)&Mdl, (__int64)&v12);
    if ( v8 >= 0 )
    {
      v9 = v12;
      v8 = sub_140A2BB08(
             1,
             (_DWORD)v7,
             (_DWORD)v12,
             a2[2] & 0xFFFFFFF,
             *(_QWORD *)(a1 + 56) + 72LL,
             a2[1] & 0xFFFFFFF,
             *(_QWORD *)(a1 + 56) + 80LL);
      if ( v8 >= 0 )
      {
        v10 = *a2 & 0xFFFFFC03;
        *a2 = v10;
        if ( (v10 & 2) == 0 )
        {
          if ( (a2[2] & 0xFFFFFFF) >= 4 )
            *v9 = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 244LL);
          else
            v8 = -1073741811;
        }
      }
    }
  }
  sub_1409E0E1C(Mdl);
  return (unsigned int)v8;
}

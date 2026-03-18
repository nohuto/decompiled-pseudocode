/*
 * XREFs of sub_140800BE0 @ 0x140800BE0
 * Callers:
 *     sub_1409E087C @ 0x1409E087C (sub_1409E087C.c)
 * Callees:
 *     sub_14046A994 @ 0x14046A994 (sub_14046A994.c)
 *     ZwFlushInstructionCache @ 0x1406A8230 (ZwFlushInstructionCache.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     sub_1409E0E1C @ 0x1409E0E1C (sub_1409E0E1C.c)
 *     sub_1409E0E44 @ 0x1409E0E44 (sub_1409E0E44.c)
 *     sub_1409E0F54 @ 0x1409E0F54 (sub_1409E0F54.c)
 *     sub_140A2BB08 @ 0x140A2BB08 (sub_140A2BB08.c)
 */

__int64 __fastcall sub_140800BE0(__int64 *a1, int a2, _DWORD *a3)
{
  int v6; // ebx
  void *v7; // r12
  _DWORD *v8; // rsi
  _DWORD *v9; // r15
  _DWORD *v10; // rsi
  int v12; // [rsp+30h] [rbp-68h]
  PMDL Mdl; // [rsp+58h] [rbp-40h] BYREF
  void *v14; // [rsp+B8h] [rbp+20h] BYREF

  v14 = 0LL;
  Mdl = 0LL;
  if ( a2 && (*a3 & 1) != 0 )
  {
    v6 = 0;
  }
  else
  {
    v7 = (void *)(a1[4] + (a3[1] & 0xFFFFFFF));
    v8 = a3 + 2;
    v6 = sub_1409E0E44(v7);
    if ( v6 >= 0 )
    {
      v6 = sub_1409E0F54((_DWORD)v7, *v8 & 0xFFFFFFF, (*a3 & 2) == 0, (unsigned int)&Mdl, (__int64)&v14);
      if ( v6 >= 0 )
      {
        v9 = v8;
        if ( a2 )
        {
          v12 = *v8 & 0xFFFFFFF;
          v10 = v14;
          v6 = sub_14046A994(
                 a1[5],
                 *(_DWORD *)(a1[7] + 48),
                 a1[4],
                 *(_QWORD *)(a1[7] + 56) - a1[4],
                 (__int64)v7,
                 (__int64)v14,
                 v12);
          if ( v6 < 0 )
            goto LABEL_19;
          v9 = a3 + 2;
        }
        else
        {
          v10 = v14;
        }
        memmove(v10, v7, a3[2] & 0xFFFFFFF);
        if ( (*a3 & 2) != 0 || (*v9 & 0xFFFFFFFu) >= 4 )
        {
          if ( (*a3 & 2) == 0 )
            *v10 = a3[3];
          v6 = sub_140A2BB08(0, (_DWORD)v10, (_DWORD)v10, *v9 & 0xFFFFFFF, a1[7] + 72, a3[1] & 0xFFFFFFF, a1[7] + 80);
          if ( v6 >= 0 )
          {
            if ( !a2
              || (v6 = sub_14046A994(
                         a1[5],
                         *(_DWORD *)(a1[7] + 48),
                         a1[4],
                         a1[4] - *(_QWORD *)(a1[7] + 56),
                         (__int64)v7,
                         (__int64)v10,
                         *v9 & 0xFFFFFFF),
                  v6 >= 0) )
            {
              v6 = ZwFlushInstructionCache(-1LL, (__int64)v7);
            }
          }
        }
        else
        {
          v6 = -1073741811;
        }
      }
    }
  }
LABEL_19:
  sub_1409E0E1C(Mdl);
  return (unsigned int)v6;
}

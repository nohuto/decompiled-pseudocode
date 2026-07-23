/*
 * XREFs of sub_140801320 @ 0x140801320
 * Callers:
 *     sub_1409DA62C @ 0x1409DA62C (sub_1409DA62C.c)
 * Callees:
 *     sub_140463324 @ 0x140463324 (sub_140463324.c)
 *     ZwFlushInstructionCache @ 0x1406A91D0 (ZwFlushInstructionCache.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     sub_1409DABCC @ 0x1409DABCC (sub_1409DABCC.c)
 *     sub_1409DABF4 @ 0x1409DABF4 (sub_1409DABF4.c)
 *     sub_1409DAD04 @ 0x1409DAD04 (sub_1409DAD04.c)
 *     sub_140A1F9C8 @ 0x140A1F9C8 (sub_140A1F9C8.c)
 */

__int64 __fastcall sub_140801320(__int64 *a1, int a2, _DWORD *a3)
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
    v6 = sub_1409DABF4(v7);
    if ( v6 >= 0 )
    {
      v6 = sub_1409DAD04((_DWORD)v7, *v8 & 0xFFFFFFF, (*a3 & 2) == 0, (unsigned int)&Mdl, (__int64)&v14);
      if ( v6 >= 0 )
      {
        v9 = v8;
        if ( a2 )
        {
          v12 = *v8 & 0xFFFFFFF;
          v10 = v14;
          v6 = sub_140463324(
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
          v6 = sub_140A1F9C8(0, (_DWORD)v10, (_DWORD)v10, *v9 & 0xFFFFFFF, a1[7] + 72, a3[1] & 0xFFFFFFF, a1[7] + 80);
          if ( v6 >= 0 )
          {
            if ( !a2
              || (v6 = sub_140463324(
                         a1[5],
                         *(_DWORD *)(a1[7] + 48),
                         a1[4],
                         a1[4] - *(_QWORD *)(a1[7] + 56),
                         (__int64)v7,
                         (__int64)v10,
                         *v9 & 0xFFFFFFF),
                  v6 >= 0) )
            {
              v6 = ZwFlushInstructionCache((HANDLE)0xFFFFFFFFFFFFFFFFLL, v7, a3[2] & 0xFFFFFFF);
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
  sub_1409DABCC(Mdl);
  return (unsigned int)v6;
}

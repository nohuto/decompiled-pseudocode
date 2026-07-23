/*
 * XREFs of HvlpFlushRangeListTbEx @ 0x1403A45E0
 * Callers:
 *     HvlFlushRangeListTb @ 0x14039D700 (HvlFlushRangeListTb.c)
 * Callees:
 *     HvlpCountFlushVaList @ 0x1403A46D0 (HvlpCountFlushVaList.c)
 *     HvlpFastFlushListTbEx @ 0x1403A46F4 (HvlpFastFlushListTbEx.c)
 *     HvlpAllowFastFlushList @ 0x1403A49B8 (HvlpAllowFastFlushList.c)
 *     HvlpSlowFlushListTbEx @ 0x1403A4E4C (HvlpSlowFlushListTbEx.c)
 */

__int64 __fastcall HvlpFlushRangeListTbEx(
        __int64 a1,
        int a2,
        char a3,
        __int64 a4,
        char a5,
        unsigned int a6,
        __int64 a7)
{
  __int64 v8; // rax
  int v9; // edi
  int v10; // r9d
  unsigned int v11; // r10d
  unsigned int v12; // r11d
  __int64 v14; // [rsp+40h] [rbp-28h] BYREF
  __int128 v15; // [rsp+48h] [rbp-20h]
  __int64 v16; // [rsp+58h] [rbp-10h]

  v14 = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  if ( a5 )
  {
    v14 = a1;
    v8 = (a3 == 0 ? 4 : 0) | 2u;
    if ( a1 )
      v8 = a3 == 0 ? 4 : 0;
    *(_QWORD *)&v15 = v8;
  }
  v9 = HvlpCountFlushVaList(a6, a7);
  if ( v9 + ((HvlpFlags >> 8) & 0xF) + 5 <= 0xE && (unsigned __int8)HvlpAllowFastFlushList(v12, v11) )
    return HvlpFastFlushListTbEx((unsigned int)&v14, a2, v12, v10, v11, a7, v9);
  else
    return HvlpSlowFlushListTbEx((unsigned int)&v14, a2, v12, v10, v11, a7, v9);
}

/*
 * XREFs of sub_180012040 @ 0x180012040
 * Callers:
 *     sub_180012284 @ 0x180012284 (sub_180012284.c)
 *     sub_180012F40 @ 0x180012F40 (sub_180012F40.c)
 *     sub_1800130E0 @ 0x1800130E0 (sub_1800130E0.c)
 *     sub_1800169B8 @ 0x1800169B8 (sub_1800169B8.c)
 *     sub_180023948 @ 0x180023948 (sub_180023948.c)
 *     sub_1800244A8 @ 0x1800244A8 (sub_1800244A8.c)
 *     sub_180024714 @ 0x180024714 (sub_180024714.c)
 *     sub_180025820 @ 0x180025820 (sub_180025820.c)
 *     sub_18002C378 @ 0x18002C378 (sub_18002C378.c)
 *     sub_18002C724 @ 0x18002C724 (sub_18002C724.c)
 *     sub_18002C84C @ 0x18002C84C (sub_18002C84C.c)
 *     sub_18003001C @ 0x18003001C (sub_18003001C.c)
 *     sub_1800303DC @ 0x1800303DC (sub_1800303DC.c)
 *     sub_180033500 @ 0x180033500 (sub_180033500.c)
 *     sub_180038EFC @ 0x180038EFC (sub_180038EFC.c)
 *     sub_1800577C8 @ 0x1800577C8 (sub_1800577C8.c)
 *     sub_18005D7CC @ 0x18005D7CC (sub_18005D7CC.c)
 *     sub_18005D8E0 @ 0x18005D8E0 (sub_18005D8E0.c)
 *     sub_18006B190 @ 0x18006B190 (sub_18006B190.c)
 *     sub_18006B6D0 @ 0x18006B6D0 (sub_18006B6D0.c)
 *     sub_18008C3EC @ 0x18008C3EC (sub_18008C3EC.c)
 *     sub_18008C49C @ 0x18008C49C (sub_18008C49C.c)
 *     sub_18008C6CC @ 0x18008C6CC (sub_18008C6CC.c)
 *     sub_18008C728 @ 0x18008C728 (sub_18008C728.c)
 *     sub_18008CBB8 @ 0x18008CBB8 (sub_18008CBB8.c)
 *     sub_18008D054 @ 0x18008D054 (sub_18008D054.c)
 *     sub_180091028 @ 0x180091028 (sub_180091028.c)
 *     sub_180098AB0 @ 0x180098AB0 (sub_180098AB0.c)
 *     sub_1800D1EA8 @ 0x1800D1EA8 (sub_1800D1EA8.c)
 *     sub_1800D2150 @ 0x1800D2150 (sub_1800D2150.c)
 *     sub_1800D2444 @ 0x1800D2444 (sub_1800D2444.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 */

__int64 __fastcall sub_180012040(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *(_QWORD *)(v3 + 8);
      if ( v4 )
        result = sub_18001050C(v4);
      v3 += 16LL;
    }
    while ( v3 != a2 );
  }
  return result;
}

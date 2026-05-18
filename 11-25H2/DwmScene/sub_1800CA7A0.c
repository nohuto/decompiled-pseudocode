/*
 * XREFs of sub_1800CA7A0 @ 0x1800CA7A0
 * Callers:
 *     sub_1800CA160 @ 0x1800CA160 (sub_1800CA160.c)
 * Callees:
 *     sub_18004D588 @ 0x18004D588 (sub_18004D588.c)
 */

__int64 __fastcall sub_1800CA7A0(__int64 a1)
{
  __int64 result; // rax
  __int128 v3; // [rsp+20h] [rbp-18h]

  *(_DWORD *)(a1 + 136) = 3;
  sub_18004D588((_QWORD *)(a1 + 104));
  sub_18004D588((_QWORD *)(a1 + 120));
  *(_QWORD *)&v3 = 0LL;
  result = 0LL;
  BYTE8(v3) = 1;
  *(_DWORD *)((char *)&v3 + 9) = 0;
  *(_WORD *)((char *)&v3 + 13) = 0;
  HIBYTE(v3) = 0;
  *(_OWORD *)(a1 + 144) = v3;
  return result;
}

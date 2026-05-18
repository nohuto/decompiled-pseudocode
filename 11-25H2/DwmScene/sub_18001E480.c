/*
 * XREFs of sub_18001E480 @ 0x18001E480
 * Callers:
 *     sub_18003CC20 @ 0x18003CC20 (sub_18003CC20.c)
 *     sub_18003D16C @ 0x18003D16C (sub_18003D16C.c)
 *     sub_18003D378 @ 0x18003D378 (sub_18003D378.c)
 *     sub_18003FF60 @ 0x18003FF60 (sub_18003FF60.c)
 *     sub_18004014C @ 0x18004014C (sub_18004014C.c)
 *     sub_18005DE48 @ 0x18005DE48 (sub_18005DE48.c)
 *     sub_18005E0A0 @ 0x18005E0A0 (sub_18005E0A0.c)
 *     sub_18005E1C4 @ 0x18005E1C4 (sub_18005E1C4.c)
 *     sub_1800680F0 @ 0x1800680F0 (sub_1800680F0.c)
 *     sub_180068340 @ 0x180068340 (sub_180068340.c)
 *     sub_18008D908 @ 0x18008D908 (sub_18008D908.c)
 *     sub_18009099C @ 0x18009099C (sub_18009099C.c)
 *     sub_180090BE0 @ 0x180090BE0 (sub_180090BE0.c)
 *     sub_180090D30 @ 0x180090D30 (sub_180090D30.c)
 *     sub_1800CF62C @ 0x1800CF62C (sub_1800CF62C.c)
 *     sub_1800CF964 @ 0x1800CF964 (sub_1800CF964.c)
 *     sub_1800D0D64 @ 0x1800D0D64 (sub_1800D0D64.c)
 *     sub_1800D0F6C @ 0x1800D0F6C (sub_1800D0F6C.c)
 *     sub_1800D1394 @ 0x1800D1394 (sub_1800D1394.c)
 *     sub_1800D1670 @ 0x1800D1670 (sub_1800D1670.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001E480(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r9
  __int64 i; // rcx
  __int64 v5; // rax

  v3 = 0LL;
  for ( i = 0xCBF29CE484222325uLL; v3 < a3; i = 0x100000001B3LL * (v5 ^ i) )
  {
    v5 = *(unsigned __int8 *)(v3 + a2);
    ++v3;
  }
  return i;
}

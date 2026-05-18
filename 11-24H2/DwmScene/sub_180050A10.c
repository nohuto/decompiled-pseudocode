/*
 * XREFs of sub_180050A10 @ 0x180050A10
 * Callers:
 *     sub_180069320 @ 0x180069320 (sub_180069320.c)
 * Callees:
 *     sub_180027EDC @ 0x180027EDC (sub_180027EDC.c)
 *     sub_180050CA0 @ 0x180050CA0 (sub_180050CA0.c)
 */

__int64 __fastcall sub_180050A10(__int64 a1, unsigned int a2)
{
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  sub_180050CA0(a1 + 128, &v5);
  v5 = a2;
  return sub_180027EDC((__int64 *)(a1 + 80), &v5);
}

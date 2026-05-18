/*
 * XREFs of sub_1800522C0 @ 0x1800522C0
 * Callers:
 *     sub_180026EC0 @ 0x180026EC0 (sub_180026EC0.c)
 *     sub_180069320 @ 0x180069320 (sub_180069320.c)
 * Callees:
 *     sub_180027EDC @ 0x180027EDC (sub_180027EDC.c)
 *     sub_180050CA0 @ 0x180050CA0 (sub_180050CA0.c)
 *     sub_180052818 @ 0x180052818 (sub_180052818.c)
 */

__int64 __fastcall sub_1800522C0(__int64 a1, unsigned int a2)
{
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    sub_180052818(a1 + 136, 0LL);
  v5 = a2;
  sub_180050CA0((__int64 *)(a1 + 112), &v5);
  v5 = a2;
  return sub_180027EDC((__int64 *)(a1 + 80), &v5);
}

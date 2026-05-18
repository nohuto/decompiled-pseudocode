/*
 * XREFs of sub_180041750 @ 0x180041750
 * Callers:
 *     sub_18005B778 @ 0x18005B778 (sub_18005B778.c)
 * Callees:
 *     sub_180027EDC @ 0x180027EDC (sub_180027EDC.c)
 *     sub_18007BC30 @ 0x18007BC30 (sub_18007BC30.c)
 */

__int64 __fastcall sub_180041750(__int64 a1, unsigned int a2)
{
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_QWORD *)(a1 + 120) )
    sub_18007BC30();
  v5 = a2;
  return sub_180027EDC((__int64 *)(a1 + 80), &v5);
}

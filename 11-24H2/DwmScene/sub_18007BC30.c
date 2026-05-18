/*
 * XREFs of sub_18007BC30 @ 0x18007BC30
 * Callers:
 *     sub_180041750 @ 0x180041750 (sub_180041750.c)
 *     sub_180048730 @ 0x180048730 (sub_180048730.c)
 *     sub_18005B778 @ 0x18005B778 (sub_18005B778.c)
 * Callees:
 *     sub_180027530 @ 0x180027530 (sub_180027530.c)
 *     sub_18007CCF8 @ 0x18007CCF8 (sub_18007CCF8.c)
 */

__int64 __fastcall sub_18007BC30(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF

  v4 = *(_QWORD *)(a1 + 128);
  if ( v4 )
  {
    v6 = a2;
    sub_180027530((__int64 *)(v4 + 112), &v6);
  }
  v6 = a2;
  return sub_18007CCF8(a1 + 88, &v6);
}

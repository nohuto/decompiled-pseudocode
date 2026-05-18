/*
 * XREFs of sub_180037060 @ 0x180037060
 * Callers:
 *     sub_1800371F0 @ 0x1800371F0 (sub_1800371F0.c)
 *     sub_18007F47C @ 0x18007F47C (sub_18007F47C.c)
 *     sub_18007F7D4 @ 0x18007F7D4 (sub_18007F7D4.c)
 *     sub_18007FC44 @ 0x18007FC44 (sub_18007FC44.c)
 *     sub_180080000 @ 0x180080000 (sub_180080000.c)
 *     sub_180087070 @ 0x180087070 (sub_180087070.c)
 * Callees:
 *     sub_180037114 @ 0x180037114 (sub_180037114.c)
 */

__int64 *__fastcall sub_180037060(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    sub_180037114();
  return a1;
}

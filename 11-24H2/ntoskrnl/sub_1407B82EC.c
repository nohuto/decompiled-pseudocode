/*
 * XREFs of sub_1407B82EC @ 0x1407B82EC
 * Callers:
 *     sub_140655B60 @ 0x140655B60 (sub_140655B60.c)
 *     sub_1407B85B0 @ 0x1407B85B0 (sub_1407B85B0.c)
 *     ExpGenuinePolicyPostProcess @ 0x1407B8980 (ExpGenuinePolicyPostProcess.c)
 *     sub_1407B95B0 @ 0x1407B95B0 (sub_1407B95B0.c)
 *     sub_1407B9630 @ 0x1407B9630 (sub_1407B9630.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1407B82EC(_DWORD *a1, _DWORD *a2, unsigned int a3, _DWORD *a4, int a5)
{
  __int64 result; // rax

  result = 0LL;
  *a4 = 4;
  if ( a3 < 4 )
    return 3221225507LL;
  if ( a1 )
    *a1 = 4;
  if ( a2 )
    *a2 = a5;
  return result;
}

/*
 * XREFs of sub_1407B873C @ 0x1407B873C
 * Callers:
 *     sub_140654260 @ 0x140654260 (sub_140654260.c)
 *     sub_1407B8A00 @ 0x1407B8A00 (sub_1407B8A00.c)
 *     ExpGenuinePolicyPostProcess @ 0x1407B8DD0 (ExpGenuinePolicyPostProcess.c)
 *     sub_1407B9A00 @ 0x1407B9A00 (sub_1407B9A00.c)
 *     sub_1407B9A80 @ 0x1407B9A80 (sub_1407B9A80.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1407B873C(_DWORD *a1, _DWORD *a2, unsigned int a3, _DWORD *a4, int a5)
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

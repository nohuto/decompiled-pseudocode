/*
 * XREFs of sub_180026FE0 @ 0x180026FE0
 * Callers:
 *     sub_180026CC0 @ 0x180026CC0 (sub_180026CC0.c)
 *     sub_180091F10 @ 0x180091F10 (sub_180091F10.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180026FE0(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *(_QWORD *)(a1 + 136);
  result = 0LL;
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 128);
    if ( v3 )
      return *(unsigned int *)(v3 + 4);
  }
  return result;
}

/*
 * XREFs of sub_1800693BC @ 0x1800693BC
 * Callers:
 *     sub_180068E40 @ 0x180068E40 (sub_180068E40.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800693BC(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *(_QWORD *)(a1 + 112);
  result = 0LL;
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 128);
    if ( v3 )
      return *(unsigned int *)(v3 + 16);
  }
  return result;
}

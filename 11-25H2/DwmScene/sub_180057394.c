/*
 * XREFs of sub_180057394 @ 0x180057394
 * Callers:
 *     sub_1800595F0 @ 0x1800595F0 (sub_1800595F0.c)
 *     sub_180068CE0 @ 0x180068CE0 (sub_180068CE0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180057394(__int64 a1)
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
      return *(unsigned int *)(v3 + 4);
  }
  return result;
}

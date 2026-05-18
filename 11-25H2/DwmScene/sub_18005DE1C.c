/*
 * XREFs of sub_18005DE1C @ 0x18005DE1C
 * Callers:
 *     sub_180062230 @ 0x180062230 (sub_180062230.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18005DE1C(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // rax
  __int64 result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v3 = a3[1];
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  *a2 = *a3;
  result = a3[1];
  a2[1] = result;
  return result;
}

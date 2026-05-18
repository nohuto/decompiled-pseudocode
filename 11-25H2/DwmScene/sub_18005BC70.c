/*
 * XREFs of sub_18005BC70 @ 0x18005BC70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18005BC70(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = a2;
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  return result;
}

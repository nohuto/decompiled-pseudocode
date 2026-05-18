/*
 * XREFs of sub_180054B40 @ 0x180054B40
 * Callers:
 *     sub_180054A18 @ 0x180054A18 (sub_180054A18.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180054B40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 result; // rax

  *(_BYTE *)a2 = *(_BYTE *)a3;
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a3 + 8);
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(a3 + 16);
  v3 = *(_QWORD *)(a3 + 24);
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_QWORD *)(a2 + 24) = v3;
  *(_QWORD *)(a2 + 32) = *(_QWORD *)(a3 + 32);
  result = *(_QWORD *)(a3 + 40);
  *(_QWORD *)(a2 + 40) = result;
  *(_QWORD *)(a3 + 32) = 0LL;
  *(_QWORD *)(a3 + 40) = 0LL;
  return result;
}

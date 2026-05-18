/*
 * XREFs of sub_1800549E0 @ 0x1800549E0
 * Callers:
 *     sub_1800548B8 @ 0x1800548B8 (sub_1800548B8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800549E0(__int64 a1, __int64 a2, __int64 a3)
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

/*
 * XREFs of sub_18002E324 @ 0x18002E324
 * Callers:
 *     sub_18002DF98 @ 0x18002DF98 (sub_18002DF98.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18002E324(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax

  result = *a4;
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_OWORD *)a2 = *(_OWORD *)result;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(result + 16);
  *(_QWORD *)(result + 16) = 0LL;
  *(_QWORD *)(result + 24) = 15LL;
  *(_BYTE *)result = 0;
  *(_DWORD *)(a2 + 32) = 0;
  return result;
}

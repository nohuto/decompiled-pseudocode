/*
 * XREFs of sub_180096F7C @ 0x180096F7C
 * Callers:
 *     sub_180096E48 @ 0x180096E48 (sub_180096E48.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180096F7C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = 0LL;
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_OWORD *)a2 = *(_OWORD *)a3;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a3 + 16);
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 24) = 15LL;
  *(_BYTE *)a3 = 0;
  *(_OWORD *)(a2 + 32) = *(_OWORD *)(a3 + 32);
  *(_QWORD *)(a2 + 48) = *(_QWORD *)(a3 + 48);
  return result;
}

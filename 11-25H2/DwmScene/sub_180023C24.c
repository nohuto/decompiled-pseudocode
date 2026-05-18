/*
 * XREFs of sub_180023C24 @ 0x180023C24
 * Callers:
 *     sub_180023ADC @ 0x180023ADC (sub_180023ADC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180023C24(__int64 a1, __int64 a2, __int64 a3, _DWORD **a4)
{
  __int64 result; // rax

  result = 0LL;
  *(_DWORD *)a2 = **a4;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  return result;
}

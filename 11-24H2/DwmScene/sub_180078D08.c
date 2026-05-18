/*
 * XREFs of sub_180078D08 @ 0x180078D08
 * Callers:
 *     sub_180078BE4 @ 0x180078BE4 (sub_180078BE4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180078D08(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_OWORD *)a2 = *(_OWORD *)a3;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a3 + 16);
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 24) = 15LL;
  *(_BYTE *)a3 = 0;
  *(_WORD *)(a2 + 32) = *(_WORD *)(a3 + 32);
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a3 + 36);
  *(_DWORD *)(a2 + 40) = *(_DWORD *)(a3 + 40);
  *(_DWORD *)(a2 + 44) = *(_DWORD *)(a3 + 44);
  result = *(unsigned int *)(a3 + 48);
  *(_DWORD *)(a2 + 48) = result;
  return result;
}

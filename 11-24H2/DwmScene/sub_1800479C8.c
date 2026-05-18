/*
 * XREFs of sub_1800479C8 @ 0x1800479C8
 * Callers:
 *     sub_180047778 @ 0x180047778 (sub_180047778.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800479C8(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 result; // rax

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)a2 = *(_QWORD *)a3;
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a3 + 8);
  *(_QWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 8) = 0LL;
  *(_BYTE *)(a2 + 16) = *(_BYTE *)(a3 + 16);
  v3 = *(_DWORD *)(a3 + 20);
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_DWORD *)(a2 + 20) = v3;
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a3 + 24);
  *(_QWORD *)(a2 + 32) = *(_QWORD *)(a3 + 32);
  *(_QWORD *)(a3 + 24) = 0LL;
  *(_QWORD *)(a3 + 32) = 0LL;
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_QWORD *)(a2 + 40) = *(_QWORD *)(a3 + 40);
  *(_QWORD *)(a2 + 48) = *(_QWORD *)(a3 + 48);
  *(_QWORD *)(a3 + 40) = 0LL;
  *(_QWORD *)(a3 + 48) = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_QWORD *)(a2 + 64) = 0LL;
  *(_QWORD *)(a2 + 56) = *(_QWORD *)(a3 + 56);
  *(_QWORD *)(a2 + 64) = *(_QWORD *)(a3 + 64);
  *(_QWORD *)(a3 + 56) = 0LL;
  *(_QWORD *)(a3 + 64) = 0LL;
  *(_QWORD *)(a2 + 72) = 0LL;
  *(_QWORD *)(a2 + 80) = 0LL;
  *(_QWORD *)(a2 + 72) = *(_QWORD *)(a3 + 72);
  result = *(_QWORD *)(a3 + 80);
  *(_QWORD *)(a2 + 80) = result;
  *(_QWORD *)(a3 + 72) = 0LL;
  *(_QWORD *)(a3 + 80) = 0LL;
  return result;
}

/*
 * XREFs of sub_18004AAE0 @ 0x18004AAE0
 * Callers:
 *     sub_18004A3F8 @ 0x18004A3F8 (sub_18004A3F8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18004AAE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  __int64 result; // rax

  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_OWORD *)a2 = *(_OWORD *)a3;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a3 + 16);
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 24) = 15LL;
  *(_BYTE *)a3 = 0;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_QWORD *)(a2 + 32) = *(_QWORD *)a4;
  *(_QWORD *)(a2 + 40) = *(_QWORD *)(a4 + 8);
  *(_QWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 8) = 0LL;
  v4 = *(_DWORD *)(a4 + 16);
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_QWORD *)(a2 + 64) = 0LL;
  *(_DWORD *)(a2 + 48) = v4;
  *(_QWORD *)(a2 + 56) = *(_QWORD *)(a4 + 24);
  result = *(_QWORD *)(a4 + 32);
  *(_QWORD *)(a2 + 64) = result;
  *(_QWORD *)(a4 + 24) = 0LL;
  *(_QWORD *)(a4 + 32) = 0LL;
  return result;
}

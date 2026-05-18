/*
 * XREFs of sub_180025310 @ 0x180025310
 * Callers:
 *     sub_1800B9B70 @ 0x1800B9B70 (sub_1800B9B70.c)
 * Callees:
 *     sub_180069F6C @ 0x180069F6C (sub_180069F6C.c)
 */

__int64 __fastcall sub_180025310(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)a2 = *(_DWORD *)(a1 + 3552);
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 3556);
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 3560);
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 3564);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 + 3568);
  *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 3600);
  *(_QWORD *)(a2 + 40) = *(_QWORD *)(a1 + 3616);
  *(_QWORD *)(a2 + 48) = *(_QWORD *)(a1 + 3608);
  *(_QWORD *)(a2 + 56) = *(_QWORD *)(a1 + 3592);
  *(_QWORD *)(a2 + 64) = *(_QWORD *)(a1 + 3624);
  *(_QWORD *)(a2 + 72) = *(_QWORD *)(a1 + 3632);
  *(_DWORD *)(a2 + 20) = sub_180069F6C(&unk_1801C34D0, 0LL, 1LL, 1LL);
  *(_DWORD *)(a2 + 24) = sub_180069F6C(&unk_1801C34D0, 1LL, 1LL, 1LL);
  result = sub_180069F6C(&unk_1801C34D0, 11LL, 1LL, 1LL);
  *(_DWORD *)(a2 + 28) = result;
  return result;
}

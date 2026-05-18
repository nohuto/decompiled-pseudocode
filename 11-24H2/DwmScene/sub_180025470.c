/*
 * XREFs of sub_180025470 @ 0x180025470
 * Callers:
 *     sub_1800B9CD0 @ 0x1800B9CD0 (sub_1800B9CD0.c)
 * Callees:
 *     sub_18006A0CC @ 0x18006A0CC (sub_18006A0CC.c)
 */

__int64 __fastcall sub_180025470(__int64 a1, __int64 a2)
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
  *(_DWORD *)(a2 + 20) = sub_18006A0CC(&unk_1801C44E0, 0LL, 1LL, 1LL);
  *(_DWORD *)(a2 + 24) = sub_18006A0CC(&unk_1801C44E0, 1LL, 1LL, 1LL);
  result = sub_18006A0CC(&unk_1801C44E0, 11LL, 1LL, 1LL);
  *(_DWORD *)(a2 + 28) = result;
  return result;
}

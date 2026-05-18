/*
 * XREFs of sub_18003B348 @ 0x18003B348
 * Callers:
 *     sub_18003B3B8 @ 0x18003B3B8 (sub_18003B3B8.c)
 *     sub_1800659B4 @ 0x1800659B4 (sub_1800659B4.c)
 * Callees:
 *     sub_18003BD1C @ 0x18003BD1C (sub_18003BD1C.c)
 */

unsigned __int64 __fastcall sub_18003B348(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 result; // rax

  sub_18003BD1C();
  *(_DWORD *)(a1 + 172) = *a2;
  *(_DWORD *)(a1 + 176) = a2[1];
  *(_DWORD *)(a1 + 180) = a2[2];
  v4 = _InterlockedIncrement64(&qword_1801C2BB0);
  *(_QWORD *)(a1 + 208) = v4;
  result = *(_QWORD *)(a1 + 216);
  if ( v4 < result )
    v4 = *(_QWORD *)(a1 + 216);
  *(_QWORD *)(a1 + 216) = v4;
  return result;
}

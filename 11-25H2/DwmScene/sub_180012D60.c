/*
 * XREFs of sub_180012D60 @ 0x180012D60
 * Callers:
 *     sub_180012E00 @ 0x180012E00 (sub_180012E00.c)
 *     sub_18003B3B8 @ 0x18003B3B8 (sub_18003B3B8.c)
 *     sub_18003B538 @ 0x18003B538 (sub_18003B538.c)
 *     sub_1800604D0 @ 0x1800604D0 (sub_1800604D0.c)
 *     sub_1800632D4 @ 0x1800632D4 (sub_1800632D4.c)
 *     sub_1800659B4 @ 0x1800659B4 (sub_1800659B4.c)
 *     sub_18008BE50 @ 0x18008BE50 (sub_18008BE50.c)
 *     sub_18008BFD0 @ 0x18008BFD0 (sub_18008BFD0.c)
 * Callees:
 *     sub_18003BD1C @ 0x18003BD1C (sub_18003BD1C.c)
 */

unsigned __int64 __fastcall sub_180012D60(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 result; // rax

  sub_18003BD1C();
  *(_DWORD *)(a1 + 144) = *a2;
  *(_DWORD *)(a1 + 148) = a2[1];
  *(_DWORD *)(a1 + 152) = a2[2];
  v4 = _InterlockedIncrement64(&qword_1801C2BB0);
  *(_QWORD *)(a1 + 208) = v4;
  result = *(_QWORD *)(a1 + 216);
  if ( v4 < result )
    v4 = *(_QWORD *)(a1 + 216);
  *(_QWORD *)(a1 + 216) = v4;
  return result;
}

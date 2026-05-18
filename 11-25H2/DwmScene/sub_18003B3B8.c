/*
 * XREFs of sub_18003B3B8 @ 0x18003B3B8
 * Callers:
 *     sub_180039580 @ 0x180039580 (sub_180039580.c)
 *     sub_18003B44C @ 0x18003B44C (sub_18003B44C.c)
 * Callees:
 *     sub_180012D60 @ 0x180012D60 (sub_180012D60.c)
 *     sub_18003B2D0 @ 0x18003B2D0 (sub_18003B2D0.c)
 *     sub_18003B348 @ 0x18003B348 (sub_18003B348.c)
 *     sub_18003BD1C @ 0x18003BD1C (sub_18003BD1C.c)
 */

unsigned __int64 __fastcall sub_18003B3B8(__int64 a1, __int64 a2, __int128 *a3, __int64 a4)
{
  int v8; // eax
  int v9; // eax
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF

  sub_18003BD1C();
  v8 = *(_DWORD *)(a2 + 8);
  *(_QWORD *)&v11 = *(_QWORD *)a2;
  DWORD2(v11) = v8;
  sub_180012D60(a1, &v11);
  v11 = *a3;
  sub_18003B2D0(a1, &v11);
  v9 = *(_DWORD *)(a4 + 8);
  *(_QWORD *)&v11 = *(_QWORD *)a4;
  DWORD2(v11) = v9;
  return sub_18003B348(a1, &v11);
}

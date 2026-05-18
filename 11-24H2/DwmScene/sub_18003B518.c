/*
 * XREFs of sub_18003B518 @ 0x18003B518
 * Callers:
 *     sub_1800396E0 @ 0x1800396E0 (sub_1800396E0.c)
 *     sub_18003B5AC @ 0x18003B5AC (sub_18003B5AC.c)
 * Callees:
 *     sub_180012E60 @ 0x180012E60 (sub_180012E60.c)
 *     sub_18003B430 @ 0x18003B430 (sub_18003B430.c)
 *     sub_18003B4A8 @ 0x18003B4A8 (sub_18003B4A8.c)
 *     sub_18003BE7C @ 0x18003BE7C (sub_18003BE7C.c)
 */

unsigned __int64 __fastcall sub_18003B518(__int64 a1, __int64 a2, __int128 *a3, __int64 a4)
{
  int v8; // eax
  int v9; // eax
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF

  sub_18003BE7C();
  v8 = *(_DWORD *)(a2 + 8);
  *(_QWORD *)&v11 = *(_QWORD *)a2;
  DWORD2(v11) = v8;
  sub_180012E60(a1, &v11);
  v11 = *a3;
  sub_18003B430(a1, &v11);
  v9 = *(_DWORD *)(a4 + 8);
  *(_QWORD *)&v11 = *(_QWORD *)a4;
  DWORD2(v11) = v9;
  return sub_18003B4A8(a1, &v11);
}

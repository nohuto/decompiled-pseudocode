/*
 * XREFs of sub_18003B430 @ 0x18003B430
 * Callers:
 *     sub_18003B518 @ 0x18003B518 (sub_18003B518.c)
 *     sub_18003B7CC @ 0x18003B7CC (sub_18003B7CC.c)
 *     sub_180063434 @ 0x180063434 (sub_180063434.c)
 *     sub_180065B14 @ 0x180065B14 (sub_180065B14.c)
 * Callees:
 *     sub_18003BE7C @ 0x18003BE7C (sub_18003BE7C.c)
 */

unsigned __int64 __fastcall sub_18003B430(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 result; // rax

  sub_18003BE7C();
  *(_DWORD *)(a1 + 156) = *a2;
  *(_DWORD *)(a1 + 160) = a2[1];
  *(_DWORD *)(a1 + 164) = a2[2];
  *(_DWORD *)(a1 + 168) = a2[3];
  v4 = _InterlockedIncrement64(&qword_1801C3BE0);
  *(_QWORD *)(a1 + 208) = v4;
  result = *(_QWORD *)(a1 + 216);
  if ( v4 < result )
    v4 = *(_QWORD *)(a1 + 216);
  *(_QWORD *)(a1 + 216) = v4;
  return result;
}

/*
 * XREFs of sub_180012E60 @ 0x180012E60
 * Callers:
 *     sub_180012F00 @ 0x180012F00 (sub_180012F00.c)
 *     sub_18003B518 @ 0x18003B518 (sub_18003B518.c)
 *     sub_18003B698 @ 0x18003B698 (sub_18003B698.c)
 *     sub_180060630 @ 0x180060630 (sub_180060630.c)
 *     sub_180063434 @ 0x180063434 (sub_180063434.c)
 *     sub_180065B14 @ 0x180065B14 (sub_180065B14.c)
 *     sub_18008BFB0 @ 0x18008BFB0 (sub_18008BFB0.c)
 *     sub_18008C130 @ 0x18008C130 (sub_18008C130.c)
 * Callees:
 *     sub_18003BE7C @ 0x18003BE7C (sub_18003BE7C.c)
 */

unsigned __int64 __fastcall sub_180012E60(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 result; // rax

  sub_18003BE7C();
  *(_DWORD *)(a1 + 144) = *a2;
  *(_DWORD *)(a1 + 148) = a2[1];
  *(_DWORD *)(a1 + 152) = a2[2];
  v4 = _InterlockedIncrement64(&qword_1801C3BE0);
  *(_QWORD *)(a1 + 208) = v4;
  result = *(_QWORD *)(a1 + 216);
  if ( v4 < result )
    v4 = *(_QWORD *)(a1 + 216);
  *(_QWORD *)(a1 + 216) = v4;
  return result;
}

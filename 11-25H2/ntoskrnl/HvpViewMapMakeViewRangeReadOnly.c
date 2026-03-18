/*
 * XREFs of HvpViewMapMakeViewRangeReadOnly @ 0x140881A14
 * Callers:
 *     HvpViewMapMigrateCOWData @ 0x1407CF564 (HvpViewMapMigrateCOWData.c)
 *     HvpViewMapSealRange @ 0x1408819A4 (HvpViewMapSealRange.c)
 * Callees:
 *     CmSiProtectViewOfSection @ 0x14046BB00 (CmSiProtectViewOfSection.c)
 */

__int64 __fastcall HvpViewMapMakeViewRangeReadOnly(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 result; // rax
  int v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0;
  v4 = a3;
  result = CmSiProtectViewOfSection(
             a1,
             *(__int64 **)(a1 + 24),
             a3 + *(_QWORD *)(a2 + 56) - *(_QWORD *)(a2 + 24),
             a4 - a3,
             2u,
             (__int64)&v8);
  while ( v4 < a4 )
  {
    result = (unsigned __int64)(v4 - *(_QWORD *)(a2 + 24)) >> 12;
    *(_BYTE *)(result + a2 + 72) &= ~8u;
    v4 += 4096LL;
  }
  return result;
}

/*
 * XREFs of HvpViewMapMakeViewRangeReadOnly @ 0x140881A14
 * Callers:
 *     HvpViewMapMigrateCOWData @ 0x1407CF564 (HvpViewMapMigrateCOWData.c)
 *     HvpViewMapSealRange @ 0x1408819A4 (HvpViewMapSealRange.c)
 * Callees:
 *     CmSiProtectViewOfSection @ 0x14046BB00 (CmSiProtectViewOfSection.c)
 */

int __fastcall HvpViewMapMakeViewRangeReadOnly(ULONG_PTR a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned __int64 v7; // rax
  ULONG v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0;
  v4 = a3;
  LODWORD(v7) = CmSiProtectViewOfSection(
                  a1,
                  *(void ***)(a1 + 24),
                  (void *)(a3 + *(_QWORD *)(a2 + 56) - *(_QWORD *)(a2 + 24)),
                  a4 - a3,
                  2u,
                  &v9);
  while ( v4 < a4 )
  {
    v7 = (unsigned __int64)(v4 - *(_QWORD *)(a2 + 24)) >> 12;
    *(_BYTE *)(v7 + a2 + 72) &= ~8u;
    v4 += 4096LL;
  }
  return v7;
}

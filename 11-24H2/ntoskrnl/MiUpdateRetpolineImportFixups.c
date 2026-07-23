/*
 * XREFs of MiUpdateRetpolineImportFixups @ 0x14043A800
 * Callers:
 *     MiUpdateImagePfnImportRelocations @ 0x14043A5B4 (MiUpdateImagePfnImportRelocations.c)
 * Callees:
 *     RtlApplyImportRelocationToPage @ 0x14043AAF0 (RtlApplyImportRelocationToPage.c)
 */

__int64 __fastcall MiUpdateRetpolineImportFixups(int a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  int v4; // r14d
  int v5; // r15d
  BOOL v7; // ebp
  unsigned __int16 *v8; // rsi
  int v9; // ebx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rsi

  result = KiSpeculationFeatures;
  v4 = a2;
  v5 = 0;
  v7 = 1;
  v8 = *(unsigned __int16 **)(a2 + 8LL * a3 + 64);
  if ( (KiSpeculationFeatures & 0x20000000000LL) == 0 )
  {
    v5 = 1;
    result = -*(_QWORD *)(a2 + 16);
    v7 = *(_QWORD *)(a2 + 16) != 0LL;
  }
  if ( v8 )
  {
    v9 = a3 << 12;
    if ( v8[3] == 3 )
      result = RtlApplyImportRelocationToPage(a1, v9, a2, (int)Base + 4, (__int64)(v8 + 4), v7, 1, v5);
    v10 = (unsigned __int64)(v8 + 6);
    v11 = (unsigned __int64)v8 + *v8 + 12;
    while ( v10 < v11 )
    {
      result = RtlApplyImportRelocationToPage(a1, v9, v4, (int)Base + 4, v10, v7, 0, v5);
      v10 += 4LL;
    }
  }
  return result;
}

/*
 * XREFs of AslpFileGetImageCodeSectionHeader @ 0x14080E548
 * Callers:
 *     AslpFileGetCrcChecksumBoot @ 0x14080DA84 (AslpFileGetCrcChecksumBoot.c)
 * Callees:
 *     AslpMemoryRangeCheckBounds @ 0x140697B54 (AslpMemoryRangeCheckBounds.c)
 *     AslpMemorySpanCheckBounds @ 0x140697B90 (AslpMemorySpanCheckBounds.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileGetImageCodeSectionHeader(unsigned __int64 *a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v6; // rcx
  __int64 v7; // rbx
  bool v8; // zf
  _QWORD *v9; // rbx
  int v10; // r14d
  int i; // ebp
  const char *v12; // r9
  int v13; // r8d
  unsigned __int64 v14[2]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v15[3]; // [rsp+30h] [rbp-18h] BYREF

  v14[0] = 0LL;
  v14[1] = 40LL;
  if ( !a1 )
    return 3221225711LL;
  if ( !a2 )
    return 3221225712LL;
  if ( !a3 )
    return 3221225713LL;
  v6 = a3[1] - *a3;
  v15[0] = *a3;
  v15[1] = v6;
  if ( v6 < 0xF0 )
    return 3221225714LL;
  v7 = *(unsigned __int16 *)(a2 + 20) + 24LL;
  v8 = a2 + v7 == 0;
  v9 = (_QWORD *)(a2 + v7);
  v14[0] = (unsigned __int64)v9;
  if ( v8 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"AslpFileGetImageCodeSectionHeader",
      1895,
      (unsigned int)"AslpImageFirstSection failed to get the first image section");
    return 3221225595LL;
  }
  else
  {
    v10 = *(unsigned __int16 *)(a2 + 6);
    for ( i = 0; i < v10; ++i )
    {
      if ( !AslpMemorySpanCheckBounds(v14, v15) )
      {
        v12 = "IMAGE_SECTION_HEADER out of image boundary";
        v13 = 1904;
LABEL_20:
        AslLogCallPrintf(1, (unsigned int)"AslpFileGetImageCodeSectionHeader", v13, (_DWORD)v12);
        return 3221226030LL;
      }
      if ( *v9 == 0x747865742ELL )
      {
        *a1 = (unsigned __int64)v9;
        a1[1] = (unsigned __int64)(v9 + 5);
        if ( AslpMemoryRangeCheckBounds(a1, a3) )
          return 0LL;
        *a1 = 0LL;
        v12 = "Encountered section in image with out of bounds ptr + size";
        a1[1] = 0LL;
        v13 = 1916;
        goto LABEL_20;
      }
      v9 += 5;
      v14[0] = (unsigned __int64)v9;
    }
    AslLogCallPrintf(
      2,
      (unsigned int)"AslpFileGetImageCodeSectionHeader",
      1926,
      (unsigned int)"Image encountered without a .text section");
    return 3221226021LL;
  }
}

/*
 * XREFs of ExpGetProductInfoSuiteTypeMap @ 0x1407B7480
 * Callers:
 *     ExGetSuiteMask @ 0x1407B7320 (ExGetSuiteMask.c)
 *     ExpInitSystemPhase1 @ 0x140C42BB4 (ExpInitSystemPhase1.c)
 * Callees:
 *     <none>
 */

char __fastcall ExpGetProductInfoSuiteTypeMap(int a1, __int64 a2)
{
  char v2; // r9
  unsigned int i; // r8d
  int v4; // eax

  v2 = 0;
  for ( i = 0; i < 0x33; ++i )
  {
    if ( *(_DWORD *)&ExpProductInfoSuiteTypeMap[12 * i] == a1 )
    {
      v2 = 1;
      v4 = *(_DWORD *)&ExpProductInfoSuiteTypeMap[12 * i + 8];
      *(_QWORD *)a2 = *(_QWORD *)&ExpProductInfoSuiteTypeMap[12 * i];
      *(_DWORD *)(a2 + 8) = v4;
      return v2;
    }
  }
  return v2;
}

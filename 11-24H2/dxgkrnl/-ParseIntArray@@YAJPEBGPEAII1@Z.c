/*
 * XREFs of ?ParseIntArray@@YAJPEBGPEAII1@Z @ 0x140238E90
 * Callers:
 *     ?ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z @ 0x140238810 (-ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z.c)
 *     ?ParseAndCompareIntArrays@@YAJPEBGPEBIIPEAEPEAI@Z @ 0x140238CC8 (-ParseAndCompareIntArrays@@YAJPEBGPEBIIPEAEPEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ParseIntArray(const unsigned __int16 *a1, unsigned int *a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v4; // r10d
  __int64 i; // r11
  unsigned int v9; // esi
  unsigned int v10; // ecx
  int v11; // r8d

  v4 = *a4;
  for ( i = 0LL; (unsigned int)i < a3; i = (unsigned int)(i + 1) )
  {
    a2[i] = 0;
    v9 = 0;
    v10 = 0;
    while ( 1 )
    {
      v11 = a1[v4];
      if ( (unsigned __int16)(v11 - 48) > 9u )
        break;
      ++v4;
      ++v9;
      v10 = v11 + 2 * (5 * v10 - 24);
      a2[i] = v10;
      if ( v9 >= 5 )
      {
        WdLogSingleEntry1(3LL, a1);
        WdLogGlobalForLineNumber = 132;
        return 3221225485LL;
      }
    }
    if ( (unsigned int)i < a3 - 1 )
    {
      if ( v11 != 46 )
      {
        WdLogSingleEntry1(3LL, a1);
        WdLogGlobalForLineNumber = 141;
        return 3221225485LL;
      }
      ++v4;
    }
  }
  *a4 = v4;
  return 0LL;
}

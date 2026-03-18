/*
 * XREFs of ?ParseAndCompareHexValue@@YAJPEBGIPEAEPEAI@Z @ 0x1402321A0
 * Callers:
 *     ?ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z @ 0x140231E30 (-ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ParseAndCompareHexValue(const unsigned __int16 *a1, int a2, unsigned __int8 *a3, unsigned int *a4)
{
  int v4; // r10d
  int v6; // r11d
  char v7; // bl
  unsigned int v8; // edi
  unsigned __int16 v9; // dx
  bool v10; // zf
  int v11; // edx
  unsigned __int8 v13; // al

  v4 = *a4;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  while ( 1 )
  {
    v9 = a1[v4];
    if ( v9 == 35 )
      break;
    if ( !v9 )
    {
      WdLogSingleEntry1(3LL, a1);
      WdLogGlobalForLineNumber = 93;
      return 3221225485LL;
    }
    if ( v9 == 44 )
    {
      v10 = v6 == a2;
      v6 = 0;
      v8 = 0;
      if ( v10 )
        v7 = 1;
    }
    else
    {
      if ( (unsigned __int16)(v9 - 48) > 9u && (unsigned __int16)((v9 | 0x20) - 97) > 5u )
      {
        WdLogSingleEntry1(3LL, a1);
        WdLogGlobalForLineNumber = 75;
        return 3221225485LL;
      }
      if ( (unsigned __int16)(v9 - 48) > 9u )
        v11 = ((_BYTE)v9 - 7) & 0xF;
      else
        v11 = v9 - 48;
      ++v8;
      v6 = v11 + 16 * v6;
      if ( v8 > 8 )
      {
        WdLogSingleEntry1(3LL, a1);
        WdLogGlobalForLineNumber = 85;
        return 3221225485LL;
      }
    }
    ++v4;
  }
  v13 = v7;
  *a4 = v4 + 1;
  if ( v6 == a2 )
    v13 = 1;
  *a3 = v13;
  return 0LL;
}

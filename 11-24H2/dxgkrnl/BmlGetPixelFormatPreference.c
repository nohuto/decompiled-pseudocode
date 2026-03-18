/*
 * XREFs of BmlGetPixelFormatPreference @ 0x1402DE648
 * Callers:
 *     BmlCompareSourceModes @ 0x1402DDA38 (BmlCompareSourceModes.c)
 *     BmlGetNextBestSourceMode @ 0x1402DDD64 (BmlGetNextBestSourceMode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BmlGetPixelFormatPreference(int a1, int a2)
{
  int v3; // ecx
  int v4; // ecx
  unsigned int v6; // edx
  int v7; // ecx
  bool v8; // cf

  if ( a1 <= 31 )
  {
    if ( a1 != 31 )
    {
      if ( a1 )
      {
        v3 = a1 - 20;
        if ( !v3 )
          return 4LL;
        v4 = v3 - 1;
        if ( !v4 )
          return 4LL;
        if ( v4 == 2 )
          return 3LL;
      }
      else
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 311;
      }
      return 0xFFFFFFFFLL;
    }
    v6 = 5;
    if ( a2 != 1 )
      return (unsigned int)-1;
    return v6;
  }
  if ( a1 == 32 )
    return 1LL;
  if ( a1 == 35 )
    return 0xFFFFFFFFLL;
  if ( a1 != 41 )
  {
    if ( a1 == 113 )
    {
      v7 = a2 - 2;
      v8 = a2 == 2;
      v6 = 5;
      if ( !v8 && v7 != 1 )
        return (unsigned int)-1;
      return v6;
    }
    return 0xFFFFFFFFLL;
  }
  return 2LL;
}

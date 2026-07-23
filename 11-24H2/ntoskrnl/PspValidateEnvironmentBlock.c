/*
 * XREFs of PspValidateEnvironmentBlock @ 0x1409D9190
 * Callers:
 *     PspCaptureUserProcessParameters @ 0x1409D8840 (PspCaptureUserProcessParameters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspValidateEnvironmentBlock(__int16 *a1, __int64 *a2)
{
  __int16 *v2; // r10
  char v3; // di
  __int64 v5; // r9
  unsigned int v6; // r11d
  __int16 v7; // ax
  char v8; // dl
  unsigned __int64 v9; // r8
  __int64 v10; // rcx

  v2 = a1 + 1;
  v3 = 0;
  v5 = *a2 - 2;
  if ( *a1 )
  {
    v2 = a1;
    v5 = *a2;
  }
  v6 = 0;
  while ( v5 )
  {
    v7 = *v2;
    v8 = 0;
    ++v2;
    v9 = 0LL;
    v10 = 0LL;
    v5 -= 2LL;
    if ( v5 )
    {
      do
      {
        if ( !v7 )
          break;
        if ( v7 == 61 )
        {
          ++v9;
          if ( !v10 )
            v8 = 1;
        }
        v7 = *v2;
        ++v10;
        ++v2;
        v5 -= 2LL;
      }
      while ( v5 );
      if ( v10 )
        goto LABEL_12;
    }
    if ( v7 )
    {
LABEL_12:
      if ( !v9 || v8 && v9 < 2 )
        return 3221225485LL;
    }
    else
    {
      if ( v5 )
      {
        *a2 -= v5;
        v5 = 0LL;
      }
      v3 = 1;
    }
  }
  if ( !v3 )
    return (unsigned int)-1073741811;
  return v6;
}

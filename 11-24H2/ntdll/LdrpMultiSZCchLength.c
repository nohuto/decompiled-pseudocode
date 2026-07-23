/*
 * XREFs of LdrpMultiSZCchLength @ 0x1800E6C7C
 * Callers:
 *     RtlpConvertCultureNamesToLCIDs @ 0x18011E770 (RtlpConvertCultureNamesToLCIDs.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x18013DBC0 (RtlpConvertLCIDsToCultureNames.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrpMultiSZCchLength(_WORD *a1, __int64 a2, _DWORD *a3)
{
  unsigned int v4; // r10d
  unsigned __int64 v5; // rax
  _WORD *v6; // r8
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  _WORD *v9; // r9
  unsigned __int64 v10; // rcx

  v4 = 0;
  v5 = 0LL;
  if ( !a3 )
    return 3221225485LL;
  if ( a1 )
  {
    v6 = a1 + 1;
    LOBYTE(v5) = *a1 == 0;
    if ( *a1 )
      v6 = a1;
    while ( 1 )
    {
      if ( !*v6 )
      {
        LODWORD(v5) = v5 + 1;
        goto LABEL_16;
      }
      if ( v5 > 0x7FFFFFFF )
        break;
      v7 = 0x7FFFFFFF - v5;
      if ( 0x7FFFFFFF - v5 > 0x7FFFFFFF )
        break;
      v8 = 0x7FFFFFFF - v5;
      v9 = v6;
      if ( v7 )
      {
        do
        {
          if ( !*v9 )
            break;
          ++v9;
          --v8;
        }
        while ( v8 );
      }
      v10 = v8 ? v7 - v8 : 0LL;
      if ( !v8 )
        break;
      v5 += v10 + 1;
      v6 += v10 + 1;
    }
    v4 = -2147483643;
    LODWORD(v5) = 0;
  }
LABEL_16:
  *a3 = v5;
  return v4;
}

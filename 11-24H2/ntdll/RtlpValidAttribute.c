/*
 * XREFs of RtlpValidAttribute @ 0x180139F30
 * Callers:
 *     RtlAddResourceAttributeAce @ 0x180139330 (RtlAddResourceAttributeAce.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x1800D7350 (RtlStringCchLengthW.c)
 */

char __fastcall RtlpValidAttribute(_WORD **a1)
{
  __int64 v2; // r10
  __int64 v3; // r11
  unsigned int v4; // r8d
  __int64 v5; // rdx
  unsigned int k; // ecx
  __int64 v7; // r9
  unsigned int j; // eax
  unsigned int i; // ecx
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  if ( !a1 )
    return 0;
  if ( !*a1 )
    return 0;
  if ( (int)RtlStringCchLengthW(*a1, 0xFFFFuLL, &v10) < 0 || v10 == v2 )
    return 0;
  if ( *(_WORD *)(v3 + 10) != (_WORD)v2 )
    return 0;
  if ( (*(_DWORD *)(v3 + 12) & 0xFFC0) != 0 )
    return 0;
  v4 = *(_DWORD *)(v3 + 16);
  if ( !v4 )
    return 0;
  v5 = *(_QWORD *)(v3 + 24);
  if ( !v5 )
    return 0;
  if ( *(_WORD *)(v3 + 8) != 1 && *(_WORD *)(v3 + 8) != 2 )
  {
    switch ( *(_WORD *)(v3 + 8) )
    {
      case 3:
        for ( i = v2; i < v4; ++i )
        {
          if ( *(_QWORD *)(v5 + 8LL * i) == v2 )
            return 0;
        }
        break;
      case 5:
        for ( j = v2; j < v4; ++j )
        {
          if ( *(_QWORD *)(v5 + 16LL * j) == v2 || *(_DWORD *)(v5 + 16LL * j + 8) == (_DWORD)v2 )
            return 0;
        }
        break;
      case 6:
        while ( (unsigned int)v2 < v4 )
        {
          if ( *(_QWORD *)(v5 + 8LL * (unsigned int)v2) >= 2uLL )
            return 0;
          LODWORD(v2) = v2 + 1;
        }
        break;
      case 0x10:
        for ( k = v2; k < v4; ++k )
        {
          v7 = v5 + 16LL * k;
          if ( *(_QWORD *)v7 )
          {
            if ( *(_DWORD *)(v7 + 8) == (_DWORD)v2 )
              return 0;
          }
          else if ( *(_DWORD *)(v7 + 8) != (_DWORD)v2 )
          {
            return 0;
          }
        }
        break;
      default:
        return 0;
    }
  }
  return 1;
}

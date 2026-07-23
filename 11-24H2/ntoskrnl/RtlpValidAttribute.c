/*
 * XREFs of RtlpValidAttribute @ 0x1407806E4
 * Callers:
 *     RtlAddResourceAttributeAce @ 0x14077FDD0 (RtlAddResourceAttributeAce.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x140420BA0 (RtlStringCchLengthW.c)
 */

char __fastcall RtlpValidAttribute(const wchar_t **a1)
{
  const wchar_t *v1; // rcx
  __int64 v2; // r10
  __int64 v3; // r11
  unsigned int v4; // r8d
  __int64 v5; // rdx
  unsigned int k; // ecx
  int v7; // r9d
  unsigned int j; // eax
  unsigned int i; // ecx
  size_t pcchLength; // [rsp+30h] [rbp+8h] BYREF

  pcchLength = 0LL;
  if ( !a1 )
    return 0;
  v1 = *a1;
  if ( !v1 )
    return 0;
  if ( RtlStringCchLengthW(v1, 0xFFFFuLL, &pcchLength) < 0 )
    return 0;
  if ( pcchLength == v2 )
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
        return 1;
      case 5:
        for ( j = v2; j < v4; ++j )
        {
          if ( *(_QWORD *)(v5 + 16LL * j) == v2 || *(_DWORD *)(v5 + 16LL * j + 8) == (_DWORD)v2 )
            return 0;
        }
        return 1;
      case 6:
        while ( (unsigned int)v2 < v4 )
        {
          if ( *(_QWORD *)(v5 + 8LL * (unsigned int)v2) > 1uLL )
            return 0;
          LODWORD(v2) = v2 + 1;
        }
        return 1;
      case 0x10:
        for ( k = v2; k < v4; ++k )
        {
          v7 = *(_DWORD *)(v5 + 16LL * k + 8);
          if ( *(_QWORD *)(v5 + 16LL * k) == v2 )
          {
            if ( v7 )
              return 0;
          }
          else if ( !v7 )
          {
            return 0;
          }
        }
        return 1;
    }
    return 0;
  }
  return 1;
}

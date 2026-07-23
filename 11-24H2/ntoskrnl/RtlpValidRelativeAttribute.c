/*
 * XREFs of RtlpValidRelativeAttribute @ 0x140983640
 * Callers:
 *     RtlpValidAttributeAce @ 0x1409835D0 (RtlpValidAttributeAce.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x14044CF68 (RtlStringCbLengthW.c)
 */

char __fastcall RtlpValidRelativeAttribute(unsigned int *a1, unsigned int a2)
{
  unsigned int v2; // r11d
  __int64 v5; // r8
  __int64 v6; // rax
  unsigned int v7; // ecx
  _WORD *v8; // rax
  unsigned __int64 i; // rdx
  unsigned int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned int k; // edx
  unsigned int j; // esi
  __int64 v16; // rcx
  unsigned int v17; // r10d
  __int64 v18; // rcx
  size_t pcbLength; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( !a1 )
    return 0;
  if ( a2 < 0x14 )
    return 0;
  if ( *((_WORD *)a1 + 3) )
    return 0;
  if ( (a1[2] & 0xFFC0) != 0 )
    return 0;
  v5 = a1[3];
  if ( !(_DWORD)v5 )
    return 0;
  v6 = *a1;
  if ( a2 < (unsigned int)v6 )
    return 0;
  v7 = a2 - v6;
  if ( a2 - (unsigned int)v6 < 4 )
    return 0;
  v8 = (_WORD *)((char *)a1 + v6);
  if ( !v8 )
    return 0;
  for ( i = (unsigned __int64)v7 >> 1; i; --i )
  {
    if ( !*v8 )
      break;
    ++v8;
  }
  if ( !i || (unsigned __int64)(4 * v5) > 0xFFFFFFFF || a2 - 16 < 4 * (int)v5 )
    return 0;
  switch ( *((_WORD *)a1 + 2) )
  {
    case 1:
    case 2:
      while ( v2 < (unsigned int)v5 )
      {
        v11 = a1[v2 + 4];
        if ( a2 < v11 || a2 - v11 < 8 )
          return 0;
        ++v2;
      }
      return 1;
    case 3:
      for ( j = 0; j < a1[3]; ++j )
      {
        v18 = a1[j + 4];
        if ( a2 < (unsigned int)v18
          || a2 - (unsigned int)v18 < 2
          || RtlStringCbLengthW((STRSAFE_PCNZWCH)((char *)a1 + v18), a2 - (unsigned int)v18, &pcbLength) < 0 )
        {
          return 0;
        }
      }
      return 1;
    case 5:
      for ( k = 0; k < (unsigned int)v5; ++k )
      {
        v16 = a1[k + 4];
        if ( a2 < (unsigned int)v16 )
          return 0;
        if ( a2 - (unsigned int)v16 < 4 )
          return 0;
        v17 = *(unsigned int *)((char *)a1 + v16);
        if ( !v17 || (int)v16 + 4 < (unsigned int)v16 || a2 - ((_DWORD)v16 + 4) < v17 )
          return 0;
      }
      return 1;
    case 6:
      while ( v2 < (unsigned int)v5 )
      {
        v13 = a1[v2 + 4];
        if ( a2 < (unsigned int)v13 || a2 - (unsigned int)v13 < 8 || *(_QWORD *)((char *)a1 + v13) > 1uLL )
          return 0;
        ++v2;
      }
      return 1;
  }
  if ( *((_WORD *)a1 + 2) != 16 )
    return 0;
  while ( v2 < (unsigned int)v5 )
  {
    v12 = a1[v2 + 4];
    if ( a2 < (unsigned int)v12
      || a2 - (unsigned int)v12 < 4
      || (int)v12 + 4 < (unsigned int)v12
      || a2 - ((_DWORD)v12 + 4) < *(unsigned int *)((char *)a1 + v12) )
    {
      return 0;
    }
    ++v2;
  }
  return 1;
}

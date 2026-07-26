/*
 * XREFs of SepSddlGetAclForString @ 0x140157F40
 * Callers:
 *     SepSddlDaclFromSDDLString @ 0x140157E54 (SepSddlDaclFromSDDLString.c)
 * Callees:
 *     memset @ 0x1400EE380 (memset.c)
 *     SepSddlAddAceToAcl @ 0x140157D54 (SepSddlAddAceToAcl.c)
 *     SepSddlGetSidForString @ 0x1401582B0 (SepSddlGetSidForString.c)
 *     SepSddlLookupAccessMaskInTable @ 0x140158384 (SepSddlLookupAccessMaskInTable.c)
 *     SepSddlParseWideStringUlong @ 0x14015841C (SepSddlParseWideStringUlong.c)
 */

__int64 __fastcall SepSddlGetAclForString(wchar_t *Str1, const void **a2, wchar_t **a3)
{
  wchar_t *v5; // rbx
  unsigned int SidForString; // edi
  unsigned int v7; // r15d
  wchar_t *v8; // rax
  __int64 v10; // rax
  wchar_t *v11; // rax
  wchar_t *v12; // rcx
  int i; // r8d
  unsigned int v14; // edx
  _QWORD *v15; // rax
  unsigned int v16; // r12d
  PVOID PoolWithTag; // rax
  _WORD *v18; // r15
  unsigned int v19; // eax
  unsigned int v20; // r15d
  ACCESS_MASK AccessMask; // r12d
  wchar_t *j; // rbx
  wchar_t *v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  _WORD *v27; // rbx
  _WORD *v28; // rcx
  wchar_t *v29; // [rsp+40h] [rbp-18h] BYREF
  PSID Sid; // [rsp+48h] [rbp-10h]
  _WORD *v31; // [rsp+A0h] [rbp+48h] BYREF
  int v32; // [rsp+A8h] [rbp+50h]
  int v33; // [rsp+B0h] [rbp+58h]
  int v34; // [rsp+B8h] [rbp+60h] BYREF

  *a2 = 0LL;
  v5 = Str1;
  v33 = 0;
  SidForString = 0;
  v29 = 0LL;
  Sid = 0LL;
  v7 = 0;
  v8 = wcschr(Str1, 0x3Au);
  *a3 = v8;
  if ( v8 == v5 )
    return 3221225485LL;
  if ( v8 )
  {
    v11 = v8 - 1;
  }
  else
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v5[v10] );
    v11 = &v5[v10];
  }
  *a3 = v11;
  v12 = v5;
  for ( i = 0; v12 < v11; ++v12 )
  {
    if ( *v12 == 59 )
    {
      ++v7;
    }
    else if ( *v12 != 32 )
    {
      i = 1;
    }
  }
  v14 = v7 / 5;
  LODWORD(v31) = v7 / 5;
  if ( v7 != 5 * (v7 / 5) || !v7 && i )
    return (unsigned int)-1073741811;
  if ( v14 )
  {
    v16 = 48 * v14 + 8;
    if ( v16 > 0xFFFF )
      v16 = 0xFFFF;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v16, 0x6C416553u);
    *a2 = PoolWithTag;
    v18 = PoolWithTag;
    if ( PoolWithTag )
    {
      v34 = 8;
      memset(PoolWithTag, 0, v16);
      *v18 = 2;
      v18[1] = v16;
      v19 = 0;
      *((_DWORD *)v18 + 1) = 0;
      v20 = (unsigned int)v31;
      v32 = 0;
      while ( v19 < v20 )
      {
        AccessMask = 0;
        LODWORD(v31) = 0;
        while ( *v5 == 32 )
          ++v5;
        if ( *v5 == 40 )
        {
          do
            ++v5;
          while ( *v5 == 32 );
        }
        if ( _wcsnicmp(v5, L"A", 1uLL) )
          goto LABEL_66;
        for ( j = v5 + 2; *j == 32; ++j )
          ;
        if ( *j != 59 )
        {
LABEL_66:
          SidForString = -1073741811;
LABEL_67:
          v28 = *a2;
LABEL_69:
          ExFreePoolWithTag(v28, 0);
          *a2 = 0LL;
          return SidForString;
        }
        do
          ++j;
        while ( *j == 32 );
        while ( *j != 59 )
        {
          for ( ; *j == 32; ++j )
            ;
          if ( (unsigned int)SepSddlLookupAccessMaskInTable(j) )
          {
            AccessMask |= v33;
            LODWORD(v31) = AccessMask;
          }
          else
          {
            SepSddlParseWideStringUlong(j, &v29, &v31);
            if ( v29 == j )
              goto LABEL_66;
            AccessMask = (unsigned int)v31;
          }
          j = v29;
        }
        v23 = j + 1;
        v24 = 2LL;
        do
        {
          while ( *v23 == 32 )
            ++v23;
          if ( *v23 != 59 )
            SidForString = -1073741811;
          ++v23;
          --v24;
        }
        while ( v24 );
        if ( SidForString )
          goto LABEL_67;
        while ( *v23 == 32 )
          ++v23;
        v31 = 0LL;
        SidForString = SepSddlGetSidForString(v23);
        if ( SidForString )
          break;
        v27 = v31;
        if ( !v31 )
          goto LABEL_57;
        while ( *v27 == 32 )
          ++v27;
        if ( *v27 != 41 )
        {
LABEL_57:
          SidForString = -1073741705;
          goto LABEL_67;
        }
        v5 = v27 + 1;
        if ( Sid )
        {
          SidForString = SepSddlAddAceToAcl(a2, &v34, v25, v26, AccessMask, v20 - v32, Sid);
          if ( SidForString )
            goto LABEL_67;
        }
        if ( *v5 == 40 )
          ++v5;
        v19 = ++v32;
      }
      v28 = *a2;
      if ( SidForString )
        goto LABEL_69;
      v28[1] = v34;
      return SidForString;
    }
    return (unsigned int)-1073741670;
  }
  v15 = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x6C416553u);
  *a2 = v15;
  if ( !v15 )
    return (unsigned int)-1073741670;
  *v15 = 524290LL;
  return SidForString;
}

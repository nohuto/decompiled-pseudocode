/*
 * XREFs of SepSddlGetAclForString @ 0x1400D9B30
 * Callers:
 *     SepSddlDaclFromSDDLString @ 0x1400D9A44 (SepSddlDaclFromSDDLString.c)
 * Callees:
 *     memset @ 0x1400AC800 (memset.c)
 *     SepSddlAddAceToAcl @ 0x1400D9944 (SepSddlAddAceToAcl.c)
 *     SepSddlGetSidForString @ 0x1400D9EA0 (SepSddlGetSidForString.c)
 *     SepSddlLookupAccessMaskInTable @ 0x1400D9F74 (SepSddlLookupAccessMaskInTable.c)
 *     SepSddlParseWideStringUlong @ 0x1400DA00C (SepSddlParseWideStringUlong.c)
 */

__int64 __fastcall SepSddlGetAclForString(wchar_t *AclString, _ACL **Acl, wchar_t **End)
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
  _ACL *v15; // rax
  unsigned int v16; // r12d
  _ACL *PoolWithTag; // rax
  _ACL *v18; // r15
  unsigned int v19; // eax
  unsigned int v20; // r15d
  ACCESS_MASK v21; // r12d
  wchar_t *j; // rbx
  wchar_t *v23; // rbx
  __int64 v24; // rcx
  unsigned int v25; // r8d
  unsigned int v26; // r9d
  wchar_t *v27; // rbx
  _ACL *v28; // rcx
  wchar_t *MaskEnd; // [rsp+40h] [rbp-18h] BYREF
  void *SidPtr; // [rsp+48h] [rbp-10h] BYREF
  wchar_t *EndLocation; // [rsp+A0h] [rbp+48h] BYREF
  int v32; // [rsp+A8h] [rbp+50h]
  unsigned int AccessMask; // [rsp+B0h] [rbp+58h] BYREF
  unsigned int AclUsed; // [rsp+B8h] [rbp+60h] BYREF

  *Acl = 0LL;
  v5 = AclString;
  AccessMask = 0;
  SidForString = 0;
  MaskEnd = 0LL;
  SidPtr = 0LL;
  v7 = 0;
  v8 = wcschr(AclString, 0x3Au);
  *End = v8;
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
  *End = v11;
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
  LODWORD(EndLocation) = v7 / 5;
  if ( v7 != 5 * (v7 / 5) || !v7 && i )
    return (unsigned int)-1073741811;
  if ( v14 )
  {
    v16 = 48 * v14 + 8;
    if ( v16 > 0xFFFF )
      v16 = 0xFFFF;
    PoolWithTag = (_ACL *)ExAllocatePoolWithTag(PagedPool, v16, 0x6C416553u);
    *Acl = PoolWithTag;
    v18 = PoolWithTag;
    if ( PoolWithTag )
    {
      AclUsed = 8;
      memset(PoolWithTag, 0, v16);
      *(_WORD *)&v18->AclRevision = 2;
      v18->AclSize = v16;
      v19 = 0;
      *(_DWORD *)&v18->AceCount = 0;
      v20 = (unsigned int)EndLocation;
      v32 = 0;
      while ( v19 < v20 )
      {
        v21 = 0;
        LODWORD(EndLocation) = 0;
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
          v28 = *Acl;
LABEL_69:
          ExFreePoolWithTag(v28, 0);
          *Acl = 0LL;
          return SidForString;
        }
        do
          ++j;
        while ( *j == 32 );
        while ( *j != 59 )
        {
          for ( ; *j == 32; ++j )
            ;
          if ( SepSddlLookupAccessMaskInTable(j, &AccessMask, &MaskEnd) )
          {
            v21 |= AccessMask;
            LODWORD(EndLocation) = v21;
          }
          else
          {
            SepSddlParseWideStringUlong(j, (const wchar_t **)&MaskEnd, (unsigned int *)&EndLocation);
            if ( MaskEnd == j )
              goto LABEL_66;
            v21 = (unsigned int)EndLocation;
          }
          j = MaskEnd;
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
        EndLocation = 0LL;
        SidForString = SepSddlGetSidForString(v23, &SidPtr, &EndLocation);
        if ( SidForString )
          break;
        v27 = EndLocation;
        if ( !EndLocation )
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
        if ( SidPtr )
        {
          SidForString = SepSddlAddAceToAcl(Acl, &AclUsed, v25, v26, v21, v20 - v32, SidPtr);
          if ( SidForString )
            goto LABEL_67;
        }
        if ( *v5 == 40 )
          ++v5;
        v19 = ++v32;
      }
      v28 = *Acl;
      if ( SidForString )
        goto LABEL_69;
      v28->AclSize = AclUsed;
      return SidForString;
    }
    return (unsigned int)-1073741670;
  }
  v15 = (_ACL *)ExAllocatePoolWithTag(PagedPool, 8uLL, 0x6C416553u);
  *Acl = v15;
  if ( !v15 )
    return (unsigned int)-1073741670;
  *v15 = (_ACL)524290LL;
  return SidForString;
}

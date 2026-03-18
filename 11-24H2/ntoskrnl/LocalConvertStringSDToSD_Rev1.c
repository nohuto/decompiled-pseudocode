/*
 * XREFs of LocalConvertStringSDToSD_Rev1 @ 0x140863ECC
 * Callers:
 *     SeConvertStringSecurityDescriptorToSecurityDescriptor @ 0x1404747D0 (SeConvertStringSecurityDescriptorToSecurityDescriptor.c)
 * Callees:
 *     _wcsnicmp @ 0x1404FE4F0 (_wcsnicmp.c)
 *     LocalpConvertStringSidToSid @ 0x140862418 (LocalpConvertStringSidToSid.c)
 *     RtlMakeSelfRelativeSD @ 0x140862B74 (RtlMakeSelfRelativeSD.c)
 *     SddlpAlloc @ 0x1408638C4 (SddlpAlloc.c)
 *     SddlpFree @ 0x140863910 (SddlpFree.c)
 *     LocalGetAclForString @ 0x140865750 (LocalGetAclForString.c)
 *     LookupSidInTable @ 0x140866BD0 (LookupSidInTable.c)
 *     RtlNtStatusToDosError @ 0x140867430 (RtlNtStatusToDosError.c)
 */

__int64 __fastcall LocalConvertStringSDToSD_Rev1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        wchar_t *a4,
        char **a5,
        _DWORD *a6)
{
  wchar_t *v6; // rbx
  void *v7; // r12
  void *v8; // r15
  char v9; // r13
  char v10; // r14
  wchar_t v11; // ax
  wchar_t *v12; // rbx
  unsigned int i; // edi
  int v14; // ecx
  __int64 v15; // rax
  wchar_t *v16; // rbx
  unsigned int j; // edi
  int v18; // ecx
  ULONG AclForString; // edi
  wchar_t *v21; // rbx
  __int64 v22; // rax
  char v23; // al
  wchar_t *v24; // rbx
  __int64 v25; // rax
  NTSTATUS v26; // eax
  NTSTATUS v27; // eax
  __int16 v28; // bx
  __int16 v29; // ax
  __int16 v30; // bx
  void *v31; // rcx
  __int16 v32; // bx
  void *v33; // rcx
  char *v34; // rax
  NTSTATUS SelfRelativeSD; // eax
  int v36; // [rsp+28h] [rbp-79h]
  wchar_t *v37; // [rsp+48h] [rbp-59h] BYREF
  int v38; // [rsp+50h] [rbp-51h]
  unsigned int Size[3]; // [rsp+54h] [rbp-4Dh] BYREF
  void *v40; // [rsp+60h] [rbp-41h] BYREF
  __int64 v41; // [rsp+68h] [rbp-39h] BYREF
  void *v42; // [rsp+70h] [rbp-31h]
  void *v43; // [rsp+78h] [rbp-29h]
  __int128 v44; // [rsp+80h] [rbp-21h] BYREF
  __int128 v45; // [rsp+90h] [rbp-11h]
  void *v46; // [rsp+A0h] [rbp-1h]
  char v47; // [rsp+F8h] [rbp+57h]
  char v48; // [rsp+100h] [rbp+5Fh]
  char v49; // [rsp+108h] [rbp+67h]
  int v50; // [rsp+110h] [rbp+6Fh]

  v6 = a4;
  v40 = 0LL;
  v7 = 0LL;
  v42 = 0LL;
  v8 = 0LL;
  v43 = 0LL;
  v9 = 0;
  v37 = 0LL;
  v10 = 0;
  v49 = 0;
  memset(Size, 0, sizeof(Size));
  v48 = 0;
  v47 = 0;
  LOWORD(v38) = 0;
  LOWORD(v50) = 0;
  if ( !a4 || !a5 )
    return 87LL;
  if ( a6 )
    *a6 = 0;
  while ( v6 )
  {
    v11 = *v6;
    if ( *v6 )
    {
      switch ( v11 )
      {
        case 'D':
          if ( v6[1] != 58 )
            goto LABEL_81;
          v12 = v6 + 2;
          if ( v42 )
            goto LABEL_81;
          if ( *v12 != 40 )
          {
            v38 = 0;
            do
            {
              if ( *v12 != 32 )
                break;
              ++v12;
            }
            while ( v12 );
LABEL_13:
            for ( i = 0; i < 6; ++i )
            {
              if ( ((__int64)(&ControlLookup)[3 * i + 1] & 1) != 0
                && !wcsnicmp(v12, (&ControlLookup)[3 * i], *((unsigned int *)&ControlLookup + 6 * i + 2)) )
              {
                HIWORD(v14) = HIWORD(v38);
                LOWORD(v14) = *((_WORD *)&ControlLookup + 12 * i + 6) | v38;
                v15 = *((unsigned int *)&ControlLookup + 6 * i + 2);
                v38 = v14;
                for ( v12 += v15; v12; ++v12 )
                {
                  if ( *v12 != 32 )
                    break;
                }
                goto LABEL_13;
              }
            }
            v37 = v12;
          }
          v36 = 0;
          AclForString = LocalGetAclForString(v12);
          if ( AclForString )
            goto LABEL_48;
          v6 = v37;
          v10 = 1;
          v48 = 1;
          break;
        case 'G':
          AclForString = 87;
          if ( v6[1] != 58 )
            goto LABEL_48;
          v24 = v6 + 2;
          if ( v8 )
            goto LABEL_48;
          v41 = 0LL;
          AclForString = 0;
          if ( !v24 )
          {
LABEL_81:
            AclForString = 87;
            goto LABEL_48;
          }
          v9 = 0;
          if ( !*v24 || !v24[1] )
          {
            AclForString = 1332;
            goto LABEL_48;
          }
          v37 = v24 + 2;
          v25 = LookupSidInTable(v24, 0LL, v36, 0, (__int64)&v41);
          if ( v25 )
          {
            v8 = *(void **)(v25 + 16);
LABEL_69:
            v40 = v8;
            goto LABEL_70;
          }
          v8 = (void *)v41;
          if ( v41 )
          {
            v9 = 1;
            goto LABEL_69;
          }
          v37 -= 2;
          v27 = LocalpConvertStringSidToSid(v24, (__int64 *)&v40, &v37);
          if ( v27 < 0 && (AclForString = RtlNtStatusToDosError(v27)) != 0 )
          {
            v8 = v40;
          }
          else
          {
            v8 = v40;
            if ( v40 )
              v9 = 1;
          }
LABEL_70:
          if ( AclForString )
            goto LABEL_48;
          v6 = v37;
          break;
        case 'O':
          AclForString = 87;
          if ( v6[1] != 58 )
            goto LABEL_48;
          v21 = v6 + 2;
          if ( v7 )
            goto LABEL_48;
          v41 = 0LL;
          AclForString = 0;
          if ( !v21 )
            goto LABEL_81;
          v49 = 0;
          if ( !*v21 || !v21[1] )
          {
            AclForString = 1332;
            goto LABEL_50;
          }
          v37 = v21 + 2;
          v22 = LookupSidInTable(v21, 0LL, v36, 0, (__int64)&v41);
          if ( v22 )
          {
            v7 = *(void **)(v22 + 16);
            v23 = 0;
            *(_QWORD *)&Size[1] = v7;
            goto LABEL_60;
          }
          v7 = (void *)v41;
          if ( v41 )
          {
            *(_QWORD *)&Size[1] = v41;
LABEL_76:
            v23 = 1;
            v49 = 1;
            goto LABEL_60;
          }
          v37 -= 2;
          v26 = LocalpConvertStringSidToSid(v21, (__int64 *)&Size[1], &v37);
          if ( v26 < 0 && (AclForString = RtlNtStatusToDosError(v26)) != 0 )
          {
            v7 = *(void **)&Size[1];
          }
          else
          {
            v7 = *(void **)&Size[1];
            if ( *(_QWORD *)&Size[1] )
              goto LABEL_76;
          }
          v23 = 0;
LABEL_60:
          if ( AclForString )
            goto LABEL_48;
          v6 = v37;
          v49 = v23;
          break;
        case ' ':
          ++v6;
          break;
        case 'S':
          if ( v6[1] != 58 )
            goto LABEL_81;
          v16 = v6 + 2;
          if ( v43 )
            goto LABEL_81;
          if ( *v16 != 40 )
          {
            v50 = 0;
            do
            {
              if ( *v16 != 32 )
                break;
              ++v16;
            }
            while ( v16 );
LABEL_31:
            for ( j = 0; j < 6; ++j )
            {
              if ( ((__int64)(&ControlLookup)[3 * j + 1] & 2) != 0
                && !wcsnicmp(v16, (&ControlLookup)[3 * j], *((unsigned int *)&ControlLookup + 6 * j + 2)) )
              {
                HIWORD(v18) = HIWORD(v50);
                LOWORD(v18) = *((_WORD *)&ControlLookup + 12 * j + 6) | v50;
                v50 = v18;
                for ( v16 += *((unsigned int *)&ControlLookup + 6 * j + 2); v16; ++v16 )
                {
                  if ( *v16 != 32 )
                    break;
                }
                goto LABEL_31;
              }
            }
            v10 = v48;
            v37 = v16;
          }
          v36 = 0;
          AclForString = LocalGetAclForString(v16);
          if ( AclForString )
            goto LABEL_48;
          v6 = v37;
          v47 = 1;
          break;
        default:
          goto LABEL_81;
      }
    }
    else
    {
      v6 = 0LL;
    }
  }
  v44 = 0LL;
  v46 = 0LL;
  v28 = v38 | v50;
  LOBYTE(v44) = 1;
  v29 = v38 | v50;
  WORD1(v44) = v38 | v50;
  v45 = 0LL;
  if ( v7 )
  {
    if ( v28 < 0 )
    {
      AclForString = RtlNtStatusToDosError(-1073741703);
      v29 = v28;
      if ( AclForString )
        goto LABEL_48;
    }
    else
    {
      *((_QWORD *)&v44 + 1) = v7;
      v28 &= ~1u;
      WORD1(v44) = v28;
      v29 = v28;
    }
  }
  if ( v8 )
  {
    if ( v29 < 0 )
    {
      AclForString = RtlNtStatusToDosError(-1073741703);
      if ( AclForString )
        goto LABEL_48;
    }
    else
    {
      *(_QWORD *)&v45 = v8;
      v28 &= ~2u;
      WORD1(v44) = v28;
    }
  }
  if ( v10 )
  {
    if ( v28 < 0 )
    {
      AclForString = RtlNtStatusToDosError(-1073741703);
      if ( AclForString )
        goto LABEL_48;
    }
    else
    {
      v30 = v28 | 4;
      v31 = 0LL;
      if ( v42 )
        v31 = v42;
      v28 = v30 & 0xFFF7;
      v46 = v31;
      WORD1(v44) = v28;
    }
  }
  if ( v47 )
  {
    if ( v28 < 0 )
    {
      AclForString = RtlNtStatusToDosError(-1073741703);
      if ( AclForString )
        goto LABEL_48;
    }
    else
    {
      v32 = v28 | 0x10;
      v33 = 0LL;
      if ( v43 )
        v33 = v43;
      v28 = v32 & 0xFFDF;
      *((_QWORD *)&v45 + 1) = v33;
      WORD1(v44) = v28;
    }
  }
  if ( v28 < 0 || (unsigned int)RtlMakeSelfRelativeSD((__int64)&v44, *a5, Size) != -1073741789 )
  {
    AclForString = 122;
    goto LABEL_48;
  }
  AclForString = 0;
  v34 = (char *)SddlpAlloc(Size[0]);
  *a5 = v34;
  if ( !v34 )
  {
    AclForString = 8;
    goto LABEL_48;
  }
  if ( (WORD1(v44) & 0x8000) != 0 )
  {
    SelfRelativeSD = -1073741593;
    goto LABEL_104;
  }
  SelfRelativeSD = RtlMakeSelfRelativeSD((__int64)&v44, v34, Size);
  if ( SelfRelativeSD < 0 )
  {
LABEL_104:
    AclForString = RtlNtStatusToDosError(SelfRelativeSD);
    SddlpFree(*a5);
    *a5 = 0LL;
    if ( AclForString )
      goto LABEL_48;
  }
  if ( a6 )
    *a6 = Size[0];
LABEL_48:
  if ( v49 == 1 )
    SddlpFree(v7);
LABEL_50:
  if ( v9 == 1 )
    SddlpFree(v8);
  SddlpFree(v42);
  SddlpFree(v43);
  return AclForString;
}

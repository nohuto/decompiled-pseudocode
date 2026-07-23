/*
 * XREFs of RtlReplaceSidInSd @ 0x140780D90
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x140449130 (RtlGetDaclSecurityDescriptor.c)
 *     RtlLengthSid @ 0x14044B2D0 (RtlLengthSid.c)
 *     RtlSubAuthorityCountSid @ 0x140454FB0 (RtlSubAuthorityCountSid.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x140A0E930 (RtlGetOwnerSecurityDescriptor.c)
 *     RtlGetSaclSecurityDescriptor @ 0x140A211D0 (RtlGetSaclSecurityDescriptor.c)
 *     RtlGetGroupSecurityDescriptor @ 0x140A71F80 (RtlGetGroupSecurityDescriptor.c)
 */

NTSTATUS __stdcall RtlReplaceSidInSd(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID OldSid,
        PSID NewSid,
        ULONG *NumChanges)
{
  PSECURITY_DESCRIPTOR v4; // r13
  unsigned int v8; // r12d
  NTSTATUS result; // eax
  char *v10; // rdi
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  char *v14; // rdi
  int v15; // eax
  int v16; // ecx
  int v17; // ecx
  __int64 v18; // r14
  unsigned __int8 *v19; // rdi
  char *v20; // rsi
  int v21; // eax
  int v22; // ecx
  int v23; // ecx
  __int64 v24; // r14
  unsigned __int8 *v25; // rdi
  char *v26; // rsi
  int v27; // eax
  int v28; // ecx
  int v29; // ecx
  BOOLEAN OwnerDefaulted[8]; // [rsp+20h] [rbp-10h] BYREF
  PSID Owner; // [rsp+28h] [rbp-8h] BYREF
  BOOLEAN DaclPresent; // [rsp+88h] [rbp+58h] BYREF

  *NumChanges = 0;
  v4 = SecurityDescriptor;
  DaclPresent = 0;
  Owner = 0LL;
  v8 = 4 * *RtlSubAuthorityCountSid(OldSid);
  result = RtlGetOwnerSecurityDescriptor(v4, &Owner, OwnerDefaulted);
  if ( result >= 0 )
  {
    v10 = (char *)Owner;
    if ( Owner )
    {
      if ( *(_BYTE *)Owner == *(_BYTE *)OldSid )
      {
        v11 = *((unsigned __int8 *)Owner + 1);
        v12 = *((unsigned __int8 *)OldSid + 1);
        if ( (_BYTE)v11 == (_BYTE)v12 || v11 == v12 + 1 )
        {
          v13 = *(_DWORD *)((char *)Owner + 2) - *(_DWORD *)((char *)OldSid + 2);
          if ( !v13 )
            v13 = *((unsigned __int16 *)Owner + 3) - *((unsigned __int16 *)OldSid + 3);
          if ( !v13 && !memcmp((char *)Owner + 8, (char *)OldSid + 8, v8) )
          {
            memmove(v10 + 8, (char *)NewSid + 8, v8);
            ++*NumChanges;
          }
        }
      }
    }
    Owner = 0LL;
    result = RtlGetGroupSecurityDescriptor(v4, &Owner, OwnerDefaulted);
    if ( result >= 0 )
    {
      v14 = (char *)Owner;
      if ( Owner )
      {
        if ( *(_BYTE *)Owner == *(_BYTE *)OldSid )
        {
          v15 = *((unsigned __int8 *)Owner + 1);
          v16 = *((unsigned __int8 *)OldSid + 1);
          if ( (_BYTE)v15 == (_BYTE)v16 || v15 == v16 + 1 )
          {
            v17 = *(_DWORD *)((char *)Owner + 2) - *(_DWORD *)((char *)OldSid + 2);
            if ( !v17 )
              v17 = *((unsigned __int16 *)Owner + 3) - *((unsigned __int16 *)OldSid + 3);
            if ( !v17 && !memcmp((char *)Owner + 8, (char *)OldSid + 8, v8) )
            {
              memmove(v14 + 8, (char *)NewSid + 8, v8);
              ++*NumChanges;
            }
          }
        }
      }
      Owner = 0LL;
      result = RtlGetDaclSecurityDescriptor(v4, &DaclPresent, (PACL *)&Owner, OwnerDefaulted);
      if ( result >= 0 )
      {
        if ( DaclPresent )
        {
          if ( Owner )
          {
            v18 = *((unsigned __int16 *)Owner + 2);
            v19 = (unsigned __int8 *)Owner + 8;
            if ( *((_WORD *)Owner + 2) )
            {
              while ( *v19 > 3u )
              {
                if ( *v19 == 4 )
                {
                  v20 = (char *)&v19[RtlLengthSid(v19 + 12) + 12];
                  goto LABEL_29;
                }
LABEL_37:
                v19 += *((unsigned __int16 *)v19 + 1);
                if ( !--v18 )
                {
                  v4 = SecurityDescriptor;
                  goto LABEL_39;
                }
              }
              v20 = (char *)(v19 + 8);
LABEL_29:
              if ( *v20 == *(_BYTE *)OldSid )
              {
                v21 = (unsigned __int8)v20[1];
                v22 = *((unsigned __int8 *)OldSid + 1);
                if ( (_BYTE)v21 == (_BYTE)v22 || v21 == v22 + 1 )
                {
                  v23 = *(_DWORD *)(v20 + 2) - *(_DWORD *)((char *)OldSid + 2);
                  if ( !v23 )
                    v23 = *((unsigned __int16 *)v20 + 3) - *((unsigned __int16 *)OldSid + 3);
                  if ( !v23 && !memcmp(v20 + 8, (char *)OldSid + 8, v8) )
                  {
                    memmove(v20 + 8, (char *)NewSid + 8, v8);
                    ++*NumChanges;
                  }
                }
              }
              goto LABEL_37;
            }
          }
        }
LABEL_39:
        Owner = 0LL;
        result = RtlGetSaclSecurityDescriptor(v4, &DaclPresent, (PACL *)&Owner, OwnerDefaulted);
        if ( result >= 0 && DaclPresent && Owner )
        {
          v24 = *((unsigned __int16 *)Owner + 2);
          v25 = (unsigned __int8 *)Owner + 8;
          if ( *((_WORD *)Owner + 2) )
          {
            while ( *v25 > 3u )
            {
              if ( *v25 == 4 )
              {
                v26 = (char *)&v25[RtlLengthSid(v25 + 12) + 12];
                goto LABEL_47;
              }
LABEL_55:
              v25 += *((unsigned __int16 *)v25 + 1);
              if ( !--v24 )
                return 0;
            }
            v26 = (char *)(v25 + 8);
LABEL_47:
            if ( *v26 == *(_BYTE *)OldSid )
            {
              v27 = (unsigned __int8)v26[1];
              v28 = *((unsigned __int8 *)OldSid + 1);
              if ( (_BYTE)v27 == (_BYTE)v28 || v27 == v28 + 1 )
              {
                v29 = *(_DWORD *)(v26 + 2) - *(_DWORD *)((char *)OldSid + 2);
                if ( !v29 )
                  v29 = *((unsigned __int16 *)v26 + 3) - *((unsigned __int16 *)OldSid + 3);
                if ( !v29 && !memcmp(v26 + 8, (char *)OldSid + 8, v8) )
                {
                  memmove(v26 + 8, (char *)NewSid + 8, v8);
                  ++*NumChanges;
                }
              }
            }
            goto LABEL_55;
          }
          return 0;
        }
      }
    }
  }
  return result;
}

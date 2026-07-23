/*
 * XREFs of RtlReplaceSidInSd @ 0x18013AE00
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x1800E6550 (RtlGetDaclSecurityDescriptor.c)
 *     RtlGetSaclSecurityDescriptor @ 0x1800EBF90 (RtlGetSaclSecurityDescriptor.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x1800EDE40 (RtlGetOwnerSecurityDescriptor.c)
 *     RtlGetGroupSecurityDescriptor @ 0x1800F0CF0 (RtlGetGroupSecurityDescriptor.c)
 *     memmove @ 0x180168980 (memmove.c)
 *     memcmp @ 0x180168C50 (memcmp.c)
 */

NTSTATUS __cdecl RtlReplaceSidInSd(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID OldSid,
        PSID NewSid,
        ULONG *NumChanges)
{
  int v5; // r12d
  unsigned int v7; // r12d
  PSECURITY_DESCRIPTOR v9; // r13
  NTSTATUS result; // eax
  char *v11; // rdi
  int v12; // eax
  int v13; // ecx
  char *v14; // rdi
  int v15; // eax
  int v16; // ecx
  __int64 v17; // r14
  unsigned __int8 *v18; // rdi
  char *v19; // r13
  char *v20; // rsi
  int v21; // eax
  int v22; // ecx
  __int64 v23; // r14
  unsigned __int8 *v24; // rdi
  char *v25; // rsi
  int v26; // eax
  int v27; // ecx
  PSID Owner[3]; // [rsp+20h] [rbp-18h] BYREF
  BOOLEAN DaclPresent; // [rsp+88h] [rbp+50h] BYREF
  char *v31; // [rsp+90h] [rbp+58h]
  BOOLEAN OwnerDefaulted; // [rsp+98h] [rbp+60h] BYREF

  v31 = (char *)NewSid;
  *NumChanges = 0;
  v5 = *((unsigned __int8 *)OldSid + 1);
  Owner[0] = 0LL;
  v7 = 4 * v5;
  DaclPresent = 0;
  v9 = SecurityDescriptor;
  result = RtlGetOwnerSecurityDescriptor(SecurityDescriptor, Owner, &OwnerDefaulted);
  if ( result >= 0 )
  {
    v11 = (char *)Owner[0];
    if ( Owner[0] )
    {
      if ( *(_BYTE *)Owner[0] == *(_BYTE *)OldSid )
      {
        v12 = *((unsigned __int8 *)OldSid + 1);
        if ( *((_BYTE *)Owner[0] + 1) == (_BYTE)v12 || *((unsigned __int8 *)Owner[0] + 1) == v12 + 1 )
        {
          v13 = *(_DWORD *)((char *)Owner[0] + 2) - *(_DWORD *)((char *)OldSid + 2);
          if ( !v13 )
            v13 = *((unsigned __int16 *)Owner[0] + 3) - *((unsigned __int16 *)OldSid + 3);
          if ( !v13 && !memcmp((char *)Owner[0] + 8, (char *)OldSid + 8, v7) )
          {
            memmove(v11 + 8, (char *)NewSid + 8, v7);
            ++*NumChanges;
          }
        }
      }
    }
    Owner[0] = 0LL;
    result = RtlGetGroupSecurityDescriptor(v9, Owner, &OwnerDefaulted);
    if ( result >= 0 )
    {
      v14 = (char *)Owner[0];
      if ( Owner[0] )
      {
        if ( *(_BYTE *)Owner[0] == *(_BYTE *)OldSid )
        {
          v15 = *((unsigned __int8 *)OldSid + 1);
          if ( *((_BYTE *)Owner[0] + 1) == (_BYTE)v15 || *((unsigned __int8 *)Owner[0] + 1) == v15 + 1 )
          {
            v16 = *(_DWORD *)((char *)Owner[0] + 2) - *(_DWORD *)((char *)OldSid + 2);
            if ( !v16 )
              v16 = *((unsigned __int16 *)Owner[0] + 3) - *((unsigned __int16 *)OldSid + 3);
            if ( !v16 && !memcmp((char *)Owner[0] + 8, (char *)OldSid + 8, v7) )
            {
              memmove(v14 + 8, (char *)NewSid + 8, v7);
              ++*NumChanges;
            }
          }
        }
      }
      Owner[0] = 0LL;
      result = RtlGetDaclSecurityDescriptor(v9, &DaclPresent, (PACL *)Owner, &OwnerDefaulted);
      if ( result >= 0 )
      {
        if ( DaclPresent )
        {
          if ( Owner[0] )
          {
            v17 = *((unsigned __int16 *)Owner[0] + 2);
            v18 = (unsigned __int8 *)Owner[0] + 8;
            if ( *((_WORD *)Owner[0] + 2) )
            {
              v19 = v31;
              while ( *v18 > 3u )
              {
                if ( *v18 == 4 )
                {
                  v20 = (char *)&v18[4 * v18[13] + 20];
                  goto LABEL_30;
                }
LABEL_38:
                v18 += *((unsigned __int16 *)v18 + 1);
                if ( !--v17 )
                {
                  v9 = SecurityDescriptor;
                  goto LABEL_40;
                }
              }
              v20 = (char *)(v18 + 8);
LABEL_30:
              if ( *v20 == *(_BYTE *)OldSid )
              {
                v21 = *((unsigned __int8 *)OldSid + 1);
                if ( v20[1] == (_BYTE)v21 || (unsigned __int8)v20[1] == v21 + 1 )
                {
                  v22 = *(_DWORD *)(v20 + 2) - *(_DWORD *)((char *)OldSid + 2);
                  if ( !v22 )
                    v22 = *((unsigned __int16 *)v20 + 3) - *((unsigned __int16 *)OldSid + 3);
                  if ( !v22 && !memcmp(v20 + 8, (char *)OldSid + 8, v7) )
                  {
                    memmove(v20 + 8, v19 + 8, v7);
                    ++*NumChanges;
                  }
                }
              }
              goto LABEL_38;
            }
          }
        }
LABEL_40:
        Owner[0] = 0LL;
        result = RtlGetSaclSecurityDescriptor(v9, &DaclPresent, (PACL *)Owner, &OwnerDefaulted);
        if ( result >= 0 && DaclPresent && Owner[0] )
        {
          v23 = *((unsigned __int16 *)Owner[0] + 2);
          v24 = (unsigned __int8 *)Owner[0] + 8;
          if ( *((_WORD *)Owner[0] + 2) )
          {
            while ( *v24 > 3u )
            {
              if ( *v24 == 4 )
              {
                v25 = (char *)&v24[4 * v24[13] + 20];
                goto LABEL_48;
              }
LABEL_56:
              v24 += *((unsigned __int16 *)v24 + 1);
              if ( !--v23 )
                return 0;
            }
            v25 = (char *)(v24 + 8);
LABEL_48:
            if ( *v25 == *(_BYTE *)OldSid )
            {
              v26 = *((unsigned __int8 *)OldSid + 1);
              if ( v25[1] == (_BYTE)v26 || (unsigned __int8)v25[1] == v26 + 1 )
              {
                v27 = *(_DWORD *)(v25 + 2) - *(_DWORD *)((char *)OldSid + 2);
                if ( !v27 )
                  v27 = *((unsigned __int16 *)v25 + 3) - *((unsigned __int16 *)OldSid + 3);
                if ( !v27 && !memcmp(v25 + 8, (char *)OldSid + 8, v7) )
                {
                  memmove(v25 + 8, v31 + 8, v7);
                  ++*NumChanges;
                }
              }
            }
            goto LABEL_56;
          }
          return 0;
        }
      }
    }
  }
  return result;
}

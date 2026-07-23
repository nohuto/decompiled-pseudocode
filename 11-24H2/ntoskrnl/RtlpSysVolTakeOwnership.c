/*
 * XREFs of RtlpSysVolTakeOwnership @ 0x140783EA8
 * Callers:
 *     RtlCreateSystemVolumeInformationFolder @ 0x1407836F0 (RtlCreateSystemVolumeInformationFolder.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     NtClose @ 0x140846CC0 (NtClose.c)
 *     NtOpenProcessTokenEx @ 0x140850490 (NtOpenProcessTokenEx.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1408588A0 (RtlSetOwnerSecurityDescriptor.c)
 *     NtSetSecurityObject @ 0x1409118E0 (NtSetSecurityObject.c)
 *     IopCreateFile @ 0x1409557C0 (IopCreateFile.c)
 *     NtAdjustPrivilegesToken @ 0x140984860 (NtAdjustPrivilegesToken.c)
 *     RtlCreateSecurityDescriptor @ 0x1409E16D0 (RtlCreateSecurityDescriptor.c)
 */

int __fastcall RtlpSysVolTakeOwnership(__int64 a1)
{
  int result; // eax
  NTSTATUS v3; // eax
  HANDLE v4; // rcx
  HANDLE TokenHandle; // [rsp+80h] [rbp-80h] BYREF
  HANDLE Handle[2]; // [rsp+88h] [rbp-78h] BYREF
  int v7[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v8; // [rsp+A0h] [rbp-60h]
  __int64 v9; // [rsp+A8h] [rbp-58h]
  int v10; // [rsp+B0h] [rbp-50h]
  int v11; // [rsp+B4h] [rbp-4Ch]
  __int128 v12; // [rsp+B8h] [rbp-48h]
  _OWORD SecurityDescriptor[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v14; // [rsp+E8h] [rbp-18h]
  int v15[4]; // [rsp+F0h] [rbp-10h] BYREF
  struct _TOKEN_PRIVILEGES NewState; // [rsp+100h] [rbp+0h] BYREF
  __int16 Owner; // [rsp+110h] [rbp+10h] BYREF
  int v18; // [rsp+112h] [rbp+12h]
  __int16 v19; // [rsp+116h] [rbp+16h]
  int v20; // [rsp+118h] [rbp+18h]
  int v21; // [rsp+11Ch] [rbp+1Ch]

  TokenHandle = 0LL;
  Handle[0] = 0LL;
  v7[1] = 0;
  v11 = 0;
  v14 = 0LL;
  *(_OWORD *)v15 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  result = NtOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0x28u, 0x200u, &TokenHandle);
  if ( result >= 0 )
  {
    Handle[1] = (HANDLE)9;
    NewState.Privileges[0].Luid = (LUID)9LL;
    NewState.PrivilegeCount = 1;
    NewState.Privileges[0].Attributes = 2;
    if ( NtAdjustPrivilegesToken(TokenHandle, 0, &NewState, 0x10u, 0LL, 0LL) >= 0 )
    {
      v9 = a1;
      v7[0] = 48;
      v8 = 0LL;
      v10 = 576;
      v12 = 0LL;
      if ( (int)IopCreateFile((int)Handle, 1572864, (int)v7, (int)v15, 0LL, 0, 7, 1, 33, 0LL, 0, 0, 0LL, 0, 32, 0LL) >= 0 )
      {
        RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
        v18 = 0;
        v19 = 1280;
        Owner = 513;
        v20 = 32;
        v21 = 544;
        v3 = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, &Owner, 0);
        v4 = Handle[0];
        if ( v3 >= 0 )
        {
          NtSetSecurityObject(Handle[0], 1u, SecurityDescriptor);
          v4 = Handle[0];
        }
        NtClose(v4);
      }
    }
    return NtClose(TokenHandle);
  }
  return result;
}

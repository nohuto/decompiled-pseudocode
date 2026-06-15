/*
 * XREFs of ?SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x1800472DC
 * Callers:
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180042804 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ?CreateNewRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180046BE0 (-CreateNewRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180010AC0 (--3@YAXPEAX@Z.c)
 *     ?AddSidToSACL@@YAKPEAUHKEY__@@PEAXPEAPEAU_ACL@@PEAK@Z @ 0x18001A580 (-AddSidToSACL@@YAKPEAUHKEY__@@PEAXPEAPEAU_ACL@@PEAK@Z.c)
 */

__int64 __fastcall SetRegistryHandleIntegrityLevel(HKEY Handle, void *a2)
{
  signed int v3; // ebx
  int v4; // eax
  signed int LastError; // eax
  _OWORD pSecurityDescriptor[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]
  unsigned int v9; // [rsp+68h] [rbp+10h] BYREF
  PACL pSacl; // [rsp+70h] [rbp+18h] BYREF

  v3 = -2147024809;
  if ( a2 && Handle != HKEY_CURRENT_USER_LOCAL_SETTINGS|0x7FFFFFF8LL )
  {
    pSacl = 0LL;
    v9 = 0;
    v4 = AddSidToSACL(Handle, a2, &pSacl, &v9);
    v3 = v4;
    if ( v4 > 0 )
      v3 = (unsigned __int16)v4 | 0x80070000;
    if ( v3 >= 0 )
    {
      v8 = 0LL;
      memset(pSecurityDescriptor, 0, sizeof(pSecurityDescriptor));
      if ( !InitializeSecurityDescriptor(pSecurityDescriptor, 1u)
        || !SetSecurityDescriptorSacl(pSecurityDescriptor, 1, pSacl, 0)
        || !SetKernelObjectSecurity(Handle, 0x10u, pSecurityDescriptor) )
      {
        LastError = GetLastError();
        v3 = LastError;
        if ( LastError > 0 )
          v3 = (unsigned __int16)LastError | 0x80070000;
      }
      if ( pSacl )
        operator delete(pSacl);
    }
  }
  return (unsigned int)v3;
}

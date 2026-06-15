/*
 * XREFs of ?CreateNewRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180049400
 * Callers:
 *     ?GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z @ 0x1800100B0 (-GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z.c)
 * Callees:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x1800104EC (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180010D60 (--3@YAXPEAX@Z.c)
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x1800127C0 (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 *     ?SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x180012CD0 (-SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z.c)
 *     ?SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x180049AFC (-SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z.c)
 */

__int64 __fastcall CreateNewRegistryKey(HKEY a1, const unsigned __int16 *a2, __int64 a3, HKEY *a4)
{
  signed int LastError; // eax
  __int64 v7; // r8
  unsigned __int16 *v8; // r9
  signed int v9; // ebx
  bool v10; // cc
  unsigned int v12; // [rsp+20h] [rbp-50h]
  struct _SECURITY_ATTRIBUTES v13; // [rsp+50h] [rbp-20h] BYREF
  PSID Sid; // [rsp+80h] [rbp+10h] BYREF

  Sid = a1;
  memset(&v13, 0, sizeof(v13));
  v13.nLength = 24;
  LastError = DetermineLowRightsKeySecurityDescriptor(HKEY_CURRENT_USER, &v13.lpSecurityDescriptor);
  v9 = LastError;
  v10 = LastError <= 0;
  if ( !LastError )
  {
    LastError = SafeRegCreateKeyEx(HKEY_CURRENT_USER, a2, v7, v8, v12, 0xA001Fu, &v13, a4);
    v9 = LastError;
    v10 = LastError <= 0;
    if ( !LastError )
    {
      Sid = 0LL;
      if ( ConvertStringSidToSidW(L"LW", &Sid) )
      {
        v9 = SetRegistryKeyIntegrityLevel(*a4, Sid);
        if ( v9 < 0 )
          v9 = SetRegistryHandleIntegrityLevel(*a4, Sid);
        if ( Sid )
          LocalFree(Sid);
        goto LABEL_11;
      }
      LastError = GetLastError();
      v9 = LastError;
      v10 = LastError <= 0;
    }
  }
  if ( !v10 )
    v9 = (unsigned __int16)LastError | 0x80070000;
LABEL_11:
  operator delete(v13.lpSecurityDescriptor);
  v13.lpSecurityDescriptor = 0LL;
  if ( v9 < 0 && *a4 )
  {
    RegCloseKey(*a4);
    *a4 = 0LL;
  }
  return (unsigned int)v9;
}

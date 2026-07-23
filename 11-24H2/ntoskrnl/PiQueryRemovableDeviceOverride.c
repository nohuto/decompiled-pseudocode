/*
 * XREFs of PiQueryRemovableDeviceOverride @ 0x140A26B08
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140A76864 (PiProcessNewDeviceNode.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1406A7690 (ZwQueryValueKey.c)
 *     PnpOpenFirstMatchingSubKey @ 0x140721114 (PnpOpenFirstMatchingSubKey.c)
 *     _CmGetDeviceRegProp @ 0x1408C35E0 (_CmGetDeviceRegProp.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x14097BDFC (PnpDeviceObjectToDeviceInstance.c)
 *     PnpGetDeviceLocationStrings @ 0x1409824C0 (PnpGetDeviceLocationStrings.c)
 *     PipFindDeviceOverrideEntry @ 0x140A26D28 (PipFindDeviceOverrideEntry.c)
 *     IopOpenRegistryKeyEx @ 0x140A39394 (IopOpenRegistryKeyEx.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiQueryRemovableDeviceOverride(__int64 a1, void *a2, void *a3, bool *a4)
{
  unsigned int v4; // r12d
  void *Pool2; // r14
  bool *v6; // r13
  int DeviceRegProp; // ebx
  char v11; // cl
  int DeviceOverrideEntry; // eax
  char v13; // dl
  char v14; // r8
  int v15; // eax
  int v16; // eax
  __int64 v17; // rcx
  unsigned int *v18; // r13
  int v19; // edi
  unsigned int v20; // eax
  __int64 v22; // rcx
  char v23; // al
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // [rsp+40h] [rbp-89h] BYREF
  UNICODE_STRING ValueName; // [rsp+48h] [rbp-81h] BYREF
  int v28; // [rsp+58h] [rbp-71h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-69h] BYREF
  __int128 v30; // [rsp+68h] [rbp-61h]
  HANDLE Handle[2]; // [rsp+78h] [rbp-51h]
  unsigned int v32; // [rsp+88h] [rbp-41h]
  int v33; // [rsp+8Ch] [rbp-3Dh] BYREF
  ULONG ResultLength; // [rsp+90h] [rbp-39h] BYREF
  HANDLE v35; // [rsp+98h] [rbp-31h] BYREF
  PVOID P; // [rsp+A0h] [rbp-29h] BYREF
  _DWORD v37[2]; // [rsp+A8h] [rbp-21h] BYREF
  bool *v38; // [rsp+B0h] [rbp-19h]
  char KeyValueInformation[4]; // [rsp+B8h] [rbp-11h] BYREF
  int v40; // [rsp+BCh] [rbp-Dh]
  int v41; // [rsp+C0h] [rbp-9h]
  unsigned int v42; // [rsp+C4h] [rbp-5h]

  v35 = 0LL;
  v4 = 0;
  ResultLength = 0;
  Pool2 = 0LL;
  P = 0LL;
  v33 = 0;
  v6 = a4;
  v26 = 0;
  v28 = 0;
  v38 = a4;
  DeviceRegProp = -1073741772;
  v32 = 0;
  ValueName = 0LL;
  if ( !PnpDeviceOverrideHashList )
    return (unsigned int)DeviceRegProp;
  v11 = *(_BYTE *)(a1 + 680);
  DeviceOverrideEntry = -1073741772;
  v13 = v11;
  v30 = 0LL;
  *(_OWORD *)Handle = 0LL;
  if ( (v11 & 1) == 0 )
  {
    *((_QWORD *)&v30 + 1) = L"ChildLocationPaths";
    v14 = v11;
    LODWORD(v30) = 2490404;
    if ( a2 )
    {
      DeviceOverrideEntry = PipFindDeviceOverrideEntry(a2);
      v13 = *(_BYTE *)(a1 + 680);
      v14 = v13;
    }
    v11 = v14;
    if ( DeviceOverrideEntry >= 0 )
      goto LABEL_22;
    if ( a3 )
    {
      DeviceOverrideEntry = PipFindDeviceOverrideEntry(a3);
      v11 = *(_BYTE *)(a1 + 680);
      v13 = v11;
    }
    if ( DeviceOverrideEntry >= 0 )
    {
LABEL_22:
      ZwClose(Handle[0]);
      *(_BYTE *)(a1 + 680) |= 4u;
      v11 = *(_BYTE *)(a1 + 680);
      v13 = v11;
    }
  }
  if ( (v11 & 3) != 1 )
  {
    LODWORD(v30) = 1835034;
    *((_QWORD *)&v30 + 1) = L"LocationPaths";
    if ( a2 )
    {
      v15 = PipFindDeviceOverrideEntry(a2);
      v11 = *(_BYTE *)(a1 + 680);
      DeviceRegProp = v15;
      v13 = v11;
    }
    if ( DeviceRegProp >= 0 )
      goto LABEL_23;
    if ( a3 )
    {
      v16 = PipFindDeviceOverrideEntry(a3);
      v11 = *(_BYTE *)(a1 + 680);
      DeviceRegProp = v16;
      v13 = v11;
    }
    if ( DeviceRegProp >= 0 )
LABEL_23:
      v11 = v13 | 2;
  }
  *(_BYTE *)(a1 + 680) = v11 | 1;
  if ( DeviceRegProp >= 0 )
    goto LABEL_44;
  v17 = *(_QWORD *)(a1 + 16);
  if ( (*(_BYTE *)(v17 + 680) & 5) == 1 )
    return (unsigned int)DeviceRegProp;
  LODWORD(v30) = 2490404;
  *((_QWORD *)&v30 + 1) = L"ChildLocationPaths";
  DeviceRegProp = PnpDeviceObjectToDeviceInstance(*(_QWORD *)(v17 + 32), (__int64)&v35, 131097);
  if ( DeviceRegProp < 0 )
    return (unsigned int)DeviceRegProp;
  v37[0] = 2;
  v18 = v37;
  v19 = 256;
  v37[1] = 3;
  v26 = 256;
  v20 = 256;
  do
  {
    if ( !Pool2 )
    {
      Pool2 = (void *)ExAllocatePool2(0x100uLL, v20, 0x6E697050u);
      if ( !Pool2 )
      {
        v20 = v26;
        DeviceRegProp = -1073741670;
        v19 = v26;
        goto LABEL_36;
      }
      v19 = v26;
    }
    DeviceRegProp = CmGetDeviceRegProp(
                      *(__int64 *)&PiPnpRtlCtx,
                      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL),
                      (__int64)v35,
                      *v18,
                      (__int64)&v28,
                      (__int64)Pool2,
                      (__int64)&v26,
                      0);
    if ( DeviceRegProp == -1073741789 )
    {
      ExFreePoolWithTag(Pool2, 0);
      Pool2 = (void *)ExAllocatePool2(0x100uLL, v26, 0x6E697050u);
      v20 = v26;
      v19 = v26;
      if ( !Pool2 )
        DeviceRegProp = -1073741670;
    }
    else
    {
      v20 = v19;
      if ( DeviceRegProp >= 0 )
      {
        if ( v28 != 7 )
        {
          DeviceRegProp = -1073741823;
          v26 = v19;
          goto LABEL_36;
        }
        DeviceRegProp = PipFindDeviceOverrideEntry(Pool2);
        v20 = v19;
      }
      v26 = v20;
      v19 = v20;
      if ( DeviceRegProp >= 0 )
        break;
    }
LABEL_36:
    ++v4;
    ++v18;
  }
  while ( v4 < 2 );
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  ZwClose(v35);
  v22 = *(_QWORD *)(a1 + 16);
  v23 = *(_BYTE *)(v22 + 680);
  if ( (v23 & 1) == 0 )
  {
    if ( DeviceRegProp >= 0 )
      *(_BYTE *)(v22 + 680) = v23 | 4;
    *(_BYTE *)(*(_QWORD *)(a1 + 16) + 680LL) |= 1u;
  }
  if ( DeviceRegProp >= 0 )
  {
    v4 = v32;
    v6 = v38;
LABEL_44:
    KeyHandle = 0LL;
    if ( LODWORD(Handle[1]) != 1
      || (*(_DWORD *)&ValueName.Length = 262146,
          ValueName.Buffer = (wchar_t *)L"*",
          DeviceRegProp = IopOpenRegistryKeyEx(&KeyHandle, Handle[0], &ValueName, 131097LL),
          DeviceRegProp < 0) )
    {
      DeviceRegProp = PnpGetDeviceLocationStrings(a1, &P, &v33);
      if ( DeviceRegProp < 0
        || (DeviceRegProp = PnpOpenFirstMatchingSubKey((PCWSTR)P, (__int64)Handle[0], v24, v25, &KeyHandle),
            ExFreePoolWithTag(P, 0),
            DeviceRegProp < 0) )
      {
        if ( LODWORD(Handle[1]) > 1 )
        {
          *(_DWORD *)&ValueName.Length = 262146;
          ValueName.Buffer = (wchar_t *)L"*";
          DeviceRegProp = IopOpenRegistryKeyEx(&KeyHandle, Handle[0], &ValueName, 131097LL);
        }
      }
    }
    ZwClose(Handle[0]);
    if ( DeviceRegProp >= 0 )
    {
      *(_DWORD *)&ValueName.Length = 1310738;
      ValueName.Buffer = L"Removable";
      DeviceRegProp = ZwQueryValueKey(
                        KeyHandle,
                        &ValueName,
                        KeyValuePartialInformation,
                        KeyValueInformation,
                        0x14u,
                        &ResultLength);
      if ( DeviceRegProp >= 0 )
      {
        if ( v40 == 4 && v41 == 4 )
          v4 = v42;
        else
          DeviceRegProp = -1073741823;
      }
      ZwClose(KeyHandle);
      *v6 = v4 != 0;
    }
  }
  return (unsigned int)DeviceRegProp;
}

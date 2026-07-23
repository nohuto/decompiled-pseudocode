/*
 * XREFs of SeGetTokenDeviceMap @ 0x14096D9AC
 * Callers:
 *     ObpLookupObjectName @ 0x1408A58B0 (ObpLookupObjectName.c)
 *     ObpReferenceCurrentDeviceMap @ 0x14096D6B0 (ObpReferenceCurrentDeviceMap.c)
 *     ObpSetCurrentProcessDeviceMap @ 0x14096DC68 (ObpSetCurrentProcessDeviceMap.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     PsGetServerSiloServiceSessionId @ 0x14044B690 (PsGetServerSiloServiceSessionId.c)
 *     swprintf_s @ 0x140500710 (swprintf_s.c)
 *     Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline @ 0x1405E208C (Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwCreateDirectoryObject @ 0x1406A8930 (ZwCreateDirectoryObject.c)
 *     ZwCreateSymbolicLinkObject @ 0x1406A8CB0 (ZwCreateSymbolicLinkObject.c)
 *     RtlQueryElevationFlags @ 0x1408E8AB0 (RtlQueryElevationFlags.c)
 *     ObDereferenceDeviceMap @ 0x14096DDE4 (ObDereferenceDeviceMap.c)
 *     ObpSetDeviceMap @ 0x140A73E78 (ObpSetDeviceMap.c)
 */

NTSTATUS __fastcall SeGetTokenDeviceMap(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  NTSTATUS result; // eax
  __int64 v7; // rax
  unsigned int ServerSiloServiceSessionId; // eax
  NTSTATUS v9; // esi
  __int64 v10; // rax
  _RTL_ELEVATION_FLAGS Flags; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE DirectoryHandle; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE LinkHandle; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING v17; // [rsp+90h] [rbp-70h] BYREF
  wchar_t Dst[64]; // [rsp+A0h] [rbp-60h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  DirectoryHandle = 0LL;
  LinkHandle = 0LL;
  P = 0LL;
  *a2 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  v17 = 0LL;
  if ( !a1 )
    return -1073741811;
  if ( (*(_DWORD *)(a1 + 200) & 0x20) != 0 )
    return -1073741729;
  v4 = *(_QWORD *)(a1 + 216);
  if ( !v4 )
    return -1073741729;
  v5 = *(_QWORD *)(v4 + 48);
  if ( v5 )
  {
    *a2 = v5;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 240), 1uLL) <= 0 )
      __fastfail(0xEu);
    return 0;
  }
  else if ( (unsigned int)Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline()
         && (Flags.Flags = 0, RtlQueryElevationFlags(&Flags), (Flags.Flags & 0x18) == 0x10)
         && *(_DWORD *)(a1 + 192) == 2
         && *(int *)(a1 + 196) < 2
         && (v7 = *(_QWORD *)(v4 + 56)) != 0
         && (*(_DWORD *)(v7 + 200) & 0x8000000) != 0 )
  {
    return -1073741790;
  }
  else
  {
    ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(*(_QWORD *)(v4 + 168));
    swprintf_s(
      Dst,
      0x40uLL,
      L"\\Sessions\\%d\\DosDevices\\%08x-%08x",
      ServerSiloServiceSessionId,
      *(_DWORD *)(a1 + 28),
      *(_DWORD *)(a1 + 24));
    RtlInitUnicodeString(&DestinationString, Dst);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 704;
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
    if ( result >= 0 )
    {
      v9 = ObpSetDeviceMap(*(PVOID *)(v4 + 168), 2, (__int64)&P);
      if ( v9 >= 0 )
      {
        RtlInitUnicodeString(&v17, L"Global");
        RtlInitUnicodeString(&DestinationString, L"\\Global??");
        ObjectAttributes.RootDirectory = DirectoryHandle;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &v17;
        ObjectAttributes.Attributes = 720;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v9 = ZwCreateSymbolicLinkObject(&LinkHandle, 0xF0001u, &ObjectAttributes, &DestinationString);
        if ( v9 < 0 )
        {
          ObDereferenceDeviceMap(P);
        }
        else
        {
          ZwClose(LinkHandle);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 48), (signed __int64)P, 0LL) )
            ObDereferenceDeviceMap(P);
          v10 = *(_QWORD *)(v4 + 48);
          *a2 = v10;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 240), 1uLL) <= 0 )
            __fastfail(0xEu);
        }
      }
      ZwClose(DirectoryHandle);
      return v9;
    }
  }
  return result;
}

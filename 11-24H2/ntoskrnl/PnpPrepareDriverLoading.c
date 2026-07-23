/*
 * XREFs of PnpPrepareDriverLoading @ 0x1409B8F8C
 * Callers:
 *     IopLoadDriver @ 0x1409B6EEC (IopLoadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140C68400 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140432E80 (RtlImageNtHeader.c)
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     PnpSetBlockedDriverEvent @ 0x14072BDF4 (PnpSetBlockedDriverEvent.c)
 *     NtClose @ 0x140846CC0 (NtClose.c)
 *     IopGetRegistryValue @ 0x1409B5F9C (IopGetRegistryValue.c)
 *     PpCheckInDriverDatabase @ 0x1409B89D4 (PpCheckInDriverDatabase.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpPrepareDriverLoading(UNICODE_STRING *a1, void *a2, void *a3, int a4, _DWORD *a5, bool *a6)
{
  PIMAGE_NT_HEADERS v10; // rax
  unsigned int v11; // edi
  PVOID v13; // rcx
  PVOID v14; // rcx
  PVOID P; // [rsp+30h] [rbp-59h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-51h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-49h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-39h] BYREF
  __int128 v19; // [rsp+80h] [rbp-9h] BYREF

  P = 0LL;
  *a5 = 0;
  *a6 = 0;
  DestinationString = 0LL;
  v10 = RtlImageNtHeader(a3);
  if ( !v10 )
    return 3221225473LL;
  v19 = 0LL;
  v11 = PpCheckInDriverDatabase(a1, a2, (__int64)a3, v10->OptionalHeader.SizeOfImage, a4, (__int64)&v19);
  if ( v11 + 1073740949 <= 1 )
    PnpSetBlockedDriverEvent(&v19);
  if ( IopGetRegistryValue(a2, L"PnpFlags", 0, &P) >= 0 )
  {
    v13 = P;
    if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
      *a5 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
    ExFreePoolWithTag(v13, 0);
  }
  if ( RtlInitUnicodeStringEx(&DestinationString, L"Parameters") >= 0 )
  {
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    KeyHandle = 0LL;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = a2;
    ObjectAttributes.Attributes = 576;
    if ( ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes) >= 0 )
    {
      if ( IopGetRegistryValue(KeyHandle, L"PnpAsyncNewDevices", 0, &P) >= 0 )
      {
        v14 = P;
        if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
          *a6 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) != 0;
        ExFreePoolWithTag(v14, 0);
      }
      NtClose(KeyHandle);
    }
  }
  return v11;
}

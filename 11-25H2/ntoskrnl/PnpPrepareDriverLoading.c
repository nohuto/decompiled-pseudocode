/*
 * XREFs of PnpPrepareDriverLoading @ 0x1409AFA84
 * Callers:
 *     IopLoadDriver @ 0x1409B0D50 (IopLoadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140C54388 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14043DFA0 (RtlImageNtHeader.c)
 *     RtlInitUnicodeStringEx @ 0x14045CBF0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x14069B380 (ZwOpenKey.c)
 *     PnpSetBlockedDriverEvent @ 0x140721E64 (PnpSetBlockedDriverEvent.c)
 *     NtClose @ 0x14084EC50 (NtClose.c)
 *     PpCheckInDriverDatabase @ 0x1409AF608 (PpCheckInDriverDatabase.c)
 *     IopGetRegistryValue @ 0x1409B29DC (IopGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpPrepareDriverLoading(__int64 a1, void *a2, void *a3, int a4, _DWORD *a5, bool *a6)
{
  PIMAGE_NT_HEADERS v10; // rax
  unsigned int v11; // edi
  HANDLE KeyHandle; // [rsp+38h] [rbp-51h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-49h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-39h] BYREF
  __int128 v16; // [rsp+80h] [rbp-9h] BYREF

  *a5 = 0;
  *a6 = 0;
  DestinationString = 0LL;
  v10 = RtlImageNtHeader(a3);
  if ( !v10 )
    return 3221225473LL;
  v16 = 0LL;
  v11 = PpCheckInDriverDatabase(a1, (__int64)a2, a3, v10->OptionalHeader.SizeOfImage, a4, &v16);
  if ( v11 + 1073740949 <= 1 )
    PnpSetBlockedDriverEvent(&v16);
  if ( (int)IopGetRegistryValue(a2) >= 0 )
  {
    if ( MEMORY[4] == 4 && MEMORY[0xC] == 4 )
      *a5 = *(_DWORD *)MEMORY[8];
    ExFreePoolWithTag(0LL, 0);
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
      if ( (int)IopGetRegistryValue(KeyHandle) >= 0 )
      {
        if ( MEMORY[4] == 4 && MEMORY[0xC] == 4 )
          *a6 = *(_DWORD *)MEMORY[8] != 0;
        ExFreePoolWithTag(0LL, 0);
      }
      NtClose(KeyHandle);
    }
  }
  return v11;
}

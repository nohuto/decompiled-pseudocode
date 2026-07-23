/*
 * XREFs of PipUnloadEarlyLaunchDrivers @ 0x140C11358
 * Callers:
 *     IopInitializeBootDrivers @ 0x140C0D35C (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     ZwUnloadKey2 @ 0x14069ECA0 (ZwUnloadKey2.c)
 *     IopUnloadDriver @ 0x140AA3F28 (IopUnloadDriver.c)
 */

NTSTATUS __fastcall PipUnloadEarlyLaunchDrivers(UNICODE_STRING *a1)
{
  NTSTATUS result; // eax
  UNICODE_STRING *v2; // rdi
  UNICODE_STRING *v3; // rbx
  UNICODE_STRING *v4; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES TargetKey; // [rsp+30h] [rbp-30h] BYREF

  result = 0;
  v2 = a1 + 4;
  *(&TargetKey.Attributes + 1) = 0;
  v3 = *(UNICODE_STRING **)&a1[4].Length;
  *(&TargetKey.Length + 1) = 0;
  DestinationString = 0LL;
  if ( v3 != &a1[4] )
  {
    do
    {
      v4 = v3;
      v3 = *(UNICODE_STRING **)&v3->Length;
      if ( SLODWORD(v4[3].Buffer) >= 0 )
        IopUnloadDriver(v4 + 2, 1);
    }
    while ( v3 != v2 );
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\ELAM");
    TargetKey.RootDirectory = 0LL;
    TargetKey.ObjectName = &DestinationString;
    TargetKey.Length = 48;
    TargetKey.Attributes = 576;
    *(_OWORD *)&TargetKey.SecurityDescriptor = 0LL;
    return ZwUnloadKey2(&TargetKey, 1u);
  }
  return result;
}

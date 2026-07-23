/*
 * XREFs of RtlCheckRegistryKey @ 0x1409B4D90
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x140490C40 (RtlCheckPortableOperatingSystem.c)
 *     DifRtlCheckRegistryKeyWrapper @ 0x140637930 (DifRtlCheckRegistryKeyWrapper.c)
 *     WheapOpenPolicyRegistryKey @ 0x140C46E84 (WheapOpenPolicyRegistryKey.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     RtlpGetRegistryHandle @ 0x1409B52DC (RtlpGetRegistryHandle.c)
 */

NTSTATUS __stdcall RtlCheckRegistryKey(ULONG RelativeTo, PWSTR Path)
{
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  Handle = 0LL;
  result = RtlpGetRegistryHandle(RelativeTo, Path, 0LL, &Handle);
  if ( result >= 0 )
  {
    if ( (RelativeTo & 0x40000000) == 0 )
      ZwClose(Handle);
    return 0;
  }
  return result;
}

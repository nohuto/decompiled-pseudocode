/*
 * XREFs of RtlCheckRegistryKey @ 0x1409CC310
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x1404962B0 (RtlCheckPortableOperatingSystem.c)
 *     DifRtlCheckRegistryKeyWrapper @ 0x140639370 (DifRtlCheckRegistryKeyWrapper.c)
 *     WheapOpenPolicyRegistryKey @ 0x140C44D34 (WheapOpenPolicyRegistryKey.c)
 * Callees:
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     RtlpGetRegistryHandle @ 0x1409CC85C (RtlpGetRegistryHandle.c)
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

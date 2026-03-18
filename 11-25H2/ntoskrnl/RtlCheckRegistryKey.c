/*
 * XREFs of RtlCheckRegistryKey @ 0x1409B3F90
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x140496A80 (RtlCheckPortableOperatingSystem.c)
 *     DifRtlCheckRegistryKeyWrapper @ 0x14062D3B0 (DifRtlCheckRegistryKeyWrapper.c)
 *     WheapOpenPolicyRegistryKey @ 0x140C33A68 (WheapOpenPolicyRegistryKey.c)
 * Callees:
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     RtlpGetRegistryHandle @ 0x1409B44DC (RtlpGetRegistryHandle.c)
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

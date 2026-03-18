/*
 * XREFs of RtlCreateRegistryKey @ 0x140772DD0
 * Callers:
 *     DifRtlCreateRegistryKeyWrapper @ 0x14062D520 (DifRtlCreateRegistryKeyWrapper.c)
 *     WheapOpenPolicyRegistryKey @ 0x140C33A68 (WheapOpenPolicyRegistryKey.c)
 * Callees:
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     RtlpGetRegistryHandle @ 0x1409B44DC (RtlpGetRegistryHandle.c)
 */

NTSTATUS __stdcall RtlCreateRegistryKey(ULONG RelativeTo, PWSTR Path)
{
  char v2; // r8
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  Handle = 0LL;
  v2 = 1;
  result = RtlpGetRegistryHandle(RelativeTo, Path, v2, &Handle);
  if ( result >= 0 )
  {
    if ( (RelativeTo & 0x40000000) == 0 )
      ZwClose(Handle);
    return 0;
  }
  return result;
}

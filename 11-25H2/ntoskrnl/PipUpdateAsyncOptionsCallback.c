/*
 * XREFs of PipUpdateAsyncOptionsCallback @ 0x14070E1C0
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140C0DF14 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x14069D5A0 (ZwNotifyChangeKey.c)
 *     IopGetRegistryValue @ 0x1409B29DC (IopGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

int __fastcall PipUpdateAsyncOptionsCallback(HANDLE Handle)
{
  int RegistryValue; // eax
  int result; // eax

  RegistryValue = IopGetRegistryValue(Handle);
  if ( RegistryValue < 0 )
  {
    if ( RegistryValue == -1073741772 )
      PnpAsyncOptions = -2147483645;
  }
  else
  {
    if ( MEMORY[4] == 4 && MEMORY[0xC] == 4 )
      PnpAsyncOptions = *(_DWORD *)MEMORY[8];
    ExFreePoolWithTag(0LL, 0);
  }
  result = ZwNotifyChangeKey(
             Handle,
             0LL,
             PnpAsyncOptionsWorkItem,
             (PVOID)1,
             &PnpAsyncOptionsIoStatusBlock,
             4u,
             0,
             0LL,
             0,
             1u);
  if ( result < 0 )
    return ZwClose(Handle);
  return result;
}

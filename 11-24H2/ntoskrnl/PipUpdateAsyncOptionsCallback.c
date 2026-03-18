/*
 * XREFs of PipUpdateAsyncOptionsCallback @ 0x14071A2C0
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140C1F07C (IopInitializePlugPlayServices.c)
 * Callees:
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x1406A8870 (ZwNotifyChangeKey.c)
 *     IopGetRegistryValue @ 0x1409CAD5C (IopGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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

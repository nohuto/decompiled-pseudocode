/*
 * XREFs of PnpCheckPossibleBootStartDriver @ 0x1407182B4
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1409AD954 (PipCallDriverAddDeviceQueryRoutine.c)
 * Callees:
 *     IopGetRegistryValue @ 0x1409B29DC (IopGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

bool __fastcall PnpCheckPossibleBootStartDriver(void *a1)
{
  bool v1; // bl

  v1 = 0;
  if ( (int)IopGetRegistryValue(a1) >= 0 )
  {
    if ( MEMORY[4] == 4 && MEMORY[0xC] == 4 )
      v1 = *(_DWORD *)MEMORY[8] != 0;
    ExFreePoolWithTag(0LL, 0);
  }
  return v1;
}

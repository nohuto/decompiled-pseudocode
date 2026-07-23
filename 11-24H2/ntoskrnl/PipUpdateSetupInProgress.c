/*
 * XREFs of PipUpdateSetupInProgress @ 0x140717F08
 * Callers:
 *     PipUpdateSetupInProgressNotify @ 0x140718028 (PipUpdateSetupInProgressNotify.c)
 *     IopInitializePlugPlayServices @ 0x140C210BC (IopInitializePlugPlayServices.c)
 * Callees:
 *     IopGetRegistryValue @ 0x1409B5F9C (IopGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

char __fastcall PipUpdateSetupInProgress(HANDLE KeyHandle)
{
  int v2; // edi
  int v3; // ebx
  int v4; // esi
  char result; // al

  v2 = 0;
  v3 = 0;
  v4 = 0;
  if ( (int)IopGetRegistryValue(KeyHandle) >= 0 )
  {
    if ( MEMORY[4] == 4 && MEMORY[0xC] == 4 )
      v2 = *(_DWORD *)MEMORY[8];
    ExFreePoolWithTag(0LL, 0);
  }
  if ( (int)IopGetRegistryValue(KeyHandle) >= 0 )
  {
    if ( MEMORY[4] == 4 && MEMORY[0xC] == 4 )
      v3 = *(_DWORD *)MEMORY[8];
    ExFreePoolWithTag(0LL, 0);
  }
  if ( v2 )
    goto LABEL_19;
  if ( !v3 || (int)IopGetRegistryValue(KeyHandle) < 0 )
    goto LABEL_18;
  if ( MEMORY[4] == 4 && MEMORY[0xC] == 4 )
    v4 = *(_DWORD *)MEMORY[8];
  ExFreePoolWithTag(0LL, 0);
  if ( v4 )
LABEL_19:
    result = 1;
  else
LABEL_18:
    result = 0;
  PnpSetupOOBEInProgress = v3 != 0;
  PnpSetupInProgress = result;
  return result;
}

/*
 * XREFs of IopGetRegistryULongValue @ 0x140594D58
 * Callers:
 *     IopGetRegistryBoolValue @ 0x140594D38 (IopGetRegistryBoolValue.c)
 *     IopLiveDumpInitRegistrySettings @ 0x140598764 (IopLiveDumpInitRegistrySettings.c)
 * Callees:
 *     IopGetRegistryValue @ 0x1409B5F9C (IopGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopGetRegistryULongValue(void *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( (int)IopGetRegistryValue(a1) >= 0 )
  {
    if ( MEMORY[4] == 4 && MEMORY[0xC] == 4 )
      v1 = *(_DWORD *)MEMORY[8];
    ExFreePoolWithTag(0LL, 0);
  }
  return v1;
}

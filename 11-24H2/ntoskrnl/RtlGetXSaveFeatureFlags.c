/*
 * XREFs of RtlGetXSaveFeatureFlags @ 0x1405E6070
 * Callers:
 *     KiInitializeKernel @ 0x140B5A930 (KiInitializeKernel.c)
 * Callees:
 *     <none>
 */

__int64 RtlGetXSaveFeatureFlags()
{
  unsigned int v0; // r9d
  int v1; // r8d

  v0 = 0;
  if ( MEMORY[0xFFFFF780000003D8] )
  {
    v1 = (8 * (MEMORY[0xFFFFF780000003EC] & 1)) | 0x10;
    if ( (MEMORY[0xFFFFF780000003EC] & 2) == 0 )
      v1 = 8 * (MEMORY[0xFFFFF780000003EC] & 1);
    v0 = v1;
    if ( (MEMORY[0xFFFFF780000003EC] & 4) != 0 )
      return v1 | 0x40u;
  }
  return v0;
}

/*
 * XREFs of MiMarkKernelCfgTarget @ 0x140481744
 * Callers:
 *     MmGetSystemRoutineAddress @ 0x1408E84F0 (MmGetSystemRoutineAddress.c)
 *     MiMarkKernelCfgAddressTakenImports @ 0x140A85AE4 (MiMarkKernelCfgAddressTakenImports.c)
 * Callees:
 *     VslEnableKernelCfgTarget @ 0x140A31588 (VslEnableKernelCfgTarget.c)
 */

__int64 MiMarkKernelCfgTarget()
{
  if ( (MiFlags & 0x40000) != 0 )
    VslEnableKernelCfgTarget();
  return 0LL;
}

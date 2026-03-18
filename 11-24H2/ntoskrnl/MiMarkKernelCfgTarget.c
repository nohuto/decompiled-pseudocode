/*
 * XREFs of MiMarkKernelCfgTarget @ 0x140482574
 * Callers:
 *     MmGetSystemRoutineAddress @ 0x1408B0D70 (MmGetSystemRoutineAddress.c)
 *     MiMarkKernelCfgAddressTakenImports @ 0x140A8A44C (MiMarkKernelCfgAddressTakenImports.c)
 * Callees:
 *     VslEnableKernelCfgTarget @ 0x140A37460 (VslEnableKernelCfgTarget.c)
 */

__int64 MiMarkKernelCfgTarget()
{
  if ( (MiFlags & 0x40000) != 0 )
    VslEnableKernelCfgTarget();
  return 0LL;
}

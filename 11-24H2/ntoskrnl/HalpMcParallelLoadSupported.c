/*
 * XREFs of HalpMcParallelLoadSupported @ 0x140559ACC
 * Callers:
 *     HalpLoadMicrocode @ 0x140701A80 (HalpLoadMicrocode.c)
 * Callees:
 *     <none>
 */

bool HalpMcParallelLoadSupported()
{
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int8 CpuVendor; // cl

  CurrentPrcb = KeGetCurrentPrcb();
  CpuVendor = CurrentPrcb->CpuVendor;
  if ( CpuVendor == 1 )
    return CurrentPrcb->CpuType >= 0x17u;
  else
    return CpuVendor == 2;
}

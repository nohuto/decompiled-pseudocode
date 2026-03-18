/*
 * XREFs of HalpGetCurrentMicrocodePlatform @ 0x1405593C0
 * Callers:
 *     HalpGetMicrocodePatchRecord @ 0x14055940C (HalpGetMicrocodePatchRecord.c)
 *     HalpMcUpdateInitializeBSP @ 0x140559BAC (HalpMcUpdateInitializeBSP.c)
 * Callees:
 *     <none>
 */

__int64 HalpGetCurrentMicrocodePlatform()
{
  int v0; // ecx

  v0 = 1;
  if ( KeGetCurrentPrcb()->CpuVendor == 1 || (v0 = 2, KeGetCurrentPrcb()->CpuVendor == 2) )
  {
    MicrocodeRecordType = v0;
    return 0LL;
  }
  else
  {
    MicrocodeRecordType = 0;
    return 3221225659LL;
  }
}

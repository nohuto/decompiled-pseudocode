/*
 * XREFs of KiDisableCacheErrataSource @ 0x1405C3828
 * Callers:
 *     KeRestoreProcessorSpecificFeatures @ 0x1404CD748 (KeRestoreProcessorSpecificFeatures.c)
 *     KiInitializeCacheErrataSupport @ 0x140C29F00 (KiInitializeCacheErrataSupport.c)
 * Callees:
 *     ReadAMDMsr @ 0x1406B31F0 (ReadAMDMsr.c)
 *     WriteAMDMsr @ 0x1406B3210 (WriteAMDMsr.c)
 */

__int64 KiDisableCacheErrataSource()
{
  unsigned __int64 v0; // rdx
  __int64 AMDMsr; // rax
  int v2; // eax
  unsigned __int64 v4; // [rsp+30h] [rbp+8h]

  v4 = __readmsr(0xC0010015) | 8;
  v0 = HIDWORD(v4);
  __writemsr(0xC0010015, v4);
  AMDMsr = ReadAMDMsr(3221295139LL, v0);
  HIDWORD(v4) = HIDWORD(AMDMsr);
  if ( KiTLBCOverride == 1 )
    v2 = AMDMsr & 0xFFDFFFFF;
  else
    v2 = AMDMsr | 0x800000;
  LODWORD(v4) = v2 | 2;
  return WriteAMDMsr(3221295139LL, v4);
}

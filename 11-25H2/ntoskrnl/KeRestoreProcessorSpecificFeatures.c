/*
 * XREFs of KeRestoreProcessorSpecificFeatures @ 0x1404CA720
 * Callers:
 *     PnprQuiesceProcessorDpc @ 0x140B44710 (PnprQuiesceProcessorDpc.c)
 *     PopHandleNextState @ 0x140B55D00 (PopHandleNextState.c)
 * Callees:
 *     KiRestoreFeatureBits @ 0x1404CA7A8 (KiRestoreFeatureBits.c)
 *     KiDisableCacheErrataSource @ 0x1405BF748 (KiDisableCacheErrataSource.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     KiRestoreXSaveSupport @ 0x140B3B008 (KiRestoreXSaveSupport.c)
 *     KiSetPageAttributesTable @ 0x140B5EB8C (KiSetPageAttributesTable.c)
 */

__int64 __fastcall KeRestoreProcessorSpecificFeatures(__int64 a1)
{
  unsigned __int64 v7; // rax

  KiSetPageAttributesTable();
  if ( KiTLBCOverride )
    KiDisableCacheErrataSource();
  _RAX = 2147483649LL;
  __asm { cpuid }
  if ( (_RDX & 0x2000000) != 0 )
  {
    v7 = __readmsr(0xC0000080) | 0x4000;
    _RDX = HIDWORD(v7);
    __writemsr(0xC0000080, v7);
  }
  KiRestoreXSaveSupport(a1, _RDX);
  return KiRestoreFeatureBits();
}

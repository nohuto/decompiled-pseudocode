/*
 * XREFs of NVMeControllerIdentifyWorkItem @ 0x1400222F0
 * Callers:
 *     <none>
 * Callees:
 *     NVMeGetCommandEffectsLog @ 0x14000B4B0 (NVMeGetCommandEffectsLog.c)
 *     NVMeGetFeatureIdentifiersSupportedLog @ 0x14000D0E0 (NVMeGetFeatureIdentifiersSupportedLog.c)
 *     NVMeGetSupportedLogPagesLog @ 0x14000D260 (NVMeGetSupportedLogPagesLog.c)
 *     NVMeControllerIdentify @ 0x140026FDC (NVMeControllerIdentify.c)
 *     NVMeGetControllerIoCommandSetIdentify @ 0x14002881C (NVMeGetControllerIoCommandSetIdentify.c)
 */

__int64 __fastcall NVMeControllerIdentifyWorkItem(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r9

  NVMeControllerIdentify(a1);
  NVMeGetControllerIoCommandSetIdentify(a1);
  NVMeGetCommandEffectsLog(a1, 1u);
  NVMeGetSupportedLogPagesLog(a1, 1u);
  NVMeGetFeatureIdentifiersSupportedLog(a1, 1u);
  return StorPortExtendedFunction(31LL, a1, a3, v5);
}

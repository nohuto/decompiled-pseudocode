/*
 * XREFs of VfTargetDriversIsEnabled @ 0x140BA7F30
 * Callers:
 *     IoAllocateIrpEx @ 0x140253BB0 (IoAllocateIrpEx.c)
 *     PipDmgIsDmaVerifierEnabled @ 0x140727624 (PipDmgIsDmaVerifierEnabled.c)
 *     ViIrpCheckKernelAddressForIrp @ 0x140B8E228 (ViIrpCheckKernelAddressForIrp.c)
 *     VfPendingShouldForce @ 0x140B91BC8 (VfPendingShouldForce.c)
 *     ViWdBeforeCallDriver @ 0x140B9CA10 (ViWdBeforeCallDriver.c)
 *     VfCheckUserHandle @ 0x140BA9228 (VfCheckUserHandle.c)
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x140BA7E7C (VfTargetDriversGetVerifierData.c)
 */

__int64 __fastcall VfTargetDriversIsEnabled(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( !VfSafeMode && ViTargetInitialized )
    LOBYTE(v4) = VfTargetDriversGetVerifierData(a1, (unsigned int)ViTargetInitialized, a3, a4) != 0;
  return v4;
}

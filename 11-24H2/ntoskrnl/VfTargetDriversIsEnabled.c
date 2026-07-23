/*
 * XREFs of VfTargetDriversIsEnabled @ 0x140BA9F30
 * Callers:
 *     IoAllocateIrpEx @ 0x1402841C0 (IoAllocateIrpEx.c)
 *     PipDmgIsDmaVerifierEnabled @ 0x1407251B4 (PipDmgIsDmaVerifierEnabled.c)
 *     ViIrpCheckKernelAddressForIrp @ 0x140B90228 (ViIrpCheckKernelAddressForIrp.c)
 *     VfPendingShouldForce @ 0x140B93BC8 (VfPendingShouldForce.c)
 *     ViWdBeforeCallDriver @ 0x140B9EA10 (ViWdBeforeCallDriver.c)
 *     VfCheckUserHandle @ 0x140BAB228 (VfCheckUserHandle.c)
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x140BA9E7C (VfTargetDriversGetVerifierData.c)
 */

__int64 __fastcall VfTargetDriversIsEnabled(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( !VfSafeMode && ViTargetInitialized )
    LOBYTE(v4) = VfTargetDriversGetVerifierData(a1, (unsigned int)ViTargetInitialized, a3, a4) != 0;
  return v4;
}

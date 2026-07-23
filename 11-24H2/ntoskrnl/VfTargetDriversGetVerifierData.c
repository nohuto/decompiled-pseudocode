/*
 * XREFs of VfTargetDriversGetVerifierData @ 0x140BA9E7C
 * Callers:
 *     CarGetDriverInfoFromViolationStack @ 0x140614488 (CarGetDriverInfoFromViolationStack.c)
 *     DifGetPluginPerDriverData @ 0x140615FA0 (DifGetPluginPerDriverData.c)
 *     DifDllInitializeWrapper @ 0x1406A519C (DifDllInitializeWrapper.c)
 *     DifDllUnloadWrapper @ 0x1406A5310 (DifDllUnloadWrapper.c)
 *     VfUtilCheckRuleEnforcement @ 0x140B851F0 (VfUtilCheckRuleEnforcement.c)
 *     VfUtilGetDriverFullName @ 0x140B85290 (VfUtilGetDriverFullName.c)
 *     VfUtilGetDriverName @ 0x140B852E0 (VfUtilGetDriverName.c)
 *     VfUtilGetSigningLevel @ 0x140B853C0 (VfUtilGetSigningLevel.c)
 *     VfUtilIsBootDriver @ 0x140B853E0 (VfUtilIsBootDriver.c)
 *     VfTargetDriversIsEnabled @ 0x140BA9F30 (VfTargetDriversIsEnabled.c)
 *     VfHandlePoolAlloc @ 0x140BAAAA0 (VfHandlePoolAlloc.c)
 * Callees:
 *     VfTargetDriversGetNode @ 0x1403E3D54 (VfTargetDriversGetNode.c)
 *     VfDriverIsKernelImageAddress @ 0x140BA9ECC (VfDriverIsKernelImageAddress.c)
 */

__int64 __fastcall VfTargetDriversGetVerifierData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  bool v6; // zf
  __int64 Node; // rax

  if ( (unsigned int)VfDriverIsKernelImageAddress(a1, a2, a3, a4) )
  {
    v6 = KernelVerifier == 0;
    goto LABEL_6;
  }
  if ( !KernelVerifier )
  {
    v6 = dword_140F047A0 == 0;
LABEL_6:
    if ( v6 )
      return 0LL;
    goto LABEL_7;
  }
  if ( dword_140F047A0 < 2 )
    return 0LL;
LABEL_7:
  Node = VfTargetDriversGetNode(v4);
  if ( !Node )
    return 0LL;
  return *(_QWORD *)(Node + 64);
}

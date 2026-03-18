/*
 * XREFs of ?ModifiableRegion@Iter@CInputSpace@@QEAAPEAUCInputSpaceRegion@@XZ @ 0x1401F4000
 * Callers:
 *     ?ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ @ 0x1401289F8 (-ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ.c)
 *     ?_FindRegionForDisplay@CInputConfig@@AEAA_NAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@AEBUCInputSpace@@AEBUtagQDC_DATA@@PEAPEAUCInputSpaceRegion@@@Z @ 0x1401F48AC (-_FindRegionForDisplay@CInputConfig@@AEAA_NAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@AEBUCInputSpace.c)
 *     ?_ProcessInputSpace@CInputConfig@@AEAAXPEAUCInputSpace@@@Z @ 0x1401F4AC8 (-_ProcessInputSpace@CInputConfig@@AEAAXPEAUCInputSpace@@@Z.c)
 * Callees:
 *     ?LockExclusivelyHeld@CInputConfig@@SA_NXZ @ 0x1401433C0 (-LockExclusivelyHeld@CInputConfig@@SA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct CInputSpaceRegion *__fastcall CInputSpace::Iter::ModifiableRegion(CInputSpace::Iter *this)
{
  __int64 v2; // rbx
  __int64 v3; // r8

  v2 = 0LL;
  if ( !CInputConfig::LockExclusivelyHeld((__int64)this) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 139);
  v3 = *((_QWORD *)this + 2);
  if ( v3 != *((_QWORD *)this + 1) )
    return (struct CInputSpaceRegion *)(v3 + 16);
  return (struct CInputSpaceRegion *)v2;
}

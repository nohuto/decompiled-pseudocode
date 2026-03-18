/*
 * XREFs of ?xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x14002E770
 * Callers:
 *     ?xxxFreeWindow@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x14002E024 (-xxxFreeWindow@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAU-$Win32HMOptionalThreadLockAlways@UtagWND@.c)
 * Callees:
 *     ?ClearTransforms@InputTransform@@YAXPEAUtagWND@@@Z @ 0x14010F74C (-ClearTransforms@InputTransform@@YAXPEAUtagWND@@@Z.c)
 *     IsMotherDesktopWindow @ 0x14018A580 (IsMotherDesktopWindow.c)
 *     FreeWindowGCData @ 0x140196640 (FreeWindowGCData.c)
 *     FreeWindowMessageFilter @ 0x14019679C (FreeWindowMessageFilter.c)
 *     ?xxxDeferredDesktopRotation@@YA_KXZ @ 0x140226BB0 (-xxxDeferredDesktopRotation@@YA_KXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline @ 0x14027F22C (Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline.c)
 *     ?CleanupShellRelatedData@@YA_NPEAUtagWND@@@Z @ 0x1402B4154 (-CleanupShellRelatedData@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxFW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1402B452C (-xxxFW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 */

void __fastcall xxxFreeWindow_Phase1(struct tagWND *a1, struct tagTHREADINFO *a2)
{
  BOOL v4; // esi
  struct tagWND *v5; // rdx
  int v6; // eax

  v4 = 0;
  if ( *(char *)(*((_QWORD *)a1 + 5) + 20LL) >= 0 && !(unsigned int)IsMotherDesktopWindow() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4734LL);
  xxxFW_DestroyIMEWindowIfRequired(a1, a2);
  if ( *((_QWORD *)a1 + 3) )
    v4 = CleanupShellRelatedData(a1);
  if ( *((_DWORD *)a1 + 65) )
    CleanupInputDelegation(a1);
  InputTransform::ClearTransforms(a1, v5);
  FreeWindowMessageFilter(a1);
  FreeWindowGCData(a1);
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 && a2 != *((struct tagTHREADINFO **)a1 + 2) )
    HMChangeOwnerThread(a1, a2);
  if ( v4 )
    xxxDeferredDesktopRotation();
  if ( !(unsigned int)Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline() )
  {
    v6 = *((_DWORD *)a1 + 95);
    if ( (v6 & 0x800) != 0 )
    {
      *((_DWORD *)a1 + 95) = v6 & 0xFFFFF7FF;
      if ( !*((_WORD *)a2 + 632) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4793LL);
      --*((_WORD *)a2 + 632);
    }
  }
}

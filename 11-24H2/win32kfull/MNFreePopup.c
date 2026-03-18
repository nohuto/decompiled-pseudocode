/*
 * XREFs of MNFreePopup @ 0x14024F1F0
 * Callers:
 *     xxxMNEndMenuState @ 0x14009A5F0 (xxxMNEndMenuState.c)
 *     MNFlushDestroyedPopups @ 0x14021A820 (MNFlushDestroyedPopups.c)
 *     xxxMNStartMenuState @ 0x14024F334 (xxxMNStartMenuState.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1402BD444 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14006F280 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     UnlockPopupMenu @ 0x14026C05C (UnlockPopupMenu.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x140282D2C (safe_cast_fnid_to_PMENUWND.c)
 */

_QWORD *__fastcall MNFreePopup(__int64 **a1)
{
  __int64 v2; // rcx
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rdx

  v3 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(**a1 + 16));
  if ( v3 )
  {
    v4 = **a1;
    if ( v4 != W32GetUserSessionState(v2, *a1) + 65832 )
    {
      *(_QWORD *)(v3 + 8) = 0LL;
      if ( *(_QWORD *)(v3 + 16) && *(_QWORD *)(v3 + 16) != **a1 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 255LL);
      *(_QWORD *)(v3 + 16) = **a1;
    }
  }
  HMAssignmentUnlock(**a1 + 24);
  HMAssignmentUnlock(**a1 + 32);
  UnlockPopupMenu(a1, **a1 + 40);
  UnlockPopupMenu(a1, **a1 + 48);
  HMAssignmentUnlock(**a1 + 8);
  HMAssignmentUnlock(**a1 + 56);
  HMAssignmentUnlock(**a1 + 16);
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)a1, v5);
}

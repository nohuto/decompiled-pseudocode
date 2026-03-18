/*
 * XREFs of HMValidateSharedHandleNoRip @ 0x140046F28
 * Callers:
 *     GuessMonitorOverrideForCoordinateConversions @ 0x140046C00 (GuessMonitorOverrideForCoordinateConversions.c)
 *     ?UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x140046CE4 (-UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     ValidateHmonitorNoRip @ 0x140046F10 (ValidateHmonitorNoRip.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x140047880 (TransformRectBetweenCoordinateSpaces.c)
 *     rimInUserCritCreatePointerDeviceInfo @ 0x1400C7140 (rimInUserCritCreatePointerDeviceInfo.c)
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1400C7774 (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInpu.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1401E4F04 (RIMIDECreatePointerDeviceInfo.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x14021D248 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMValidateSharedHandleNoRip(__int64 a1)
{
  __int16 v1; // esi^2
  int v2; // ebp
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 UserSessionState; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r14
  __int16 v11; // si
  __int64 v12; // rbp

  v1 = WORD1(a1);
  v2 = (unsigned __int16)a1;
  v3 = 0LL;
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1) + 19928) + 8LL) )
  {
    UserSessionState = W32GetUserSessionState(v4);
    v7 = (unsigned int)(*(_DWORD *)(W32GetUserSessionState(v6) + 19952) * v2);
    v8 = v7 + *(_QWORD *)(UserSessionState + 19944);
    v9 = W32GetUserSessionState(v7);
    v10 = *(_QWORD *)(v9 + 19888);
    v11 = v1 & 0x7FFF;
    v12 = 5LL * (unsigned int)((v8 - *(_QWORD *)(v9 + 19944)) >> 5);
    if ( ((v1 & 0x7FFF) == *(_WORD *)(v8 + 26) || v11 == 0x7FFF || !v11 && PsGetCurrentProcessWow64Process())
      && (*(_BYTE *)(v8 + 25) & 1) == 0
      && *(_BYTE *)(v8 + 24) == 12 )
    {
      return *(_QWORD *)(v10 + 8 * v12);
    }
  }
  return v3;
}

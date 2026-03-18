/*
 * XREFs of PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C004CDAC
 * Callers:
 *     NtUserGetDisplayConfigBufferSizes @ 0x1C001E440 (NtUserGetDisplayConfigBufferSizes.c)
 *     NtUserQueryDisplayConfig @ 0x1C001E630 (NtUserQueryDisplayConfig.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C001E910 (NtUserDisplayConfigGetDeviceInfo.c)
 *     NtUserGetHDevName @ 0x1C004C950 (NtUserGetHDevName.c)
 *     NtUserGetKeyState @ 0x1C004E960 (NtUserGetKeyState.c)
 *     hdcOpenDCW @ 0x1C005ADC0 (hdcOpenDCW.c)
 *     NtUserGetDpiForMonitor @ 0x1C005DE70 (NtUserGetDpiForMonitor.c)
 *     NtUserGetUniformSpaceMapping @ 0x1C0063EA0 (NtUserGetUniformSpaceMapping.c)
 *     NtUserGetInputLocaleInfo @ 0x1C0066DF0 (NtUserGetInputLocaleInfo.c)
 *     NtUserGetKeyboardLayoutList @ 0x1C0069920 (NtUserGetKeyboardLayoutList.c)
 *     NtUserGetKeyboardState @ 0x1C00708C0 (NtUserGetKeyboardState.c)
 *     NtUserGetAsyncKeyState @ 0x1C0070AB0 (NtUserGetAsyncKeyState.c)
 *     NtUserGetPointerFrameTimes @ 0x1C00DFE30 (NtUserGetPointerFrameTimes.c)
 *     NtUserFunctionalizeDisplayConfig @ 0x1C0143F90 (NtUserFunctionalizeDisplayConfig.c)
 *     NtUserGetClipCursor @ 0x1C01444D0 (NtUserGetClipCursor.c)
 *     NtUserGetExtendedPointerDeviceProperty @ 0x1C0144610 (NtUserGetExtendedPointerDeviceProperty.c)
 *     NtUserGetPointerCursorId @ 0x1C0144BE0 (NtUserGetPointerCursorId.c)
 *     NtUserGetPointerDeviceInputSpace @ 0x1C0144CE0 (NtUserGetPointerDeviceInputSpace.c)
 *     NtUserGetPointerDeviceOrientation @ 0x1C0144DC0 (NtUserGetPointerDeviceOrientation.c)
 *     NtUserGetPointerInfoList @ 0x1C0144EB0 (NtUserGetPointerInfoList.c)
 *     NtUserGetPointerInputTransform @ 0x1C0145370 (NtUserGetPointerInputTransform.c)
 *     NtUserGetPointerType @ 0x1C01455A0 (NtUserGetPointerType.c)
 *     NtUserGetRawPointerDeviceData @ 0x1C0145900 (NtUserGetRawPointerDeviceData.c)
 *     ?DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName@@YAJPEAU_D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME@@@Z @ 0x1C0168E70 (-DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName@@YAJPEAU_D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDI.c)
 *     NtHWCursorUpdatePointer @ 0x1C0169490 (NtHWCursorUpdatePointer.c)
 * Callees:
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0053C40 (EtwTraceAcquiredSharedUserCrit.c)
 *     IsEtwUserCritEnabled @ 0x1C0053DF0 (IsEtwUserCritEnabled.c)
 */

__int64 __fastcall PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  __int64 v10; // rax
  PVOID v11; // rdi

  v8 = 0LL;
  if ( (unsigned int)IsEtwUserCritEnabled(a1, a2, a3, a4) )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  }
  v10 = SGDGetUserSessionState(v5, v4, v6, v7);
  v11 = ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(v10 + 8));
  EtwTraceAcquiredSharedUserCrit();
  if ( v11 )
    return *(_QWORD *)v11;
  return v8;
}

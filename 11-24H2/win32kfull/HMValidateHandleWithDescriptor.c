/*
 * XREFs of HMValidateHandleWithDescriptor @ 0x140077C08
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140066508 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     NtUserGetCursorFrameInfo @ 0x140076D90 (NtUserGetCursorFrameInfo.c)
 *     NtUserEndDeferWindowPosEx @ 0x140076E80 (NtUserEndDeferWindowPosEx.c)
 *     NtUserDrawIconEx @ 0x140076F70 (NtUserDrawIconEx.c)
 *     _MapDesktopObject @ 0x140077144 (_MapDesktopObject.c)
 *     NtUserUnhookWindowsHookEx @ 0x140077210 (NtUserUnhookWindowsHookEx.c)
 *     NtUserGetRawInputDeviceInfo @ 0x140077300 (NtUserGetRawInputDeviceInfo.c)
 *     ?SaveMessageInfoHandle@@YAXPEAUtagTHREADINFO@@PEAUtagMSG@@@Z @ 0x1400777A0 (-SaveMessageInfoHandle@@YAXPEAUtagTHREADINFO@@PEAUtagMSG@@@Z.c)
 *     NtUserDestroyCursor @ 0x1400778B0 (NtUserDestroyCursor.c)
 *     NtUserGetIconInfo @ 0x1400779B0 (NtUserGetIconInfo.c)
 *     NtUserGetIconSize @ 0x1400798F0 (NtUserGetIconSize.c)
 *     NtUserGetRequiredCursorSizes @ 0x140079B80 (NtUserGetRequiredCursorSizes.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x14007E01C (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     fnHkINLPMSG @ 0x1400800D0 (fnHkINLPMSG.c)
 *     NtUserUnhookWinEvent @ 0x140084EF0 (NtUserUnhookWinEvent.c)
 *     NtUserTranslateAccelerator @ 0x14009CCF0 (NtUserTranslateAccelerator.c)
 *     xxxInterSendMsgEx @ 0x14011A1D0 (xxxInterSendMsgEx.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x14012C850 (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x14012C9E4 (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     NtUserLinkDpiCursor @ 0x140134120 (NtUserLinkDpiCursor.c)
 *     NtUserCopyAcceleratorTable @ 0x1401C7110 (NtUserCopyAcceleratorTable.c)
 *     NtUserAssociateInputContext @ 0x1401C7C90 (NtUserAssociateInputContext.c)
 *     NtUserUpdateInputContext @ 0x1401D09F0 (NtUserUpdateInputContext.c)
 *     NtUserCreateLocalMemHandle @ 0x1401D11E0 (NtUserCreateLocalMemHandle.c)
 *     NtUserQueryInputContext @ 0x1401DD680 (NtUserQueryInputContext.c)
 *     SfnTOUCH @ 0x1401F5D40 (SfnTOUCH.c)
 *     NtUserGetTouchInputInfo @ 0x1401F9DF0 (NtUserGetTouchInputInfo.c)
 *     NtUserDestroyAcceleratorTable @ 0x1401FBB00 (NtUserDestroyAcceleratorTable.c)
 *     NtUserGetGestureInfo @ 0x140208640 (NtUserGetGestureInfo.c)
 *     NtUserRegisterEdgy @ 0x140208DD0 (NtUserRegisterEdgy.c)
 *     SfnGESTURE @ 0x140209870 (SfnGESTURE.c)
 *     NtUserSetSystemCursor @ 0x140214240 (NtUserSetSystemCursor.c)
 *     NtUserDeferWindowPosAndBand @ 0x140241080 (NtUserDeferWindowPosAndBand.c)
 *     NtUserUserHandleGrantAccess @ 0x140247B90 (NtUserUserHandleGrantAccess.c)
 *     ?NtUserHandleGrantAccess@@YAHPEAX0_N@Z @ 0x1402912F8 (-NtUserHandleGrantAccess@@YAHPEAX0_N@Z.c)
 *     NtUserDestroyInputContext @ 0x140293A00 (NtUserDestroyInputContext.c)
 *     NtUserDragObject @ 0x140293D50 (NtUserDragObject.c)
 *     NtUserDrawCaptionTemp @ 0x1402940D0 (NtUserDrawCaptionTemp.c)
 *     NtUserFindExistingCursorIcon @ 0x140294EB0 (NtUserFindExistingCursorIcon.c)
 *     NtUserGetGestureExtArgs @ 0x1402961E0 (NtUserGetGestureExtArgs.c)
 *     NtUserGetTouchValidationStatus @ 0x140297200 (NtUserGetTouchValidationStatus.c)
 *     NtUserSetCalibrationData @ 0x14029C8E0 (NtUserSetCalibrationData.c)
 *     NtUserSetCursorIconDataEx @ 0x14029D140 (NtUserSetCursorIconDataEx.c)
 *     NtUserSetDisplayMapping @ 0x14029D690 (NtUserSetDisplayMapping.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402B2A00 (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1402DF7A8 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall HMValidateHandleWithDescriptor(__int64 a1, __int64 a2)
{
  int v2; // r14d
  __int64 v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 *v15; // r15
  __int64 v16; // rcx
  __int16 v17; // ax
  char v18; // al
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v24; // ecx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v26; // rdx
  __int16 v27; // r8
  _QWORD *v28; // rax
  __int64 v29; // rax

  v2 = (unsigned __int8)a2;
  v3 = 0LL;
  W32GetCurrentThreadNonPaged(a1, a2);
  v8 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19928);
  if ( (unsigned __int64)(unsigned __int16)a1 >= *(_QWORD *)(v8 + 8) )
    goto LABEL_22;
  UserSessionState = W32GetUserSessionState(v8, v7);
  v12 = *(_DWORD *)(W32GetUserSessionState(v11, v10) + 19952) * (unsigned int)(unsigned __int16)a1
      + *(_QWORD *)(UserSessionState + 19944);
  v15 = (__int64 *)HMPkheFromPhe(v12);
  v16 = 0x7FFFLL;
  v17 = WORD1(a1) & 0x7FFF;
  if ( (WORD1(a1) & 0x7FFF) != *(_WORD *)(v12 + 26)
    && v17 != 0x7FFF
    && (v17 || !PsGetCurrentProcessWow64Process(0x7FFFLL, v13, v14)) )
  {
    goto LABEL_22;
  }
  LOBYTE(v16) = *(_BYTE *)(v12 + 25);
  if ( (v16 & 1) == 0 )
  {
    v18 = *(_BYTE *)(v12 + 24);
    if ( v18 == (_BYTE)v2 || (_BYTE)v2 == 0xFF && v18 )
    {
      v3 = *v15;
      if ( (v16 & 4) != 0 )
      {
        LOBYTE(v13) = v2;
        v16 = -(__int64)((unsigned int)HMSDCheck(a1, v13, 0LL) != 0);
        v3 &= v16;
      }
    }
  }
  if ( (*(_BYTE *)(v12 + 25) & 4) == 0 )
  {
    CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(v16, v13);
    if ( CurrentThreadNonPaged )
      v20 = *CurrentThreadNonPaged;
    else
      v20 = 0LL;
    v21 = 3LL;
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v20 + 528), 0, 0) & 0x20000000) == 0 )
      v21 = 2LL;
    v22 = -(__int64)((unsigned int)ValidateHandleSecure(a1, v21) != 0);
    v3 &= v22;
    if ( *(char *)(v12 + 25) < 0 )
    {
      CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v22);
      v26 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
      {
        if ( *CurrentProcessWin32Process )
        {
          v27 = gahti[12 * *(unsigned __int8 *)(v12 + 24) + 6];
          if ( (v27 & 2) != 0 )
          {
            v28 = (_QWORD *)v15[1];
LABEL_40:
            if ( v28 && v28 != v26 )
              goto LABEL_22;
            goto LABEL_13;
          }
          if ( (v27 & 1) != 0 )
          {
            v29 = v15[1];
            if ( v29 )
            {
              v28 = *(_QWORD **)(v29 + 464);
              goto LABEL_40;
            }
          }
        }
      }
    }
  }
LABEL_13:
  if ( v3 )
    return v3;
LABEL_22:
  switch ( v2 )
  {
    case 1:
      v24 = 1400;
      break;
    case 2:
      v24 = 1401;
      break;
    case 3:
      v24 = 1402;
      break;
    case 4:
      v24 = 1405;
      break;
    case 5:
      v24 = 1404;
      break;
    case 8:
      v24 = 1403;
      break;
    default:
      v24 = 6;
      break;
  }
  UserSetLastError(v24);
  return 0LL;
}

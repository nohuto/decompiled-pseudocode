/*
 * XREFs of HMValidateHandle @ 0x1C0049CA8
 * Callers:
 *     NtUserTranslateAccelerator @ 0x1C000C720 (NtUserTranslateAccelerator.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C0013354 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     NtUserCopyAcceleratorTable @ 0x1C0013ED0 (NtUserCopyAcceleratorTable.c)
 *     xxxInterSendMsgEx @ 0x1C0033720 (xxxInterSendMsgEx.c)
 *     _MapDesktopObject @ 0x1C0035BF0 (_MapDesktopObject.c)
 *     NtUserUnhookWinEvent @ 0x1C003C9C0 (NtUserUnhookWinEvent.c)
 *     NtUserUnhookWindowsHookEx @ 0x1C003CF70 (NtUserUnhookWindowsHookEx.c)
 *     NtUserUpdateInputContext @ 0x1C00416A0 (NtUserUpdateInputContext.c)
 *     NtUserDrawIconEx @ 0x1C0044DD0 (NtUserDrawIconEx.c)
 *     NtUserGetIconSize @ 0x1C0044F40 (NtUserGetIconSize.c)
 *     NtUserDestroyCursor @ 0x1C0045800 (NtUserDestroyCursor.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C00461C0 (NtUserDeferWindowPosAndBand.c)
 *     NtUserGetIconInfo @ 0x1C0048BA0 (NtUserGetIconInfo.c)
 *     NtUserSetCursorIconDataEx @ 0x1C0049940 (NtUserSetCursorIconDataEx.c)
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x1C004A78C (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     NtUserFindExistingCursorIcon @ 0x1C0066280 (NtUserFindExistingCursorIcon.c)
 *     NtUserGetRequiredCursorSizes @ 0x1C0084C50 (NtUserGetRequiredCursorSizes.c)
 *     NtUserGetCursorFrameInfo @ 0x1C0084D60 (NtUserGetCursorFrameInfo.c)
 *     NtUserEndDeferWindowPosEx @ 0x1C0086970 (NtUserEndDeferWindowPosEx.c)
 *     NtUserQueryInputContext @ 0x1C0088E10 (NtUserQueryInputContext.c)
 *     NtUserDestroyAcceleratorTable @ 0x1C009D930 (NtUserDestroyAcceleratorTable.c)
 *     NtUserSetCursor @ 0x1C00AF7E0 (NtUserSetCursor.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C011EE90 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     fnHkINLPMSG @ 0x1C0125540 (fnHkINLPMSG.c)
 *     xxxRealInternalGetMessage @ 0x1C01287E0 (xxxRealInternalGetMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012BAE0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserGetRawInputData @ 0x1C0153B00 (NtUserGetRawInputData.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C01C035C (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 *     NtUserAssociateInputContext @ 0x1C01CC3A0 (NtUserAssociateInputContext.c)
 *     NtUserCreateLocalMemHandle @ 0x1C01CD7E0 (NtUserCreateLocalMemHandle.c)
 *     NtUserDestroyInputContext @ 0x1C01CDD10 (NtUserDestroyInputContext.c)
 *     NtUserDragObject @ 0x1C01CE070 (NtUserDragObject.c)
 *     NtUserDrawCaptionTemp @ 0x1C01CE4F0 (NtUserDrawCaptionTemp.c)
 *     NtUserGetGestureExtArgs @ 0x1C01D0D00 (NtUserGetGestureExtArgs.c)
 *     NtUserGetGestureInfo @ 0x1C01D0E60 (NtUserGetGestureInfo.c)
 *     NtUserGetRawInputBuffer @ 0x1C01D2C90 (NtUserGetRawInputBuffer.c)
 *     NtUserGetRawInputDeviceInfo @ 0x1C01D3000 (NtUserGetRawInputDeviceInfo.c)
 *     NtUserGetTouchInputInfo @ 0x1C01D36B0 (NtUserGetTouchInputInfo.c)
 *     NtUserGetTouchValidationStatus @ 0x1C01D3810 (NtUserGetTouchValidationStatus.c)
 *     NtUserLinkDpiCursor @ 0x1C01D5720 (NtUserLinkDpiCursor.c)
 *     NtUserRegisterEdgy @ 0x1C01D8830 (NtUserRegisterEdgy.c)
 *     NtUserSetCalibrationData @ 0x1C01D9E70 (NtUserSetCalibrationData.c)
 *     NtUserSetDisplayMapping @ 0x1C01DAFF0 (NtUserSetDisplayMapping.c)
 *     NtUserSetSystemCursor @ 0x1C01DC200 (NtUserSetSystemCursor.c)
 *     NtUserUserHandleGrantAccess @ 0x1C01DF610 (NtUserUserHandleGrantAccess.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01FCAB0 (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     SfnGESTURE @ 0x1C0205D60 (SfnGESTURE.c)
 *     SfnTOUCH @ 0x1C020F390 (SfnTOUCH.c)
 *     fnHkOPTINLPEVENTMSG @ 0x1C02108BC (fnHkOPTINLPEVENTMSG.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C022EE28 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall HMValidateHandle(__int64 a1, unsigned __int8 a2)
{
  int v3; // r15d
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 *v6; // r14
  __int16 v7; // ax
  char v8; // al
  __int64 v9; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v11; // rcx
  __int64 v13; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v15; // rdx
  __int16 v16; // r8
  _QWORD *v17; // rax
  __int64 v18; // rax

  v3 = a2;
  v4 = 0LL;
  PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( (unsigned __int64)(unsigned __int16)a1 >= *(_QWORD *)(gpsi + 8LL) )
    goto LABEL_19;
  v5 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)a1;
  v6 = (__int64 *)HMPkheFromPhe(v5);
  v7 = WORD1(a1) & 0x7FFF;
  if ( (WORD1(a1) & 0x7FFF) != *(_WORD *)(v5 + 26) && v7 != 0x7FFF && (v7 || !PsGetCurrentProcessWow64Process()) )
    goto LABEL_19;
  if ( (*(_BYTE *)(v5 + 25) & 1) == 0 )
  {
    v8 = *(_BYTE *)(v5 + 24);
    if ( v8 == (_BYTE)v3 || (_BYTE)v3 == 0xFF && v8 )
      v4 = *v6;
  }
  v9 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v9 = *ThreadWin32Thread;
  if ( (*(_DWORD *)(v9 + 488) & 0x20000000) != 0 )
  {
    if ( !(unsigned int)ValidateHandleSecure(a1, 3LL) )
      v4 = 0LL;
  }
  else
  {
    v11 = -(__int64)((unsigned int)ValidateHandleSecure(a1, 2LL) != 0);
    v4 &= v11;
  }
  if ( *(char *)(v5 + 25) < 0 )
  {
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v11);
    v15 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      if ( *CurrentProcessWin32Process )
      {
        v16 = gahti[12 * *(unsigned __int8 *)(v5 + 24) + 6];
        if ( (v16 & 2) != 0 )
        {
          v17 = (_QWORD *)v6[1];
LABEL_42:
          if ( v17 && v17 != v15 )
            goto LABEL_19;
          goto LABEL_11;
        }
        if ( (v16 & 1) != 0 )
        {
          v18 = v6[1];
          if ( v18 )
          {
            v17 = *(_QWORD **)(v18 + 424);
            goto LABEL_42;
          }
        }
      }
    }
  }
LABEL_11:
  if ( v4 )
    return v4;
LABEL_19:
  switch ( v3 )
  {
    case 1:
      v13 = 1400LL;
      break;
    case 2:
      v13 = 1401LL;
      break;
    case 3:
      v13 = 1402LL;
      break;
    case 4:
      v13 = 1405LL;
      break;
    case 5:
      v13 = 1404LL;
      break;
    case 8:
      v13 = 1403LL;
      break;
    default:
      v13 = 6LL;
      break;
  }
  UserSetLastError(v13);
  return 0LL;
}

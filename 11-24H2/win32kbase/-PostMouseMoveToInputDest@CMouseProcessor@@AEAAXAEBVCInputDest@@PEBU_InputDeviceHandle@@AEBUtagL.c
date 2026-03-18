/*
 * XREFs of ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@_K3W4PostMouseMoveOptions@@PEAU_mouseCursorEvent@@@Z @ 0x14021E008
 * Callers:
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x14018C758 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     ?PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z @ 0x14018D208 (-PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x14005FEB4 (_anonymous_namespace_--InMouseRawInputMode.c)
 *     ?GetInputMessageSource@QHelper@@YAPEAUtagINPUT_MESSAGE_SOURCE@@AEBVCInputDest@@@Z @ 0x140094750 (-GetInputMessageSource@QHelper@@YAPEAUtagINPUT_MESSAGE_SOURCE@@AEBVCInputDest@@@Z.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x14009483C (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x14009499C (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     SetUnavailableInputSource @ 0x1400C2850 (SetUnavailableInputSource.c)
 *     ApiSetEditionPostInputMessage @ 0x140192E3C (ApiSetEditionPostInputMessage.c)
 */

void __fastcall CMouseProcessor::PostMouseMoveToInputDest(
        __int64 a1,
        CInputDest *a2,
        __int64 a3,
        unsigned __int16 *a4,
        int a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  const struct CInputDest *v12; // rdx
  struct tagWND *UserWindow; // rbp
  __int64 *InputMessageSource; // rax
  int v15; // r8d
  __int64 Queue; // rax
  const struct CInputDest *v17; // rdx
  struct tagINPUT_MESSAGE_SOURCE *v18; // rax
  _QWORD v19[4]; // [rsp+60h] [rbp-38h] BYREF

  if ( !anonymous_namespace_::InMouseRawInputMode((__int64)a2, 0LL, 1) )
  {
    if ( (a7 & 2) != 0 )
      UserWindow = CInputDest::GetUserWindow(a2);
    else
      UserWindow = 0LL;
    v19[1] = 0LL;
    v19[2] = a8;
    v19[0] = a3;
    InputMessageSource = (__int64 *)QHelper::GetInputMessageSource(a2, v12);
    v15 = a7 & 1 | 0x10;
    if ( (a7 & 4) == 0 )
      v15 = a7 & 1;
    ApiSetEditionPostInputMessage(
      (__int64)a2,
      (__int64)UserWindow,
      0x200u,
      0LL,
      *a4 | (a4[2] << 16),
      a5,
      a6,
      *(_QWORD *)(a1 + 3688),
      v15,
      InputMessageSource,
      (__int64)v19);
  }
  Queue = CInputDest::GetQueue(a2, 2);
  if ( Queue )
    *(_DWORD *)(Queue + 436) &= ~0x20u;
  v18 = QHelper::GetInputMessageSource(a2, v17);
  SetUnavailableInputSource(v18);
}

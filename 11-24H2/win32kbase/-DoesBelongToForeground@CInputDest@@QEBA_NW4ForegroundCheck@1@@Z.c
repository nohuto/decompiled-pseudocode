/*
 * XREFs of ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x14009477C
 * Callers:
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x14005F804 (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 *     ?OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z @ 0x14018D1A4 (-OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x14018E920 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x14018FBDC (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@_N@Z @ 0x14020452C (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@_N@Z.c)
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x14009483C (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?IsIndependentInputWindow@CInputDest@@QEBA_NXZ @ 0x1400948A8 (-IsIndependentInputWindow@CInputDest@@QEBA_NXZ.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x14009499C (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     ApiSetEditionGetCompositionInputWindowUIOwner @ 0x140094A94 (ApiSetEditionGetCompositionInputWindowUIOwner.c)
 */

bool __fastcall CInputDest::DoesBelongToForeground(CInputDest *a1, int a2)
{
  __int64 v4; // rcx
  char v5; // bl
  __int64 v6; // rbx
  struct tagWND *UserWindow; // rax
  __int64 v9; // rcx
  __int64 CompositionInputWindowUIOwner; // rdi

  if ( !*(_QWORD *)(W32GetUserSessionState(a1) + 18944) )
    return 0;
  v5 = 1;
  if ( a2 == 1 && CInputDest::IsIndependentInputWindow(a1) )
  {
    UserWindow = CInputDest::GetUserWindow(a1);
    CompositionInputWindowUIOwner = ApiSetEditionGetCompositionInputWindowUIOwner(UserWindow);
    if ( !CompositionInputWindowUIOwner
      || *(_QWORD *)(W32GetUserSessionState(v9) + 18944) != *(_QWORD *)(*(_QWORD *)(CompositionInputWindowUIOwner + 16)
                                                                      + 472LL) )
    {
      return 0;
    }
    return v5;
  }
  else
  {
    v6 = *(_QWORD *)(W32GetUserSessionState(v4) + 18944);
    return CInputDest::GetQueue(a1, 2LL) == v6;
  }
}

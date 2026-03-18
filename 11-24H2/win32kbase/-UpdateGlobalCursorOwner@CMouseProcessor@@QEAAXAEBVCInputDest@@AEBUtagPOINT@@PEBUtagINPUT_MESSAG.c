/*
 * XREFs of ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140062790
 * Callers:
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x14005F804 (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 *     UpdateGlobalCursorOwner @ 0x140062750 (UpdateGlobalCursorOwner.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x14009499C (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     SetWakeBit @ 0x140095C28 (SetWakeBit.c)
 *     IsPostIAMShellHookMessageExSupported @ 0x1400A3748 (IsPostIAMShellHookMessageExSupported.c)
 *     PostIAMShellHookMessageEx @ 0x1400A3894 (PostIAMShellHookMessageEx.c)
 *     EtwTraceWakePump @ 0x1400A4BC0 (EtwTraceWakePump.c)
 *     ?PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z @ 0x140123ACC (-PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z.c)
 *     zzzUpdateCursorImage @ 0x140129D00 (zzzUpdateCursorImage.c)
 *     SetPointer @ 0x140145A60 (SetPointer.c)
 *     IsSetPointerSupported @ 0x14014B3D4 (IsSetPointerSupported.c)
 *     ApiSetEditionUpdateCursorOnMouseMove @ 0x140193620 (ApiSetEditionUpdateCursorOnMouseMove.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CoalesceInputSourceMouseMoves@CMouseProcessor@@AEAAXPEAUtagQ@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14021C07C (-CoalesceInputSourceMouseMoves@CMouseProcessor@@AEAAXPEAUtagQ@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 */

void __fastcall CMouseProcessor::UpdateGlobalCursorOwner(
        CMouseProcessor *this,
        const struct CInputDest *a2,
        const struct tagPOINT *a3,
        const struct tagINPUT_MESSAGE_SOURCE *a4)
{
  struct tagWND *UserWindow; // rax
  struct tagWND *v9; // rbx
  __int64 updated; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 UserSessionState; // rax
  CMouseProcessor *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rbx
  char v24; // di

  if ( !*(_DWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5466LL);
  UserWindow = CInputDest::GetUserWindow(a2);
  v9 = UserWindow;
  if ( UserWindow )
  {
    updated = ApiSetEditionUpdateCursorOnMouseMove(UserWindow, *a3);
    v11 = *((_QWORD *)v9 + 2);
    v12 = (_QWORD *)updated;
    v13 = *(_QWORD *)(v11 + 472);
    if ( v13 != *(_QWORD *)(W32GetUserSessionState(v11) + 19232) )
    {
      if ( *(_QWORD *)(W32GetUserSessionState(v14) + 19232) )
      {
        v15 = *(_QWORD *)(W32GetUserSessionState(v15) + 19232);
        if ( *(_QWORD *)(v15 + 112) )
        {
          UserSessionState = W32GetUserSessionState(v15);
          CMouseProcessor::CoalesceInputSourceMouseMoves(v17, *(struct tagQ **)(UserSessionState + 19232), a4);
          v19 = W32GetUserSessionState(v18);
          EtwTraceWakePump(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 19232) + 112LL) + 16LL), 0LL, 512LL);
          v21 = *(_QWORD *)(W32GetUserSessionState(v20) + 19232);
          *(_DWORD *)(v21 + 436) |= 0x20u;
          v22 = W32GetUserSessionState(v21);
          SetWakeBit(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 19232) + 112LL) + 16LL), 2LL);
        }
        if ( v12 && *v12 != *(_QWORD *)v9 )
        {
          if ( (int)IsPostIAMShellHookMessageExSupported() >= 0 )
            PostIAMShellHookMessageEx(*((_QWORD *)v9 + 3), 39LL, *(_QWORD *)v9);
          v23 = v12[3];
          v15 = 960LL;
          if ( (*(_DWORD *)(v23 + 48) & 0x3C0) != 0 )
          {
            CBaseProcessor::PostQEventWork(960LL, **(_QWORD **)(v23 + 192), 1LL);
            *(_DWORD *)(v23 + 48) &= 0xFFFFFC3F;
          }
        }
      }
      *(_QWORD *)(W32GetUserSessionState(v15) + 19232) = v13;
      zzzUpdateCursorImage();
      W32AcquirePushLockExclusiveEx((CMouseProcessor *)((char *)this + 4024), 0);
      if ( !*((_BYTE *)this + 4032) || (v24 = 1, !*((_BYTE *)this + 4033)) )
        v24 = 0;
      *((_WORD *)this + 2016) = 0;
      W32ReleasePushLockExclusiveEx((CMouseProcessor *)((char *)this + 4024), 0);
      if ( v24 )
      {
        if ( (int)IsSetPointerSupported() >= 0 )
          SetPointer(1LL);
      }
    }
  }
}

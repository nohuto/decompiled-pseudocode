/*
 * XREFs of ?BehaviorEnabled@ShellWindowManagement@@YA_NK@Z @ 0x14006809C
 * Callers:
 *     ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x140067B0C (-PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z.c)
 *     ?IsShellParticipatesInSizing@@YA_NPEBUtagWND@@@Z @ 0x140067FA4 (-IsShellParticipatesInSizing@@YA_NPEBUtagWND@@@Z.c)
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@KW4ShellWindowManagementStates@@W4AdditionalWindowCheck@1@@Z @ 0x140068010 (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@KW4ShellWindowManagementStates@@.c)
 *     PostIAMShellHookMessageEx @ 0x140087650 (PostIAMShellHookMessageEx.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x140087B20 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     _lambda_bb68417babed644e5befeb743872af35_::operator() @ 0x1401AAADC (_lambda_bb68417babed644e5befeb743872af35_--operator().c)
 *     ?s_xxxProcessRecalcSignal@CRecalcProp@@SAXW4SignalReason@DesktopRecalc@@PEAUHWND__@@@Z @ 0x1401CBE08 (-s_xxxProcessRecalcSignal@CRecalcProp@@SAXW4SignalReason@DesktopRecalc@@PEAUHWND__@@@Z.c)
 *     ?IsTooltipHittest@@YA_NPEAUtagWND@@I@Z @ 0x1401D9944 (-IsTooltipHittest@@YA_NPEAUtagWND@@I@Z.c)
 *     ?GetTooltipIdFromHitTest@@YA?AW4tagTOOLTIPID@@PEAUtagWND@@H@Z @ 0x140221A8C (-GetTooltipIdFromHitTest@@YA-AW4tagTOOLTIPID@@PEAUtagWND@@H@Z.c)
 *     ?xxxGetShellShowWindowCommand@@YA?AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@Z @ 0x140254CA4 (-xxxGetShellShowWindowCommand@@YA-AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@.c)
 *     ?IsWindowSubjectToShellSizingPolicy@@YA_NPEAUtagWND@@@Z @ 0x1402A5FF0 (-IsWindowSubjectToShellSizingPolicy@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1402A7510 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

bool __fastcall ShellWindowManagement::BehaviorEnabled(ShellWindowManagement *this, __int64 a2)
{
  int v2; // ebx
  __int64 *CurrentThreadNonPaged; // rdx
  __int64 v4; // rax

  v2 = (int)this;
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(this, a2);
  v4 = 0LL;
  if ( CurrentThreadNonPaged )
    v4 = *CurrentThreadNonPaged;
  return (v2 & *(_DWORD *)(*(_QWORD *)(v4 + 496) + 336LL)) != 0;
}

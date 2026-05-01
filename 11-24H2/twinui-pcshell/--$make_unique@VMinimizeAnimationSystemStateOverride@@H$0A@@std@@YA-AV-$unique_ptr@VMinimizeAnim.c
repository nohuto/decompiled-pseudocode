/*
 * XREFs of ??$make_unique@VMinimizeAnimationSystemStateOverride@@H$0A@@std@@YA?AV?$unique_ptr@VMinimizeAnimationSystemStateOverride@@U?$default_delete@VMinimizeAnimationSystemStateOverride@@@std@@@0@$$QEAH@Z @ 0x18049BB9C
 * Callers:
 *     _lambda_abbb930ddb92e06fa07b01ae54ef43e0_::operator() @ 0x18049CE0C (_lambda_abbb930ddb92e06fa07b01ae54ef43e0_--operator().c)
 *     ?StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@AEBUDisplayMonitorInfoCollection@Shell@5WindowsUdk@7@@Z @ 0x1804AA5D8 (-StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@U.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     ?SetSystemAnimationsStateForMinimize@MinimizeAnimationSystemStateOverride@@AEAAXH@Z @ 0x18049F98C (-SetSystemAnimationsStateForMinimize@MinimizeAnimationSystemStateOverride@@AEAAXH@Z.c)
 */

_QWORD *__fastcall std::make_unique<MinimizeAnimationSystemStateOverride,int,0>(_QWORD *a1, _DWORD *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rdi
  MinimizeAnimationSystemStateOverride *v6; // rcx
  _QWORD *result; // rax
  _QWORD *pvParam; // [rsp+40h] [rbp+8h] BYREF

  pvParam = a1;
  v4 = operator new(4uLL);
  pvParam = v4;
  LODWORD(a2) = *a2;
  HIDWORD(pvParam) = 0;
  *v4 = -1;
  v5 = v4;
  LODWORD(pvParam) = 8;
  SystemParametersInfoW(0x48u, 8u, &pvParam, 0);
  v6 = (MinimizeAnimationSystemStateOverride *)HIDWORD(pvParam);
  *v5 = HIDWORD(pvParam);
  MinimizeAnimationSystemStateOverride::SetSystemAnimationsStateForMinimize(v6, (int)a2);
  result = a1;
  *a1 = v5;
  return result;
}

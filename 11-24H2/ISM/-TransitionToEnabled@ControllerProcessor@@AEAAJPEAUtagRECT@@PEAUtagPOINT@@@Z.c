/*
 * XREFs of ?TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x18017C67C
 * Callers:
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180036308 (-UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ?Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@@Z @ 0x1801112C4 (-Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@@Z.c)
 *     ?SetInjectionMechanism@ManipulationInjector@@QEAAXW4INJECTION_MECHANISM@@@Z @ 0x1801127B4 (-SetInjectionMechanism@ManipulationInjector@@QEAAXW4INJECTION_MECHANISM@@@Z.c)
 *     ?SetPanOverlapType@ManipulationInjector@@QEAAXW4OVERLAP_TYPE@@@Z @ 0x18011282C (-SetPanOverlapType@ManipulationInjector@@QEAAXW4OVERLAP_TYPE@@@Z.c)
 *     ?AdjustPointToBounds@ControllerProcessor@@CA?AUtagPOINT@@U2@PEAUtagRECT@@@Z @ 0x180179210 (-AdjustPointToBounds@ControllerProcessor@@CA-AUtagPOINT@@U2@PEAUtagRECT@@@Z.c)
 *     ?Attach@InjectionDevice@@QEAAJXZ @ 0x1801797C8 (-Attach@InjectionDevice@@QEAAJXZ.c)
 *     ?UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ @ 0x18017CE28 (-UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ.c)
 *     ?ValidateBounds@ControllerProcessor@@CA_NPEAUtagRECT@@@Z @ 0x18017D1EC (-ValidateBounds@ControllerProcessor@@CA_NPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall ControllerProcessor::TransitionToEnabled(
        ControllerProcessor *this,
        struct tagRECT *a2,
        struct tagPOINT *a3)
{
  const RECT *v5; // rcx
  POINT *v6; // r8
  __int64 v7; // rdx
  POINT v8; // rdx
  HMONITOR v9; // rdx
  int v10; // eax
  struct tagRECT v12; // [rsp+20h] [rbp-38h] BYREF
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( !a2 )
  {
    v7 = 1082LL;
    goto LABEL_13;
  }
  if ( !ControllerProcessor::ValidateBounds(a2) )
  {
    v7 = 1047LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( v6 )
  {
    v8 = *v6;
    *((POINT *)this + 45) = *v6;
    if ( !PtInRect(v5, v8) )
      *((struct tagPOINT *)this + 45) = ControllerProcessor::AdjustPointToBounds(
                                          *(struct tagPOINT *)((char *)this + 360),
                                          a2);
  }
  if ( !*((_BYTE *)this + 1256) )
  {
    v12 = 0LL;
    v13 = 0LL;
    GetPointerDeviceRects(-1LL, &v13, &v12);
    ManipulationInjector::SetInjectionMechanism((ControllerProcessor *)((char *)this + 448));
    ManipulationInjector::SetPanOverlapType((__int64)this + 448, 2);
    ManipulationInjector::Initialize((ControllerProcessor *)((char *)this + 448), v9, &v12);
    *((_QWORD *)this + 155) = ((unsigned __int64)this + 80) & -(__int64)(this != 0LL);
    *((_BYTE *)this + 1256) = 1;
  }
  *(struct tagRECT *)((char *)this + 312) = *a2;
  *((_DWORD *)this + 101) = (int)(float)((float)*((int *)this + 78) + 8.0);
  *((_DWORD *)this + 102) = (int)(float)((float)*((int *)this + 79) + 8.0);
  *((_DWORD *)this + 103) = (int)(float)((float)*((int *)this + 80) - 8.0);
  *((_DWORD *)this + 104) = (int)(float)((float)*((int *)this + 81) - 8.0);
  v10 = InjectionDevice::Attach((ControllerProcessor *)((char *)this + 4392));
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x434,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v10,
      v12.left);
  ControllerProcessor::UpdateManipulationInjectionRect(this);
  return 0LL;
}

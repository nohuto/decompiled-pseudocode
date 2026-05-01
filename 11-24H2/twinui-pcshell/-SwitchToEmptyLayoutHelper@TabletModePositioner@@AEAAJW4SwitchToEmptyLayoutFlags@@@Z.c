/*
 * XREFs of ?SwitchToEmptyLayoutHelper@TabletModePositioner@@AEAAJW4SwitchToEmptyLayoutFlags@@@Z @ 0x18051FBA4
 * Callers:
 *     ?ControlLost@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x180519D50 (-ControlLost@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnkno.c)
 *     ?VisibleFullScreenViewChanged@TabletModePositioner@@UEAAJPEAUIApplicationView@@0@Z @ 0x180520A30 (-VisibleFullScreenViewChanged@TabletModePositioner@@UEAAJPEAUIApplicationView@@0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x180518614 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18051B5F4 (-InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModePositioner::SwitchToEmptyLayoutHelper(IUnknown *a1)
{
  int inited; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IUnknown *v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v7);
  inited = TabletModePositioner::InitLayoutOperationHelper(
             a1,
             &CLSID_TabletModePositionerOperation,
             &GUID_ef9dff78_5b41_4081_a5aa_407c9421d1b6,
             (void **)&v7);
  v3 = inited;
  if ( inited >= 0 )
  {
    inited = ((__int64 (__fastcall *)(struct IUnknown *, __int64))v7->lpVtbl[2].QueryInterface)(v7, 1LL);
    v3 = inited;
    if ( inited >= 0 )
    {
      inited = TabletModePositioner::ApplyLayoutOperationHelper((TabletModePositioner *)a1, v7);
      v3 = inited;
      if ( inited >= 0 )
      {
        v3 = 0;
        goto LABEL_9;
      }
      v4 = 2697LL;
    }
    else
    {
      v4 = 2696LL;
    }
  }
  else
  {
    v4 = 2695LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)inited);
LABEL_9:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v7);
  return v3;
}

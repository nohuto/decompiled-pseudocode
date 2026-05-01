/*
 * XREFs of ?HandleSwitchToView@TabletModePositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x18051B490
 * Callers:
 *     ?HandleSwitchToView@TabletModePositioner@@W7EAAJPEAUIApplicationView@@@Z @ 0x18051B590 (-HandleSwitchToView@TabletModePositioner@@W7EAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsTabletMode@TabletModePositioner@@AEAA_NXZ @ 0x1801CF93C (-IsTabletMode@TabletModePositioner@@AEAA_NXZ.c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1804BE8CC (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@_NPEA_N@Z @ 0x18051A568 (-ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@_NPEA_N@Z.c)
 *     ?GetRootSwitchableOwnerOrSelf@ApplicationViewHelpers@@YAXPEAUIApplicationView@@PEAPEAU2@@Z @ 0x18067F488 (-GetRootSwitchableOwnerOrSelf@ApplicationViewHelpers@@YAXPEAUIApplicationView@@PEAPEAU2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModePositioner::HandleSwitchToView(TabletModePositioner *this, struct IApplicationView *a2)
{
  struct IApplicationView **v5; // r8
  struct IApplicationView *v6; // rdx
  char IsOperableView; // bp
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  bool v12; // [rsp+40h] [rbp+8h] BYREF
  TabletModePositionerHelpers *v13; // [rsp+50h] [rbp+18h] BYREF

  if ( !TabletModePositioner::IsTabletMode((TabletModePositioner *)((char *)this - 88)) )
    return 2147947423LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v13);
  ApplicationViewHelpers::GetRootSwitchableOwnerOrSelf(a2, (struct IApplicationView *)&v13, v5);
  IsOperableView = TabletModePositionerHelpers::IsOperableView(
                     (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v13,
                     v6);
  v12 = 0;
  v8 = TabletModePositioner::ForegroundViewChanged(
         (TabletModePositioner *)((char *)this - 88),
         v13,
         IsOperableView,
         &v12);
  v9 = v8;
  if ( v8 >= 0 )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 20) + 40LL))(*((_QWORD *)this + 20))
      && !IsOperableView )
    {
      *((_BYTE *)this + 155) = 1;
    }
    if ( v12
      || (v8 = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 56LL))(a2), v9 = v8, v8 >= 0) )
    {
      v9 = 0;
      goto LABEL_13;
    }
    v10 = 587LL;
  }
  else
  {
    v10 = 573LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)v8);
LABEL_13:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v13);
  return v9;
}

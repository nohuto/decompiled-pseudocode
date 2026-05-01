/*
 * XREFs of ??$AddRefCountWrappers@PEAUIVirtualDesktop@@PEAU1@@@YAJV?$tuple@PEAUIVirtualDesktop@@PEAU1@@std@@PEAV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V123@@1@@Z @ 0x18054CCBC
 * Callers:
 *     ??$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAU2@@CVirtualDesktopNotifications@@IEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@0@Z00@Z @ 0x18054D2F0 (--$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAU2@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1802C1D38 (--4-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??$TupleMap@AEAV?$tuple@PEAUIVirtualDesktop@@PEAU1@@std@@V_lambda_b81b832159b485d6d1346c15f32bb4cd_@@@@YA?A_PAEAV?$tuple@PEAUIVirtualDesktop@@PEAU1@@std@@AEBV_lambda_b81b832159b485d6d1346c15f32bb4cd_@@@Z @ 0x18054D12C (--$TupleMap@AEAV-$tuple@PEAUIVirtualDesktop@@PEAU1@@std@@V_lambda_b81b832159b485d6d1346c15f32bb4.c)
 *     ??1?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V123@@std@@QEAA@XZ @ 0x18054DA4C (--1-$tuple@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V123@@std@@QEAA@XZ.c)
 */

__int64 __fastcall AddRefCountWrappers<IVirtualDesktop *,IVirtualDesktop *>(__int64 a1, __int64 *a2)
{
  unsigned int v3; // ebx
  char v5[8]; // [rsp+20h] [rbp-18h] BYREF
  char v6[16]; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char *v8; // [rsp+50h] [rbp+18h] BYREF
  char **v9; // [rsp+58h] [rbp+20h] BYREF

  LODWORD(v8) = 0;
  v9 = &v8;
  TupleMap<std::tuple<IVirtualDesktop *,IVirtualDesktop *> &,_lambda_b81b832159b485d6d1346c15f32bb4cd_>(v5, a1, &v9);
  v3 = (unsigned int)v8;
  if ( (int)v8 >= 0 )
  {
    Microsoft::WRL::ComPtr<IClassicWindow>::operator=(a2 + 1, v6);
    Microsoft::WRL::ComPtr<IClassicWindow>::operator=(a2, v5);
    v3 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFC,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)v8);
  }
  std::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::ComPtr<IVirtualDesktop>>::~tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::ComPtr<IVirtualDesktop>>(v5);
  return v3;
}

/*
 * XREFs of ?Show@CPPIAllUpViewHost@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x1804B2060
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180041470 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18011F8B8 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180136988 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180328954 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ??1ShowPPIAllUpView@MultitaskingViewTelemetry@@QEAA@XZ @ 0x1804B17DC (--1ShowPPIAllUpView@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJXZ @ 0x1804B1910 (-DismissView@-$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJXZ.c)
 *     ?StartActivity@ShowPPIAllUpView@MultitaskingViewTelemetry@@QEAAXXZ @ 0x1804B22E8 (-StartActivity@ShowPPIAllUpView@MultitaskingViewTelemetry@@QEAAXXZ.c)
 *     ?_RegisterForMonitorEvents@?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@IEAAJPEAUIUnknown@@@Z @ 0x1804B25C0 (-_RegisterForMonitorEvents@-$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@IEAAJPEAUIUnknown@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPPIAllUpViewHost::Show(CPPIAllUpViewHost *this, struct IImmersiveMonitor *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v11[2]; // [rsp+20h] [rbp-E0h] BYREF
  int v12; // [rsp+28h] [rbp-D8h]
  CPPIAllUpViewHost *v13; // [rsp+30h] [rbp-D0h]
  char v14; // [rsp+38h] [rbp-C8h]
  __int128 v15; // [rsp+40h] [rbp-C0h] BYREF
  volatile signed __int32 *v16[42]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  *(_QWORD *)v11 = ((unsigned __int64)this + 24) & -(__int64)(this != 0LL);
  v12 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(*(__int64 *)v11, 1);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v16,
    (__int64)"ShowPPIAllUpView");
  v16[0] = (volatile signed __int32 *)&MultitaskingViewTelemetry::ShowPPIAllUpView::`vftable';
  MultitaskingViewTelemetry::ShowPPIAllUpView::StartActivity((MultitaskingViewTelemetry::ShowPPIAllUpView *)v16);
  v13 = this;
  v14 = 1;
  v4 = CMultitaskingViewHostBase<IPPIAllUpViewHost>::_RegisterForMonitorEvents(this, a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 20, (__int64)a2);
    v15 = 0LL;
    v6 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, __int128 *))(*(_QWORD *)a2 + 72LL))(a2, &v15);
    v5 = v6;
    if ( v6 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, __int64))(**((_QWORD **)this + 19) + 24LL))(
             *((_QWORD *)this + 19),
             &v15,
             3LL);
      v5 = v7;
      if ( v7 >= 0 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 144LL))(*((_QWORD *)this + 19)) )
        {
          wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64 *)v16);
          CMultitaskingViewHostBase<IPPIAllUpViewHost>::DismissView((__int64)this);
          v5 = -2147019873;
        }
        else
        {
          v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 64LL))(*((_QWORD *)this + 19));
          v5 = v8;
          if ( v8 >= 0 )
          {
            *((_BYTE *)this + 112) = 1;
            v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 96LL))(*((_QWORD *)this + 19));
            v5 = v9;
            if ( v9 >= 0 )
            {
              (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 11) + 24LL))(
                *((_QWORD *)this + 11),
                *((unsigned int *)this + 18));
              wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64 *)v16);
              v5 = 0;
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xA3,
                (int)"pcshell\\twinui\\multitaskingview\\lib\\ppiallupviewhost.cpp",
                (const char *)(unsigned int)v9);
              CMultitaskingViewHostBase<IPPIAllUpViewHost>::DismissView((__int64)this);
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x9F,
              (int)"pcshell\\twinui\\multitaskingview\\lib\\ppiallupviewhost.cpp",
              (const char *)(unsigned int)v8);
            CMultitaskingViewHostBase<IPPIAllUpViewHost>::DismissView((__int64)this);
          }
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x94,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\ppiallupviewhost.cpp",
          (const char *)(unsigned int)v7);
        CMultitaskingViewHostBase<IPPIAllUpViewHost>::DismissView((__int64)this);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x91,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\ppiallupviewhost.cpp",
        (const char *)(unsigned int)v6);
      CMultitaskingViewHostBase<IPPIAllUpViewHost>::DismissView((__int64)this);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8C,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\ppiallupviewhost.cpp",
      (const char *)(unsigned int)v4);
    CMultitaskingViewHostBase<IPPIAllUpViewHost>::DismissView((__int64)this);
  }
  MultitaskingViewTelemetry::ShowPPIAllUpView::~ShowPPIAllUpView(v16);
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)v11);
  return v5;
}

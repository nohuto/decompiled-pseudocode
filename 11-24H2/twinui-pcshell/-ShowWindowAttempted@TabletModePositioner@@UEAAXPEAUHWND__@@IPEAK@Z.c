/*
 * XREFs of ?ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z @ 0x18051D720
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800EB4F0 (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?IsTabletMode@TabletModePositioner@@AEAA_NXZ @ 0x1801CF93C (-IsTabletMode@TabletModePositioner@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1804BE8CC (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?IsOperableWindow@TabletModePositionerHelpers@@YA_NPEAUHWND__@@@Z @ 0x1804BE964 (-IsOperableWindow@TabletModePositionerHelpers@@YA_NPEAUHWND__@@@Z.c)
 *     ??1ShowWindowAttempted@TabletModeTraceLogging@@QEAA@XZ @ 0x180517E7C (--1ShowWindowAttempted@TabletModeTraceLogging@@QEAA@XZ.c)
 *     _lambda_ee4684b34cbbc9b29a5b46cb0674d720_::operator() @ 0x180518054 (_lambda_ee4684b34cbbc9b29a5b46cb0674d720_--operator().c)
 *     ?StartActivity@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@PEAUHWND__@@I@Z @ 0x18051E2AC (-StartActivity@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@PEAUHWND__.c)
 *     ?Stop@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXK@Z @ 0x18051E650 (-Stop@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall TabletModePositioner::ShowWindowAttempted(
        TabletModePositioner *this,
        HWND a2,
        unsigned int a3,
        unsigned int *a4)
{
  unsigned int v7; // esi
  unsigned int v8; // r13d
  void (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rdi
  void (__fastcall *v10)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v11; // rbx
  void (__fastcall *v12)(__int64, HWND, HWND *); // rdi
  struct IApplicationView *v13; // rbx
  int v14; // eax
  __int64 (__fastcall ***v15)(ApplicationViewHelpers *, GUID *, __int64 *); // rdx
  HWND v16; // rax
  int v17; // eax
  int v18; // [rsp+20h] [rbp-E0h] BYREF
  HWND v19; // [rsp+28h] [rbp-D8h] BYREF
  unsigned int v20; // [rsp+30h] [rbp-D0h]
  __int64 v21; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v22[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v23[42]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  v20 = a3;
  v7 = 0;
  if ( TabletModePositioner::IsTabletMode((TabletModePositioner *)((char *)this - 160)) )
  {
    v8 = 2;
    if ( *((_DWORD *)this + 18) != 2 )
    {
      v21 = 0LL;
      v9 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 23);
      v10 = **v9;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
      v10(v9, &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5, &v21);
      v19 = 0LL;
      v11 = v21;
      v12 = *(void (__fastcall **)(__int64, HWND, HWND *))(*(_QWORD *)v21 + 48LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
      v12(v11, a2, &v19);
      v22[0] = (char *)this - 160;
      v13 = (struct IApplicationView *)v19;
      wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        (__int64)v23,
        (__int64)"ShowWindowAttempted");
      v23[0] = &TabletModeTraceLogging::ShowWindowAttempted::`vftable';
      TabletModeTraceLogging::ShowWindowAttempted::StartActivity(
        (TabletModeTraceLogging::ShowWindowAttempted *)v23,
        v13,
        a2,
        v20);
      if ( v19 )
        goto LABEL_29;
      if ( TabletModePositionerHelpers::IsOperableWindow((TabletModePositionerHelpers *)a2, 0LL) )
      {
        LOWORD(v18) = 257;
        lambda_ee4684b34cbbc9b29a5b46cb0674d720_::operator()((__int64)v22, a2, &v18, (_BYTE *)&v18 + 1);
        if ( (_BYTE)v18 )
        {
          v14 = (*(__int64 (__fastcall **)(_QWORD, HWND, __int64))(**((_QWORD **)this + 35) + 64LL))(
                  *((_QWORD *)this + 35),
                  a2,
                  1LL);
          if ( v14 < 0 )
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xA1B,
              (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
              (const char *)(unsigned int)v14);
        }
        if ( !BYTE1(v18) || !TabletModePositioner::IsTabletMode((TabletModePositioner *)((char *)this - 160)) )
          v8 = 0;
        *a4 = v8;
        goto LABEL_21;
      }
      if ( v19 )
      {
LABEL_29:
        if ( TabletModePositioner::IsTabletMode((TabletModePositioner *)((char *)this - 160))
          && TabletModePositionerHelpers::IsOperableView(v15, (struct IApplicationView *)v15) )
        {
          if ( !(*(unsigned int (__fastcall **)(_QWORD, HWND))(**((_QWORD **)this + 11) + 184LL))(
                  *((_QWORD *)this + 11),
                  v19) )
          {
            LOWORD(v18) = 257;
            lambda_ee4684b34cbbc9b29a5b46cb0674d720_::operator()((__int64)v22, a2, &v18, (_BYTE *)&v18 + 1);
            *a4 = BYTE1(v18) != 0 ? 2 : 0;
            if ( (_BYTE)v18 )
            {
              v17 = (*(__int64 (__fastcall **)(HWND, __int64, __int64))(*(_QWORD *)v19 + 96LL))(v19, 1LL, 1LL);
              if ( v17 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x5B0,
                  (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
                  (const char *)(unsigned int)v17);
            }
            goto LABEL_21;
          }
          v16 = (HWND)*((_QWORD *)this + 40);
          if ( v16 && a2 == v16 && v20 == *((_DWORD *)this + 82) )
          {
            *((_QWORD *)this + 40) = 0LL;
            *((_DWORD *)this + 82) = 0;
          }
          else
          {
            LOBYTE(v7) = IsWindowVisible(a2);
          }
        }
        *a4 = v7;
      }
LABEL_21:
      TabletModeTraceLogging::ShowWindowAttempted::Stop((TabletModeTraceLogging::ShowWindowAttempted *)v23, *a4);
      TabletModeTraceLogging::ShowWindowAttempted::~ShowWindowAttempted((TabletModeTraceLogging::ShowWindowAttempted *)v23);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
    }
  }
}

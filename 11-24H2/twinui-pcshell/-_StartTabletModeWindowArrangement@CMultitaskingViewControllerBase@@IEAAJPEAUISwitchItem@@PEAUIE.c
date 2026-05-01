/*
 * XREFs of ?_StartTabletModeWindowArrangement@CMultitaskingViewControllerBase@@IEAAJPEAUISwitchItem@@PEAUIExternalDragCallback@@@Z @ 0x1804C6DCC
 * Callers:
 *     ?DragSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@PEAUIExternalDragCallback@@@Z @ 0x1804C6370 (-DragSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@PEAUIExternalDragCallback.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800B7C3C (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800EB4F0 (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??1ExternalDragHandoff@MultitaskingViewTelemetry@@QEAA@XZ @ 0x1804C6194 (--1ExternalDragHandoff@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@ExternalDragHandoff@MultitaskingViewTelemetry@@QEAAXXZ @ 0x1804C679C (-StartActivity@ExternalDragHandoff@MultitaskingViewTelemetry@@QEAAXXZ.c)
 *     ?DragInputHandler_CreateInstance@@YAJPEAUIExternalDragHost@@AEBU_GUID@@PEAPEAX@Z @ 0x1804D5FFC (-DragInputHandler_CreateInstance@@YAJPEAUIExternalDragHost@@AEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CMultitaskingViewControllerBase::_StartTabletModeWindowArrangement(
        CMultitaskingViewControllerBase *this,
        __int64 (__fastcall ***a2)(struct ISwitchItem *, GUID *, __int64 *),
        struct IExternalDragCallback *a3)
{
  unsigned int v6; // ebx
  __int64 (__fastcall *v7)(struct ISwitchItem *, GUID *, __int64 *); // rbx
  int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 (__fastcall *v12)(__int64, GUID *, struct IExternalDragHost **); // rbx
  int v13; // eax
  const struct _GUID *v14; // rdx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  void *v19; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+38h] [rbp-C8h] BYREF
  struct IExternalDragHost *v21; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v22[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v23[2]; // [rsp+50h] [rbp-B0h] BYREF
  char v24; // [rsp+60h] [rbp-A0h]
  __int128 v25; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v26[42]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+108h]

  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v26,
    (__int64)"ExternalDragHandoff");
  v26[0] = &MultitaskingViewTelemetry::ExternalDragHandoff::`vftable';
  MultitaskingViewTelemetry::ExternalDragHandoff::StartActivity((MultitaskingViewTelemetry::ExternalDragHandoff *)v26);
  if ( *((_QWORD *)this + 8) )
  {
    v20 = 0LL;
    v7 = **a2;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
    v8 = v7((struct ISwitchItem *)a2, &GUID_de9754c3_efc7_4024_99ca_fbded7bee7cb, &v20);
    v6 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10D,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\baseviewcontroller.cpp",
        (const char *)(unsigned int)v8);
LABEL_5:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
      goto LABEL_20;
    }
    v21 = 0LL;
    v9 = *((_QWORD *)this + 5);
    if ( v9 )
    {
      v12 = *(__int64 (__fastcall **)(__int64, GUID *, struct IExternalDragHost **))(*(_QWORD *)v9 + 24LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
      v13 = v12(v9, &GUID_51575f72_33a0_4be2_b5ad_5ecac31260f4, &v21);
      v6 = v13;
      if ( v13 >= 0 )
      {
        v19 = 0LL;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
        v15 = DragInputHandler_CreateInstance(v21, v14, &v19);
        v6 = v15;
        if ( v15 >= 0 )
        {
          v23[1] = (__int64)&v19;
          v24 = 1;
          v25 = 0LL;
          v22[0] = 0;
          v22[1] = 0;
          v16 = (*(__int64 (__fastcall **)(struct IExternalDragCallback *, __int128 *, _DWORD *))(*(_QWORD *)a3 + 24LL))(
                  a3,
                  &v25,
                  v22);
          v6 = v16;
          if ( v16 >= 0 )
          {
            (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 24LL))(v20, v23);
            v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int128 *, _DWORD *, void *))(**((_QWORD **)this + 8)
                                                                                           + 40LL))(
                    *((_QWORD *)this + 8),
                    v23[0],
                    &v25,
                    v22,
                    v19);
            v6 = v17;
            if ( v17 >= 0 )
            {
              v24 = 0;
              (*(void (__fastcall **)(struct IExternalDragCallback *))(*(_QWORD *)a3 + 32LL))(a3);
              wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v26);
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v23);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
              v6 = 0;
              goto LABEL_20;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x122,
              (int)"pcshell\\twinui\\multitaskingview\\lib\\baseviewcontroller.cpp",
              (const char *)(unsigned int)v17);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v23);
            (*(void (__fastcall **)(void *))(*(_QWORD *)v19 + 32LL))(v19);
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x11F,
              (int)"pcshell\\twinui\\multitaskingview\\lib\\baseviewcontroller.cpp",
              (const char *)(unsigned int)v16);
            (*(void (__fastcall **)(void *))(*(_QWORD *)v19 + 32LL))(v19);
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x117,
            (int)"pcshell\\twinui\\multitaskingview\\lib\\baseviewcontroller.cpp",
            (const char *)(unsigned int)v15);
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
        goto LABEL_9;
      }
      v10 = (unsigned int)v13;
      v11 = 276LL;
    }
    else
    {
      v6 = -2147019873;
      v10 = 2147947423LL;
      v11 = 275LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\baseviewcontroller.cpp",
      (const char *)v10);
LABEL_9:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
    goto LABEL_5;
  }
  v6 = -2147019873;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x10A,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\baseviewcontroller.cpp",
    (const char *)0x8007139FLL);
LABEL_20:
  MultitaskingViewTelemetry::ExternalDragHandoff::~ExternalDragHandoff((MultitaskingViewTelemetry::ExternalDragHandoff *)v26);
  return v6;
}

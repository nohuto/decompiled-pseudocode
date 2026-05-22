/*
 * XREFs of ?Initialize@CursorNotificationProcessor@@QEAAJPEAUICursorBroker@@@Z @ 0x180088358
 * Callers:
 *     ?Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z @ 0x1800F0B40 (-Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18000BE08 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180021EFC (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x18002461C (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180035D40 (-IsEdition@@YA_N_K@Z.c)
 *     ?InitializeDesktopCursorService@SystemCursorController2@@QEAAJXZ @ 0x18008F12C (-InitializeDesktopCursorService@SystemCursorController2@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ?EnsureMouseCursorForDesktopPen@CursorNotificationProcessor@@AEAAJPEAUICursorBroker@@@Z @ 0x1800F3884 (-EnsureMouseCursorForDesktopPen@CursorNotificationProcessor@@AEAAJPEAUICursorBroker@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CursorNotificationProcessor::Initialize(CursorNotificationProcessor *this, struct ICursorBroker *a2)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax
  SystemCursorController2 *v5; // rax
  int v6; // ebx
  __int64 v7; // rdx
  int v8; // eax
  unsigned __int64 v9; // r8
  __int64 v10; // rdx
  wil::details *v11; // rbx
  __int64 (__fastcall *v12)(wil::details *, const wchar_t *, __int64 *); // rdi
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r9
  wil::details *v15; // rbx
  __int64 (__fastcall *v16)(wil::details *, _QWORD, CursorNotificationProcessor *, __int64); // rdi
  int v17; // eax
  unsigned __int64 v18; // r8
  __int64 v19; // rbx
  __int64 v20; // rbx
  unsigned __int64 v21; // r8
  __int64 *v23; // [rsp+20h] [rbp-29h]
  wil::details *v24; // [rsp+30h] [rbp-19h] BYREF
  __int64 v25; // [rsp+38h] [rbp-11h] BYREF
  wil::details *v26; // [rsp+40h] [rbp-9h] BYREF
  __int64 v27; // [rsp+48h] [rbp-1h] BYREF
  __int64 v28; // [rsp+50h] [rbp+7h] BYREF
  _OWORD v29[2]; // [rsp+58h] [rbp+Fh] BYREF
  __int64 v30; // [rsp+78h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  if ( IsEdition(253345LL) )
    goto LABEL_7;
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v5 = (SystemCursorController2 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31)
                                                                                 + 8LL)
                                                                     + 232LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
  v6 = SystemCursorController2::InitializeDesktopCursorService(v5);
  if ( v6 >= 0 )
  {
    v6 = CursorNotificationProcessor::EnsureMouseCursorForDesktopPen(this, a2);
    if ( v6 < 0 )
    {
      v7 = 30LL;
      goto LABEL_4;
    }
LABEL_7:
    v25 = 0LL;
    v26 = 0LL;
    v27 = 0LL;
    v24 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
    v8 = CoreUICreate(&v24);
    v6 = v8;
    if ( v8 >= 0 )
    {
      wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
        &v26,
        v24,
        v9);
      v11 = v24;
      v12 = *(__int64 (__fastcall **)(wil::details *, const wchar_t *, __int64 *))(*(_QWORD *)v24 + 80LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
      v8 = v12(v11, L"Kernel\\MIT\\InputPort", &v25);
      v6 = v8;
      if ( v8 >= 0 )
      {
        v15 = v24;
        v16 = *(__int64 (__fastcall **)(wil::details *, _QWORD, CursorNotificationProcessor *, __int64))(*(_QWORD *)v24 + 104LL);
        wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
          &v26,
          v26,
          v13);
        v23 = &v27;
        v8 = v16(v15, CursorNotificationProcessor::OnMitMessageReceived, this, v25);
        v6 = v8;
        if ( v8 >= 0 )
        {
          memset(v29, 0, sizeof(v29));
          v30 = 0LL;
          v8 = (*(__int64 (__fastcall **)(wil::details *, __int64, _OWORD *))(*(_QWORD *)v24 + 136LL))(v24, v27, v29);
          v6 = v8;
          if ( v8 >= 0 )
          {
            v17 = NtMITCoreMsgKOpenConnectionTo(0LL, v29);
            v6 = v17 | 0x10000000;
            if ( v17 >= 0 )
            {
              if ( *(struct ICursorBroker **)this != a2 )
              {
                if ( a2 )
                  (*(void (__fastcall **)(struct ICursorBroker *))(*(_QWORD *)a2 + 8LL))(a2);
                v28 = *(_QWORD *)this;
                *(_QWORD *)this = a2;
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
              }
              Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=((__int64 *)this + 2, &v24);
              v19 = v25;
              v25 = 0LL;
              if ( *((_QWORD *)this + 4) != v19 )
              {
                if ( v19 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
                v28 = *((_QWORD *)this + 4);
                *((_QWORD *)this + 4) = v19;
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
              }
              v20 = v27;
              v27 = 0LL;
              wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
                &v26,
                0LL,
                v18);
              *((_QWORD *)this + 5) = v20;
              v6 = 0;
              goto LABEL_28;
            }
            v14 = (unsigned int)v6;
            v10 = 57LL;
LABEL_12:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v10,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\"
                            "cursornotificationprocessor.cpp",
              (const char *)v14,
              (int)v23);
LABEL_28:
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
            wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
              &v26,
              0LL,
              v21);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
            return (unsigned int)v6;
          }
          v10 = 53LL;
        }
        else
        {
          v10 = 49LL;
        }
      }
      else
      {
        v10 = 42LL;
      }
    }
    else
    {
      v10 = 38LL;
    }
    v14 = (unsigned int)v8;
    goto LABEL_12;
  }
  v7 = 29LL;
LABEL_4:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cursornoti"
                  "ficationprocessor.cpp",
    (const char *)(unsigned int)v6,
    (int)v23);
  return (unsigned int)v6;
}

/*
 * XREFs of _lambda_8eaa9d9bc48e0c760b532341ceadabea_::operator() @ 0x18042E6CC
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8eaa9d9bc48e0c760b532341ceadabea___::Run @ 0x1804307B0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_8eaa9d9bc48e0c760b532341ceadabea___--.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18004D04C (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@V?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@V12@AEBW4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@Details@WRL@Microsoft@@YAJPEAPEAV?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@AEBW4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18042C210 (--$MakeAndInitialize@V-$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Inter.c)
 *     ??$NavigateView@AEAIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@ViewManagerInteropTelemetry@@SAXAEAIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18042C2A4 (--$NavigateView@AEAIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@ViewManager.c)
 *     ??$query@UIAppViewBehaviorStatics@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIAppViewBehaviorStatics@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18042D370 (--$query@UIAppViewBehaviorStatics@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_ptr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall lambda_8eaa9d9bc48e0c760b532341ceadabea_::operator()(__int64 a1)
{
  int *v2; // rdi
  __int64 (__fastcall ****v3)(_QWORD, GUID *, _QWORD *); // rcx
  int v4; // r15d
  __int64 v5; // rsi
  __int64 (__fastcall *v6)(__int64, _QWORD, __int64, __int64 *); // rbx
  int v7; // eax
  __int64 v8; // rbx
  int v9; // esi
  int v10; // eax
  __int64 v11; // rsi
  __int64 (__fastcall *v12)(__int64, _QWORD, _QWORD, __int64 *); // rbx
  int v13; // eax
  const char *v14; // r9
  __int64 result; // rax
  __int64 v16; // rsi
  __int64 (__fastcall *v17)(__int64, _QWORD, _QWORD, __int64 *); // rbx
  int v18; // eax
  __int64 *v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rbx
  __int64 (__fastcall *v23)(__int64, __int64 *); // rsi
  int v24; // eax
  unsigned int v25; // eax
  int v26; // eax
  __int64 v27; // rsi
  __int64 (__fastcall *v28)(__int64, _QWORD, __int64 *); // rbx
  int v29; // eax
  int v30; // eax
  int v31; // [rsp+20h] [rbp-48h]
  __int64 v32; // [rsp+30h] [rbp-38h] BYREF
  __int64 v33[6]; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v35; // [rsp+70h] [rbp+8h] BYREF
  __int64 v36; // [rsp+78h] [rbp+10h] BYREF
  __int64 v37; // [rsp+80h] [rbp+18h] BYREF
  __int64 v38; // [rsp+88h] [rbp+20h] BYREF

  v2 = *(int **)a1;
  v3 = (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(*(_QWORD *)(a1 + 8) + 48LL);
  try
  {
    wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics,wil::err_exception_policy>::query<Windows::Internal::ApplicationModel::WindowManagement::IAppViewBehaviorStatics>(
      v3,
      &v32);
    v4 = **(_DWORD **)(a1 + 16);
    v36 = 0LL;
    if ( v4 )
    {
      switch ( v4 )
      {
        case 1:
        case 2:
          v16 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL);
          v17 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v16 + 48LL);
          wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v36);
          v18 = v17(v16, (unsigned int)*v2, 0LL, &v36);
          if ( v18 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0xAE,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
              (const char *)(unsigned int)v18,
              v31);
          break;
        case 3:
          v35 = 1;
          v8 = 0LL;
          v38 = 0LL;
          v37 = 0LL;
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v37);
          v9 = Microsoft::WRL::Details::MakeAndInitialize<details::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>,details::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>,enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState const &>(
                 &v37,
                 &v35);
          if ( v9 >= 0 )
          {
            v8 = v37;
            v37 = 0LL;
            v38 = v8;
            v9 = 0;
          }
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v37);
          if ( v9 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0xB5,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
              (const char *)(unsigned int)v9,
              v31);
          v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v32 + 56LL))(
                  v32,
                  (unsigned int)*v2,
                  v8);
          if ( v10 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0xB6,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
              (const char *)(unsigned int)v10,
              v31);
          v11 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL);
          v12 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v11 + 48LL);
          wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v36);
          v13 = v12(v11, (unsigned int)*v2, 0LL, &v36);
          if ( v13 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0xB9,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
              (const char *)(unsigned int)v13,
              v31);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v38);
          goto LABEL_20;
        case 4:
          v5 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL);
          v6 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v5 + 48LL);
          wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v36);
          v7 = v6(v5, (unsigned int)*v2, 1LL, &v36);
          if ( v7 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0xBE,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
              (const char *)(unsigned int)v7,
              v31);
          break;
        case 5:
          break;
        default:
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xCB,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
            (const char *)0x8000FFFFLL,
            v31);
      }
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 280LL) + 192LL))(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 280LL),
        v33,
        (unsigned int)*v2);
      v35 = 0;
      if ( v33[0] )
      {
        v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33[0] + 256LL))(v33[0]);
        v35 = v25;
      }
      else
      {
        v38 = 0LL;
        v19 = *(__int64 **)(*(_QWORD *)(a1 + 8) + 48LL);
        v20 = *v19;
        v38 = 0LL;
        v21 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v20 + 80))(v19, (unsigned int)*v2, &v38);
        if ( v21 >= 0 )
        {
          v37 = 0LL;
          v22 = v38;
          v23 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v38 + 64LL);
          wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v37);
          v24 = v23(v22, &v37);
          if ( v24 >= 0 )
          {
            if ( v37 )
            {
              v26 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v37 + 80LL))(v37, &v35);
              if ( v26 < 0 )
                wil::details::in1diag3::Throw_Hr(
                  retaddr,
                  (void *)0x9A,
                  (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
                  (const char *)(unsigned int)v26,
                  v31);
            }
          }
          else
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x97,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
              (const char *)(unsigned int)v24);
          }
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v37);
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x94,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
            (const char *)(unsigned int)v21);
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v38);
        v25 = v35;
      }
      if ( v25 )
      {
        v27 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 184LL);
        v28 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v27 + 56LL);
        wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v36);
        v29 = v28(v27, v35, &v36);
        if ( v29 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xA6,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
            (const char *)(unsigned int)v29,
            v31);
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v33);
    }
    v30 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v32 + 56LL))(v32, (unsigned int)*v2, 0LL);
    if ( v30 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xD3,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v30,
        v31);
LABEL_20:
    ViewManagerInteropTelemetry::NavigateView<unsigned int &,enum Windows::Internal::Shell::ViewManagerInterop::NavigationLevel &>(
      *(int **)a1,
      *(int **)(a1 + 16));
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v36);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v32);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xD8,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
                           v14);
  }
  return result;
}

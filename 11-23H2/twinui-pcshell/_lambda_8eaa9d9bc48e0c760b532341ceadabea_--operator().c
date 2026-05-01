/*
 * XREFs of _lambda_8eaa9d9bc48e0c760b532341ceadabea_::operator() @ 0x1804D818C
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8eaa9d9bc48e0c760b532341ceadabea___::Run @ 0x1804DA370 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_8eaa9d9bc48e0c760b532341ceadabea___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180098014 (--1-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 *     ?get@?$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@P6AXXZ@Z @ 0x1800C31C4 (-get@-$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800D4E4C (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1801127B4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18019204C (-reset@-$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$query@UIAppViewBehaviorStatics@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIAppViewBehaviorStatics@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801F51FC (--$query@UIAppViewBehaviorStatics@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_ptr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@V?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@V12@AEBW4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@Details@WRL@Microsoft@@YAJPEAPEAV?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@AEBW4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804D5920 (--$MakeAndInitialize@V-$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Inter.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall lambda_8eaa9d9bc48e0c760b532341ceadabea_::operator()(unsigned int **a1)
{
  unsigned int *v2; // rdi
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
  wil::details::in1diag3 *v14; // rcx
  unsigned int *v15; // rbx
  unsigned int *v16; // rdi
  _DWORD *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r9
  const char *v20; // r9
  __int64 result; // rax
  __int64 v22; // rsi
  __int64 (__fastcall *v23)(__int64, _QWORD, _QWORD, __int64 *); // rbx
  int v24; // eax
  __int64 *v25; // rcx
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rbx
  __int64 (__fastcall *v29)(__int64, __int64 *); // rsi
  int v30; // eax
  unsigned int v31; // eax
  int v32; // eax
  __int64 v33; // rsi
  __int64 (__fastcall *v34)(__int64, _QWORD, __int64 *); // rbx
  int v35; // eax
  int v36; // eax
  int v37; // [rsp+20h] [rbp-48h]
  __int64 v38; // [rsp+30h] [rbp-38h] BYREF
  __int64 v39[6]; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v41; // [rsp+70h] [rbp+8h] BYREF
  __int64 v42; // [rsp+78h] [rbp+10h] BYREF
  __int64 v43; // [rsp+80h] [rbp+18h] BYREF
  __int64 v44; // [rsp+88h] [rbp+20h] BYREF

  v2 = *a1;
  v3 = (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(a1[1] + 12);
  try
  {
    wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics,wil::err_exception_policy>::query<Windows::Internal::ApplicationModel::WindowManagement::IAppViewBehaviorStatics>(
      v3,
      &v38);
    v4 = *a1[2];
    v43 = 0LL;
    if ( v4 )
    {
      switch ( v4 )
      {
        case 1:
        case 2:
          v22 = *((_QWORD *)a1[1] + 6);
          v23 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v22 + 48LL);
          wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(&v43);
          v24 = v23(v22, *v2, 0LL, &v43);
          if ( v24 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0xAE,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
              (const char *)(unsigned int)v24,
              v37);
          break;
        case 3:
          v41 = 1;
          v8 = 0LL;
          v44 = 0LL;
          v42 = 0LL;
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v42);
          v9 = Microsoft::WRL::Details::MakeAndInitialize<details::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>,details::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>,enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState const &>(
                 &v42,
                 &v41);
          if ( v9 >= 0 )
          {
            v8 = v42;
            v42 = 0LL;
            v44 = v8;
            v9 = 0;
          }
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v42);
          if ( v9 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0xB5,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
              (const char *)(unsigned int)v9,
              v37);
          v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v38 + 56LL))(v38, *v2, v8);
          if ( v10 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0xB6,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
              (const char *)(unsigned int)v10,
              v37);
          v11 = *((_QWORD *)a1[1] + 6);
          v12 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v11 + 48LL);
          wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(&v43);
          v13 = v12(v11, *v2, 0LL, &v43);
          if ( v13 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0xB9,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
              (const char *)(unsigned int)v13,
              v37);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v44);
          goto LABEL_20;
        case 4:
          v5 = *((_QWORD *)a1[1] + 6);
          v6 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v5 + 48LL);
          wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(&v43);
          v7 = v6(v5, *v2, 1LL, &v43);
          if ( v7 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0xBE,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
              (const char *)(unsigned int)v7,
              v37);
          break;
        case 5:
          break;
        default:
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xCB,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
            (const char *)0x8000FFFFLL,
            v37);
      }
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD))(**((_QWORD **)a1[1] + 35) + 192LL))(
        *((_QWORD *)a1[1] + 35),
        v39,
        *v2);
      v41 = 0;
      if ( v39[0] )
      {
        v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39[0] + 256LL))(v39[0]);
        v41 = v31;
      }
      else
      {
        v44 = 0LL;
        v25 = (__int64 *)*((_QWORD *)a1[1] + 6);
        v26 = *v25;
        v44 = 0LL;
        v27 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v26 + 80))(v25, *v2, &v44);
        if ( v27 >= 0 )
        {
          v42 = 0LL;
          v28 = v44;
          v29 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v44 + 64LL);
          wil::com_ptr_t<IViewPresentationMediator,wil::err_returncode_policy>::reset(&v42);
          v30 = v29(v28, &v42);
          if ( v30 >= 0 )
          {
            if ( v42 )
            {
              v32 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v42 + 80LL))(v42, &v41);
              if ( v32 < 0 )
                wil::details::in1diag3::Throw_Hr(
                  retaddr,
                  (void *)0x9A,
                  (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
                  (const char *)(unsigned int)v32,
                  v37);
            }
          }
          else
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x97,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
              (const char *)(unsigned int)v30);
          }
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v42);
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x94,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
            (const char *)(unsigned int)v27);
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v44);
        v31 = v41;
      }
      if ( v31 )
      {
        v33 = *((_QWORD *)a1[1] + 23);
        v34 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v33 + 56LL);
        wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(&v43);
        v35 = v34(v33, v41, &v43);
        if ( v35 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xA6,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
            (const char *)(unsigned int)v35,
            v37);
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v39);
    }
    v36 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v38 + 56LL))(v38, *v2, 0LL);
    v14 = retaddr;
    if ( v36 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xD3,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v36,
        v37);
LABEL_20:
    v15 = a1[2];
    v16 = *a1;
    v17 = (_DWORD *)wil::details::static_lazy<ViewManagerInteropLogging>::get(
                      (__int64)v14,
                      _lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_)[1];
    if ( *v17 > 5u && tlgKeywordOn((__int64)v17, 0x200000000000LL) )
    {
      v41 = *v15;
      LODWORD(v42) = *v16;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v18,
        byte_1808594A3,
        0LL,
        v19,
        (__int64)&v42,
        (__int64)&v41);
    }
    wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(&v43);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v38);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xD8,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
                           v20);
  }
  return result;
}

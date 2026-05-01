/*
 * XREFs of ?OnPrimaryViewHidingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerPrimaryViewHidingResponseEventArgs@45678@@Z @ 0x18047E4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z @ 0x18004E988 (-SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z.c)
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x180050D8C (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18008317C (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1801CFD50 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?InvokeIsAnyViewShown@TabTipAdapter@KeyboardHosting@@AEAA_NXZ @ 0x1801EE9E4 (-InvokeIsAnyViewShown@TabTipAdapter@KeyboardHosting@@AEAA_NXZ.c)
 *     ?InvokeInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJI_N@Z @ 0x1801F803C (-InvokeInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJI_N@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802C8224 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??0PendingShowHideViewData@TabTipAdapter@KeyboardHosting@@QEAA@AEBU012@@Z @ 0x18047B970 (--0PendingShowHideViewData@TabTipAdapter@KeyboardHosting@@QEAA@AEBU012@@Z.c)
 *     ?NotifyCurrentVisibilityState@TabTipAdapter@KeyboardHosting@@QEAAJIW4KeyboardVisibilityChangeReason@2@_N1@Z @ 0x18047D48C (-NotifyCurrentVisibilityState@TabTipAdapter@KeyboardHosting@@QEAAJIW4KeyboardVisibilityChangeRea.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnPrimaryViewHidingResponse(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerPrimaryViewHidingResponseEventArgs *a3)
{
  const struct _tlgProvider_t *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ebx
  bool v10; // zf
  int v11; // eax
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rdx
  const struct _tlgProvider_t *v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdi
  __int64 (__fastcall *v19)(__int64, _QWORD, _BYTE *, char *, int *, int *); // rbx
  int v20; // eax
  __int64 v21; // rdx
  int v22; // [rsp+20h] [rbp-89h]
  char v23; // [rsp+40h] [rbp-69h] BYREF
  char v24; // [rsp+41h] [rbp-68h] BYREF
  _BYTE v25[6]; // [rsp+42h] [rbp-67h] BYREF
  int v26[2]; // [rsp+48h] [rbp-61h] BYREF
  int v27; // [rsp+50h] [rbp-59h] BYREF
  const wchar_t *v28; // [rsp+58h] [rbp-51h] BYREF
  _BYTE v29[72]; // [rsp+60h] [rbp-49h] BYREF
  unsigned int v30; // [rsp+A8h] [rbp-1h]
  char v31; // [rsp+C0h] [rbp+17h]
  _BYTE v32[24]; // [rsp+C8h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v5 = TouchKeyboardExperienceTraceLogging::Provider();
  if ( *(_DWORD *)v5 > 5u )
  {
    *(_QWORD *)v26 = "TabTipAdapter::OnPrimaryViewHidingResponse";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      (__int64)v5,
      byte_1807FC7A7,
      v6,
      v7,
      (const wchar_t **)v26);
  }
  if ( !*((_QWORD *)this + 68) )
  {
    v8 = -2147418113;
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x558,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)0x8000FFFFLL);
    return v8;
  }
  KeyboardHosting::TabTipAdapter::PendingShowHideViewData::PendingShowHideViewData(
    (KeyboardHosting::TabTipAdapter::PendingShowHideViewData *)v29,
    *(const struct KeyboardHosting::TabTipAdapter::PendingShowHideViewData **)(*((_QWORD *)this + 65)
                                                                             + 8
                                                                             * (*((_QWORD *)this + 67) & (*((_QWORD *)this + 66) - 1LL))));
  if ( v31 )
  {
    while ( *((_QWORD *)this + 68) )
    {
      std::vector<Geometry::CRect>::_Tidy(*(_QWORD *)(*((_QWORD *)this + 65)
                                                    + 8 * (*((_QWORD *)this + 67) & (*((_QWORD *)this + 66) - 1LL))) + 104LL);
      v10 = (*((_QWORD *)this + 68))-- == 1LL;
      if ( v10 )
        *((_QWORD *)this + 67) = 0LL;
      else
        ++*((_QWORD *)this + 67);
    }
    v8 = -2147418113;
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x563,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)0x8000FFFFLL);
    goto LABEL_29;
  }
  v23 = 0;
  (*(void (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerPrimaryViewHidingResponseEventArgs *, char *))(*(_QWORD *)a3 + 48LL))(
    a3,
    &v23);
  if ( v23 )
  {
    v15 = TouchKeyboardExperienceTraceLogging::Provider();
    if ( *(_DWORD *)v15 > 5u )
    {
      v28 = (const wchar_t *)"TabTipAdapter::OnPrimaryViewHidingResponse - HideCancelled";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
        (__int64)v15,
        byte_1807FC7A7,
        v16,
        v17,
        &v28);
    }
    v13 = KeyboardHosting::TabTipAdapter::NotifyCurrentVisibilityState((__int64)this, *((_DWORD *)this + 124), 0, 1, 0);
    v8 = v13;
    if ( v13 < 0 )
    {
      v14 = 1407LL;
      goto LABEL_19;
    }
    v25[0] = 0;
    v24 = 0;
    v27 = 0;
    *(_QWORD *)v26 = 0LL;
    v18 = *((_QWORD *)this + 15);
    v19 = *(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *, char *, int *, int *))(*(_QWORD *)v18 + 304LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v26);
    v20 = v19(v18, 0LL, v25, &v24, &v27, v26);
    v8 = v20;
    if ( v20 >= 0 )
    {
      v20 = (*(__int64 (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this + 1) + 24LL))(
              (char *)this + 8,
              (unsigned int)v27,
              0LL);
      v8 = v20;
      if ( v20 >= 0 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v26);
        goto LABEL_31;
      }
      v21 = 1415LL;
    }
    else
    {
      v21 = 1414LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v20);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v26);
    goto LABEL_29;
  }
  v8 = KeyboardHosting::TabTipAdapter::InvokeInputAppRequestedHide(this);
  if ( v8 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 9) + 112LL))(
            *((_QWORD *)this + 9),
            v30,
            0LL);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xE3,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v11,
        v22);
    goto LABEL_29;
  }
  if ( !KeyboardHosting::TabTipAdapter::InvokeIsAnyViewShown(this) )
  {
    v13 = KeyboardHosting::TabTipAdapter::SetTrackSelectionPosition(this, 0LL, v12);
    v8 = v13;
    if ( v13 < 0 )
    {
      v14 = 1398LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v13);
LABEL_29:
      std::vector<Geometry::CRect>::_Tidy((__int64)v32);
      return v8;
    }
  }
LABEL_31:
  std::vector<Geometry::CRect>::_Tidy(*(_QWORD *)(*((_QWORD *)this + 65)
                                                + 8 * (*((_QWORD *)this + 67) & (*((_QWORD *)this + 66) - 1LL))) + 104LL);
  v10 = (*((_QWORD *)this + 68))-- == 1LL;
  if ( v10 )
    *((_QWORD *)this + 67) = 0LL;
  else
    ++*((_QWORD *)this + 67);
  std::vector<Geometry::CRect>::_Tidy((__int64)v32);
  return 0LL;
}

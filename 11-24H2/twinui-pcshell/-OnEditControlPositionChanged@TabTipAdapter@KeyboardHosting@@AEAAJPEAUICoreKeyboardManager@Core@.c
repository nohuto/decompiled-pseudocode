/*
 * XREFs of ?OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlPositionChangedEventArgs@45678@@Z @ 0x18007FC00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInputAppState@TabTipAdapter@KeyboardHosting@@AEAA?AW4PLM_APPLICATION_STATE@@XZ @ 0x18007FE1C (-GetInputAppState@TabTipAdapter@KeyboardHosting@@AEAA-AW4PLM_APPLICATION_STATE@@XZ.c)
 *     ?Instance@TouchKeyboardExperienceTelemetryLogger@@KAPEAV1@XZ @ 0x18007FF6C (-Instance@TouchKeyboardExperienceTelemetryLogger@@KAPEAV1@XZ.c)
 *     ?IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z @ 0x180080268 (-IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z.c)
 *     ?RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18008162C (-RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?GetPrimaryViewDisplayMode@TabTipAdapter@KeyboardHosting@@QEAA?AW4IHM_DISPLAY_MODE@@XZ @ 0x180292648 (-GetPrimaryViewDisplayMode@TabTipAdapter@KeyboardHosting@@QEAA-AW4IHM_DISPLAY_MODE@@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?EditControlPositionChanged_@TouchKeyboardExperienceTelemetryLogger@@QEBAXPEBGAEBURect@Foundation@Windows@@11@Z @ 0x18047C374 (-EditControlPositionChanged_@TouchKeyboardExperienceTelemetryLogger@@QEBAXPEBGAEBURect@Foundatio.c)
 *     ?InvokeGetForegroundAppId@TabTipAdapter@KeyboardHosting@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x18047D2FC (-InvokeGetForegroundAppId@TabTipAdapter@KeyboardHosting@@AEAA-AV-$basic_string@GU-$char_traits@G.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnEditControlPositionChanged(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlPositionChangedEventArgs *a3)
{
  int v4; // edi
  __int64 *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r9
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v11; // rdx
  __int64 (__fastcall *v12)(__int64, __int128 *); // r8
  unsigned __int64 v13; // rdx
  unsigned __int8 v14; // cl
  const unsigned __int16 *v15; // rdi
  TouchKeyboardExperienceTelemetryLogger *v16; // rcx
  _BYTE v17[4]; // [rsp+30h] [rbp-9h] BYREF
  int v18; // [rsp+34h] [rbp-5h] BYREF
  float v19[6]; // [rsp+38h] [rbp-1h] BYREF
  __int128 v20; // [rsp+50h] [rbp+17h] BYREF
  unsigned __int16 *v21[4]; // [rsp+60h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+5Fh]

  *(_OWORD *)v19 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlPositionChangedEventArgs *, float *))(*(_QWORD *)a3 + 48LL))(
         a3,
         v19);
  if ( v4 < 0 )
  {
    v11 = 918LL;
    goto LABEL_11;
  }
  *(_OWORD *)((char *)this + 456) = *(_OWORD *)v19;
  v17[0] = 0;
  (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 16) + 240LL))(*((_QWORD *)this + 16), v17);
  if ( v17[0] && (unsigned int)KeyboardHosting::TabTipAdapter::GetPrimaryViewDisplayMode(this) == 3 )
  {
    KeyboardHosting::TabTipAdapter::InvokeGetForegroundAppId(this, v21);
    v20 = 0LL;
    (*(void (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 16) + 312LL))(*((_QWORD *)this + 16), &v20);
    v15 = (const unsigned __int16 *)v21;
    if ( v21[3] > (unsigned __int16 *)7 )
      v15 = v21[0];
    if ( TouchKeyboardExperienceTelemetryLogger::IsEnabled(v14, v13) )
    {
      TouchKeyboardExperienceTelemetryLogger::Instance();
      TouchKeyboardExperienceTelemetryLogger::EditControlPositionChanged_(
        v16,
        v15,
        (const struct Windows::Foundation::Rect *)&v20,
        (const struct Windows::Foundation::Rect *)v19,
        (KeyboardHosting::TabTipAdapter *)((char *)this + 472));
    }
    std::wstring::_Tidy_deallocate(v21);
  }
  v18 = 0;
  v5 = (__int64 *)*((_QWORD *)this + 15);
  v6 = *v5;
  v20 = *(_OWORD *)v19;
  v4 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, int *))(v6 + 80))(v5, &v20, &v18);
  if ( v4 < 0 )
  {
    v11 = 935LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v7 = *((_QWORD *)this + 7);
  if ( v7 )
  {
    v12 = *(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v7 + 48LL);
    LODWORD(v20) = (int)v19[0];
    DWORD1(v20) = (int)v19[1];
    DWORD2(v20) = (int)(float)(v19[2] + v19[0]);
    HIDWORD(v20) = (int)(float)(v19[3] + v19[1]);
    v4 = v12(v7, &v20);
    if ( v4 < 0 )
    {
      v11 = 938LL;
      goto LABEL_11;
    }
  }
  if ( v18 != 3 )
    return 0LL;
  if ( (unsigned int)KeyboardHosting::TabTipAdapter::GetInputAppState(this) != 1 )
    return 0LL;
  v8 = KeyboardHosting::TabTipAdapter::RequestPositionAndSizeUpdate(this);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3B2,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}

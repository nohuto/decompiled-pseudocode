/*
 * XREFs of ?OnPrimaryViewShowingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerPrimaryViewShowingResponseEventArgs@45678@@Z @ 0x18047E800
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0ViewOptions@@QEAA@AEBU0@@Z @ 0x18004EC68 (--0ViewOptions@@QEAA@AEBU0@@Z.c)
 *     ??4ViewOptions@@QEAAAEAU0@$$QEAU0@@Z @ 0x18004FD3C (--4ViewOptions@@QEAAAEAU0@$$QEAU0@@Z.c)
 *     ?GetViewOptions@@YA?AUViewOptions@@AEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@AEBV?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1800500F4 (-GetViewOptions@@YA-AUViewOptions@@AEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@.c)
 *     ?InvokeInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@UViewOptions@@@Z @ 0x1800508BC (-InvokeInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@UViewOptions@@@Z.c)
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x180050D8C (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802C8224 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??0PendingShowHideViewData@TabTipAdapter@KeyboardHosting@@QEAA@AEBU012@@Z @ 0x18047B970 (--0PendingShowHideViewData@TabTipAdapter@KeyboardHosting@@QEAA@AEBU012@@Z.c)
 *     ?NotifyCurrentVisibilityState@TabTipAdapter@KeyboardHosting@@QEAAJIW4KeyboardVisibilityChangeReason@2@_N1@Z @ 0x18047D48C (-NotifyCurrentVisibilityState@TabTipAdapter@KeyboardHosting@@QEAAJIW4KeyboardVisibilityChangeRea.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnPrimaryViewShowingResponse(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerPrimaryViewShowingResponseEventArgs *a3)
{
  unsigned int v5; // edi
  bool v6; // zf
  __m128 *ViewOptions; // rax
  ViewOptions *v8; // rax
  int v9; // eax
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // eax
  _BYTE v14[8]; // [rsp+30h] [rbp-D0h] BYREF
  int v15[4]; // [rsp+38h] [rbp-C8h] BYREF
  int v16; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+4Ch] [rbp-B4h]
  int v18; // [rsp+54h] [rbp-ACh]
  __int128 v19; // [rsp+68h] [rbp-98h] BYREF
  __int64 v20; // [rsp+78h] [rbp-88h]
  _BYTE v21[72]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v22; // [rsp+C8h] [rbp-38h]
  float v23; // [rsp+D0h] [rbp-30h]
  float v24; // [rsp+D4h] [rbp-2Ch]
  float v25; // [rsp+D8h] [rbp-28h]
  float v26; // [rsp+DCh] [rbp-24h]
  char v27; // [rsp+E0h] [rbp-20h]
  _BYTE v28[24]; // [rsp+E8h] [rbp-18h] BYREF
  __m128 v29[2]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v30[24]; // [rsp+120h] [rbp+20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]

  if ( *((_QWORD *)this + 68) )
  {
    KeyboardHosting::TabTipAdapter::PendingShowHideViewData::PendingShowHideViewData(
      (KeyboardHosting::TabTipAdapter::PendingShowHideViewData *)v21,
      *(const struct KeyboardHosting::TabTipAdapter::PendingShowHideViewData **)(*((_QWORD *)this + 65)
                                                                               + 8
                                                                               * (*((_QWORD *)this + 67) & (*((_QWORD *)this + 66) - 1LL))));
    if ( !v27 )
    {
      while ( *((_QWORD *)this + 68) )
      {
        std::vector<Geometry::CRect>::_Tidy(*(_QWORD *)(*((_QWORD *)this + 65)
                                                      + 8 * (*((_QWORD *)this + 67) & (*((_QWORD *)this + 66) - 1LL))) + 104LL);
        v6 = (*((_QWORD *)this + 68))-- == 1LL;
        if ( v6 )
          *((_QWORD *)this + 67) = 0LL;
        else
          ++*((_QWORD *)this + 67);
      }
      v5 = -2147418113;
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x52C,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)0x8000FFFFLL);
      goto LABEL_23;
    }
    v14[0] = 0;
    (*(void (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerPrimaryViewShowingResponseEventArgs *, _BYTE *))(*(_QWORD *)a3 + 48LL))(
      a3,
      v14);
    if ( v14[0] )
    {
      v12 = KeyboardHosting::TabTipAdapter::NotifyCurrentVisibilityState(
              (__int64)this,
              *((_DWORD *)this + 124),
              0,
              0,
              0);
      v5 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x54B,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v12);
        goto LABEL_23;
      }
    }
    else
    {
      v16 = 0;
      v17 = 0LL;
      v18 = 0;
      v19 = 0LL;
      v20 = 0LL;
      v15[0] = 0;
      (*(void (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 16) + 256LL))(*((_QWORD *)this + 16), v15);
      ViewOptions = GetViewOptions(v29, (__int64)v21, (__int64)v28, v15[0]);
      ViewOptions::operator=((__int64)&v16, (__int64)ViewOptions);
      std::vector<Geometry::CRect>::_Tidy((__int64)v30);
      v8 = ViewOptions::ViewOptions((ViewOptions *)v29, (const struct ViewOptions *)&v16);
      v15[0] = (int)v23;
      v15[1] = (int)v24;
      v15[2] = (int)(float)(v25 + v23);
      v15[3] = (int)(float)(v26 + v24);
      v9 = KeyboardHosting::TabTipAdapter::InvokeInputAppRequestedShow((__int64)this, v22, v15, (__int64)v8);
      v5 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x538,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v9);
        std::vector<Geometry::CRect>::_Tidy((__int64)&v19);
LABEL_23:
        std::vector<Geometry::CRect>::_Tidy((__int64)v28);
        return v5;
      }
      if ( v22 == *((_DWORD *)this + 124) )
      {
        v11 = *((unsigned int *)this + 96);
        if ( (_DWORD)v11 != 1 )
        {
          v11 = 2LL;
          *((_DWORD *)this + 96) = 2;
        }
        LOBYTE(v10) = *((_BYTE *)this + 388);
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _BYTE))(**((_QWORD **)this + 4) + 640LL))(
          *((_QWORD *)this + 4),
          v11,
          0LL,
          v10,
          *((_BYTE *)this + 389));
        *((_DWORD *)this + 96) = 0;
      }
      std::vector<Geometry::CRect>::_Tidy((__int64)&v19);
    }
    std::vector<Geometry::CRect>::_Tidy(*(_QWORD *)(*((_QWORD *)this + 65)
                                                  + 8 * (*((_QWORD *)this + 67) & (*((_QWORD *)this + 66) - 1LL))) + 104LL);
    v6 = (*((_QWORD *)this + 68))-- == 1LL;
    if ( v6 )
      *((_QWORD *)this + 67) = 0LL;
    else
      ++*((_QWORD *)this + 67);
    v5 = 0;
    goto LABEL_23;
  }
  v5 = -2147418113;
  wil::details::in1diag3::Log_Hr(
    retaddr,
    (void *)0x51F,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)0x8000FFFFLL);
  return v5;
}

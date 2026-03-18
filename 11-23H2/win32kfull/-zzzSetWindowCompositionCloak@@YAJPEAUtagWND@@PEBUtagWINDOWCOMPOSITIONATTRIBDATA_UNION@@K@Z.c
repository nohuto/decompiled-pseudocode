/*
 * XREFs of ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C00B5610
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0051ED0 (xxxCreateWindowEx.c)
 *     ?zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z @ 0x1C00A6958 (-zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z.c)
 *     ?zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z @ 0x1C00A6F64 (-zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetWindowData @ 0x1C00A8300 (xxxSetWindowData.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00ACC1C (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C00B5610 (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C00E9820 (NtUserSetWindowCompositionAttribute.c)
 *     SetVisible @ 0x1C00EDEE8 (SetVisible.c)
 *     xxxAddShadow @ 0x1C0220DA4 (xxxAddShadow.c)
 *     zzzCloakShadow @ 0x1C02211F0 (zzzCloakShadow.c)
 *     xxxTrackPopupMenuEx @ 0x1C0231EEC (xxxTrackPopupMenuEx.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0044D3C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?GetRecalcProperty@CRecalcProp@@CAPEAV1@PEBUtagWND@@@Z @ 0x1C005D910 (-GetRecalcProperty@CRecalcProp@@CAPEAV1@PEBUtagWND@@@Z.c)
 *     ?ShouldDeferRecalc@CRecalcState@@SA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z @ 0x1C005D940 (-ShouldDeferRecalc@CRecalcState@@SA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z.c)
 *     FVisCountable @ 0x1C0062160 (FVisCountable.c)
 *     WindowHasShadow @ 0x1C0081490 (WindowHasShadow.c)
 *     NextOwnedWindow @ 0x1C00A455C (NextOwnedWindow.c)
 *     ?_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C00AA680 (-_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOS.c)
 *     ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C00B532C (-SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C00B5610 (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z.c)
 *     _GetProp @ 0x1C00B6E24 (_GetProp.c)
 *     ?GetCloakFlags@@YAKPEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C00B6FD8 (-GetCloakFlags@@YAKPEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00B7028 (zzzEndDeferWinEventNotify.c)
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C00EC894 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     xxxWindowEvent @ 0x1C00F0BC0 (xxxWindowEvent.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 *     ?GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z @ 0x1C021F9E4 (-GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z.c)
 *     zzzCloakShadow @ 0x1C02211F0 (zzzCloakShadow.c)
 *     ?s_PostRecalcForWindow@CRecalcProp@@SAXPEAUtagWND@@@Z @ 0x1C0225D0C (-s_PostRecalcForWindow@CRecalcProp@@SAXPEAUtagWND@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzSetWindowCompositionCloak(
        struct tagWND *a1,
        const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *a2,
        unsigned int a3)
{
  const struct tagWND *v6; // rbp
  __int64 v7; // rsi
  unsigned int CloakFlags; // r15d
  int v9; // r14d
  __int64 Prop; // rax
  unsigned __int64 v11; // rcx
  struct tagWND *OwnedWindow; // rbx
  struct tagWND *j; // rax
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  unsigned int v17; // eax
  int v18; // eax
  struct CRecalcProp *v19; // rax
  __int64 v20; // r9
  int v21; // edx
  struct CRecalcProp *RecalcProperty; // rax
  __int64 v23; // r9
  _QWORD *v24; // rbx
  int v25; // eax
  unsigned int v26; // ecx
  unsigned int v27; // eax
  unsigned int v28; // eax
  char v29; // dl
  struct tagWND *NextComponentWindow; // rax
  struct tagWND *i; // rbx
  struct CRecalcProp *v32; // rax
  __int64 v33; // r9
  char v34; // dl
  char v35; // dl
  _DWORD v36[16]; // [rsp+70h] [rbp-88h] BYREF

  memset_0(v36, 0, sizeof(v36));
  v6 = 0LL;
  LODWORD(v7) = 0;
  if ( a2 )
    LOBYTE(v7) = *(_DWORD *)a2 != 0;
  else
    LOBYTE(v7) = a3 != 0;
  if ( (unsigned int)_GetWindowCompositionInfo(a1, (struct WINDOWCOMPOSITIONINFO *)v36) )
  {
    ++gdwDeferWinEvent;
    CloakFlags = GetCloakFlags((const struct WINDOWCOMPOSITIONINFO *)v36);
    if ( ((_DWORD)v7 || !a2) && a3 == CloakFlags )
    {
      v9 = 0;
      v7 = (unsigned int)v7;
      goto LABEL_8;
    }
    if ( a2 )
    {
      v15 = v36[0];
      if ( (a3 & 1) != 0 )
      {
        v15 = ((_DWORD)v7 << 10) | v36[0] & 0xFFFFFBFF;
        v36[0] = v15;
      }
      if ( (a3 & 2) == 0 )
        goto LABEL_25;
      v16 = v15 & 0xFFFFF7FF;
      v17 = (_DWORD)v7 << 11;
    }
    else
    {
      v16 = ((a3 & 1) << 10) | ((a3 & 2) << 10);
      v17 = v36[0] & 0xFFFFF3FF;
    }
    v15 = v17 | v16;
    v36[0] = v15;
LABEL_25:
    if ( (v15 & 0x800) == 0 )
      *((_DWORD *)a1 + 80) |= 0x800u;
    if ( !(unsigned int)SetWindowCompositionInfo(a1, (const struct WINDOWCOMPOSITIONINFO *)v36) )
    {
      v9 = -1073741801;
LABEL_15:
      zzzEndDeferWinEventNotify(v11);
      return (unsigned int)v9;
    }
    v11 = CloakFlags == 0;
    v18 = (v15 & 0x400) != 0 || (v15 & 0x800) != 0;
    if ( (_DWORD)v11 == v18 )
    {
      v9 = _DwmAsyncSetCompositionAttribute((__int64)a1);
      if ( (unsigned int)WindowHasShadow(a1) )
        zzzCloakShadow(a1, (unsigned int)v7);
      if ( (unsigned int)FVisCountable((__int64)a1) && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
      {
        v24 = *(_QWORD **)(*((_QWORD *)a1 + 2) + 424LL);
        v25 = *((_DWORD *)v24 + 261);
        v26 = *((_DWORD *)v24 + 260);
        if ( (_DWORD)v7 )
        {
          v27 = v25 + 1;
          *((_DWORD *)v24 + 261) = v27;
          if ( v26 <= v27 && (v24[103] & 0x4000) != 0 )
          {
            PsUpdateComponentPower(*v24, 5LL);
            GreDxgkSetProcessStatus(v24, 2LL);
            *((_DWORD *)v24 + 206) &= ~0x4000u;
          }
        }
        else
        {
          v28 = v25 - 1;
          *((_DWORD *)v24 + 261) = v28;
          if ( v26 > v28 && (v24[103] & 0x4000) == 0 )
          {
            GreDxgkSetProcessStatus(v24, 2LL);
            PsUpdateComponentPower(*v24, 5LL);
            *((_DWORD *)v24 + 206) |= 0x4000u;
          }
        }
      }
      v21 = 1;
      if ( gdwDeferWinEvent )
        v21 = 3;
      xxxWindowEvent((v7 ^ 1) + 32791, v21);
      if ( !(_DWORD)v7 && !CRecalcState::ShouldDeferRecalc((__int64)a1, 2) )
      {
        RecalcProperty = CRecalcProp::GetRecalcProperty(a1);
        if ( RecalcProperty )
        {
          if ( *((_DWORD *)RecalcProperty + 6) == 1 )
          {
            v29 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
            if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_AND_TRACE_SF_q(
                (__int64)WPP_GLOBAL_Control->AttachedDevice,
                v29,
                WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                v23,
                4u,
                7u,
                0x48u,
                (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
                *(_QWORD *)a1);
            CRecalcProp::s_PostRecalcForWindow(a1);
          }
        }
      }
    }
    else
    {
      v9 = 0;
    }
    v7 = (unsigned int)v7;
    if ( v9 < 0 )
      goto LABEL_15;
LABEL_8:
    Prop = GetProp(a1, CoreWindowProp::s_atom, 1LL);
    if ( !Prop )
      goto LABEL_9;
    if ( *(_DWORD *)(Prop + 24) )
    {
      while ( 1 )
      {
        NextComponentWindow = CoreWindowProp::GetNextComponentWindow(a1, v6);
        v6 = NextComponentWindow;
        if ( !NextComponentWindow )
          break;
        for ( i = (struct tagWND *)NextOwnedWindow(0LL, NextComponentWindow, *((_QWORD *)NextComponentWindow + 13));
              i;
              i = (struct tagWND *)NextOwnedWindow(i, a1, *((_QWORD *)a1 + 13)) )
        {
          v9 = zzzSetWindowCompositionCloak(i, a2, a3);
          if ( v9 < 0 )
            break;
          if ( !v7 && !CRecalcState::ShouldDeferRecalc((__int64)a1, 2) )
          {
            v32 = CRecalcProp::GetRecalcProperty(a1);
            if ( v32 )
            {
              if ( *((_DWORD *)v32 + 6) == 1 )
              {
                v34 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
                if ( v34 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_AND_TRACE_SF_q(
                    (__int64)WPP_GLOBAL_Control->AttachedDevice,
                    v34,
                    WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                    v33,
                    4u,
                    7u,
                    0x48u,
                    (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
                    *(_QWORD *)a1);
                CRecalcProp::s_PostRecalcForWindow(a1);
              }
            }
          }
        }
      }
    }
    if ( v9 >= 0 )
    {
LABEL_9:
      OwnedWindow = *(struct tagWND **)(*((_QWORD *)a1 + 13) + 112LL);
      if ( OwnedWindow )
      {
        do
        {
          v11 = *((_QWORD *)OwnedWindow + 15);
          j = OwnedWindow;
          if ( OwnedWindow != (struct tagWND *)v11 )
          {
            for ( j = (struct tagWND *)*((_QWORD *)OwnedWindow + 15); v11; j = (struct tagWND *)*((_QWORD *)j + 13) )
            {
              v11 = *((_QWORD *)j + 13);
              if ( v11 == *((_QWORD *)OwnedWindow + 13) )
                break;
            }
          }
          if ( a1 == j )
            break;
          OwnedWindow = (struct tagWND *)*((_QWORD *)OwnedWindow + 11);
        }
        while ( OwnedWindow );
        for ( ; OwnedWindow; OwnedWindow = (struct tagWND *)NextOwnedWindow(OwnedWindow, a1, *((_QWORD *)a1 + 13)) )
        {
          v9 = zzzSetWindowCompositionCloak(OwnedWindow, a2, a3);
          if ( v9 < 0 )
            break;
          if ( !v7 && !CRecalcState::ShouldDeferRecalc((__int64)a1, 2) )
          {
            v19 = CRecalcProp::GetRecalcProperty(a1);
            if ( v19 )
            {
              if ( *((_DWORD *)v19 + 6) == 1 )
              {
                v35 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
                if ( v35 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_AND_TRACE_SF_q(
                    (__int64)WPP_GLOBAL_Control->AttachedDevice,
                    v35,
                    WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                    v20,
                    4u,
                    7u,
                    0x48u,
                    (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
                    *(_QWORD *)a1);
                CRecalcProp::s_PostRecalcForWindow(a1);
              }
            }
          }
        }
      }
    }
    goto LABEL_15;
  }
  return 3221225480LL;
}

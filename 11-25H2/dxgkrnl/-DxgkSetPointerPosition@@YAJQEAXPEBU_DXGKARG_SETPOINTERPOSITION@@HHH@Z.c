/*
 * XREFs of ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z @ 0x14028A7D0
 * Callers:
 *     ?DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x14028A770 (-DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z.c)
 *     DxgkWin32kSetPointerPosition @ 0x1403CDC00 (DxgkWin32kSetPointerPosition.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x140283874 (DxgkReleaseSessionModeChangeLock.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x140287094 (DxgkAcquireSessionModeChangeLock.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x14028AEA0 (-SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPO.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1402E7568 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1402FD190 (-ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 */

__int64 __fastcall DxgkSetPointerPosition(
        DXGADAPTER *this,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        __int64 a3,
        int a4,
        int a5)
{
  int v5; // ebx
  __int64 VidPnSourceId; // rbx
  __int64 v9; // rax
  __int64 v10; // rbx
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // r14
  int v13; // eax
  unsigned int v14; // esi
  bool v15; // r15
  _QWORD *i; // rax
  _QWORD *v17; // rdx
  _QWORD *j; // rax
  _QWORD *v19; // rcx
  struct SESSION_VIEW *v20; // rsi
  _QWORD *v21; // rbx
  _QWORD *v22; // r14
  struct DISPLAY_SOURCE *v23; // rbx
  int v24; // ebx
  __int64 v25; // rcx
  __int64 v26; // r8
  _QWORD *v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // r8
  bool v33; // zf
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // r8
  _QWORD *v40; // rcx
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  int v42; // [rsp+50h] [rbp-30h] BYREF
  __int64 v43; // [rsp+58h] [rbp-28h]
  char v44; // [rsp+60h] [rbp-20h]

  v42 = -1;
  v5 = a3;
  v43 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v44 = 1;
    v42 = 3011;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, a3, 3011);
  }
  else
  {
    v44 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v42, 3011);
  if ( !a2 )
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
    if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v38, (__int64)&EventProfilerExit, v39, v42);
    return (unsigned int)-1073741811;
  }
  if ( !v5 )
  {
    VidPnSourceId = a2->VidPnSourceId;
    if ( !this )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 8811;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"i_pAdapter != NULL", 8811LL, 0LL, 0LL, 0LL, 0LL);
    }
    v9 = *((_QWORD *)this + 390);
    if ( v9 )
    {
      if ( (unsigned int)VidPnSourceId < *(_DWORD *)(v9 + 96) )
      {
        _InterlockedIncrement64((volatile signed __int64 *)this + 3);
        if ( !*((_QWORD *)this + 390) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 2047;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"pDisplayAdapter->IsDisplayAdapter()",
            2047LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v10 = *(_QWORD *)((char *)this + 412);
        DXGADAPTER::ReleaseReference(this);
        Global = DXGGLOBAL::GetGlobal();
        SessionData = DXGGLOBAL::GetSessionData(Global);
        if ( !SessionData )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId();
          v14 = -1073741811;
          WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
          WdLogGlobalForLineNumber = 2061;
          v37 = PsGetCurrentProcessSessionId();
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Current session does not have session data in session 0x%I64x, returning 0x%I64x.",
            v37,
            -1073741811LL,
            0LL,
            0LL,
            0LL);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
          if ( !v44 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
            return v14;
LABEL_67:
          McTemplateK0q_EtwWriteTransfer(v31, (__int64)&EventProfilerExit, v32, v42);
          return v14;
        }
        v13 = DxgkAcquireSessionModeChangeLock(0);
        v14 = v13;
        v15 = v13 >= 0;
        if ( v13 < 0 )
        {
          WdLogSingleEntry1(4LL, v13);
          WdLogGlobalForLineNumber = 2072;
          if ( !v15 )
          {
LABEL_61:
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
            v33 = v44 == 0;
            goto LABEL_47;
          }
        }
        else
        {
          for ( i = (_QWORD *)*((_QWORD *)SessionData + 2323); ; i = (_QWORD *)*i )
          {
            if ( i == (_QWORD *)((char *)SessionData + 18584) )
              goto LABEL_54;
            if ( *(i - 3) == v10 )
              break;
          }
          v17 = i + 10;
          for ( j = (_QWORD *)i[10]; j != v17; j = (_QWORD *)*j )
          {
            v19 = j - 4;
            if ( *((_DWORD *)j - 4) == a2->VidPnSourceId )
              goto LABEL_19;
          }
          v19 = 0LL;
LABEL_19:
          if ( !v19 )
          {
LABEL_54:
            WdLogSingleEntry4(3LL, a2->VidPnSourceId, SHIDWORD(v10), (unsigned int)v10, SessionData);
            WdLogGlobalForLineNumber = 4356;
            goto LABEL_55;
          }
          v20 = (struct SESSION_VIEW *)v19[6];
          if ( v20 )
          {
            if ( *(struct DXGSESSIONDATA **)v20 != SessionData )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 4366;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                0xFFFFFFFFLL,
                L"(pSessionView == NULL) || (&pSessionView->GetOwnedSession() == this)",
                4366LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            v21 = (_QWORD *)*((_QWORD *)v20 + 6);
            v22 = (_QWORD *)((char *)v20 + 48);
            if ( v21 == (_QWORD *)((char *)v20 + 48) )
              v23 = 0LL;
            else
              v23 = (struct DISPLAY_SOURCE *)(v21 - 7);
            if ( a5 )
            {
              while ( v23 )
              {
                if ( *((_DWORD *)v23 + 4) == a2->VidPnSourceId && this == *(DXGADAPTER **)(*((_QWORD *)v23 + 1) + 16LL) )
                {
                  v24 = SetPointerPositionForDisplaySource(v23, v20, a2, a4, a5);
                  if ( v24 >= 0 )
                    break;
                  if ( v15 )
                    DxgkReleaseSessionModeChangeLock();
                  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
                  if ( v44 )
                  {
                    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                      McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerExit, v26, v42);
                  }
                  return (unsigned int)v24;
                }
                v40 = (_QWORD *)*((_QWORD *)v23 + 7);
                v23 = 0LL;
                if ( v40 != v22 )
                  v23 = (struct DISPLAY_SOURCE *)(v40 - 7);
              }
            }
            else
            {
              while ( v23 )
              {
                if ( (int)SetPointerPositionForDisplaySource(v23, v20, a2, a4, 0) < 0 )
                  break;
                v28 = (_QWORD *)*((_QWORD *)v23 + 7);
                v23 = 0LL;
                if ( v28 != v22 )
                  v23 = (struct DISPLAY_SOURCE *)(v28 - 7);
              }
            }
            if ( v15 )
              DxgkReleaseSessionModeChangeLock();
            goto LABEL_43;
          }
LABEL_55:
          v34 = PsGetCurrentProcessSessionId();
          v14 = -1073741811;
          WdLogSingleEntry5(2LL, a2->VidPnSourceId, SHIDWORD(v10), (unsigned int)v10, v34, -1073741811LL);
          WdLogGlobalForLineNumber = 2086;
          v35 = PsGetCurrentProcessSessionId();
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Cannot find the session view for VidPn source 0x%I64x on adapter 0x%I64x%08I64x in session 0x%I64x, returning 0x%I64x.",
            a2->VidPnSourceId,
            SHIDWORD(v10),
            (unsigned int)v10,
            v35,
            -1073741811LL);
          if ( !v15 )
            goto LABEL_61;
        }
        DxgkReleaseSessionModeChangeLock();
        goto LABEL_61;
      }
      v14 = -1073741811;
      WdLogSingleEntry2(2LL, VidPnSourceId, -1073741811LL);
      WdLogGlobalForLineNumber = 8824;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Invalid VidPnSourceId (0x%I64x) specified, returning 0x%I64x",
        VidPnSourceId,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      WdLogSingleEntry2(4LL, this, -1073741637LL);
      WdLogGlobalForLineNumber = 8837;
      v14 = -1073741637;
    }
    WdLogSingleEntry3(4LL, this, a2->VidPnSourceId, (int)v14);
    WdLogGlobalForLineNumber = 2041;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
    v33 = v44 == 0;
LABEL_47:
    if ( v33 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      return v14;
    goto LABEL_67;
  }
  RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
  if ( RemoteOutputDuplMgr )
    OUTPUTDUPL_MGR::ProcessPointerPositionChange(RemoteOutputDuplMgr, a2);
LABEL_43:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
  if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v29, (__int64)&EventProfilerExit, v30, v42);
  return 0LL;
}

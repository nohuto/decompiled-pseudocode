/*
 * XREFs of _anonymous_namespace_::RenderCursor @ 0x140091F44
 * Callers:
 *     ?OnPointerCursorOperation@@YAXXZ @ 0x140092370 (-OnPointerCursorOperation@@YAXXZ.c)
 * Callees:
 *     ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x14002B398 (-HidePointer@CursorApiRouter@@QEAA_N_N@Z.c)
 *     _anonymous_namespace_::MoveCursor @ 0x140092650 (_anonymous_namespace_--MoveCursor.c)
 *     SetPointerMetaVisibility @ 0x140131E3C (SetPointerMetaVisibility.c)
 *     zzzEnableDwmPointerSupport @ 0x1401320A8 (zzzEnableDwmPointerSupport.c)
 *     TransitionCursorSuppressionState @ 0x140132F80 (TransitionCursorSuppressionState.c)
 *     ?SetCursorSuppression@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@00@Z @ 0x1401331EC (-SetCursorSuppression@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@00@Z.c)
 *     ReadCursorSuppressionConfig @ 0x140134838 (ReadCursorSuppressionConfig.c)
 */

__int64 __fastcall anonymous_namespace_::RenderCursor(unsigned int *a1, __int64 a2)
{
  int v3; // edi
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // ebp
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // edx
  int v23; // edx
  int CursorSuppressionConfig; // ebx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 UserSessionState; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  unsigned int v48; // edi
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rax
  int v55; // edx
  int v56; // edx
  int v57; // ebx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rax

  v3 = 0;
  if ( !*(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 36368) + 80LL) )
  {
    EnterCrit(1LL, 0LL);
    if ( *(_DWORD *)(W32GetUserSessionState(v6, v5) + 36396) != 3 )
    {
      v8 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 36368);
      if ( *(_DWORD *)(v8 + 88) || (v8 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 36368), !*(_DWORD *)(v8 + 92)) )
        v3 = 1;
    }
    if ( *(_DWORD *)(W32GetUserSessionState(v8, v7) + 36396) == 1
      || *(_DWORD *)(W32GetUserSessionState(v10, v9) + 36396) == 5 )
    {
      goto LABEL_13;
    }
    v13 = *(_DWORD *)(W32GetUserSessionState(v12, v11) + 36396);
    v16 = (unsigned int)(*(_DWORD *)(W32GetUserSessionState(v15, v14) + 36396) - 1);
    if ( (_DWORD)v16 )
    {
      v16 = (unsigned int)(v16 - 1);
      if ( (_DWORD)v16 )
      {
        v16 = (unsigned int)(v16 - 1);
        if ( (_DWORD)v16 )
        {
          v16 = (unsigned int)(v16 - 1);
          if ( (_DWORD)v16 )
          {
            v22 = v16 - 1;
            if ( v22 )
            {
              v23 = v22 - 1;
              if ( v23 )
              {
                v18 = (unsigned int)(v23 - 2);
                if ( (_DWORD)v18 )
                {
                  if ( (_DWORD)v18 == 1 )
                  {
                    CursorSuppressionConfig = ReadCursorSuppressionConfig();
                    *(_DWORD *)(W32GetUserSessionState(v26, v25) + 36396) = CursorSuppressionConfig;
                    UserSessionState = W32GetUserSessionState(v28, v27);
                    SetPointerMetaVisibility(*(_DWORD *)(UserSessionState + 36396) == 0);
                  }
                  goto LABEL_12;
                }
              }
            }
            zzzEnableDwmPointerSupport(0LL, 1LL);
            v43 = W32GetUserSessionState(v42, v41);
            CursorApiRouter::HidePointer(*(CursorApiRouter **)(v43 + 36360), 1u);
          }
        }
      }
    }
    *(_DWORD *)(W32GetUserSessionState(v17, v16) + 36396) = 2;
LABEL_12:
    v19 = W32GetUserSessionState(v17, v18);
    InputTraceLogging::Cursor::SetCursorSuppression(v13, 2LL, *(unsigned int *)(v19 + 36396));
LABEL_13:
    UserSessionSwitchLeaveCrit();
    *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v21, v20) + 36368) + 80LL) = 1;
  }
  anonymous_namespace_::MoveCursor((struct tagPOINT *)(a1 + 1));
  if ( v3 )
  {
    EnterCrit(1LL, 0LL);
    if ( *(_DWORD *)(W32GetUserSessionState(v37, v36) + 36396) != 1
      && *(_DWORD *)(W32GetUserSessionState(v39, v38) + 36396) != 5 )
    {
      TransitionCursorSuppressionState(8LL);
    }
    v40 = W32GetUserSessionState(v39, v38);
    CursorApiRouter::HidePointer(*(CursorApiRouter **)(v40 + 36360), 0);
    UserSessionSwitchLeaveCrit();
  }
  result = *a1;
  if ( (result & 2) == 0 )
  {
    EnterCrit(1LL, 0LL);
    v33 = *(_QWORD *)(W32GetUserSessionState(v31, v30) + 36368);
    if ( !*(_DWORD *)(v33 + 88) )
    {
      v33 = *(_QWORD *)(W32GetUserSessionState(v33, v32) + 36368);
      if ( !*(_DWORD *)(v33 + 92) )
        goto LABEL_25;
    }
    if ( *(_DWORD *)(W32GetUserSessionState(v33, v32) + 36396) == 1
      || *(_DWORD *)(W32GetUserSessionState(v45, v44) + 36396) == 5 )
    {
      goto LABEL_25;
    }
    v48 = *(_DWORD *)(W32GetUserSessionState(v47, v46) + 36396);
    v51 = (unsigned int)(*(_DWORD *)(W32GetUserSessionState(v50, v49) + 36396) - 1);
    if ( (_DWORD)v51 )
    {
      v51 = (unsigned int)(v51 - 1);
      if ( (_DWORD)v51 )
      {
        v51 = (unsigned int)(v51 - 1);
        if ( (_DWORD)v51 )
        {
          v51 = (unsigned int)(v51 - 1);
          if ( (_DWORD)v51 )
          {
            v55 = v51 - 1;
            if ( v55 )
            {
              v56 = v55 - 1;
              if ( v56 )
              {
                v53 = (unsigned int)(v56 - 2);
                if ( (_DWORD)v53 )
                {
                  if ( (_DWORD)v53 == 1 )
                  {
                    v57 = ReadCursorSuppressionConfig();
                    *(_DWORD *)(W32GetUserSessionState(v59, v58) + 36396) = v57;
                    v62 = W32GetUserSessionState(v61, v60);
                    SetPointerMetaVisibility(*(_DWORD *)(v62 + 36396) == 0);
                  }
                  goto LABEL_37;
                }
              }
            }
            zzzEnableDwmPointerSupport(0LL, 1LL);
            v65 = W32GetUserSessionState(v64, v63);
            CursorApiRouter::HidePointer(*(CursorApiRouter **)(v65 + 36360), 1u);
          }
        }
      }
    }
    *(_DWORD *)(W32GetUserSessionState(v52, v51) + 36396) = 2;
LABEL_37:
    v54 = W32GetUserSessionState(v52, v53);
    InputTraceLogging::Cursor::SetCursorSuppression(v48, 2LL, *(unsigned int *)(v54 + 36396));
LABEL_25:
    UserSessionSwitchLeaveCrit();
    result = W32GetUserSessionState(v35, v34);
    *(_DWORD *)(*(_QWORD *)(result + 36368) + 80LL) = 0;
  }
  return result;
}

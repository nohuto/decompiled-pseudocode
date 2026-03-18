/*
 * XREFs of _anonymous_namespace_::xxxSwitchCursors @ 0x140132D94
 * Callers:
 *     _anonymous_namespace_::HandlePointerCursorSideOp @ 0x140092420 (_anonymous_namespace_--HandlePointerCursorSideOp.c)
 * Callees:
 *     ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x14002B398 (-HidePointer@CursorApiRouter@@QEAA_N_N@Z.c)
 *     SetPointerMetaVisibility @ 0x140131E3C (SetPointerMetaVisibility.c)
 *     ?SetCursorSuppression@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@00@Z @ 0x1401331EC (-SetCursorSuppression@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@00@Z.c)
 *     _anonymous_namespace_::xxxReplaceMouseCursorsWithPenCursors @ 0x140133280 (_anonymous_namespace_--xxxReplaceMouseCursorsWithPenCursors.c)
 *     ReadCursorSuppressionConfig @ 0x140134838 (ReadCursorSuppressionConfig.c)
 */

char __fastcall anonymous_namespace_::xxxSwitchCursors(__int64 a1, __int64 a2)
{
  int v2; // ebp
  int v3; // edi
  unsigned int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 UserSessionState; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  int CursorSuppressionConfig; // ebx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx

  v2 = a2;
  v3 = a1;
  v4 = 0;
  *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 36368) + 88LL) = a1;
  *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v6, v5) + 36368) + 92LL) = v3 == 0;
  if ( v3 )
  {
    EtwTraceContactVisualizationInfo(1LL);
    v8 = *(unsigned int *)UPDWORDPointer(8222LL);
    if ( v2 )
    {
      if ( (v8 & 0x20) == 0 || (v8 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 36368), *(_DWORD *)(v8 + 96)) )
      {
        v9 = *(_DWORD *)(W32GetUserSessionState(v8, v7) + 36396);
        UserSessionState = W32GetUserSessionState(v11, v10);
        v14 = (unsigned int)(*(_DWORD *)(UserSessionState + 36396) - 1);
        if ( *(_DWORD *)(UserSessionState + 36396) != 1 )
        {
          v14 = (unsigned int)(*(_DWORD *)(UserSessionState + 36396) - 2);
          if ( *(_DWORD *)(UserSessionState + 36396) != 2 )
          {
            v14 = (unsigned int)(*(_DWORD *)(UserSessionState + 36396) - 3);
            if ( *(_DWORD *)(UserSessionState + 36396) != 3 )
            {
              v14 = (unsigned int)(*(_DWORD *)(UserSessionState + 36396) - 4);
              if ( *(_DWORD *)(UserSessionState + 36396) != 4 )
              {
                if ( *(_DWORD *)(UserSessionState + 36396) != 5 && *(_DWORD *)(UserSessionState + 36396) != 6 )
                {
                  v15 = (unsigned int)(*(_DWORD *)(UserSessionState + 36396) - 8);
                  if ( *(_DWORD *)(UserSessionState + 36396) != 8 )
                  {
                    if ( *(_DWORD *)(UserSessionState + 36396) == 9 )
                    {
                      CursorSuppressionConfig = ReadCursorSuppressionConfig();
                      *(_DWORD *)(W32GetUserSessionState(v24, v23) + 36396) = CursorSuppressionConfig;
                      LOBYTE(v4) = *(_DWORD *)(W32GetUserSessionState(v26, v25) + 36396) == 0;
                      SetPointerMetaVisibility(v4);
                    }
                    goto LABEL_9;
                  }
                }
                SetPointerMetaVisibility(0LL);
              }
            }
          }
        }
        *(_DWORD *)(W32GetUserSessionState(v13, v14) + 36396) = 3;
LABEL_9:
        v16 = W32GetUserSessionState(v13, v15);
        return InputTraceLogging::Cursor::SetCursorSuppression(v9, 3LL, *(unsigned int *)(v16 + 36396));
      }
    }
    v18 = W32GetUserSessionState(v8, v7);
    CursorApiRouter::HidePointer(*(CursorApiRouter **)(v18 + 36360), 1u);
    return anonymous_namespace_::xxxReplaceMouseCursorsWithPenCursors();
  }
  else
  {
    EtwTraceContactVisualizationInfo(2LL);
    v21 = W32GetUserSessionState(v20, v19);
    return CursorApiRouter::HidePointer(*(CursorApiRouter **)(v21 + 36360), 1u);
  }
}

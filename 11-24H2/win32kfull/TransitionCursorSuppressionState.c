/*
 * XREFs of TransitionCursorSuppressionState @ 0x140132F80
 * Callers:
 *     _anonymous_namespace_::RenderCursor @ 0x140091F44 (_anonymous_namespace_--RenderCursor.c)
 *     _anonymous_namespace_::HandlePointerCursorSideOp @ 0x140092420 (_anonymous_namespace_--HandlePointerCursorSideOp.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_CommitMousePosAndMoveOptions@@PEAU_MousePacketPerf@@@Z @ 0x14017581C (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_C.c)
 *     RawInputThread @ 0x140230DC0 (RawInputThread.c)
 *     xxxRemoteReconnect @ 0x14024FFF8 (xxxRemoteReconnect.c)
 * Callees:
 *     ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x14002B398 (-HidePointer@CursorApiRouter@@QEAA_N_N@Z.c)
 *     SetPointerMetaVisibility @ 0x140131E3C (SetPointerMetaVisibility.c)
 *     zzzEnableDwmPointerSupport @ 0x1401320A8 (zzzEnableDwmPointerSupport.c)
 *     ?SetCursorSuppression@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@00@Z @ 0x1401331EC (-SetCursorSuppression@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@00@Z.c)
 *     ReadCursorSuppressionConfig @ 0x140134838 (ReadCursorSuppressionConfig.c)
 *     DeferCursorSuppressionOperation @ 0x140134C10 (DeferCursorSuppressionOperation.c)
 */

__int64 __fastcall TransitionCursorSuppressionState(__int64 a1, __int64 a2)
{
  int v2; // esi
  unsigned int v3; // edi
  unsigned int v4; // ebp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  int CursorSuppressionConfig; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax

  v2 = a2;
  v3 = a1;
  v4 = *(_DWORD *)(W32GetUserSessionState(a1, a2) + 36396);
  UserSessionState = W32GetUserSessionState(v6, v5);
  switch ( *(_DWORD *)(UserSessionState + 36396) )
  {
    case 1:
    case 2:
    case 3:
    case 4:
      switch ( v3 )
      {
        case 1u:
          goto LABEL_31;
        case 2u:
          goto LABEL_24;
        case 3u:
          goto LABEL_7;
      }
      if ( v3 != 8 )
        break;
      if ( v2 )
      {
        *(_DWORD *)(W32GetUserSessionState(v9, v8) + 36396) = 4;
        goto LABEL_26;
      }
      zzzEnableDwmPointerSupport(1LL, 1LL);
      v20 = W32GetUserSessionState(v19, v18);
      CursorApiRouter::HidePointer(*(CursorApiRouter **)(v20 + 36360), 0);
      goto LABEL_18;
    case 5:
    case 6:
    case 8:
      if ( v3 != 8 )
      {
        if ( v3 == 2 )
        {
          if ( v2 )
          {
            *(_DWORD *)(W32GetUserSessionState(0LL, v8) + 36396) = 6;
LABEL_26:
            DeferCursorSuppressionOperation();
            break;
          }
          zzzEnableDwmPointerSupport(0LL, 1LL);
          v23 = W32GetUserSessionState(v22, v21);
          CursorApiRouter::HidePointer(*(CursorApiRouter **)(v23 + 36360), 1u);
LABEL_24:
          *(_DWORD *)(W32GetUserSessionState(v9, v8) + 36396) = 2;
          break;
        }
        if ( v3 == 1 )
        {
          if ( v2 )
          {
            *(_DWORD *)(W32GetUserSessionState(0LL, v8) + 36396) = 5;
            goto LABEL_26;
          }
          SetPointerMetaVisibility(0LL);
LABEL_31:
          *(_DWORD *)(W32GetUserSessionState(v9, v8) + 36396) = 1;
          break;
        }
        if ( v3 != 3 )
          break;
        if ( v2 )
        {
          *(_DWORD *)(W32GetUserSessionState(0LL, v8) + 36396) = 7;
          goto LABEL_26;
        }
        SetPointerMetaVisibility(0LL);
LABEL_7:
        *(_DWORD *)(W32GetUserSessionState(v9, v8) + 36396) = 3;
        break;
      }
LABEL_18:
      *(_DWORD *)(W32GetUserSessionState(v9, v8) + 36396) = 8;
      break;
    case 9:
      CursorSuppressionConfig = ReadCursorSuppressionConfig();
      *(_DWORD *)(W32GetUserSessionState(v14, v13) + 36396) = CursorSuppressionConfig;
      v17 = W32GetUserSessionState(v16, v15);
      SetPointerMetaVisibility(*(_DWORD *)(v17 + 36396) == 0);
      break;
  }
  v10 = W32GetUserSessionState(v9, v8);
  return InputTraceLogging::Cursor::SetCursorSuppression(v4, v3, *(unsigned int *)(v10 + 36396));
}

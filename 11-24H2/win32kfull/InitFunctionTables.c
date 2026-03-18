/*
 * XREFs of InitFunctionTables @ 0x1403E9090
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall InitFunctionTables(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  char v4; // bl
  bool v5; // si
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int16 v19; // bx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int16 v24; // bx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int16 v29; // bx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 (__fastcall *v32)(struct tagWND *); // rdx
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 result; // rax

  v2 = *(_QWORD *)&WPP_GLOBAL_Control;
  v3 = 0LL;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) == 0
    || (v4 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v4 = 0;
  }
  v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    LOBYTE(v7) = v5;
    LOBYTE(v8) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 69416),
      4,
      3,
      11,
      (__int64)&WPP_8c46d2143b0735a388a3e4e1a89de128_Traceguids);
  }
  v9 = *(_QWORD *)(W32GetUserSessionState(v2, a2) + 19928);
  *(_QWORD *)(v9 + 280) = 0LL;
  v11 = *(_QWORD *)(W32GetUserSessionState(v9, v10) + 19928);
  *(_QWORD *)(v11 + 288) = 2LL;
  v13 = *(_QWORD *)(W32GetUserSessionState(v11, v12) + 19928);
  *(_QWORD *)(v13 + 296) = 1LL;
  v15 = *(_QWORD *)(W32GetUserSessionState(v13, v14) + 19928);
  *(_QWORD *)(v15 + 304) = 0LL;
  v17 = *(_QWORD *)(W32GetUserSessionState(v15, v16) + 19928);
  *(_QWORD *)(v17 + 312) = 0LL;
  v19 = *(_WORD *)(W32GetUserSessionState(v17, v18) + 71436);
  v22 = *(_QWORD *)(W32GetUserSessionState(v21, v20) + 19928);
  *(_WORD *)(v22 + 334) = v19;
  v24 = *(_WORD *)(W32GetUserSessionState(v22, v23) + 71436) + 24;
  v27 = *(_QWORD *)(W32GetUserSessionState(v26, v25) + 19928);
  *(_WORD *)(v27 + 332) = v24;
  v29 = *(_WORD *)(W32GetUserSessionState(v27, v28) + 71436);
  v33 = *(_QWORD *)(W32GetUserSessionState(v31, v30) + 19928);
  *(_WORD *)(v33 + 330) = v29;
  v34 = 32LL;
  do
  {
    v35 = W32GetUserSessionState(v33, v32);
    v32 = xxxUnusedFunctionId;
    v33 = v3++ & 0x1F;
    *(_QWORD *)(v35 + 8 * v33 + 71176) = xxxUnusedFunctionId;
    --v34;
  }
  while ( v34 );
  *(_QWORD *)(W32GetUserSessionState(v33, xxxUnusedFunctionId) + 71184) = xxxWrapRealDefWindowProc;
  *(_QWORD *)(W32GetUserSessionState(v37, v36) + 71192) = xxxWrapMenuWindowProc;
  *(_QWORD *)(W32GetUserSessionState(xxxWrapMenuWindowProc, v38) + 71200) = xxxWrapDesktopWndProc;
  *(_QWORD *)(W32GetUserSessionState(xxxWrapDesktopWndProc, v39) + 71208) = xxxWrapRealDefWindowProc;
  *(_QWORD *)(W32GetUserSessionState(v41, v40) + 71216) = xxxWrapRealDefWindowProc;
  *(_QWORD *)(W32GetUserSessionState(v43, v42) + 71360) = xxxWrapSendMessage;
  *(_QWORD *)(W32GetUserSessionState(xxxWrapSendMessage, v44) + 71312) = fnHkINLPCWPEXSTRUCT;
  *(_QWORD *)(W32GetUserSessionState(fnHkINLPCWPEXSTRUCT, v45) + 71320) = fnHkINLPCWPRETEXSTRUCT;
  *(_QWORD *)(W32GetUserSessionState(fnHkINLPCWPRETEXSTRUCT, v46) + 71368) = xxxSendMessageFF;
  *(_QWORD *)(W32GetUserSessionState(xxxSendMessageFF, v47) + 71376) = xxxSendMessageEx;
  *(_QWORD *)(W32GetUserSessionState(xxxSendMessageEx, v48) + 71384) = xxxWrapCallWindowProc;
  *(_QWORD *)(W32GetUserSessionState(xxxWrapCallWindowProc, v49) + 71392) = xxxWrapSendMessageBSM;
  *(_QWORD *)(W32GetUserSessionState(xxxWrapSendMessageBSM, v50) + 71408) = xxxWrapSendNotifyMessage;
  result = W32GetUserSessionState(xxxWrapSendNotifyMessage, v51);
  *(_QWORD *)(result + 71416) = xxxWrapSendMessageCallback;
  return result;
}

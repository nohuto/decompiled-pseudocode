/*
 * XREFs of EtwTraceUserIsActive @ 0x1400DDFD0
 * Callers:
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1400D99A0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     McTemplateK0qqm_EtwWriteTransfer @ 0x1400DE170 (McTemplateK0qqm_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceUserIsActive(_DWORD *a1, LONGLONG *a2)
{
  LONGLONG v4; // rbx
  __int64 UserSessionState; // rcx
  unsigned __int64 v6; // r8
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // rax
  int CurrentWin32kSessionId; // eax
  int v14; // edx
  int v15; // r8d
  LONGLONG TimeQuadPart; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0LL;
  UserSessionState = W32GetUserSessionState(a1);
  v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( (unsigned int)(v6 - *(_DWORD *)(UserSessionState + 69424)) < 0xEA60 )
    return 0LL;
  *(_DWORD *)(UserSessionState + 69424) = v6;
  if ( !*(_QWORD *)(W32GetUserSessionState(UserSessionState) + 18960) )
  {
    v10 = 0;
    goto LABEL_18;
  }
  v9 = *(_QWORD *)(W32GetUserSessionState(v8) + 18960);
  v10 = *(_DWORD *)(*(_QWORD *)(v9 + 464) + 56LL);
  v11 = *(_QWORD *)(W32GetUserSessionState(v9) + 18960);
  if ( !**(_QWORD **)(v11 + 464) )
  {
LABEL_18:
    TimeQuadPart = 0LL;
    goto LABEL_6;
  }
  v12 = W32GetUserSessionState(v11);
  TimeQuadPart = PsGetProcessCreateTimeQuadPart(**(PEPROCESS **)(*(_QWORD *)(v12 + 18960) + 464LL));
  v4 = TimeQuadPart;
LABEL_6:
  if ( a1 )
    *a1 = v10;
  if ( a2 )
    *a2 = v4;
  if ( ((unsigned __int64)*(&WPP_MAIN_CB.Reserved + 1) & 0x8000000000020000uLL) != 0
    && (unsigned __int8)(byte_14029ADC8 - 1) > 2u
    && (qword_14029ADB0 & 0x8000000000020000uLL) != 0
    && (qword_14029ADB8 & 0x8000000000020000uLL) == qword_14029ADB8
    && (Microsoft_Windows_Win32kEnableBits & 0x20) != 0 )
  {
    CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
    McTemplateK0qqm_EtwWriteTransfer(
      (unsigned int)&TimeQuadPart,
      v14,
      v15,
      CurrentWin32kSessionId,
      v10,
      (__int64)&TimeQuadPart);
  }
  return 1LL;
}

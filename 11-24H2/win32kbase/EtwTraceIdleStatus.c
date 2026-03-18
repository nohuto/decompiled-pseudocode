/*
 * XREFs of EtwTraceIdleStatus @ 0x14006AA60
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     ?GetLastInputTime@CInputGlobals@@QEBA_KXZ @ 0x140068F50 (-GetLastInputTime@CInputGlobals@@QEBA_KXZ.c)
 *     McTemplateK0qqqqqqq_EtwWriteTransfer @ 0x14006AB8C (McTemplateK0qqqqqqq_EtwWriteTransfer.c)
 */

void EtwTraceIdleStatus()
{
  unsigned __int64 v0; // rcx
  __int64 v1; // r15
  __int64 UserSessionState; // rax
  char v3; // r15
  __int64 v4; // rcx
  _DWORD *v5; // rax
  __int64 v6; // rcx
  _DWORD *v7; // rdi
  int v8; // esi
  int v9; // ebp
  int v10; // r14d
  __int64 v11; // rax
  int v12; // edi
  int v13; // ebx
  int CurrentWin32kSessionId; // eax
  int v15; // edx
  int v16; // ecx
  int v17; // r8d

  if ( ((__int64)*(&WPP_MAIN_CB.Reserved + 1) & 0x2000000000008000LL) != 0
    && (unsigned __int8)(byte_14029ADC8 - 1) > 2u
    && (qword_14029ADB0 & 0x2000000000008000LL) != 0
    && (qword_14029ADB8 & 0x2000000000008000LL) == qword_14029ADB8 )
  {
    v0 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
    v1 = (v0 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    UserSessionState = W32GetUserSessionState(v0);
    v3 = v1 - CInputGlobals::GetLastInputTime(*(CInputGlobals **)(UserSessionState + 3064));
    v5 = (_DWORD *)W32GetUserSessionState(v4);
    v7 = v5;
    if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    {
      v8 = v5[727];
      v9 = v5[729];
      v10 = v5[672];
      v11 = W32GetUserSessionState(v6);
      v12 = v7[670];
      v13 = *(_DWORD *)(v11 + 62856);
      CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
      McTemplateK0qqqqqqq_EtwWriteTransfer(v16, v15, v17, CurrentWin32kSessionId, v3, v12, v13, v10, v9, v8);
    }
  }
}

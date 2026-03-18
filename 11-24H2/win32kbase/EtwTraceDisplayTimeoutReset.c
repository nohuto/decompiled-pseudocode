/*
 * XREFs of EtwTraceDisplayTimeoutReset @ 0x14006B1BC
 * Callers:
 *     ?_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z @ 0x14006B134 (-_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     McTemplateK0qhq_EtwWriteTransfer @ 0x140150918 (McTemplateK0qhq_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceDisplayTimeoutReset(__int64 a1)
{
  unsigned __int64 v2; // rcx
  __int64 v3; // rbx
  unsigned __int64 v4; // rcx
  int v5; // edi
  __int64 v6; // rcx
  __int16 v7; // bx
  int CurrentWin32kSessionId; // eax
  int v9; // ecx
  int v10; // r8d

  if ( ((__int64)*(&WPP_MAIN_CB.Reserved + 1) & 0x2000000000008000LL) != 0
    && (unsigned __int8)(byte_14029ADC8 - 1) > 2u
    && (qword_14029ADB0 & 0x2000000000008000LL) != 0
    && (qword_14029ADB8 & 0x2000000000008000LL) == qword_14029ADB8
    && *(int *)(W32GetUserSessionState(a1) + 2680) > 0 )
  {
    v2 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
    v3 = (v2 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    v4 = *(int *)(W32GetUserSessionState(v2) + 2680);
    if ( v3 - a1 > v4 && (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    {
      v5 = *(_DWORD *)(W32GetUserSessionState(v4) + 2680);
      v7 = *(_WORD *)(W32GetUserSessionState(v6) + 69008);
      CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
      McTemplateK0qhq_EtwWriteTransfer(v9, (unsigned int)"\r", v10, CurrentWin32kSessionId, v7 == 0, v5);
    }
  }
}

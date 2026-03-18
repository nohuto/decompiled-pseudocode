/*
 * XREFs of EtwTraceFocusedProcessChange @ 0x1400ED400
 * Callers:
 *     ??1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ @ 0x1400473D0 (--1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1400E24D4 (McTemplateK0qqq_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceFocusedProcessChange(char a1, char a2)
{
  int CurrentWin32kSessionId; // eax
  __int64 v5; // rcx
  __int64 v6; // r8

  if ( ((unsigned __int64)*(&WPP_MAIN_CB.Reserved + 1) & 0x8000000000020000uLL) != 0
    && (unsigned __int8)(byte_14029ADC8 - 1) > 2u
    && (qword_14029ADB0 & 0x8000000000020000uLL) != 0
    && (qword_14029ADB8 & 0x8000000000020000uLL) == qword_14029ADB8
    && (Microsoft_Windows_Win32kEnableBits & 0x20) != 0 )
  {
    CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
    McTemplateK0qqq_EtwWriteTransfer(v5, &FocusedProcessChangeEvent, v6, CurrentWin32kSessionId, a1, a2);
  }
}

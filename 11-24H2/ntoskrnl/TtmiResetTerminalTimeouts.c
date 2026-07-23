/*
 * XREFs of TtmiResetTerminalTimeouts @ 0x14076FD50
 * Callers:
 *     TtmNotifyDeviceInput @ 0x140768870 (TtmNotifyDeviceInput.c)
 *     TtmNotifySessionTerminalInput @ 0x14099D634 (TtmNotifySessionTerminalInput.c)
 *     TtmNotifySessionDisplayBurst @ 0x14099DFB0 (TtmNotifySessionDisplayBurst.c)
 *     TtmNotifyConsoleUserPresent @ 0x1409A12DC (TtmNotifyConsoleUserPresent.c)
 * Callees:
 *     TtmiResetInactivityTimer @ 0x14076FCB0 (TtmiResetInactivityTimer.c)
 *     TtmiSetPendingOnOffRequest @ 0x140770034 (TtmiSetPendingOnOffRequest.c)
 */

char __fastcall TtmiResetTerminalTimeouts(int a1, __int64 a2, int a3, int a4, char a5)
{
  int v9; // r8d
  int v10; // eax

  *(_QWORD *)(a2 + 80) = MEMORY[0xFFFFF78000000008];
  TtmiResetInactivityTimer(a3);
  v10 = *(_DWORD *)(a2 + 40);
  if ( v10 == 3 || !a5 && v10 != 2 )
    return 0;
  LOBYTE(v9) = 1;
  TtmiSetPendingOnOffRequest(a1, a2, v9, a3, a4);
  return 1;
}

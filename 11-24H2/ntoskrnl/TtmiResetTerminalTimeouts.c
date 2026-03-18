/*
 * XREFs of TtmiResetTerminalTimeouts @ 0x14076FB30
 * Callers:
 *     TtmNotifyDeviceInput @ 0x140768650 (TtmNotifyDeviceInput.c)
 *     TtmNotifySessionTerminalInput @ 0x140903084 (TtmNotifySessionTerminalInput.c)
 *     TtmNotifySessionDisplayBurst @ 0x140903A00 (TtmNotifySessionDisplayBurst.c)
 *     TtmNotifyConsoleUserPresent @ 0x1409BAC8C (TtmNotifyConsoleUserPresent.c)
 * Callees:
 *     TtmiResetInactivityTimer @ 0x14076FA90 (TtmiResetInactivityTimer.c)
 *     TtmiSetPendingOnOffRequest @ 0x14076FE14 (TtmiSetPendingOnOffRequest.c)
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

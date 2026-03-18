/*
 * XREFs of isInputVirtualizationEnabled @ 0x1400D07E4
 * Callers:
 *     ?PreUninitialize@CKeyboardSensor@@EEAAXXZ @ 0x1400D0420 (-PreUninitialize@CKeyboardSensor@@EEAAXXZ.c)
 *     ?PreUninitialize@CMouseSensor@@EEAAXXZ @ 0x1400D0470 (-PreUninitialize@CMouseSensor@@EEAAXXZ.c)
 *     IVStartupWorkerThread @ 0x1400D04C8 (IVStartupWorkerThread.c)
 *     InputUnInitialize @ 0x1400D054C (InputUnInitialize.c)
 *     CleanupLogonProcess @ 0x140167AA0 (CleanupLogonProcess.c)
 *     ?PostInitialize@CHidInput@@EEAAJXZ @ 0x140188D70 (-PostInitialize@CHidInput@@EEAAJXZ.c)
 *     ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x140188DB0 (-PreUninitialize@CHidInput@@EEAAXXZ.c)
 *     ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x140210670 (-PostInitialize@CKeyboardSensor@@EEAAJXZ.c)
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x140210D10 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 */

bool __fastcall isInputVirtualizationEnabled(__int64 a1)
{
  __int64 v1; // rcx
  int v3; // ebx

  if ( !*(_DWORD *)(W32GetUserSessionState(a1) + 19504) )
    return 0;
  v3 = *(_DWORD *)(W32GetUserSessionState(v1) + 19508);
  return (unsigned int)W32GetCurrentWin32kSessionId() == v3;
}

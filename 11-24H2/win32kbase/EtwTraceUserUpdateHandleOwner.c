/*
 * XREFs of EtwTraceUserUpdateHandleOwner @ 0x1400624B0
 * Callers:
 *     HMChangeOwnerPheProcessWorker @ 0x14006233C (HMChangeOwnerPheProcessWorker.c)
 *     HMChangeOwnerThreadWorker @ 0x1401B6138 (HMChangeOwnerThreadWorker.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x140032B8C (McTemplateK0pqqq_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceUserUpdateHandleOwner(__int64 a1, int a2, int a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // [rsp+20h] [rbp-28h]
  int CurrentWin32kSessionId; // [rsp+28h] [rbp-20h]

  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000000LL) != 0 )
  {
    CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
    v7 = a2;
    McTemplateK0pqqq_EtwWriteTransfer(v5, (__int64)&UserUpdateHandleOwner, v6, a1, v7, CurrentWin32kSessionId, a3);
  }
}

/*
 * XREFs of UsbhQueueHardReset @ 0x14004B950
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhEtwLogHubIrpEvent @ 0x140018260 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhDispatch_HardResetEvent @ 0x1400376CC (UsbhDispatch_HardResetEvent.c)
 */

__int64 __fastcall UsbhQueueHardReset(__int64 a1, __int64 a2)
{
  int v4; // ebx
  _BYTE *v5; // rax
  _DWORD *v6; // rax
  int v8; // [rsp+20h] [rbp-18h]
  int v9; // [rsp+28h] [rbp-10h]

  v4 = 3;
  FdoExt(a1);
  v9 = 0;
  v8 = 0;
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_HARD_RESET_QUEUE, v8, v9);
  if ( a2 )
  {
    if ( *(_DWORD *)(a2 + 16) == 132 )
    {
      v5 = *(_BYTE **)(a2 + 40);
      if ( v5 )
      {
        if ( !*v5 )
          v4 = 9;
      }
    }
  }
  v6 = FdoExt(a1);
  return UsbhDispatch_HardResetEvent(a1, (__int64)(v6 + 566), v4);
}

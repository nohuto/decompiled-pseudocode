/*
 * XREFs of PopDiagTraceIoCoalescingDiskIdle @ 0x1405D0AB4
 * Callers:
 *     PopScanIdleList @ 0x14048872C (PopScanIdleList.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceIoCoalescingDiskIdle(__int64 a1)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  __int64 v2; // [rsp+70h] [rbp+8h] BYREF

  v2 = a1;
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_IO_COALESCING_DSK_IDLE) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v2;
      UserData.Size = 8;
      EtwWriteEx(PopDiagHandle, &POP_ETW_IO_COALESCING_DSK_IDLE, 0LL, 0, 0LL, 0LL, 1u, &UserData);
    }
  }
}

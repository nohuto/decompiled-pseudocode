/*
 * XREFs of PopDiagTraceIoCoalescingDiskIdle @ 0x1405D5414
 * Callers:
 *     PopScanIdleList @ 0x1404EAE90 (PopScanIdleList.c)
 * Callees:
 *     EtwWriteEx @ 0x140259680 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
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

/*
 * XREFs of xxxRemoveQueueCompletion @ 0x1C002B524
 * Callers:
 *     xxxDesktopThreadWaiter @ 0x1C002B130 (xxxDesktopThreadWaiter.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C00968CC (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     RawInputThread @ 0x1C00D6580 (RawInputThread.c)
 *     xxxMsgWaitForMultipleObjectsEx @ 0x1C0139AB8 (xxxMsgWaitForMultipleObjectsEx.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1C01AC724 (xxxWaitForDITMouseInjectionFlush.c)
 *     NtUserRemoveQueueCompletion @ 0x1C01D95C0 (NtUserRemoveQueueCompletion.c)
 * Callees:
 *     ?xxxHandleQueueCompletion@@YA?AW4QueueCompletionStatus@@PEAUtagTHREADINFO@@JQEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C011E784 (-xxxHandleQueueCompletion@@YA-AW4QueueCompletionStatus@@PEAUtagTHREADINFO@@JQEAU_FILE_IO_COMPLET.c)
 */

__int64 xxxRemoveQueueCompletion()
{
  unsigned int v0; // ebx
  unsigned int v1; // eax
  int v2; // eax
  _OWORD v4[2]; // [rsp+40h] [rbp-28h] BYREF
  int v5; // [rsp+70h] [rbp+8h] BYREF
  __int64 v6; // [rsp+78h] [rbp+10h] BYREF

  v5 = 0;
  v6 = 0LL;
  memset(v4, 0, sizeof(v4));
  v0 = 1;
  v1 = ZwRemoveIoCompletionEx(*(_QWORD *)(gptiCurrent + 1464LL), v4, 1LL, &v5, &v6, 0);
  v2 = xxxHandleQueueCompletion(gptiCurrent, v1, v4, 1LL);
  if ( v2 == 3 )
  {
    ZwAssociateWaitCompletionPacket(
      *(_QWORD *)(gptiCurrent + 1488LL),
      *(_QWORD *)(gptiCurrent + 1464LL),
      *(_QWORD *)(gptiCurrent + 1480LL),
      0LL,
      1LL,
      0,
      0LL,
      0LL);
  }
  else if ( v2 == 4 )
  {
    return v0;
  }
  return 0;
}

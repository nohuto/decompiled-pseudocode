/*
 * XREFs of xxxRemoveQueueCompletion @ 0x140065F00
 * Callers:
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x14003D46C (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x140063D90 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxDesktopThreadWaiter @ 0x140066AC4 (xxxDesktopThreadWaiter.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1401C8EA8 (xxxWaitForDITMouseInjectionFlush.c)
 *     RawInputThread @ 0x140230DC0 (RawInputThread.c)
 *     NtUserRemoveQueueCompletion @ 0x14029BE70 (NtUserRemoveQueueCompletion.c)
 * Callees:
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagWND@@QEAU_FILE_IO_COMPLETION_INFORMATION@@_K@Z @ 0x140066188 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagWND@@QEAU_FILE_IO_COMPLETION_INFORMATION@@_K@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 *     ?BroadcastCoreMessagingApcContextError@@YAXPEBUtagTHREADINFO@@_K@Z @ 0x140287C28 (-BroadcastCoreMessagingApcContextError@@YAXPEBUtagTHREADINFO@@_K@Z.c)
 */

__int64 __fastcall xxxRemoveQueueCompletion(__int64 a1, __int64 a2)
{
  const struct tagTHREADINFO **CurrentThreadNonPaged; // rax
  const struct tagTHREADINFO *v3; // rbx
  struct _FILE_IO_COMPLETION_INFORMATION v5; // [rsp+40h] [rbp-28h] BYREF
  int v6; // [rsp+70h] [rbp+8h] BYREF
  __int64 v7; // [rsp+78h] [rbp+10h] BYREF

  CurrentThreadNonPaged = (const struct tagTHREADINFO **)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    v3 = *CurrentThreadNonPaged;
  else
    v3 = 0LL;
  v6 = 0;
  memset(&v5, 0, sizeof(v5));
  v7 = 0LL;
  if ( (unsigned int)ZwRemoveIoCompletionEx(*((_QWORD *)v3 + 202), &v5, 1LL, &v6, &v7, 0) )
    return 0LL;
  if ( ((__int64)v5.ApcContext & 0x80000000) != 0 )
  {
    if ( LODWORD(v5.ApcContext) == 0x80000000 )
      ZwAssociateWaitCompletionPacket(
        *((_QWORD *)v3 + 205),
        *((_QWORD *)v3 + 202),
        *((_QWORD *)v3 + 204),
        0LL,
        0xFFFFFFFF80000000uLL,
        0,
        0LL,
        0LL);
    return 0LL;
  }
  if ( v5.ApcContext < (PVOID)2 && *((_QWORD *)v3 + (__int64)v5.ApcContext + 207) )
  {
    xxxHandleCoreMessagingQueueCompletion(*((struct tagWND **)v3 + (__int64)v5.ApcContext + 207), &v5, 0x80000000uLL);
    return 1LL;
  }
  else
  {
    BroadcastCoreMessagingApcContextError(v3, (unsigned __int64)v5.ApcContext);
    return 0LL;
  }
}

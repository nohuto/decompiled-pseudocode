/*
 * XREFs of DbgkpSendApiMessage @ 0x140A60270
 * Callers:
 *     DbgkPostModuleMessage @ 0x140484DC4 (DbgkPostModuleMessage.c)
 *     DbgkCreateMinimalProcess @ 0x1406FB318 (DbgkCreateMinimalProcess.c)
 *     DbgkExitProcess @ 0x1406FB3B8 (DbgkExitProcess.c)
 *     DbgkExitThread @ 0x1406FB474 (DbgkExitThread.c)
 *     DbgkMapViewOfSection @ 0x1408FD08C (DbgkMapViewOfSection.c)
 *     DbgkCreateThread @ 0x14090B274 (DbgkCreateThread.c)
 *     DbgkCreateMinimalThread @ 0x14090B610 (DbgkCreateMinimalThread.c)
 *     DbgkSendSystemDllMessages @ 0x1409B9DBC (DbgkSendSystemDllMessages.c)
 *     DbgkUnMapViewOfSection @ 0x140A2AB58 (DbgkUnMapViewOfSection.c)
 * Callees:
 *     EtwTraceDebuggerEvent @ 0x1404C7B70 (EtwTraceDebuggerEvent.c)
 *     DbgkpQueueMessage @ 0x14091F880 (DbgkpQueueMessage.c)
 *     DbgkpSuspendProcess @ 0x14091FB94 (DbgkpSuspendProcess.c)
 *     DbgkpResumeProcess @ 0x140A60364 (DbgkpResumeProcess.c)
 */

__int64 __fastcall DbgkpSendApiMessage(_KPROCESS *Object, char a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r12
  int v7; // ebp
  int v8; // esi

  CurrentThread = KeGetCurrentThread();
  if ( (PerfGlobalGroupMask[0] & 0x400000) != 0 )
    EtwTraceDebuggerEvent((__int64)KeGetCurrentThread()->ApcState.Process, (__int64)CurrentThread, 1);
  do
  {
    v7 = 0;
    if ( Object == KeGetCurrentThread()->ApcState.Process && (a2 & 1) != 0 )
      v7 = (unsigned __int8)DbgkpSuspendProcess((__int64)Object);
    *(_DWORD *)(a3 + 44) = 259;
    v8 = DbgkpQueueMessage(Object, (char *)CurrentThread, a3, 32 * (a2 & 2u), 0LL);
    if ( v7 )
      DbgkpResumeProcess(Object);
  }
  while ( v8 >= 0 && *(_DWORD *)(a3 + 44) == 1073807361 );
  return (unsigned int)v8;
}

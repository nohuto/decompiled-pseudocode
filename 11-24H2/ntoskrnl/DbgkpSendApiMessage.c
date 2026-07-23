/*
 * XREFs of DbgkpSendApiMessage @ 0x140A5A2C0
 * Callers:
 *     DbgkPostModuleMessage @ 0x140480C54 (DbgkPostModuleMessage.c)
 *     DbgkCreateMinimalProcess @ 0x140704DB8 (DbgkCreateMinimalProcess.c)
 *     DbgkExitProcess @ 0x140704E58 (DbgkExitProcess.c)
 *     DbgkExitThread @ 0x140704F14 (DbgkExitThread.c)
 *     DbgkMapViewOfSection @ 0x1408A05A8 (DbgkMapViewOfSection.c)
 *     DbgkSendSystemDllMessages @ 0x1408F541C (DbgkSendSystemDllMessages.c)
 *     DbgkCreateThread @ 0x140921604 (DbgkCreateThread.c)
 *     DbgkCreateMinimalThread @ 0x140921F18 (DbgkCreateMinimalThread.c)
 *     DbgkUnMapViewOfSection @ 0x140A25518 (DbgkUnMapViewOfSection.c)
 * Callees:
 *     EtwTraceDebuggerEvent @ 0x1404C1F80 (EtwTraceDebuggerEvent.c)
 *     DbgkpQueueMessage @ 0x1408F3750 (DbgkpQueueMessage.c)
 *     DbgkpSuspendProcess @ 0x1408F3A64 (DbgkpSuspendProcess.c)
 *     DbgkpResumeProcess @ 0x140A5A3B4 (DbgkpResumeProcess.c)
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

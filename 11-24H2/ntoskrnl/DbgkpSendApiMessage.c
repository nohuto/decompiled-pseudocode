/*
 * XREFs of DbgkpSendApiMessage @ 0x14093A238
 * Callers:
 *     DbgkPostModuleMessage @ 0x140485670 (DbgkPostModuleMessage.c)
 *     DbgkCreateMinimalProcess @ 0x1407071F8 (DbgkCreateMinimalProcess.c)
 *     DbgkExitProcess @ 0x140707298 (DbgkExitProcess.c)
 *     DbgkExitThread @ 0x140707354 (DbgkExitThread.c)
 *     DbgkMapViewOfSection @ 0x140897F08 (DbgkMapViewOfSection.c)
 *     DbgkUnMapViewOfSection @ 0x1408E5EFC (DbgkUnMapViewOfSection.c)
 *     DbgkCreateThread @ 0x1408FED24 (DbgkCreateThread.c)
 *     DbgkCreateMinimalThread @ 0x1408FF638 (DbgkCreateMinimalThread.c)
 *     DbgkSendSystemDllMessages @ 0x140939F18 (DbgkSendSystemDllMessages.c)
 * Callees:
 *     EtwTraceDebuggerEvent @ 0x1404C8930 (EtwTraceDebuggerEvent.c)
 *     DbgkpQueueMessage @ 0x140939080 (DbgkpQueueMessage.c)
 *     DbgkpSuspendProcess @ 0x140939394 (DbgkpSuspendProcess.c)
 *     DbgkpResumeProcess @ 0x14093A32C (DbgkpResumeProcess.c)
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

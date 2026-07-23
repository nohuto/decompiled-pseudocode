/*
 * XREFs of LpcSendWaitReceivePort @ 0x140A24F40
 * Callers:
 *     DbgkpSendApiMessageLpc @ 0x140A24CFC (DbgkpSendApiMessageLpc.c)
 *     ExpRaiseHardError @ 0x140A45514 (ExpRaiseHardError.c)
 *     IopSendMessageToTrackService @ 0x140AA335C (IopSendMessageToTrackService.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     AlpcpProcessSynchronousRequest @ 0x140A24FBC (AlpcpProcessSynchronousRequest.c)
 */

__int64 __fastcall LpcSendWaitReceivePort(int a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = AlpcpProcessSynchronousRequest(a1, a2 | 2u, a3, 0, a4, a5, 0LL, a6, 0);
  if ( v7 == -1073740029 )
  {
    v7 = -1073741769;
  }
  else if ( v7 == -1073740031 )
  {
    v7 = -1073741229;
  }
  KeLeaveCriticalRegion();
  return v7;
}

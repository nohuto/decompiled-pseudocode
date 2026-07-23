/*
 * XREFs of DbgkpMarkProcessPeb @ 0x140AABE84
 * Callers:
 *     DbgkpCloseObject @ 0x140860C60 (DbgkpCloseObject.c)
 *     DbgkCopyProcessDebugPort @ 0x1408FDA74 (DbgkCopyProcessDebugPort.c)
 *     DbgkClearProcessDebugObject @ 0x1409E37F8 (DbgkClearProcessDebugObject.c)
 *     DbgkpSetProcessDebugObject @ 0x1409E3B48 (DbgkpSetProcessDebugObject.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x1402E1C90 (KeStackAttachProcess.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall DbgkpMarkProcessPeb(PRKPROCESS PROCESS)
{
  struct _EX_RUNDOWN_REF *p_Blink; // rdi
  __int64 *ReadyTime; // rdx
  __int16 v4; // ax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  p_Blink = (struct _EX_RUNDOWN_REF *)&PROCESS[1].ProfileListHead.Blink;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&PROCESS[1].ProfileListHead.Blink) )
  {
    if ( PROCESS[1].ProcessListEntry.Blink )
    {
      KeStackAttachProcess(PROCESS, &ApcState);
      ExAcquireFastMutex(&DbgkpProcessDebugPortMutex);
      BYTE2(PROCESS[1].ProcessListEntry.Blink->Flink) = PROCESS[1].UserTime != 0;
      ReadyTime = (__int64 *)PROCESS[1].ReadyTime;
      if ( ReadyTime )
      {
        v4 = WORD2(PROCESS[3].PerProcessorCycleTimes);
        if ( v4 == 332 || v4 == 452 )
        {
          v6 = *ReadyTime;
          if ( v6 )
            *(_BYTE *)(v6 + 2) = BYTE2(PROCESS[1].ProcessListEntry.Blink->Flink);
        }
      }
      KeReleaseGuardedMutex(&DbgkpProcessDebugPortMutex);
      KiUnstackDetachProcess((__int64)&ApcState, 0, v7, v8);
    }
    ExReleaseRundownProtection_0(p_Blink);
  }
}

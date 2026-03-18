/*
 * XREFs of DbgkpMarkProcessPeb @ 0x140AB0F14
 * Callers:
 *     DbgkCopyProcessDebugPort @ 0x1408A781C (DbgkCopyProcessDebugPort.c)
 *     DbgkpCloseObject @ 0x1408EF460 (DbgkpCloseObject.c)
 *     DbgkClearProcessDebugObject @ 0x1409E8838 (DbgkClearProcessDebugObject.c)
 *     DbgkpSetProcessDebugObject @ 0x1409E8B88 (DbgkpSetProcessDebugObject.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     KeStackAttachProcess @ 0x1402473F0 (KeStackAttachProcess.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

void __fastcall DbgkpMarkProcessPeb(PRKPROCESS PROCESS)
{
  struct _EX_RUNDOWN_REF *p_Blink; // rdi
  __int64 *ReadyTime; // rdx
  __int16 v4; // ax
  __int64 v6; // rdx
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  p_Blink = (struct _EX_RUNDOWN_REF *)&PROCESS[1].ProfileListHead.Blink;
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&PROCESS[1].ProfileListHead.Blink) )
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
      KiUnstackDetachProcess((__int64)&ApcState, 0);
    }
    ExReleaseRundownProtection_0(p_Blink);
  }
}

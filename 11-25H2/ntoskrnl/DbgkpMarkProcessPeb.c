/*
 * XREFs of DbgkpMarkProcessPeb @ 0x140AABA14
 * Callers:
 *     DbgkpCloseObject @ 0x1408E0060 (DbgkpCloseObject.c)
 *     DbgkCopyProcessDebugPort @ 0x1408F4068 (DbgkCopyProcessDebugPort.c)
 *     DbgkClearProcessDebugObject @ 0x1409BAAC0 (DbgkClearProcessDebugObject.c)
 *     DbgkpSetProcessDebugObject @ 0x1409BAE18 (DbgkpSetProcessDebugObject.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     KeStackAttachProcess @ 0x140348CD0 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
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
      KiUnstackDetachProcess((__int64)&ApcState, 0LL);
    }
    ExReleaseRundownProtection_0(p_Blink);
  }
}

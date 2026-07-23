/*
 * XREFs of KeDeepSleepProcessor @ 0x1405B9DA4
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140371030 (PpmIdleExecuteTransition.c)
 * Callees:
 *     KeInterlockedSetProcessorAffinityEx @ 0x1403D7AC0 (KeInterlockedSetProcessorAffinityEx.c)
 *     KeInterlockedClearProcessorAffinityEx @ 0x1403D7B30 (KeInterlockedClearProcessorAffinityEx.c)
 *     HviIsXboxNanovisorPresent @ 0x1406626F0 (HviIsXboxNanovisorPresent.c)
 *     KiSetUserTbFlushPending @ 0x1406AC380 (KiSetUserTbFlushPending.c)
 */

unsigned __int8 KeDeepSleepProcessor()
{
  char v0; // bl
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned int Number; // edx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax

  v0 = 0;
  if ( (HvlEnlightenments & 4) == 0 && !(unsigned __int8)HviIsXboxNanovisorPresent() )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    Number = CurrentPrcb->Number;
    CurrentPrcb->DeepSleep = 1;
    KeInterlockedSetProcessorAffinityEx((__int64)&KeSleepingProcessors, Number);
    if ( !CurrentPrcb->DeepSleep )
    {
      KeInterlockedClearProcessorAffinityEx((__int64)&KeSleepingProcessors, CurrentPrcb->Number);
      if ( KiFlushPcid )
      {
        v3 = __readcr3();
        __writecr3(v3);
        if ( !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
          KiSetUserTbFlushPending();
      }
      else
      {
        v4 = __readcr4();
        if ( (v4 & 0x20080) != 0 )
        {
          __writecr4(v4 ^ 0x80);
          __writecr4(v4);
        }
        else
        {
          v5 = __readcr3();
          __writecr3(v5);
        }
      }
    }
    return CurrentPrcb->DeepSleep;
  }
  return v0;
}

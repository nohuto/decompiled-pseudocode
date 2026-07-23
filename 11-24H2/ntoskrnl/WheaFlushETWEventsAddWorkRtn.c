/*
 * XREFs of WheaFlushETWEventsAddWorkRtn @ 0x14065C5A4
 * Callers:
 *     WheaProcessWaitingETWEvents @ 0x14065CA30 (WheaProcessWaitingETWEvents.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     KeSetTargetProcessorDpcEx @ 0x1403703F0 (KeSetTargetProcessorDpcEx.c)
 *     KeGetProcessorNumberFromIndex @ 0x140370900 (KeGetProcessorNumberFromIndex.c)
 *     KeGetCurrentProcessorNumberEx @ 0x1403FBF40 (KeGetCurrentProcessorNumberEx.c)
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 */

void WheaFlushETWEventsAddWorkRtn()
{
  int Number; // ebx
  unsigned __int16 *v1[2]; // [rsp+20h] [rbp-20h] BYREF
  __int16 v2; // [rsp+30h] [rbp-10h]
  int v3; // [rsp+32h] [rbp-Eh]
  __int16 v4; // [rsp+36h] [rbp-Ah]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+50h] [rbp+10h] BYREF
  ULONG ProcIndex; // [rsp+58h] [rbp+18h] BYREF

  ProcNumber = 0;
  _InterlockedAdd(&dword_140EF7D00, 1u);
  if ( dword_140EF7D00 <= 1 )
  {
    if ( KeGetCurrentIrql() <= 2u )
    {
      ExQueueWorkItem(&stru_140EF7CE0, DelayedWorkQueue);
    }
    else
    {
      v3 = 0;
      v4 = 0;
      ProcIndex = 0;
      KeGetCurrentProcessorNumberEx(&ProcNumber);
      Number = ProcNumber.Number;
      v1[1] = (unsigned __int16 *)KeActiveProcessors.Bitmap[0];
      v1[0] = (unsigned __int16 *)&KeActiveProcessors;
      v2 = 0;
      while ( !(unsigned int)KeEnumerateNextProcessor(&ProcIndex, v1) )
      {
        if ( ProcIndex != Number )
        {
          KeGetProcessorNumberFromIndex(ProcIndex, &ProcNumber);
          break;
        }
      }
      KeSetTargetProcessorDpcEx((PKDPC)&WheapDispatchPtr.DeviceObjectExtension, &ProcNumber);
      KeInsertQueueDpc((PRKDPC)&WheapDispatchPtr.DeviceObjectExtension, 0LL, 0LL);
    }
  }
}

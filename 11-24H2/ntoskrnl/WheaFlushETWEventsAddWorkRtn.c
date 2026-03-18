/*
 * XREFs of WheaFlushETWEventsAddWorkRtn @ 0x14065DDDC
 * Callers:
 *     WheaProcessWaitingETWEvents @ 0x14065E260 (WheaProcessWaitingETWEvents.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     KeSetTargetProcessorDpcEx @ 0x140352B60 (KeSetTargetProcessorDpcEx.c)
 *     KeGetProcessorNumberFromIndex @ 0x1403B41E0 (KeGetProcessorNumberFromIndex.c)
 *     KeGetCurrentProcessorNumberEx @ 0x1404015D0 (KeGetCurrentProcessorNumberEx.c)
 *     KeEnumerateNextProcessor @ 0x14040D4F0 (KeEnumerateNextProcessor.c)
 */

void WheaFlushETWEventsAddWorkRtn()
{
  int Number; // ebx
  unsigned __int16 *v1[2]; // [rsp+20h] [rbp-20h] BYREF
  __int16 v2; // [rsp+30h] [rbp-10h]
  int v3; // [rsp+32h] [rbp-Eh]
  __int16 v4; // [rsp+36h] [rbp-Ah]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+50h] [rbp+10h] BYREF
  ULONG ProcIndex; // [rsp+58h] [rbp+18h] BYREF

  ProcNumber = 0;
  _InterlockedAdd(&dword_140EF9A80, 1u);
  if ( dword_140EF9A80 <= 1 )
  {
    if ( KeGetCurrentIrql() <= 2u )
    {
      ExQueueWorkItem(&stru_140EF9A60, DelayedWorkQueue);
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
      KeSetTargetProcessorDpcEx(&WheaFlushETWEventsDpcWorker, &ProcNumber);
      KeInsertQueueDpc(&WheaFlushETWEventsDpcWorker, 0LL, 0LL);
    }
  }
}

/*
 * XREFs of KiAltContextWorkQueueAddItem @ 0x1405C9B28
 * Callers:
 *     KiMcheckAlternateReturn @ 0x1405C9C80 (KiMcheckAlternateReturn.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     KeSetTargetProcessorDpcEx @ 0x140352B60 (KeSetTargetProcessorDpcEx.c)
 *     KeGetProcessorNumberFromIndex @ 0x1403B41E0 (KeGetProcessorNumberFromIndex.c)
 *     KeGetCurrentProcessorNumberEx @ 0x1404015D0 (KeGetCurrentProcessorNumberEx.c)
 *     KeEnumerateNextProcessor @ 0x14040D4F0 (KeEnumerateNextProcessor.c)
 *     ExInterlockedInsertTailList @ 0x14042EC00 (ExInterlockedInsertTailList.c)
 */

void __fastcall KiAltContextWorkQueueAddItem(PLIST_ENTRY ListEntry)
{
  int Number; // ebx
  unsigned __int16 *v2[2]; // [rsp+20h] [rbp-20h] BYREF
  __int16 v3; // [rsp+30h] [rbp-10h]
  int v4; // [rsp+32h] [rbp-Eh]
  __int16 v5; // [rsp+36h] [rbp-Ah]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+58h] [rbp+18h] BYREF
  ULONG ProcIndex; // [rsp+60h] [rbp+20h] BYREF

  ProcNumber = 0;
  if ( !ExInterlockedInsertTailList(&KiAltContextWorkQueue, ListEntry, &Lock) )
  {
    if ( KeGetCurrentIrql() < 2u )
    {
      ExQueueWorkItem(&stru_140F0F938, CriticalWorkQueue);
    }
    else
    {
      v4 = 0;
      v5 = 0;
      ProcIndex = 0;
      KeGetCurrentProcessorNumberEx(&ProcNumber);
      Number = ProcNumber.Number;
      v2[1] = (unsigned __int16 *)KeActiveProcessors.Bitmap[0];
      v2[0] = (unsigned __int16 *)&KeActiveProcessors;
      v3 = 0;
      while ( !(unsigned int)KeEnumerateNextProcessor(&ProcIndex, v2) )
      {
        if ( ProcIndex != Number )
        {
          KeGetProcessorNumberFromIndex(ProcIndex, &ProcNumber);
          break;
        }
      }
      KeSetTargetProcessorDpcEx(&stru_140F0F8F8, &ProcNumber);
      stru_140F0F8F8.Importance = 2;
      KeInsertQueueDpc(&stru_140F0F8F8, 0LL, 0LL);
    }
  }
}

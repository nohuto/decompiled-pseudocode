/*
 * XREFs of KiAltContextWorkQueueAddItem @ 0x1405C7258
 * Callers:
 *     KiMcheckAlternateReturn @ 0x1405C73B0 (KiMcheckAlternateReturn.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     KeSetTargetProcessorDpcEx @ 0x1403703F0 (KeSetTargetProcessorDpcEx.c)
 *     KeGetProcessorNumberFromIndex @ 0x140370900 (KeGetProcessorNumberFromIndex.c)
 *     KeGetCurrentProcessorNumberEx @ 0x1403FBF40 (KeGetCurrentProcessorNumberEx.c)
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 *     ExInterlockedInsertTailList @ 0x140420930 (ExInterlockedInsertTailList.c)
 */

void __fastcall KiAltContextWorkQueueAddItem(PLIST_ENTRY ListEntry)
{
  int Number; // ebx
  unsigned __int16 *v2[2]; // [rsp+20h] [rbp-20h] BYREF
  __int16 v3; // [rsp+30h] [rbp-10h]
  int v4; // [rsp+32h] [rbp-Eh]
  __int16 v5; // [rsp+36h] [rbp-Ah]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+58h] [rbp+18h] BYREF
  ULONG ProcIndex; // [rsp+60h] [rbp+20h] BYREF

  ProcNumber = 0;
  if ( !ExInterlockedInsertTailList(&KiAltContextWorkQueue, ListEntry, &Lock) )
  {
    if ( KeGetCurrentIrql() < 2u )
    {
      ExQueueWorkItem(&stru_140F0FBF8, CriticalWorkQueue);
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
      KeSetTargetProcessorDpcEx(&stru_140F0FBB8, &ProcNumber);
      stru_140F0FBB8.Importance = 2;
      KeInsertQueueDpc(&stru_140F0FBB8, 0LL, 0LL);
    }
  }
}

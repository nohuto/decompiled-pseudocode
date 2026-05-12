/*
 * XREFs of StorPortLogError @ 0x140074080
 * Callers:
 *     StorPortLogErrorVrfy @ 0x1401C1450 (StorPortLogErrorVrfy.c)
 * Callees:
 *     RaidQueueDeferredItem @ 0x140014EC4 (RaidQueueDeferredItem.c)
 *     RaidpPortGetAdapter @ 0x1400255D0 (RaidpPortGetAdapter.c)
 *     RaidAdapterLogIoError @ 0x14005B05C (RaidAdapterLogIoError.c)
 *     RaidAllocateDeferredItem @ 0x14006AFA8 (RaidAllocateDeferredItem.c)
 */

void __fastcall StorPortLogError(__int64 a1, __int64 a2, unsigned __int8 a3, char a4, char a5, unsigned int a6, int a7)
{
  union _SLIST_HEADER *v9; // rbx
  PSLIST_ENTRY DeferredItem; // rax
  union _SLIST_HEADER *v11; // [rsp+20h] [rbp-18h] BYREF
  int *v12; // [rsp+28h] [rbp-10h] BYREF

  v11 = 0LL;
  RaidpPortGetAdapter(a1, (int **)&v11, &v12);
  v9 = v11;
  if ( v11 )
  {
    if ( KeGetCurrentIrql() > 2u )
    {
      DeferredItem = RaidAllocateDeferredItem(v9 + 63);
      if ( DeferredItem )
      {
        LODWORD(DeferredItem[2].Next) = 2;
        BYTE4(DeferredItem[2].Next) = a3;
        BYTE5(DeferredItem[2].Next) = a4;
        BYTE6(DeferredItem[2].Next) = a5;
        LODWORD(DeferredItem[3].Next) = a6;
        HIDWORD(DeferredItem[3].Next) = a7;
        RaidQueueDeferredItem((char *)&v9[63], DeferredItem);
      }
      else
      {
        _InterlockedIncrement(&RaidUnloggedErrors);
      }
    }
    else
    {
      LODWORD(v11) = a3;
      BYTE1(v11) = a4;
      RaidAdapterLogIoError((__int64)v9, (int)v11, a6, a7);
    }
  }
}

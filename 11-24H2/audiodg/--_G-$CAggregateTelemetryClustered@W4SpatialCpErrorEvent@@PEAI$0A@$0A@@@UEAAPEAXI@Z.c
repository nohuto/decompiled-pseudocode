/*
 * XREFs of ??_G?$CAggregateTelemetryClustered@W4SpatialCpErrorEvent@@PEAI$0A@$0A@@@UEAAPEAXI@Z @ 0x14008C970
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CAggregateTelemetryClustered@W4SpatialCpErrorEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x140055A2C (--1-$CAggregateTelemetryClustered@W4SpatialCpErrorEvent@@PEAI$0A@$0A@@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall CAggregateTelemetryClustered<enum SpatialCpErrorEvent,unsigned int *,0,0>::`scalar deleting destructor'(
        void *Block,
        char a2)
{
  CAggregateTelemetryClustered<enum SpatialCpErrorEvent,unsigned int *,0,0>::~CAggregateTelemetryClustered<enum SpatialCpErrorEvent,unsigned int *,0,0>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}

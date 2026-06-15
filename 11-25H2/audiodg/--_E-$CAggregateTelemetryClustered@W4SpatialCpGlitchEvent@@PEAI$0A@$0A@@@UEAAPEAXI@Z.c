/*
 * XREFs of ??_E?$CAggregateTelemetryClustered@W4SpatialCpGlitchEvent@@PEAI$0A@$0A@@@UEAAPEAXI@Z @ 0x14008CF30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CAggregateTelemetryClustered@W4SpatialCpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x140055B4C (--1-$CAggregateTelemetryClustered@W4SpatialCpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400591B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall CAggregateTelemetryClustered<enum SpatialCpGlitchEvent,unsigned int *,0,0>::`vector deleting destructor'(
        void *Block,
        char a2)
{
  CAggregateTelemetryClustered<enum SpatialCpGlitchEvent,unsigned int *,0,0>::~CAggregateTelemetryClustered<enum SpatialCpGlitchEvent,unsigned int *,0,0>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}

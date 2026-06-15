/*
 * XREFs of ??_G?$CCPAudioHistoryReader@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAPEAXI@Z @ 0x14007FCC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CCPAudioHistoryReader@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAA@XZ @ 0x14007FC18 (--1-$CCPAudioHistoryReader@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UE.c)
 */

void *__fastcall CCPAudioHistoryReader<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::`scalar deleting destructor'(
        void *Block,
        char a2)
{
  CCPAudioHistoryReader<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::~CCPAudioHistoryReader<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}

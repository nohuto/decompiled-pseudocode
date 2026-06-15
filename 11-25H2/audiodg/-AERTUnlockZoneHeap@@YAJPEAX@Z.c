/*
 * XREFs of ?AERTUnlockZoneHeap@@YAJPEAX@Z @ 0x140076C2C
 * Callers:
 *     ?Stop@?$CCrossProcessControl@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJXZ @ 0x140085DE0 (-Stop@-$CCrossProcessControl@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@.c)
 * Callees:
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x14000EDAC (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 */

__int64 __fastcall AERTUnlockZoneHeap(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // di
  int v4; // ebx
  __int64 v6; // [rsp+40h] [rbp-28h]

  v3 = a1;
  if ( a1 )
    v4 = RtlUnlockMemoryZone();
  else
    v4 = 0;
  if ( (byte_1400C45C1 & 4) != 0 )
    McTemplateU0pqpqqqqqq_EventWriteTransfer(a1, a2, a3, 9, v3, 0, 0, 0, v6, 0, v4);
  return v4 | 0x10000000u;
}

/*
 * XREFs of EtwpInitializeStackLookasideList @ 0x1407AB448
 * Callers:
 *     EtwpInitialize @ 0x140C3D0FC (EtwpInitialize.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 */

union _SLIST_HEADER *EtwpInitializeStackLookasideList()
{
  union _SLIST_HEADER *result; // rax

  result = &EtwpStackLookAsideList;
  if ( ((unsigned __int8)&EtwpStackLookAsideList & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  dword_140E28E90 = 0;
  dword_140E28E94 = 0;
  EtwpStackLookAsideList = 0LL;
  return result;
}

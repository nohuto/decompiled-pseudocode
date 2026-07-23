/*
 * XREFs of EtwpInitializeStackLookasideList @ 0x1407AB918
 * Callers:
 *     EtwpInitialize @ 0x140C3F24C (EtwpInitialize.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 */

_SLIST_HEADER *EtwpInitializeStackLookasideList()
{
  _SLIST_HEADER *result; // rax

  result = &EtwpStackLookAsideList;
  if ( ((unsigned __int8)&EtwpStackLookAsideList & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  dword_140E28FD0 = 0;
  dword_140E28FD4 = 0;
  EtwpStackLookAsideList = 0LL;
  return result;
}

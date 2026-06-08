/*
 * XREFs of sub_14002C004 @ 0x14002C004
 * Callers:
 *     sub_14002BFD8 @ 0x14002BFD8 (sub_14002BFD8.c)
 *     sub_14002C058 @ 0x14002C058 (sub_14002C058.c)
 *     sub_14002C2AC @ 0x14002C2AC (sub_14002C2AC.c)
 *     sub_14002C2D8 @ 0x14002C2D8 (sub_14002C2D8.c)
 *     sub_1400359D0 @ 0x1400359D0 (sub_1400359D0.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall sub_14002C004(PCEVENT_DESCRIPTOR EventDescriptor)
{
  BOOLEAN result; // al

  result = EtwEventEnabled((REGHANDLE)DeviceObject.Queue.ListEntry.Blink, EventDescriptor);
  if ( result )
    return EtwWrite((REGHANDLE)DeviceObject.Queue.ListEntry.Blink, EventDescriptor, 0LL, 0, 0LL);
  return result;
}

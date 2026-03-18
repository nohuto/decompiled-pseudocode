/*
 * XREFs of PoRequestShutdownEvent @ 0x140A52D40
 * Callers:
 *     <none>
 * Callees:
 *     PopRequestShutdownWait @ 0x140A52D84 (PopRequestShutdownWait.c)
 */

NTSTATUS __stdcall PoRequestShutdownEvent(PVOID *Event)
{
  NTSTATUS result; // eax

  if ( Event )
    *Event = 0LL;
  result = PopRequestShutdownWait(KeGetCurrentThread());
  if ( result >= 0 )
  {
    if ( Event )
      *Event = &PopShutdownEvent;
    return 0;
  }
  return result;
}

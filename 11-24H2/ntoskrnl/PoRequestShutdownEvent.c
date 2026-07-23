/*
 * XREFs of PoRequestShutdownEvent @ 0x140A4AD90
 * Callers:
 *     <none>
 * Callees:
 *     PopRequestShutdownWait @ 0x140A4ADD4 (PopRequestShutdownWait.c)
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

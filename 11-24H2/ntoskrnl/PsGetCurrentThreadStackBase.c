/*
 * XREFs of PsGetCurrentThreadStackBase @ 0x140482050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *PsGetCurrentThreadStackBase()
{
  return KeGetCurrentThread()->StackBase;
}

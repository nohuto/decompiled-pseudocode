/*
 * XREFs of _dynamic_initializer_for__Contexts__ @ 0x180007420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__Contexts__()
{
  RtlInitializeSRWLock(&unk_1803FAA90);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__Contexts__);
}

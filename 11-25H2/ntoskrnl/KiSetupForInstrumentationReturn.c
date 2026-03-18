/*
 * XREFs of KiSetupForInstrumentationReturn @ 0x140451440
 * Callers:
 *     KiDispatchException @ 0x14025DD90 (KiDispatchException.c)
 *     KiInitializeUserApc @ 0x140260620 (KiInitializeUserApc.c)
 *     KiRaiseException @ 0x140263A30 (KiRaiseException.c)
 *     KeRaiseUserException @ 0x1404CDCA0 (KeRaiseUserException.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall KiSetupForInstrumentationReturn(__int64 a1)
{
  struct _KTHREAD *result; // rax
  void *InstrumentationCallback; // r8

  result = KeGetCurrentThread();
  InstrumentationCallback = result->ApcState.Process->InstrumentationCallback;
  if ( InstrumentationCallback )
  {
    if ( *(_WORD *)(a1 + 368) == 51 )
    {
      result = *(struct _KTHREAD **)(a1 + 360);
      *(_QWORD *)(a1 + 88) = result;
      *(_QWORD *)(a1 + 360) = InstrumentationCallback;
    }
  }
  return result;
}

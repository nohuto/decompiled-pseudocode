/*
 * XREFs of KiSetupForInstrumentationReturn @ 0x140447F80
 * Callers:
 *     KiInitializeUserApc @ 0x1403D2E04 (KiInitializeUserApc.c)
 *     KiRaiseException @ 0x1403D3FF0 (KiRaiseException.c)
 *     KiDispatchException @ 0x1403D5EB0 (KiDispatchException.c)
 *     KeRaiseUserException @ 0x1404C6E50 (KeRaiseUserException.c)
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

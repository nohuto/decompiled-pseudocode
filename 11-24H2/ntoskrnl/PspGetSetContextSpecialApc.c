/*
 * XREFs of PspGetSetContextSpecialApc @ 0x1406B4720
 * Callers:
 *     PspSetContextThreadInternal @ 0x14091FB00 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x14091FE50 (PspGetContextThreadInternal.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     PspGetSetContextInternal @ 0x1409882C0 (PspGetSetContextInternal.c)
 */

int __fastcall PspGetSetContextSpecialApc(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  void *SetContextInternal; // rax
  PRKEVENT Event[9]; // [rsp+C0h] [rbp-48h] BYREF

  SetContextInternal = (void *)PspGetSetContextInternal(a1, *a4, Event);
  if ( SetContextInternal )
    _fxrstor(SetContextInternal);
  if ( Event[0] )
    LODWORD(SetContextInternal) = KeSetEvent(Event[0], 1, 0);
  return (int)SetContextInternal;
}

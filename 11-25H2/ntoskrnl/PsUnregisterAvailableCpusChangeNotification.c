/*
 * XREFs of PsUnregisterAvailableCpusChangeNotification @ 0x140764D70
 * Callers:
 *     <none>
 * Callees:
 *     KeUnregisterAvailableCpusChangeNotification @ 0x14072FAD8 (KeUnregisterAvailableCpusChangeNotification.c)
 */

void __fastcall PsUnregisterAvailableCpusChangeNotification(struct _EX_RUNDOWN_REF *a1)
{
  KeUnregisterAvailableCpusChangeNotification(a1);
}

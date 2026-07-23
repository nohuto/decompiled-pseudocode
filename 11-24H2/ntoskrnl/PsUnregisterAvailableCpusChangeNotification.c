/*
 * XREFs of PsUnregisterAvailableCpusChangeNotification @ 0x140774960
 * Callers:
 *     <none>
 * Callees:
 *     KeUnregisterAvailableCpusChangeNotification @ 0x140739C98 (KeUnregisterAvailableCpusChangeNotification.c)
 */

void __fastcall PsUnregisterAvailableCpusChangeNotification(struct _EX_RUNDOWN_REF *a1)
{
  KeUnregisterAvailableCpusChangeNotification(a1);
}

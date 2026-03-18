/*
 * XREFs of PsUnregisterAvailableCpusChangeNotification @ 0x140774740
 * Callers:
 *     <none>
 * Callees:
 *     KeUnregisterAvailableCpusChangeNotification @ 0x14073BD68 (KeUnregisterAvailableCpusChangeNotification.c)
 */

void __fastcall PsUnregisterAvailableCpusChangeNotification(struct _EX_RUNDOWN_REF *a1)
{
  KeUnregisterAvailableCpusChangeNotification(a1);
}

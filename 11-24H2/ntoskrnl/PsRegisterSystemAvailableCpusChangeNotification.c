/*
 * XREFs of PsRegisterSystemAvailableCpusChangeNotification @ 0x140774590
 * Callers:
 *     <none>
 * Callees:
 *     KeRegisterAvailableCpusChangeNotification @ 0x14073BB30 (KeRegisterAvailableCpusChangeNotification.c)
 */

__int64 __fastcall PsRegisterSystemAvailableCpusChangeNotification(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  return KeRegisterAvailableCpusChangeNotification(0LL, a1, a2, a3, a4);
}

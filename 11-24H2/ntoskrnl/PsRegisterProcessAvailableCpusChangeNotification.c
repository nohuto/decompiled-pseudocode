/*
 * XREFs of PsRegisterProcessAvailableCpusChangeNotification @ 0x140774790
 * Callers:
 *     <none>
 * Callees:
 *     KeRegisterAvailableCpusChangeNotification @ 0x140739A60 (KeRegisterAvailableCpusChangeNotification.c)
 */

__int64 __fastcall PsRegisterProcessAvailableCpusChangeNotification(
        __int64 **a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 *a5)
{
  return KeRegisterAvailableCpusChangeNotification(a1, a2, a3, a4, a5);
}

/*
 * XREFs of ?Registered@ShellWindowManagement@@YA_NXZ @ 0x1402141AC
 * Callers:
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1402405A4 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     NtUserEnableShellWindowManagementBehavior @ 0x140294560 (NtUserEnableShellWindowManagementBehavior.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

bool __fastcall ShellWindowManagement::Registered(ShellWindowManagement *this, __int64 a2)
{
  return *(_QWORD *)(*((_QWORD *)PtiCurrent((__int64)this, a2) + 62) + 328LL) != 0LL;
}

/*
 * XREFs of MouseAccelerationEnabled @ 0x1400F5440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall MouseAccelerationEnabled(__int64 a1)
{
  return *(_BYTE *)(*(_QWORD *)(W32GetUserSessionState(a1) + 16368) + 112LL);
}

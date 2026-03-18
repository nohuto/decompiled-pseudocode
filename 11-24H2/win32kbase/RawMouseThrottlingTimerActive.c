/*
 * XREFs of RawMouseThrottlingTimerActive @ 0x1400F8C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall RawMouseThrottlingTimerActive(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(W32GetUserSessionState(a1) + 3144);
  if ( v1 )
    LOBYTE(v1) = *(_BYTE *)(v1 + 1336);
  return v1;
}

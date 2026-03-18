/*
 * XREFs of IsPTPInputEnabled @ 0x1400D7598
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1400D69F0 (RIMProcessAnyPointerDeviceInput.c)
 *     RIMApplyPTPConfigRemedyWorker @ 0x1400F1328 (RIMApplyPTPConfigRemedyWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsPTPInputEnabled(__int64 a1)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx

  v2 = 0;
  if ( *(_DWORD *)(W32GetUserSessionState(a1) + 328) )
    return *(_DWORD *)(W32GetUserSessionState(v1) + 352) != 0;
  return v2;
}

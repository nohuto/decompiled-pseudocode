/*
 * XREFs of DbgkpWakeTarget @ 0x1409E3D8C
 * Callers:
 *     DbgkpCloseObject @ 0x140860C60 (DbgkpCloseObject.c)
 *     DbgkClearProcessDebugObject @ 0x1409E37F8 (DbgkClearProcessDebugObject.c)
 *     NtDebugContinue @ 0x1409E3960 (NtDebugContinue.c)
 *     DbgkpSetProcessDebugObject @ 0x1409E3B48 (DbgkpSetProcessDebugObject.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     PsMultiResumeThread @ 0x140455D04 (PsMultiResumeThread.c)
 *     DbgkpFreeDebugEvent @ 0x1409E3DF8 (DbgkpFreeDebugEvent.c)
 */

LONG __fastcall DbgkpWakeTarget(char *P)
{
  struct _EX_RUNDOWN_REF *v2; // rdi

  v2 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)P + 8);
  if ( (*((_DWORD *)P + 19) & 0x20) != 0 )
    PsMultiResumeThread(*((_QWORD *)P + 8), 0LL, 1u);
  if ( (*((_DWORD *)P + 19) & 8) != 0 )
    ExReleaseRundownProtection_0(v2 + 177);
  if ( (*((_DWORD *)P + 19) & 2) != 0 )
    return DbgkpFreeDebugEvent(P);
  else
    return KeSetEvent((PRKEVENT)(P + 16), 0, 0);
}

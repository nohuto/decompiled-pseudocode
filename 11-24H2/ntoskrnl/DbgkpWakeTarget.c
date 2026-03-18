/*
 * XREFs of DbgkpWakeTarget @ 0x1409E8DCC
 * Callers:
 *     DbgkpCloseObject @ 0x1408EF460 (DbgkpCloseObject.c)
 *     DbgkClearProcessDebugObject @ 0x1409E8838 (DbgkClearProcessDebugObject.c)
 *     NtDebugContinue @ 0x1409E89A0 (NtDebugContinue.c)
 *     DbgkpSetProcessDebugObject @ 0x1409E8B88 (DbgkpSetProcessDebugObject.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     PsMultiResumeThread @ 0x14046086C (PsMultiResumeThread.c)
 *     DbgkpFreeDebugEvent @ 0x1409E8E38 (DbgkpFreeDebugEvent.c)
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

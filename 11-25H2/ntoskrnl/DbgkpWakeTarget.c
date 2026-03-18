/*
 * XREFs of DbgkpWakeTarget @ 0x1409BB05C
 * Callers:
 *     DbgkpCloseObject @ 0x1408E0060 (DbgkpCloseObject.c)
 *     DbgkClearProcessDebugObject @ 0x1409BAAC0 (DbgkClearProcessDebugObject.c)
 *     NtDebugContinue @ 0x1409BAC30 (NtDebugContinue.c)
 *     DbgkpSetProcessDebugObject @ 0x1409BAE18 (DbgkpSetProcessDebugObject.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     PsMultiResumeThread @ 0x140462278 (PsMultiResumeThread.c)
 *     DbgkpFreeDebugEvent @ 0x1409BB0C8 (DbgkpFreeDebugEvent.c)
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

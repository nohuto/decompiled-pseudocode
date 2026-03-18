/*
 * XREFs of PsGetSiloBySessionId @ 0x1409BA9A4
 * Callers:
 *     SessionIsInteractive @ 0x14033117C (SessionIsInteractive.c)
 *     EtwWmitraceWorker @ 0x1407AC83C (EtwWmitraceWorker.c)
 *     SeQueryServerSiloToken @ 0x1409BA940 (SeQueryServerSiloToken.c)
 *     PsIsServiceSession @ 0x1409BA9F4 (PsIsServiceSession.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     PsGetSessionById @ 0x140349430 (PsGetSessionById.c)
 */

__int64 __fastcall PsGetSiloBySessionId(unsigned int a1, _QWORD *a2)
{
  _QWORD *SessionById; // rax
  __int64 v4; // rbx
  __int64 result; // rax

  SessionById = (_QWORD *)PsGetSessionById(a1);
  if ( !SessionById )
    return 3221226581LL;
  v4 = *(_QWORD *)(SessionById[93] + 160LL);
  ObfDereferenceObjectWithTag(SessionById, 0x79517350u);
  result = 0LL;
  *a2 = v4;
  return result;
}

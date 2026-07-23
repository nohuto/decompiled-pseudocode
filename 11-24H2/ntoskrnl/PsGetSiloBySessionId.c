/*
 * XREFs of PsGetSiloBySessionId @ 0x1409A0FF4
 * Callers:
 *     SessionIsInteractive @ 0x1402B9CEC (SessionIsInteractive.c)
 *     EtwWmitraceWorker @ 0x1407ACD0C (EtwWmitraceWorker.c)
 *     SeQueryServerSiloToken @ 0x1409A0F90 (SeQueryServerSiloToken.c)
 *     PsIsServiceSession @ 0x1409A1044 (PsIsServiceSession.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     PsGetSessionById @ 0x1403C2E70 (PsGetSessionById.c)
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

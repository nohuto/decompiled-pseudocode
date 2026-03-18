/*
 * XREFs of PsGetSiloBySessionId @ 0x1409BB1E4
 * Callers:
 *     SessionIsInteractive @ 0x140426478 (SessionIsInteractive.c)
 *     EtwWmitraceWorker @ 0x14079D46C (EtwWmitraceWorker.c)
 *     PsIsServiceSession @ 0x1409BB130 (PsIsServiceSession.c)
 *     SeQueryServerSiloToken @ 0x1409BB180 (SeQueryServerSiloToken.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     PsGetSessionById @ 0x1403D6DB0 (PsGetSessionById.c)
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

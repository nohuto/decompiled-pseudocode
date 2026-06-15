/*
 * XREFs of _dynamic_atexit_destructor_for__CVpoContext::s_mapVpoContext__ @ 0x1400970D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__CVpoContext::s_mapVpoContext__()
{
  if ( CVpoContext::s_mapVpoContext )
  {
    free(CVpoContext::s_mapVpoContext);
    CVpoContext::s_mapVpoContext = 0LL;
  }
  if ( qword_1400C47B8 )
  {
    free(qword_1400C47B8);
    qword_1400C47B8 = 0LL;
  }
  dword_1400C47C0 = 0;
}

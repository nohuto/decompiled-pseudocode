/*
 * XREFs of ?FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z @ 0x1400F5BF8
 * Callers:
 *     _EnableIAMThreadAccess @ 0x1400F58F0 (_EnableIAMThreadAccess.c)
 *     IAMThreadAccessGranted @ 0x1400F5BC0 (IAMThreadAccessGranted.c)
 * Callees:
 *     <none>
 */

struct tagIAM_THREAD *__fastcall FindIAMThread(const struct tagTHREADINFO *a1, __int64 a2)
{
  struct tagIAM_THREAD *v3; // rdx
  struct tagIAM_THREAD *result; // rax

  v3 = (struct tagIAM_THREAD *)(W32GetUserSessionState(a1, a2) + 71440);
  for ( result = *(struct tagIAM_THREAD **)v3; result != v3; result = *(struct tagIAM_THREAD **)result )
  {
    if ( *((const struct tagTHREADINFO **)result + 2) == a1 )
      return result;
  }
  return 0LL;
}

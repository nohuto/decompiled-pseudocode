/*
 * XREFs of _dynamic_atexit_destructor_for__CManipulationContext::s_ParticipatingInteractionMap__ @ 0x1802DF890
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 */

void dynamic_atexit_destructor_for__CManipulationContext::s_ParticipatingInteractionMap__()
{
  if ( CManipulationContext::s_ParticipatingInteractionMap )
  {
    operator delete(CManipulationContext::s_ParticipatingInteractionMap);
    CManipulationContext::s_ParticipatingInteractionMap = 0LL;
  }
  if ( qword_1803FA6C8 )
  {
    operator delete(qword_1803FA6C8);
    qword_1803FA6C8 = 0LL;
  }
  dword_1803FA6D0 = 0;
}

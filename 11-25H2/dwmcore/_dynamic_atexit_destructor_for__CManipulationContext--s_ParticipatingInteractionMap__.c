/*
 * XREFs of _dynamic_atexit_destructor_for__CManipulationContext::s_ParticipatingInteractionMap__ @ 0x1802E8B30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 */

void dynamic_atexit_destructor_for__CManipulationContext::s_ParticipatingInteractionMap__()
{
  if ( CManipulationContext::s_ParticipatingInteractionMap )
  {
    operator delete(CManipulationContext::s_ParticipatingInteractionMap);
    CManipulationContext::s_ParticipatingInteractionMap = 0LL;
  }
  if ( qword_180406728 )
  {
    operator delete(qword_180406728);
    qword_180406728 = 0LL;
  }
  dword_180406730 = 0;
}

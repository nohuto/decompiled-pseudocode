/*
 * XREFs of _dynamic_atexit_destructor_for__ShellGesturesProcessor::s_clients__ @ 0x1801DA230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__ShellGesturesProcessor::s_clients__()
{
  std::deque<ShellGesturesClientProxy *>::~deque<ShellGesturesClientProxy *>((char **)&ShellGesturesProcessor::s_clients);
}

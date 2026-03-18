/*
 * XREFs of IsIMMEnabledSystem @ 0x14012AA20
 * Callers:
 *     Win32UserInitialize @ 0x1402E5DE4 (Win32UserInitialize.c)
 * Callees:
 *     IsCurrentSessionServiceSession @ 0x14012AA48 (IsCurrentSessionServiceSession.c)
 *     AllowInteractiveServices @ 0x14019D4E0 (AllowInteractiveServices.c)
 */

__int64 IsIMMEnabledSystem()
{
  if ( (unsigned int)IsCurrentSessionServiceSession() )
    return AllowInteractiveServices();
  else
    return 1LL;
}

/*
 * XREFs of KeIntSteerIsSteeringEnabled @ 0x1404FA71C
 * Callers:
 *     ExpQueryInterruptSteeringInformation @ 0x1407B4EE4 (ExpQueryInterruptSteeringInformation.c)
 * Callees:
 *     <none>
 */

char KeIntSteerIsSteeringEnabled()
{
  return KiIntSteerEnabled;
}

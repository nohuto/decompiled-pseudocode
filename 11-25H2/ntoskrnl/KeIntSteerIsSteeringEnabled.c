/*
 * XREFs of KeIntSteerIsSteeringEnabled @ 0x1404F85C8
 * Callers:
 *     ExpQueryInterruptSteeringInformation @ 0x1407A5B14 (ExpQueryInterruptSteeringInformation.c)
 * Callees:
 *     <none>
 */

char KeIntSteerIsSteeringEnabled()
{
  return KiIntSteerEnabled;
}

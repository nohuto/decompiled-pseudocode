/*
 * XREFs of KeIntSteerIsSteeringEnabled @ 0x1404F7FFC
 * Callers:
 *     ExpQueryInterruptSteeringInformation @ 0x1407B5334 (ExpQueryInterruptSteeringInformation.c)
 * Callees:
 *     <none>
 */

char KeIntSteerIsSteeringEnabled()
{
  return KiIntSteerEnabled;
}

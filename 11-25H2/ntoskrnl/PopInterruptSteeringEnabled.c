/*
 * XREFs of PopInterruptSteeringEnabled @ 0x1404A7F3C
 * Callers:
 *     PpmCheckReInit @ 0x140A4D648 (PpmCheckReInit.c)
 * Callees:
 *     <none>
 */

bool PopInterruptSteeringEnabled()
{
  bool result; // al

  result = 0;
  if ( KiIntSteerEnabled )
    return PpmIntSteerDisabled == 0;
  return result;
}

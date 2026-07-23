/*
 * XREFs of PopInterruptSteeringEnabled @ 0x1404A306C
 * Callers:
 *     PpmCheckReInit @ 0x140A6B620 (PpmCheckReInit.c)
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

/*
 * XREFs of HvlIsHypervisorPresent @ 0x1404B6838
 * Callers:
 *     sub_140BD00B0 @ 0x140BD00B0 (sub_140BD00B0.c)
 * Callees:
 *     <none>
 */

_BOOL8 HvlIsHypervisorPresent()
{
  return HvlHypervisorConnected != 0;
}

/*
 * XREFs of StorStatusToSrbStatus @ 0x140026ADC
 * Callers:
 *     ScsiToNVMe @ 0x140002940 (ScsiToNVMe.c)
 *     NVMeSplitIoCommandCompletion @ 0x140024E70 (NVMeSplitIoCommandCompletion.c)
 * Callees:
 *     <none>
 */

char __fastcall StorStatusToSrbStatus(int a1)
{
  char result; // al

  result = 4;
  switch ( a1 )
  {
    case 0:
      return 1;
    case -1056964599:
      return 8;
    case -1056964596:
      return 5;
    case -1056964594:
      return 9;
  }
  return result;
}

/*
 * XREFs of WmipDoFindRegEntryByDevice @ 0x140463A38
 * Callers:
 *     WmipFindRegEntryByDevice @ 0x140463970 (WmipFindRegEntryByDevice.c)
 *     IoWMIDeviceObjectToProviderId @ 0x1404639F0 (IoWMIDeviceObjectToProviderId.c)
 * Callees:
 *     <none>
 */

int *__fastcall WmipDoFindRegEntryByDevice(void *a1)
{
  int *result; // rax

  for ( result = (int *)WmipInUseRegEntryHead; result != (int *)&WmipInUseRegEntryHead; result = *(int **)result )
  {
    if ( *((void **)result + 2) == a1 && result[12] >= 0 )
      return result;
  }
  return 0LL;
}

/*
 * XREFs of ExpStringFree @ 0x1406EDB70
 * Callers:
 *     ExpGetDeviceDataInformation @ 0x140829BF4 (ExpGetDeviceDataInformation.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall ExpStringFree(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x50535845u);
}

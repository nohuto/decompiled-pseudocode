/*
 * XREFs of ExpStringFree @ 0x1406F984C
 * Callers:
 *     ExpGetDeviceDataInformation @ 0x14095B9D4 (ExpGetDeviceDataInformation.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall ExpStringFree(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x50535845u);
}

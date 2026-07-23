/*
 * XREFs of ExpStringFree @ 0x1406F748C
 * Callers:
 *     ExpGetDeviceDataInformation @ 0x140943494 (ExpGetDeviceDataInformation.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall ExpStringFree(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x50535845u);
}

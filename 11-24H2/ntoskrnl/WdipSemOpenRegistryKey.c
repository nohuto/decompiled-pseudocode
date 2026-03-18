/*
 * XREFs of WdipSemOpenRegistryKey @ 0x1407A2FF8
 * Callers:
 *     WdipSemLoadConfigInfo @ 0x1407A0F30 (WdipSemLoadConfigInfo.c)
 *     WdipSemLoadNextContextProvider @ 0x1407A1050 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadNextEndEvent @ 0x1407A1300 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextScenario @ 0x1407A1610 (WdipSemLoadNextScenario.c)
 *     WdipSemLoadScenarioTable @ 0x1407A1B08 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadGroupPolicy @ 0x1407A2954 (WdipSemLoadGroupPolicy.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x1407A29FC (WdipSemLoadLocalGroupPolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x1406A6650 (ZwOpenKey.c)
 */

NTSTATUS __fastcall WdipSemOpenRegistryKey(PCWSTR SourceString, void *a2, HANDLE *a3)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  if ( !SourceString || !a3 )
    return -1073741811;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwOpenKey(a3, 0xF003Fu, &ObjectAttributes);
}

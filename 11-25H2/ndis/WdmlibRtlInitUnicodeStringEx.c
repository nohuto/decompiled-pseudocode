/*
 * XREFs of WdmlibRtlInitUnicodeStringEx @ 0x14008C460
 * Callers:
 *     PiRegStateReadStackCreationSettingsFromKey @ 0x140158834 (PiRegStateReadStackCreationSettingsFromKey.c)
 *     PpRegStateReadCreateClassCreationSettings @ 0x1401589F8 (PpRegStateReadCreateClassCreationSettings.c)
 *     PpRegStateUpdateStackCreationSettings @ 0x140158B5C (PpRegStateUpdateStackCreationSettings.c)
 *     CmRegUtilCreateWstrKey @ 0x140158E68 (CmRegUtilCreateWstrKey.c)
 *     CmRegUtilOpenExistingWstrKey @ 0x140158EC8 (CmRegUtilOpenExistingWstrKey.c)
 *     CmRegUtilWstrValueGetDword @ 0x140159224 (CmRegUtilWstrValueGetDword.c)
 *     CmRegUtilWstrValueSetWstrString @ 0x1401592C8 (CmRegUtilWstrValueSetWstrString.c)
 *     ndisMiniportQueryDeviceProperty @ 0x140170C40 (ndisMiniportQueryDeviceProperty.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall WdmlibRtlInitUnicodeStringEx(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  unsigned __int64 v3; // rax
  NTSTATUS result; // eax
  unsigned __int16 v5; // ax
  unsigned __int16 v6; // cx

  if ( SourceString )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( SourceString[v3] );
    if ( v3 > 0x7FFE )
      return -1073741562;
    v5 = 2 * v3;
    v6 = v5 + 2;
  }
  else
  {
    v6 = 0;
    v5 = 0;
  }
  DestinationString->Length = v5;
  result = 0;
  DestinationString->MaximumLength = v6;
  DestinationString->Buffer = (wchar_t *)SourceString;
  return result;
}

/*
 * XREFs of PspIsDfssEnabled @ 0x1407623D4
 * Callers:
 *     PsBootPhaseComplete @ 0x140761DF8 (PsBootPhaseComplete.c)
 * Callees:
 *     PspReadDfssConfigurationValues @ 0x1405D8C1C (PspReadDfssConfigurationValues.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwOpenKey @ 0x14069B380 (ZwOpenKey.c)
 *     RtlQueryImageFileKeyOption @ 0x1409C0C60 (RtlQueryImageFileKeyOption.c)
 */

char PspIsDfssEnabled()
{
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp+28h] BYREF

  KeyHandle = 0LL;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  *(&ObjectAttributes.Length + 1) = 0;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspQuotaKeyNames;
  ObjectAttributes.Attributes = 576;
  if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
  {
    RtlQueryImageFileKeyOption(KeyHandle, 4, 0LL);
    ZwClose(KeyHandle);
  }
  PspReadDfssConfigurationValues();
  return 0;
}

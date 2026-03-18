/*
 * XREFs of PspIsDfssEnabled @ 0x140771D94
 * Callers:
 *     PsBootPhaseComplete @ 0x1407717B8 (PsBootPhaseComplete.c)
 * Callees:
 *     PspReadDfssConfigurationValues @ 0x1405E4BB8 (PspReadDfssConfigurationValues.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A6650 (ZwOpenKey.c)
 *     RtlQueryImageFileKeyOption @ 0x140A22FB0 (RtlQueryImageFileKeyOption.c)
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

/*
 * XREFs of KiInitializeNormalPriorityAntiStarvationPolicies @ 0x1405B7108
 * Callers:
 *     KeInitSystem @ 0x140C60CE0 (KeInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A6650 (ZwOpenKey.c)
 *     RtlQueryImageFileKeyOption @ 0x140A22FB0 (RtlQueryImageFileKeyOption.c)
 */

int KiInitializeNormalPriorityAntiStarvationPolicies()
{
  int result; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp+10h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\Session Manager\\kernel");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
  if ( result >= 0 )
  {
    if ( (int)RtlQueryImageFileKeyOption(KeyHandle, 4, 0LL) >= 0 )
    {
      if ( (unsigned int)KiNormalPriorityBoostScanLatencyTicks >= 7 )
      {
        if ( (unsigned int)KiNormalPriorityBoostScanLatencyTicks > 0x46 )
          KiNormalPriorityBoostScanLatencyTicks = 70;
      }
      else
      {
        KiNormalPriorityBoostScanLatencyTicks = 7;
      }
    }
    if ( (int)RtlQueryImageFileKeyOption(KeyHandle, 4, 0LL) >= 0 )
    {
      if ( (unsigned int)KiNormalPriorityBoostReadyTimeTicks >= 6 )
      {
        if ( (unsigned int)KiNormalPriorityBoostReadyTimeTicks > 0x46 )
          KiNormalPriorityBoostReadyTimeTicks = 70;
      }
      else
      {
        KiNormalPriorityBoostReadyTimeTicks = 6;
      }
    }
    if ( (int)RtlQueryImageFileKeyOption(KeyHandle, 4, 0LL) >= 0 )
    {
      if ( KiNormalPriorityBoostMaximumThreadReadyCount )
      {
        if ( (unsigned int)KiNormalPriorityBoostMaximumThreadReadyCount > 0xA )
          KiNormalPriorityBoostMaximumThreadReadyCount = 10;
      }
      else
      {
        KiNormalPriorityBoostMaximumThreadReadyCount = 1;
      }
    }
    result = RtlQueryImageFileKeyOption(KeyHandle, 4, 0LL);
    if ( result >= 0 )
    {
      result = KiNormalPriorityBoostingPeriodMultiplier;
      if ( KiNormalPriorityBoostingPeriodMultiplier )
      {
        if ( (unsigned int)KiNormalPriorityBoostingPeriodMultiplier > 0x14 )
          KiNormalPriorityBoostingPeriodMultiplier = 20;
      }
      else
      {
        KiNormalPriorityBoostingPeriodMultiplier = 1;
      }
    }
    if ( KeyHandle )
      return ZwClose(KeyHandle);
  }
  return result;
}

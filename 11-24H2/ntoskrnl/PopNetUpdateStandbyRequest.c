/*
 * XREFs of PopNetUpdateStandbyRequest @ 0x140AC2530
 * Callers:
 *     PopPowerInformationInternal @ 0x140AC4A30 (PopPowerInformationInternal.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x140471820 (RtlCheckTokenMembership.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
 */

__int64 PopNetUpdateStandbyRequest()
{
  int v0; // ebx

  if ( PopNetBIServiceSid )
  {
    v0 = RtlCheckTokenMembership(0LL, (void *)PopNetBIServiceSid);
    if ( v0 >= 0 )
      return (unsigned int)-1073741790;
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v0;
}

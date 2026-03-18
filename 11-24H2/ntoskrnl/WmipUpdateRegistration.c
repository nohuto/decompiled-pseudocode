/*
 * XREFs of WmipUpdateRegistration @ 0x1409D091C
 * Callers:
 *     IoWMIRegistrationControl @ 0x1409D0C80 (IoWMIRegistrationControl.c)
 * Callees:
 *     WmipFindRegEntryByDevice @ 0x140463970 (WmipFindRegEntryByDevice.c)
 *     WmipUnreferenceRegEntry @ 0x14046FC2C (WmipUnreferenceRegEntry.c)
 *     WmipQueueRegWork @ 0x1409D0968 (WmipQueueRegWork.c)
 */

__int64 __fastcall WmipUpdateRegistration(__int64 a1)
{
  __int64 RegEntryByDevice; // rax
  __int64 v2; // rdi
  unsigned int v3; // ebx

  RegEntryByDevice = WmipFindRegEntryByDevice(a1);
  v2 = RegEntryByDevice;
  if ( RegEntryByDevice )
  {
    v3 = WmipQueueRegWork(1LL, RegEntryByDevice);
    WmipUnreferenceRegEntry(v2);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}

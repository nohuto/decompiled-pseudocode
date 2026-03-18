/*
 * XREFs of IsNsobjPciBus @ 0x1400B47D0
 * Callers:
 *     ACPIInitStopDevice @ 0x1400B439C (ACPIInitStopDevice.c)
 *     IsPciBusExtension @ 0x1400B468C (IsPciBusExtension.c)
 *     IsPciBus @ 0x1400B46A8 (IsPciBus.c)
 *     EnableDisableRegions @ 0x1400B46CC (EnableDisableRegions.c)
 *     ACPIBusIrpStartDeviceWorker @ 0x1400C0DF0 (ACPIBusIrpStartDeviceWorker.c)
 * Callees:
 *     IsPciBusAsync @ 0x14001E9A0 (IsPciBusAsync.c)
 *     AMLIGetNSObjectContext @ 0x14003E968 (AMLIGetNSObjectContext.c)
 */

char __fastcall IsNsobjPciBus(__int64 a1)
{
  __int64 v2; // rax
  char v3; // bl
  __int64 v4; // rax
  _BYTE Event[32]; // [rsp+30h] [rbp-28h] BYREF
  char v7; // [rsp+68h] [rbp+10h] BYREF

  memset(Event, 0, sizeof(Event));
  v2 = AMLIGetNSObjectContext(a1);
  v3 = 0;
  if ( v2 )
  {
    v4 = *(_QWORD *)(v2 + 8);
    if ( (v4 & 0x2000000) != 0 )
      return 1;
    if ( (v4 & 0x100000000LL) != 0 )
      return 0;
  }
  KeInitializeEvent((PRKEVENT)Event, SynchronizationEvent, 0);
  *(_DWORD *)&Event[24] = -1073741275;
  v7 = 0;
  if ( (unsigned int)IsPciBusAsync(a1, (__int64)AmlisuppCompletePassive, (__int64)Event, &v7) != 259 )
    return v7;
  KeWaitForSingleObject(Event, Executive, 0, 0, 0LL);
  if ( *(int *)&Event[24] >= 0 )
    return v7;
  return v3;
}

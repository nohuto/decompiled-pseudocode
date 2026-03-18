/*
 * XREFs of RIMGetCurrentPowerInputMode @ 0x1400543B0
 * Callers:
 *     RIMHandlePowerDeviceArrival @ 0x14005432C (RIMHandlePowerDeviceArrival.c)
 * Callees:
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_POWERTRANSITIONSSTATE@@@@QEAA@XZ @ 0x140043C00 (--0-$ObjectLock@$$V@-$DomainExclusive@$$V@-$DomainShared@VDLT_POWERTRANSITIONSSTATE@@@@QEAA@XZ.c)
 *     ApiSetGetPowerTransitionsState @ 0x14005447C (ApiSetGetPowerTransitionsState.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 RIMGetCurrentPowerInputMode()
{
  PERESOURCE *v1; // [rsp+20h] [rbp-29h] BYREF
  char v2; // [rsp+48h] [rbp-1h]
  _DWORD v3[16]; // [rsp+50h] [rbp+7h] BYREF

  DomainShared<DLT_POWERTRANSITIONSSTATE>::DomainExclusive<>::ObjectLock<>::ObjectLock<>((__int64)&v1);
  memset(v3, 0, sizeof(v3));
  ApiSetGetPowerTransitionsState(v3);
  if ( v3[7] )
  {
    if ( v2 && v1 )
      ExReleaseResourceAndLeaveCriticalRegion(*v1);
    return 1LL;
  }
  else if ( v3[8] )
  {
    if ( v2 )
    {
      if ( v1 )
        ExReleaseResourceAndLeaveCriticalRegion(*v1);
    }
    return 2LL;
  }
  else
  {
    if ( v2 && v1 )
      ExReleaseResourceAndLeaveCriticalRegion(*v1);
    return 0LL;
  }
}

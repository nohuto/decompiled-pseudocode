/*
 * XREFs of HaliQuerySystemInformation @ 0x140B5BC60
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerQueryClockSourceType @ 0x1404AFAF8 (HalpTimerQueryClockSourceType.c)
 *     xKdEnumerateDebuggingDevices @ 0x1404F8540 (xKdEnumerateDebuggingDevices.c)
 *     RtlCopyDeviceMemory @ 0x14051E79C (RtlCopyDeviceMemory.c)
 *     HalpTimerQueryWatchdogType @ 0x140538F20 (HalpTimerQueryWatchdogType.c)
 *     HalpGetDisplayBiosInformation @ 0x140539900 (HalpGetDisplayBiosInformation.c)
 *     HalpDpQueryMaxHotPlugMemoryAddress @ 0x140541938 (HalpDpQueryMaxHotPlugMemoryAddress.c)
 *     HalpQueryNumaRangeTableInformation @ 0x140556360 (HalpQueryNumaRangeTableInformation.c)
 *     HalpHvQueryHyperlaunchEntrypoint @ 0x1405564EC (HalpHvQueryHyperlaunchEntrypoint.c)
 *     HalpGetApHibernateResumePc @ 0x140566D68 (HalpGetApHibernateResumePc.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     HalpGetMcaLog @ 0x1406F1AD8 (HalpGetMcaLog.c)
 *     HalpInterruptQueryControllerInfo @ 0x1406F1B40 (HalpInterruptQueryControllerInfo.c)
 *     HalpInterruptGetIrtInfo @ 0x1406F1FB4 (HalpInterruptGetIrtInfo.c)
 *     HalpQueryPerDeviceMsiLimitInformation @ 0x1406F209C (HalpQueryPerDeviceMsiLimitInformation.c)
 *     HalpQueryIommuReservedRegionInformation @ 0x1406F3394 (HalpQueryIommuReservedRegionInformation.c)
 *     HalpDmaGetRemappingInformation @ 0x1406F4290 (HalpDmaGetRemappingInformation.c)
 *     HalpQuerySecondaryInterruptInformation @ 0x1406F4F1C (HalpQuerySecondaryInterruptInformation.c)
 *     HalpGetAcpiStaticNumaTopology @ 0x1406F5AC8 (HalpGetAcpiStaticNumaTopology.c)
 *     HalpQueryHeterogeneousMemoryAttributesInterface @ 0x1406F5C58 (HalpQueryHeterogeneousMemoryAttributesInterface.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x1406F60C4 (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     HalpGetProcessorBrandString @ 0x1406F6AE0 (HalpGetProcessorBrandString.c)
 *     HalpAuditQueryResults @ 0x1406F6DF4 (HalpAuditQueryResults.c)
 *     HalpChannelPowerRequest @ 0x1406F804C (HalpChannelPowerRequest.c)
 *     xHalAllocatePmcCounterSet @ 0x140A6B3F0 (xHalAllocatePmcCounterSet.c)
 *     HalpQueryProfileInformation @ 0x140AB88E0 (HalpQueryProfileInformation.c)
 *     HalpQueryDebuggerInformation @ 0x140B65B70 (HalpQueryDebuggerInformation.c)
 *     HalpQueryChannelTopologyInformation @ 0x140C03F88 (HalpQueryChannelTopologyInformation.c)
 */

__int64 __fastcall HaliQuerySystemInformation(
        int a1,
        unsigned int a2,
        __int64 (__fastcall **a3)(unsigned int a1, int a2, __int64 a3, int a4),
        int *a4)
{
  unsigned int PerDeviceMsiLimitInformation; // ebx
  int v9; // edi
  int v10; // edi
  unsigned int v11; // edi
  char *v12; // r15
  unsigned int ClockSourceType; // eax
  int v16; // edi
  int v17; // edi
  int v18; // edi
  int v19; // edi
  int v20; // edi
  int v21; // edi
  __int64 ApHibernateResumePc; // rax
  int HeterogeneousMemoryAttributesInterface; // eax
  int WatchdogType; // eax
  bool v25; // cc
  int v26[64]; // [rsp+20h] [rbp-E0h] BYREF

  memset_0(v26, 0, sizeof(v26));
  PerDeviceMsiLimitInformation = 0;
  if ( a4 )
    *a4 = 0;
  if ( a1 > 33 )
  {
    if ( a1 > 45 )
    {
      if ( a1 == 46 )
      {
        v11 = 8;
        if ( a2 == 8 )
        {
          v12 = (char *)v26;
          *(_QWORD *)v26 = HalpHvQueryHyperlaunchEntrypoint();
          goto LABEL_11;
        }
        return (unsigned int)-1073741820;
      }
      if ( a1 != 47 )
      {
        switch ( a1 )
        {
          case '0':
            return (unsigned int)HalpDmaGetRemappingInformation(a2, a4);
          case '2':
            if ( a2 != 24 )
              return (unsigned int)-1073741820;
            HeterogeneousMemoryAttributesInterface = HalpQueryHeterogeneousMemoryAttributesInterface(a3);
LABEL_87:
            PerDeviceMsiLimitInformation = HeterogeneousMemoryAttributesInterface;
            if ( HeterogeneousMemoryAttributesInterface >= 0 )
              *a4 = 24;
            return PerDeviceMsiLimitInformation;
          case '3':
            if ( a2 < 2 )
              return (unsigned int)-1073741820;
            PerDeviceMsiLimitInformation = HalpQueryPerDeviceMsiLimitInformation(a3);
            if ( (PerDeviceMsiLimitInformation & 0x80000000) == 0 )
              *a4 = 2;
            return PerDeviceMsiLimitInformation;
        }
        if ( a1 != 52 && a1 != 53 )
        {
          if ( a1 != 56 )
            return (unsigned int)-1073741496;
          v21 = 8;
          if ( a2 != 8 )
            return (unsigned int)-1073741820;
          ApHibernateResumePc = (__int64)HalpGetApHibernateResumePc();
          goto LABEL_72;
        }
        return (unsigned int)HalpQueryProfileInformation((unsigned int)a1, a2, (__int64)a3, (unsigned int *)a4);
      }
      v21 = 4;
      if ( a2 < 4 )
        return (unsigned int)-1073741820;
      WatchdogType = HalpTimerQueryWatchdogType(a3);
LABEL_99:
      PerDeviceMsiLimitInformation = WatchdogType;
      if ( WatchdogType < 0 )
        return PerDeviceMsiLimitInformation;
      goto LABEL_73;
    }
    switch ( a1 )
    {
      case '-':
        return (unsigned int)HalpQueryProfileInformation((unsigned int)a1, a2, (__int64)a3, (unsigned int *)a4);
      case '"':
        v12 = (char *)HalpFwBootPerformanceTable;
        if ( !HalpFwBootPerformanceTable )
          return (unsigned int)-1073741822;
        v11 = *(_DWORD *)(HalpFwBootPerformanceTable + 4);
        v25 = v11 <= HalpFwBootPerformanceTableMaximumLength;
        break;
      case '#':
        v12 = (char *)HalpFwS3PerformanceTable;
        if ( !HalpFwS3PerformanceTable )
          return (unsigned int)-1073741822;
        v11 = *(_DWORD *)(HalpFwS3PerformanceTable + 4);
        v25 = v11 <= HalpFwS3PerformanceTableMaximumLength;
        break;
      case '$':
        return (unsigned int)HalpChannelPowerRequest((__int16 *)a3, a2, a4);
      case '%':
        v12 = (char *)&off_140009AD8;
        if ( a2 < 0x10 )
          v12 = 0LL;
        v11 = a2 < 0x10 ? 0 : 0x10;
        PerDeviceMsiLimitInformation = a2 < 0x10 ? 0xC0000004 : 0;
LABEL_24:
        if ( !v11 )
          return PerDeviceMsiLimitInformation;
        goto LABEL_25;
      case '\'':
        return (unsigned int)HalpInterruptQueryControllerInfo(a2, a3, a4);
      case '(':
        if ( a2 < 0x10 )
          return (unsigned int)-1073741820;
        PerDeviceMsiLimitInformation = HalpQueryIommuReservedRegionInformation((__int64)a3, a2);
        if ( (PerDeviceMsiLimitInformation & 0x80000000) == 0 )
          *a4 = 16;
        return PerDeviceMsiLimitInformation;
      case '+':
        v21 = 4;
        if ( (HalpPlatformFlags & 4) != 0 )
          return (unsigned int)-1073741637;
        if ( a2 < 4 )
          return (unsigned int)-1073741820;
        WatchdogType = HalpQueryAcpiWakeAlarmSystemPowerState((PLARGE_INTEGER)a3);
        goto LABEL_99;
      case ',':
        return (unsigned int)HalpQueryProfileInformation((unsigned int)a1, a2, (__int64)a3, (unsigned int *)a4);
      default:
        return (unsigned int)-1073741496;
    }
    if ( v25 )
    {
      if ( a2 < v11 )
        goto LABEL_114;
      goto LABEL_24;
    }
    return (unsigned int)-1073741822;
  }
  if ( a1 == 33 )
    return (unsigned int)HalpQueryDebuggerInformation(a3, a2, a4);
  if ( a1 > 20 )
  {
    v9 = a1 - 23;
    if ( !v9 )
      return (unsigned int)HalpGetProcessorBrandString(a2, (__int64)a3, a4);
    v10 = v9 - 2;
    if ( !v10 )
    {
      v11 = 12;
      if ( a2 >= 0xC )
      {
        v12 = (char *)v26;
        ClockSourceType = HalpTimerQueryClockSourceType(v26);
LABEL_10:
        PerDeviceMsiLimitInformation = ClockSourceType;
LABEL_11:
        *a4 = v11;
        RtlCopyDeviceMemory((char *)a3, v12, v11);
        return PerDeviceMsiLimitInformation;
      }
      return (unsigned int)-1073741820;
    }
    v16 = v10 - 1;
    if ( !v16 )
    {
      v11 = 8;
      if ( a2 >= 8 )
      {
        v12 = (char *)v26;
        ClockSourceType = HalpAuditQueryResults(v26);
        goto LABEL_10;
      }
      return (unsigned int)-1073741820;
    }
    v17 = v16 - 1;
    if ( !v17 )
    {
      v11 = 12;
      if ( a2 >= 0xC )
      {
        v12 = (char *)v26;
        ClockSourceType = HalpInterruptGetIrtInfo(v26);
        goto LABEL_10;
      }
      return (unsigned int)-1073741820;
    }
    v18 = v17 - 1;
    if ( !v18 )
    {
      v11 = 56;
      if ( a2 >= 0x38 )
      {
        v12 = (char *)v26;
        ClockSourceType = HalpQuerySecondaryInterruptInformation((__int64)v26);
        goto LABEL_10;
      }
      return (unsigned int)-1073741820;
    }
    v19 = v18 - 1;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( !v20 )
        return (unsigned int)HalpQueryNumaRangeTableInformation(a3, a2, (unsigned int *)a4);
      if ( v20 == 1 )
        return (unsigned int)HalpQueryChannelTopologyInformation(a3, a2, a4);
      return (unsigned int)-1073741496;
    }
    if ( a2 < 0x18 )
      return (unsigned int)-1073741820;
    HeterogeneousMemoryAttributesInterface = xKdEnumerateDebuggingDevices();
    goto LABEL_87;
  }
  switch ( a1 )
  {
    case 20:
    case 1:
      return (unsigned int)HalpQueryProfileInformation((unsigned int)a1, a2, (__int64)a3, (unsigned int *)a4);
    case 7:
      return (unsigned int)HalpGetMcaLog();
    case 8:
      return (unsigned int)-1073741496;
    case 9:
      v12 = (char *)v26;
      v11 = 4;
      v26[0] = HalpGetDisplayBiosInformation();
      goto LABEL_25;
  }
  if ( a1 != 11 )
  {
    if ( a1 != 12 )
    {
      if ( a1 != 13 )
      {
        if ( a1 != 16 )
        {
          if ( a1 != 17 )
            return (unsigned int)-1073741496;
          v21 = 8;
          if ( a2 != 8 )
            return (unsigned int)-1073741820;
          ApHibernateResumePc = HalpDpQueryMaxHotPlugMemoryAddress();
LABEL_72:
          *a3 = (__int64 (__fastcall *)(unsigned int, int, __int64, int))ApHibernateResumePc;
LABEL_73:
          *a4 = v21;
          return PerDeviceMsiLimitInformation;
        }
        v11 = 456;
        if ( a2 >= 0x1C8 )
        {
          v12 = (char *)&BadIOAddrList;
          goto LABEL_11;
        }
LABEL_114:
        *a4 = v11;
        return (unsigned int)-1073741820;
      }
      return (unsigned int)HalpGetMcaLog();
    }
    v12 = (char *)v26;
    v26[0] = *(_DWORD *)a3;
    v11 = 144;
    PerDeviceMsiLimitInformation = xHalAllocatePmcCounterSet();
LABEL_25:
    if ( a2 < v11 )
      v11 = a2;
    goto LABEL_11;
  }
  if ( a2 != 64 )
    return (unsigned int)-1073741820;
  PerDeviceMsiLimitInformation = -1073741496;
  if ( HalpNumaConfig )
  {
    PerDeviceMsiLimitInformation = HalpGetAcpiStaticNumaTopology();
    if ( (PerDeviceMsiLimitInformation & 0x80000000) == 0 )
      *a4 = 64;
  }
  return PerDeviceMsiLimitInformation;
}

/*
 * XREFs of HalpIommuInitSystem @ 0x140B4F5A0
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeDpc @ 0x14044A220 (KeInitializeDpc.c)
 *     HalpInterruptIsRemappingRequired @ 0x1404A7B00 (HalpInterruptIsRemappingRequired.c)
 *     HalpIommuEnableInterrupts @ 0x14054AB8C (HalpIommuEnableInterrupts.c)
 *     HalpIommuGetRootIommuFaultPolicy @ 0x14054ABE8 (HalpIommuGetRootIommuFaultPolicy.c)
 *     HalpIommuInitializeDmaGuardPolicy @ 0x140551848 (HalpIommuInitializeDmaGuardPolicy.c)
 *     HalpIommuInitializeDmar @ 0x14055191C (HalpIommuInitializeDmar.c)
 *     HalpIommuLogEarlyFault @ 0x140551B40 (HalpIommuLogEarlyFault.c)
 *     HalpIommuProcessReservations @ 0x140551DA4 (HalpIommuProcessReservations.c)
 *     IommuInitializeLibrary @ 0x140562064 (IommuInitializeLibrary.c)
 *     IommupHvSetRootFaultReportingReady @ 0x140563F04 (IommupHvSetRootFaultReportingReady.c)
 *     IommupHvUnblockDefaultDma @ 0x140563F20 (IommupHvUnblockDefaultDma.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     HalpIommuInitInterrupts @ 0x140B4FA78 (HalpIommuInitInterrupts.c)
 *     HalpIommuInitializeAll @ 0x140B70010 (HalpIommuInitializeAll.c)
 *     HalpIommuInitDiscard @ 0x140C11D18 (HalpIommuInitDiscard.c)
 */

__int64 __fastcall HalpIommuInitSystem(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  int inited; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned int RootIommuFaultPolicy; // eax

  v4 = a1;
  if ( !(_DWORD)a1 || HalIommuDispatch && (unsigned __int8)guard_dispatch_icall_no_overrides(a1, a2) )
  {
    inited = 0;
    if ( !v4 )
    {
      HalpIommuEarlyFaultRecordsLock = 0LL;
      qword_140FC0BB8 = (__int64)&HalpIommuList;
      HalpIommuList = (ULONG_PTR)&HalpIommuList;
      qword_140FC0B98 = (__int64)&HalpIommuExceptionList;
      HalpIommuExceptionList = (__int64)&HalpIommuExceptionList;
      off_140E00AF0[0] = (__int64 (__fastcall *)())HalpIommuRegisterDispatchTable;
      KeInitializeDpc(&HalpIommuEarlyFaultDpc, (PKDEFERRED_ROUTINE)HalpIommuEarlyFaultDpcRoutine, 0LL);
      RootIommuFaultPolicy = HalpIommuGetRootIommuFaultPolicy(a3);
      if ( RootIommuFaultPolicy > 1 )
        RootIommuFaultPolicy = 0;
      HalpIommuRootIommuFaultPolicy = RootIommuFaultPolicy;
      qword_140E00C70 = (__int64)HalpIommuReportIommuFault;
      return (unsigned int)inited;
    }
    if ( v4 == 8 )
    {
      inited = HalpIommuInitDiscard();
      if ( inited >= 0 )
        return (unsigned int)HalpIommuInitializeDmaGuardPolicy(a3, v14);
    }
    else
    {
      if ( v4 != 10 )
      {
        if ( v4 == 17 )
        {
          inited = IommuInitializeLibrary();
          if ( inited < 0 )
            return (unsigned int)inited;
          inited = HalpIommuInitializeDmar();
          if ( inited < 0 )
            return (unsigned int)inited;
          if ( (*(_BYTE *)(*(_QWORD *)(a3 + 240) + 2648LL) & 4) != 0 )
          {
            if ( HalpHvIommu )
            {
              if ( HalpHvIommuDeviceDomain )
              {
                if ( !HalpDmaGuardEnabled )
                {
                  inited = IommupHvUnblockDefaultDma(v9, v8);
                  if ( inited < 0 )
                    return (unsigned int)inited;
                }
              }
            }
          }
          off_140E00C00[0] = (__int64 (__fastcall *)())HalpIommuBlockDevice;
          off_140E00C08[0] = (__int64 (__fastcall *)())HalpIommuUnblockDevice;
          off_140E00C10[0] = (__int64 (__fastcall *)())HalpGetIommuInterface;
          off_140E00C78[0] = (__int64 (__fastcall *)())HalpIommuDmaRemappingCapable;
          off_140E00C90[0] = (__int64 (__fastcall *)())HalpGetIommuInterfaceEx;
          off_140E00C98[0] = (__int64 (__fastcall *)())HalpNotifyIommuDomainPolicyChange;
          inited = HalpIommuInitInterrupts();
          if ( inited < 0 )
            return (unsigned int)inited;
          HalpIommuEnableInterrupts(v11, v10);
          if ( !HalpHvIommu )
            return (unsigned int)inited;
          return (unsigned int)IommupHvSetRootFaultReportingReady(v13, v12);
        }
        else
        {
          if ( v4 != 19 )
          {
            if ( v4 == 32 )
              HalpIommuLogEarlyFault();
            return (unsigned int)inited;
          }
          return (unsigned int)HalpIommuInitInterrupts();
        }
      }
      IommuRemappingPolicy = HalpInterruptIsRemappingRequired() != 0;
      inited = HalpIommuProcessReservations(a3);
      if ( inited >= 0 )
        return (unsigned int)HalpIommuInitializeAll(0LL, a3);
    }
    return (unsigned int)inited;
  }
  if ( v4 == 8 && !(unsigned __int8)guard_dispatch_icall_no_overrides(a1, a2) )
    HalpIommuX2ApicSupport = 0;
  return 0LL;
}

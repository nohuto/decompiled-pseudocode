/*
 * XREFs of HalpIommuInitSystem @ 0x140B4D550
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeDpc @ 0x140455470 (KeInitializeDpc.c)
 *     HalpInterruptIsRemappingRequired @ 0x1404AD420 (HalpInterruptIsRemappingRequired.c)
 *     HalpIommuEnableInterrupts @ 0x14054D2CC (HalpIommuEnableInterrupts.c)
 *     HalpIommuGetRootIommuFaultPolicy @ 0x14054D328 (HalpIommuGetRootIommuFaultPolicy.c)
 *     HalpIommuInitializeDmaGuardPolicy @ 0x140553F08 (HalpIommuInitializeDmaGuardPolicy.c)
 *     HalpIommuInitializeDmar @ 0x140553FDC (HalpIommuInitializeDmar.c)
 *     HalpIommuLogEarlyFault @ 0x140554200 (HalpIommuLogEarlyFault.c)
 *     HalpIommuProcessReservations @ 0x140554464 (HalpIommuProcessReservations.c)
 *     IommuInitializeLibrary @ 0x140564434 (IommuInitializeLibrary.c)
 *     IommupHvSetRootFaultReportingReady @ 0x140566204 (IommupHvSetRootFaultReportingReady.c)
 *     IommupHvUnblockDefaultDma @ 0x140566220 (IommupHvUnblockDefaultDma.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     HalpIommuInitInterrupts @ 0x140B4DA28 (HalpIommuInitInterrupts.c)
 *     HalpIommuInitializeAll @ 0x140B6B2A0 (HalpIommuInitializeAll.c)
 *     HalpIommuInitDiscard @ 0x140C0FD18 (HalpIommuInitDiscard.c)
 */

__int64 __fastcall HalpIommuInitSystem(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // edi
  int inited; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int RootIommuFaultPolicy; // eax

  v5 = a1;
  if ( !(_DWORD)a1 || HalIommuDispatch && (unsigned __int8)guard_dispatch_icall_no_overrides(a1, a2, a3, a4) )
  {
    inited = 0;
    if ( !v5 )
    {
      HalpIommuEarlyFaultRecordsLock = 0LL;
      qword_140FC0958 = (__int64)&HalpIommuList;
      HalpIommuList = (ULONG_PTR)&HalpIommuList;
      qword_140FC0938 = (__int64)&HalpIommuExceptionList;
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
    if ( v5 == 8 )
    {
      inited = HalpIommuInitDiscard();
      if ( inited >= 0 )
        return (unsigned int)HalpIommuInitializeDmaGuardPolicy(a3, v21, v22, v23);
    }
    else
    {
      if ( v5 != 10 )
      {
        if ( v5 == 17 )
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
                  inited = IommupHvUnblockDefaultDma(v10, v9, v11, v12);
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
          HalpIommuEnableInterrupts(v14, v13, v15, v16);
          if ( !HalpHvIommu )
            return (unsigned int)inited;
          return (unsigned int)IommupHvSetRootFaultReportingReady(v18, v17, v19, v20);
        }
        else
        {
          if ( v5 != 19 )
          {
            if ( v5 == 32 )
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
  if ( v5 == 8 && !(unsigned __int8)guard_dispatch_icall_no_overrides(a1, a2, a3, a4) )
    HalpIommuX2ApicSupport = 0;
  return 0LL;
}

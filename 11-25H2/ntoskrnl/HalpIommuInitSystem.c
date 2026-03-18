/*
 * XREFs of HalpIommuInitSystem @ 0x140B3D550
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeDpc @ 0x140454E30 (KeInitializeDpc.c)
 *     HalpInterruptIsRemappingRequired @ 0x1404ABF70 (HalpInterruptIsRemappingRequired.c)
 *     HalpIommuEnableInterrupts @ 0x14054A9DC (HalpIommuEnableInterrupts.c)
 *     HalpIommuGetRootIommuFaultPolicy @ 0x14054AA38 (HalpIommuGetRootIommuFaultPolicy.c)
 *     HalpIommuInitializeDmaGuardPolicy @ 0x140551608 (HalpIommuInitializeDmaGuardPolicy.c)
 *     HalpIommuInitializeDmar @ 0x1405516DC (HalpIommuInitializeDmar.c)
 *     HalpIommuLogEarlyFault @ 0x140551900 (HalpIommuLogEarlyFault.c)
 *     HalpIommuProcessReservations @ 0x140551B64 (HalpIommuProcessReservations.c)
 *     IommuInitializeLibrary @ 0x140561B94 (IommuInitializeLibrary.c)
 *     IommupHvSetRootFaultReportingReady @ 0x140563994 (IommupHvSetRootFaultReportingReady.c)
 *     IommupHvUnblockDefaultDma @ 0x1405639B0 (IommupHvUnblockDefaultDma.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     HalpIommuInitInterrupts @ 0x140B3DA28 (HalpIommuInitInterrupts.c)
 *     HalpIommuInitializeAll @ 0x140B5B7A0 (HalpIommuInitializeAll.c)
 *     HalpIommuInitDiscard @ 0x140BFED18 (HalpIommuInitDiscard.c)
 */

__int64 __fastcall HalpIommuInitSystem(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  int inited; // ebx
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned int RootIommuFaultPolicy; // eax

  v4 = a1;
  if ( !(_DWORD)a1 || HalIommuDispatch && (unsigned __int8)guard_dispatch_icall_no_overrides(a1) )
  {
    inited = 0;
    if ( !v4 )
    {
      HalpIommuEarlyFaultRecordsLock = 0LL;
      qword_140FC01B8 = (__int64)&HalpIommuList;
      HalpIommuList = (ULONG_PTR)&HalpIommuList;
      qword_140FC0198 = (__int64)&HalpIommuExceptionList;
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
        return (unsigned int)HalpIommuInitializeDmaGuardPolicy(a3);
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
                  inited = IommupHvUnblockDefaultDma(v8);
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
          HalpIommuEnableInterrupts();
          if ( !HalpHvIommu )
            return (unsigned int)inited;
          return (unsigned int)IommupHvSetRootFaultReportingReady(v9);
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
  if ( v4 == 8 && !(unsigned __int8)guard_dispatch_icall_no_overrides(a1) )
    HalpIommuX2ApicSupport = 0;
  return 0LL;
}

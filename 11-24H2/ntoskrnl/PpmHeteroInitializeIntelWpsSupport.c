/*
 * XREFs of PpmHeteroInitializeIntelWpsSupport @ 0x140C35D58
 * Callers:
 *     PoInitHeteroDetection @ 0x140C2F1BC (PoInitHeteroDetection.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x140218F60 (MiFreePagesFromMdl.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 *     MmAllocatePagesForMdlEx @ 0x140395340 (MmAllocatePagesForMdlEx.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14039FF30 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeIsEqualAffinityEx @ 0x1403A3520 (KeIsEqualAffinityEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PoGetWorkloadClassCount @ 0x140B61E88 (PoGetWorkloadClassCount.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 PpmHeteroInitializeIntelWpsSupport()
{
  unsigned int v5; // edi
  unsigned __int8 v16; // si
  int v17; // r14d
  PMDL PagesForMdl; // rax
  _QWORD *p_Next; // rbx
  PVOID MappedSystemVa; // r11
  int v21; // ecx
  unsigned int i; // esi
  int v23; // esi
  __int64 v24; // r11
  unsigned int v25; // ebx
  void *Pool2; // rax
  unsigned __int64 v28; // [rsp+30h] [rbp-D0h]
  struct _KAFFINITY_EX v29; // [rsp+60h] [rbp-A0h] BYREF

  memset_0(&v29.8, 0, sizeof(v29.8));
  _RAX = 0LL;
  __asm { cpuid }
  if ( (unsigned int)_RAX < 7 )
    return (unsigned int)-1073741637;
  *(_QWORD *)&v29.Count = 2097153LL;
  v5 = 0;
  memset_0(&v29.8, 0, sizeof(v29.8));
  KiCopyAffinityEx(&v29, 0x20u, &KeActiveProcessors);
  if ( !(unsigned int)KeIsEqualAffinityEx(&v29.Count, &KeGetCurrentPrcb()->PackageProcessorSet.Count) )
    return (unsigned int)-1073741637;
  _RAX = 7LL;
  __asm { cpuid }
  if ( (_RDX & 0x8000) == 0 )
    return (unsigned int)-1073741637;
  _RAX = 6LL;
  __asm { cpuid }
  v16 = _RDX;
  v17 = _RAX;
  if ( (_RAX & 0x80000) == 0 )
    return (unsigned int)-1073741637;
  if ( (_RDX & 1) != 0 && (_RDX & 2) != 0 )
  {
    PagesForMdl = MmAllocatePagesForMdlEx(
                    0LL,
                    (PHYSICAL_ADDRESS)-1LL,
                    0LL,
                    ((((unsigned int)_RDX >> 8) & 0xF) + 1) << 12,
                    MmCached,
                    0x24u);
    p_Next = &PagesForMdl->Next;
    if ( PagesForMdl )
    {
      if ( (PagesForMdl->MdlFlags & 5) != 0 )
        MappedSystemVa = PagesForMdl->MappedSystemVa;
      else
        MappedSystemVa = MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000000u);
      if ( MappedSystemVa )
      {
        __writemsr(0x17D0u, (p_Next[6] << 12) | 1LL);
        PpmHeteroHgsUpdateDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)PpmHeteroHgsUpdateDpcRoutine;
        PpmHeteroHgsUpdateWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PpmHeteroHgsUpdateWorker;
        v21 = 0;
        PpmHeteroHgsUpdateDpc.TargetInfoAsUlong = 787;
        PpmHeteroHgsUpdateDpc.DeferredContext = 0LL;
        PpmHeteroHgsUpdateDpc.DpcData = 0LL;
        PpmHeteroHgsUpdateDpc.ProcessorHistory = 0LL;
        PpmHeteroHgsUpdateWorkItem.Parameter = 0LL;
        PpmHeteroHgsUpdateWorkItem.List.Flink = 0LL;
        for ( i = v16 >> 2; i; i >>= 1 )
          v21 += i & 1;
        v23 = v21 + 2;
        if ( !PoGetWorkloadClassCount(&PpmHeteroWorkloadClasses) )
        {
          PpmHeteroWorkloadClasses = 1;
          PpmHeteroHgsThreadDisabled = 1;
        }
        v28 = 1LL;
        PpmHeteroHgsTableEntry = v24;
        PpmHeteroRegisterWpsUpdates = (__int64)PpmHeteroRegisterWpsUpdatesIntel;
        PpmHeteroHgsCapabilityBits = v23;
        PpmHeteroHgsTableMdl = (__int64)p_Next;
        PpmHeteroHgsEnabled = 1;
        PpmHeteroHgsDynamicUpdateEnabled = 1;
        PpmHeteroHgsParkingHintEnabled = 1;
        PpmHeteroHgsVendor = 2;
        if ( !PpmHeteroHgsThreadDisabled && (v17 & 0x800000) != 0 )
        {
          LODWORD(v28) = 3;
          PpmHeteroHgsThreadEnabled = 1;
        }
        __writemsr(0x17D1u, v28);
        if ( PpmHeteroHgsThreadEnabled )
        {
          KiHgsPlusEnabled = 1;
          PpmHeteroHgsDynamicUpdateReasonEnabled = 1;
          v25 = 2 * PpmHeteroWorkloadClasses;
          PpmHeteroHgsOldUpdateReason = (PVOID)ExAllocatePool2(
                                                 0x40uLL,
                                                 (unsigned int)(2 * PpmHeteroWorkloadClasses),
                                                 0x704D5050uLL);
          Pool2 = (void *)ExAllocatePool2(0x40uLL, v25, 0x704D5050uLL);
          PpmHeteroHgsNewUpdateReason = Pool2;
          PpmHgsUpdateChangeReasonOffset = 8;
          if ( !PpmHeteroHgsOldUpdateReason || !Pool2 )
          {
            PpmHeteroHgsDynamicUpdateReasonEnabled = 0;
            PpmHgsUpdateChangeReasonOffset = 0;
            if ( PpmHeteroHgsOldUpdateReason )
            {
              ExFreePoolWithTag(PpmHeteroHgsOldUpdateReason, 0x704D5050u);
              PpmHeteroHgsOldUpdateReason = 0LL;
            }
            if ( PpmHeteroHgsNewUpdateReason )
            {
              ExFreePoolWithTag(PpmHeteroHgsNewUpdateReason, 0x704D5050u);
              PpmHeteroHgsNewUpdateReason = 0LL;
            }
          }
        }
      }
      else
      {
        v5 = -1073741670;
        MiFreePagesFromMdl((ULONG_PTR)p_Next, 0, 0, 0);
        ExFreePoolWithTag(p_Next, 0);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v5;
}

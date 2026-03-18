/*
 * XREFs of HaliAcpiSleep @ 0x14049B670
 * Callers:
 *     <none>
 * Callees:
 *     HalpDisableInterrupts @ 0x140288F50 (HalpDisableInterrupts.c)
 *     HalpAcpiPmRegisterWrite @ 0x14041ED40 (HalpAcpiPmRegisterWrite.c)
 *     HalpAcpiPmRegisterRead @ 0x1404203D0 (HalpAcpiPmRegisterRead.c)
 *     HalSetEnvironmentVariableEx @ 0x1404425C0 (HalSetEnvironmentVariableEx.c)
 *     HalpTimerSaveProcessorCounter @ 0x14049BCA8 (HalpTimerSaveProcessorCounter.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x14049BFDC (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     HalReturnToFirmware @ 0x140542060 (HalReturnToFirmware.c)
 *     HalpHvEnterSleepState @ 0x140548DCC (HalpHvEnterSleepState.c)
 *     HalpCheckWakeupTimeAndAdjust @ 0x140557B94 (HalpCheckWakeupTimeAndAdjust.c)
 *     HalpFlushAndWait @ 0x14069ACC0 (HalpFlushAndWait.c)
 *     HalpSetupRealModeResume @ 0x14069ACF0 (HalpSetupRealModeResume.c)
 *     HaliSaveProcessorContextAndSleep @ 0x14069AE90 (HaliSaveProcessorContextAndSleep.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     HalpCheckLowMemoryPreSleep @ 0x140B3E8F8 (HalpCheckLowMemoryPreSleep.c)
 *     KeWriteProtectPAT @ 0x140B4A820 (KeWriteProtectPAT.c)
 *     HalpPostSleepMP @ 0x140B58A3C (HalpPostSleepMP.c)
 *     HalpAcpiPostSleep @ 0x140B5AABC (HalpAcpiPostSleep.c)
 *     HalpReenableAcpi @ 0x140B5CAF0 (HalpReenableAcpi.c)
 *     HalpAcpiPreSleep @ 0x140B5D4E8 (HalpAcpiPreSleep.c)
 */

__int64 __fastcall HaliAcpiSleep(unsigned int a1, __int64 a2, __int64 a3, unsigned int a4, volatile signed __int32 *a5)
{
  unsigned int v6; // r15d
  unsigned int v9; // r13d
  bool v10; // al
  __int64 v11; // rdx
  __int64 v12; // rcx
  volatile signed __int32 *v13; // rsi
  unsigned int v14; // ebx
  struct _KPRCB *v15; // rbx
  unsigned int Number; // eax
  __int64 v17; // rdx
  unsigned int v18; // r15d
  unsigned int v19; // ebx
  unsigned int v20; // esi
  unsigned int v21; // eax
  char v22; // r14
  unsigned int v23; // ebx
  __int64 v24; // rcx
  int v25; // ecx
  __int64 v26; // rcx
  unsigned int v27; // ebx
  int v28; // r14d
  __int64 v29; // rdx
  unsigned int v30; // edi
  __int64 v31; // rdx
  unsigned __int8 v32; // bl
  int v34; // ecx
  __int64 v35; // rdx
  __int64 v36; // rcx
  unsigned int v37; // ebx
  __int64 v38; // rdx
  unsigned int v39; // ebx
  unsigned __int8 v40[4]; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int8 v41[5]; // [rsp+34h] [rbp-2Ch] BYREF
  char v42; // [rsp+39h] [rbp-27h] BYREF
  bool v43; // [rsp+3Ah] [rbp-26h]
  unsigned __int8 v44[4]; // [rsp+3Ch] [rbp-24h] BYREF
  unsigned __int8 v45[8]; // [rsp+40h] [rbp-20h] BYREF
  struct _KPRCB *CurrentPrcb; // [rsp+48h] [rbp-18h]
  __int64 CurrentIrql; // [rsp+50h] [rbp-10h]
  char v48; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v49; // [rsp+B8h] [rbp+58h]

  v49 = a4;
  v6 = a4;
  v48 = 0;
  *(_WORD *)v41 = 0;
  *(_WORD *)v44 = 0;
  *(_WORD *)v40 = 0;
  v42 = 0;
  *(_WORD *)v45 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v9 = 0;
  v10 = HalpDisableInterrupts();
  v13 = a5;
  v14 = v11;
  v43 = v10;
  CurrentPrcb = KeGetCurrentPrcb();
  _InterlockedDecrement(a5);
  while ( *v13 )
  {
    if ( (++v14 & dword_140FC071C) != 0 || !qword_140FC0720 )
    {
      _mm_pause();
    }
    else
    {
      guard_dispatch_icall_no_overrides(v14, v11);
      v11 = 0LL;
    }
  }
  if ( HalpProfileInterface[6] )
    guard_dispatch_icall_no_overrides(v12, v11);
  HalpTimerSaveProcessorCounter(v12, v11);
  HalpTscOnWake = 0LL;
  if ( !KeGetPcr()->Prcb.Number )
    HalpTscRestoreValue = *(_QWORD *)HalpTimerSavedProcessorCounter;
  v15 = CurrentPrcb;
  Number = CurrentPrcb->Number;
  if ( !Number )
  {
    HalpResumeFromHibernate = 0;
    HalpBarrier = 0;
    HalpAcpiPreSleep(a1);
    if ( byte_140F8E910 )
      HalpAcpiPmRegisterRead(1, 0, (__int64)v44, 2u, 0LL);
    if ( byte_140F8E9A0 )
      HalpAcpiPmRegisterRead(4, 0, (__int64)v45, 2u, 0LL);
    v18 = a1 >> 12;
    if ( ((a1 >> 12) & 2) != 0
      && (unsigned __int8)HalpSetupRealModeResume(HalpLowStub, (unsigned int)HalpLowStubPhysicalAddress) )
    {
      goto LABEL_71;
    }
    HalpInterruptProcessorRestarting = 1;
    _InterlockedIncrement(&HalpSaveStateSync);
    v19 = 0;
    v20 = v49;
    while ( HalpSaveStateSync != v20 )
    {
      if ( (++v19 & dword_140FC071C) != 0 || !qword_140FC0720 )
        _mm_pause();
      else
        guard_dispatch_icall_no_overrides(v19, v17);
    }
    if ( a2 )
    {
      v21 = guard_dispatch_icall_no_overrides(a3, v17);
      v9 = v21;
      if ( (HalpPlatformFlags & 1) != 0 || v21 != -1073741632 )
      {
        if ( v21 )
        {
          if ( v21 == 1073742484 )
            HalpResumeFromHibernate = 1;
          else
            HalpReenableAcpi();
          goto LABEL_71;
        }
        v22 = 0;
      }
      else
      {
        v22 = 1;
      }
    }
    else
    {
      v22 = 0;
    }
    _InterlockedIncrement(&HalpFlushBarrier);
    v23 = 0;
    while ( HalpFlushBarrier != v20 )
    {
      if ( (++v23 & dword_140FC071C) != 0 || !qword_140FC0720 )
        _mm_pause();
      else
        guard_dispatch_icall_no_overrides(v23, v17);
    }
    _InterlockedOr(&HalpFlushBarrier, 0);
    HalpCheckWakeupTimeAndAdjust();
    HalpCheckLowMemoryPreSleep(a1);
    *(_WORD *)v40 = 0x8000;
    if ( PmRegisters[0] )
      HalpAcpiPmRegisterWrite(0, 0, v40, 2u, 0LL);
    if ( byte_140F8E970 )
      HalpAcpiPmRegisterWrite(3, 0, v40, 2u, 0LL);
    v48 = -112;
    if ( (v18 & 0x40) != 0 )
      HalSetEnvironmentVariableEx(L"SystemSleepCheckpoint", (int)SYSTEM_SLEEP_ETW_CHECKPOINT_GUID, (__int64)&v48, 1, 1);
    if ( (a1 & 0x1000) != 0 )
    {
      if ( CurrentPrcb->CpuVendor == 1 )
      {
        LOBYTE(v24) = 1;
        KeWriteProtectPAT(v24);
      }
      __wbinvd();
    }
    if ( HalpHvSleepEnlightenedCpuManager )
    {
      v25 = (a1 >> 8) & 0xF;
      if ( v25 == 1 || ((v25 - 2) & 0xFFFFFFFC) == 0 && v25 != 4 )
      {
        v9 = HalpHvEnterSleepState();
LABEL_75:
        v48 = -97;
        if ( (v18 & 0x40) != 0 )
          HalSetEnvironmentVariableEx(
            L"SystemSleepCheckpoint",
            (int)SYSTEM_SLEEP_ETW_CHECKPOINT_GUID,
            (__int64)&v48,
            1,
            1);
        HalpSaveStateSync = 0;
        HalpFlushBarrier = 0;
        HalpAcpiPostSleep(a1);
        v6 = v49;
        goto LABEL_78;
      }
    }
    if ( (HalpPlatformFlags & 1) == 0 )
    {
      v26 = 2LL;
      if ( !v22 )
        v26 = 1LL;
      HalReturnToFirmware(v26);
    }
    if ( byte_140F8E910 )
    {
      HalpAcpiPmRegisterRead(1, 0, (__int64)v41, 2u, 0LL);
      *(_WORD *)v41 = *(_WORD *)v41 & 0x203 | ((a1 & 7 | 8) << 10);
      HalpAcpiPmRegisterWrite(1, 0, v41, 2u, 0LL);
    }
    if ( byte_140F8E9A0 )
    {
      HalpAcpiPmRegisterRead(4, 0, (__int64)v41, 2u, 0LL);
      *(_WORD *)v41 = *(_WORD *)v41 & 0x203 | (((a1 >> 4) & 7 | 8) << 10);
      HalpAcpiPmRegisterWrite(4, 0, v41, 2u, 0LL);
    }
    v27 = 0;
    if ( PmRegisters[0] )
    {
      v28 = byte_140F8E970 != 0 ? 3 : 0;
      while ( 1 )
      {
        HalpAcpiPmRegisterRead(0, 0, (__int64)v40, 2u, 0LL);
        if ( (*(_WORD *)v40 & 0x8000) != 0 )
          break;
        HalpAcpiPmRegisterRead(v28, 0, (__int64)v40, 2u, 0LL);
        if ( (*(_WORD *)v40 & 0x8000) != 0 )
          break;
        if ( (++v27 & dword_140FC071C) != 0 || !qword_140FC0720 )
          _mm_pause();
        else
          guard_dispatch_icall_no_overrides(v27, v29);
      }
    }
LABEL_71:
    if ( byte_140F8E910 )
      HalpAcpiPmRegisterWrite(1, 0, v44, 2u, 0LL);
    if ( byte_140F8E9A0 )
      HalpAcpiPmRegisterWrite(4, 0, v45, 2u, 0LL);
    goto LABEL_75;
  }
  if ( (a1 & 0x8000) != 0 )
    v34 = 0;
  else
    v34 = HalpHiberProcState + 1472 * Number;
  v9 = HaliSaveProcessorContextAndSleep(v34, a2, a3, v6, (__int64)&v42);
  if ( v42 )
  {
    v37 = 0;
    while ( HalpFlushBarrier )
    {
      if ( (++v37 & dword_140FC071C) != 0 || !qword_140FC0720 )
        _mm_pause();
      else
        guard_dispatch_icall_no_overrides(v37, v35);
    }
  }
  else
  {
    if ( v15->CpuVendor == 1 )
    {
      LOBYTE(v36) = 1;
      KeWriteProtectPAT(v36);
    }
    if ( !(unsigned __int8)HalpIsMicrosoftCompatibleHvLoaded() )
    {
      HalpFlushAndWait(&HalpFlushBarrier);
      goto LABEL_79;
    }
    v39 = 0;
    if ( _InterlockedIncrement(&HalpFlushBarrier) )
    {
      do
      {
        if ( (++v39 & dword_140FC071C) != 0 || !qword_140FC0720 )
          _mm_pause();
        else
          guard_dispatch_icall_no_overrides(v39, v38);
      }
      while ( HalpFlushBarrier );
    }
  }
LABEL_78:
  v15 = CurrentPrcb;
LABEL_79:
  v30 = a1 >> 12;
  if ( (v30 & 1) != 0 && (v30 & 0x10) == 0 && v15->CpuVendor == 1 )
  {
    KeWriteProtectPAT(0LL);
    __wbinvd();
  }
  HalpPostSleepMP(v6);
  v32 = CurrentIrql;
  if ( KiIrqlFlags )
  {
    LOBYTE(v31) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v31);
  }
  __writecr8(v32);
  if ( v43 )
    _enable();
  return v9;
}

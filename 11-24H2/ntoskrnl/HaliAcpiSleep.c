/*
 * XREFs of HaliAcpiSleep @ 0x1404D3920
 * Callers:
 *     <none>
 * Callees:
 *     HalpDisableInterrupts @ 0x1402C9320 (HalpDisableInterrupts.c)
 *     HalpAcpiPmRegisterWrite @ 0x14040FFF0 (HalpAcpiPmRegisterWrite.c)
 *     HalpAcpiPmRegisterRead @ 0x140411C50 (HalpAcpiPmRegisterRead.c)
 *     HalSetEnvironmentVariableEx @ 0x1404395E0 (HalSetEnvironmentVariableEx.c)
 *     HalpTimerSaveProcessorCounter @ 0x1404CC770 (HalpTimerSaveProcessorCounter.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     HalReturnToFirmware @ 0x1405421E0 (HalReturnToFirmware.c)
 *     HalpHvEnterSleepState @ 0x140548F7C (HalpHvEnterSleepState.c)
 *     HalpCheckWakeupTimeAndAdjust @ 0x1405580C4 (HalpCheckWakeupTimeAndAdjust.c)
 *     VslTerminateSecureServices @ 0x14058B95C (VslTerminateSecureServices.c)
 *     HalpSetupRealModeResume @ 0x1406A6F40 (HalpSetupRealModeResume.c)
 *     HaliSaveProcessorContextAndSleep @ 0x1406A70F0 (HaliSaveProcessorContextAndSleep.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     HalpCheckLowMemoryPreSleep @ 0x140B50948 (HalpCheckLowMemoryPreSleep.c)
 *     KeWriteProtectPAT @ 0x140B5C800 (KeWriteProtectPAT.c)
 *     HalpAcpiPostSleep @ 0x140B6BE80 (HalpAcpiPostSleep.c)
 *     HalpReenableAcpi @ 0x140B6D008 (HalpReenableAcpi.c)
 *     HalpAcpiPreSleep @ 0x140B6DE6C (HalpAcpiPreSleep.c)
 *     HalpPostSleepMP @ 0x140B70824 (HalpPostSleepMP.c)
 */

__int64 __fastcall HaliAcpiSleep(unsigned int a1, __int64 a2, __int64 a3, unsigned int a4, volatile signed __int32 *a5)
{
  unsigned int v6; // r12d
  unsigned int v9; // r15d
  bool v10; // al
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  volatile signed __int32 *v14; // rsi
  unsigned int v15; // edi
  struct _KPRCB *v16; // rdi
  unsigned int Number; // eax
  __int64 v18; // rdx
  unsigned int v19; // r12d
  unsigned int v20; // edi
  unsigned int v21; // esi
  unsigned int v22; // eax
  unsigned __int8 v23; // r14
  unsigned int v24; // edi
  __int64 v25; // rcx
  int v26; // ecx
  unsigned int v27; // edi
  int v28; // r14d
  __int64 v29; // rdx
  int v30; // ecx
  unsigned int v31; // ebx
  __int64 v32; // rdx
  unsigned __int8 v33; // bl
  unsigned __int8 v35[4]; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int8 v36[5]; // [rsp+34h] [rbp-2Ch] BYREF
  char v37; // [rsp+39h] [rbp-27h] BYREF
  bool v38; // [rsp+3Ah] [rbp-26h]
  unsigned __int8 v39[4]; // [rsp+3Ch] [rbp-24h] BYREF
  unsigned __int8 v40[8]; // [rsp+40h] [rbp-20h] BYREF
  struct _KPRCB *CurrentPrcb; // [rsp+48h] [rbp-18h]
  __int64 CurrentIrql; // [rsp+50h] [rbp-10h]
  char v43; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v44; // [rsp+B8h] [rbp+58h]

  v44 = a4;
  v6 = a4;
  v43 = 0;
  *(_WORD *)v36 = 0;
  *(_WORD *)v39 = 0;
  *(_WORD *)v35 = 0;
  v37 = 0;
  *(_WORD *)v40 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v9 = 0;
  v10 = HalpDisableInterrupts();
  v14 = a5;
  v15 = v11;
  v38 = v10;
  CurrentPrcb = KeGetCurrentPrcb();
  _InterlockedDecrement(a5);
  while ( *v14 )
  {
    if ( (++v15 & dword_140FC111C) != 0 || !qword_140FC1120 )
    {
      _mm_pause();
    }
    else
    {
      guard_dispatch_icall_no_overrides(v15, v11);
      v11 = 0LL;
    }
  }
  if ( HalpProfileInterface[6] )
    guard_dispatch_icall_no_overrides(v12, v11);
  HalpTimerSaveProcessorCounter(v12, v11, v13);
  HalpTscOnWake = 0LL;
  if ( !KeGetPcr()->Prcb.Number )
    HalpTscRestoreValue = *(_QWORD *)HalpTimerSavedProcessorCounter;
  v16 = CurrentPrcb;
  Number = CurrentPrcb->Number;
  if ( Number )
  {
    if ( (a1 & 0x8000) != 0 )
      v30 = 0;
    else
      v30 = HalpHiberProcState + 1472 * Number;
    v9 = HaliSaveProcessorContextAndSleep(v30, a2, a3, v6, (__int64)&v37);
    goto LABEL_83;
  }
  HalpResumeFromHibernate = 0;
  HalpBarrier = 0;
  HalpAcpiPreSleep(a1);
  if ( byte_140F8F2B0 )
    HalpAcpiPmRegisterRead(1, 0, (__int64)v39, 2u, 0LL);
  if ( byte_140F8F340 )
    HalpAcpiPmRegisterRead(4, 0, (__int64)v40, 2u, 0LL);
  v19 = a1 >> 12;
  if ( ((a1 >> 12) & 2) != 0
    && (unsigned __int8)HalpSetupRealModeResume(HalpLowStub, (unsigned int)HalpLowStubPhysicalAddress) )
  {
    goto LABEL_72;
  }
  HalpInterruptProcessorRestarting = 1;
  _InterlockedIncrement(&HalpSaveStateSync);
  v20 = 0;
  v21 = v44;
  while ( HalpSaveStateSync != v21 )
  {
    if ( (++v20 & dword_140FC111C) != 0 || !qword_140FC1120 )
      _mm_pause();
    else
      guard_dispatch_icall_no_overrides(v20, v18);
  }
  if ( a2 )
  {
    v22 = guard_dispatch_icall_no_overrides(a3, v18);
    v9 = v22;
    if ( (HalpPlatformFlags & 1) != 0 || v22 != -1073741632 )
    {
      if ( v22 )
      {
        if ( v22 == 1073742484 )
          HalpResumeFromHibernate = 1;
        else
          HalpReenableAcpi();
LABEL_72:
        if ( byte_140F8F2B0 )
          HalpAcpiPmRegisterWrite(1, 0, v39, 2u, 0LL);
        if ( byte_140F8F340 )
          HalpAcpiPmRegisterWrite(4, 0, v40, 2u, 0LL);
        goto LABEL_76;
      }
      v23 = 0;
    }
    else
    {
      v23 = 1;
    }
  }
  else
  {
    v23 = 0;
  }
  _InterlockedIncrement(&HalpFlushBarrier);
  v24 = 0;
  while ( HalpFlushBarrier != v21 )
  {
    if ( (++v24 & dword_140FC111C) != 0 || !qword_140FC1120 )
      _mm_pause();
    else
      guard_dispatch_icall_no_overrides(v24, v18);
  }
  _InterlockedOr(&HalpFlushBarrier, 0);
  HalpCheckWakeupTimeAndAdjust();
  HalpCheckLowMemoryPreSleep(a1);
  *(_WORD *)v35 = 0x8000;
  if ( PmRegisters[0] )
    HalpAcpiPmRegisterWrite(0, 0, v35, 2u, 0LL);
  if ( byte_140F8F310 )
    HalpAcpiPmRegisterWrite(3, 0, v35, 2u, 0LL);
  v43 = -112;
  if ( (v19 & 0x40) != 0 )
    HalSetEnvironmentVariableEx(L"SystemSleepCheckpoint", (int)SYSTEM_SLEEP_ETW_CHECKPOINT_GUID, (__int64)&v43, 1, 1);
  if ( (a1 & 0x1000) != 0 )
  {
    if ( CurrentPrcb->CpuVendor == 1 )
    {
      LOBYTE(v25) = 1;
      KeWriteProtectPAT(v25);
    }
    __wbinvd();
  }
  if ( !HalpHvSleepEnlightenedCpuManager
    || (v26 = (a1 >> 8) & 0xF, v26 != 1) && (((v26 - 2) & 0xFFFFFFFC) != 0 || v26 == 4) )
  {
    if ( (HalpPlatformFlags & 1) == 0 )
      HalReturnToFirmware((unsigned int)v23 + 1);
    if ( (a1 & 0xF00) == 0x400 || (a1 & 0xF00) == 0x500 )
      VslTerminateSecureServices();
    if ( byte_140F8F2B0 )
    {
      HalpAcpiPmRegisterRead(1, 0, (__int64)v36, 2u, 0LL);
      *(_WORD *)v36 = *(_WORD *)v36 & 0x203 | ((a1 & 7 | 8) << 10);
      HalpAcpiPmRegisterWrite(1, 0, v36, 2u, 0LL);
    }
    if ( byte_140F8F340 )
    {
      HalpAcpiPmRegisterRead(4, 0, (__int64)v36, 2u, 0LL);
      *(_WORD *)v36 = *(_WORD *)v36 & 0x203 | (((a1 >> 4) & 7 | 8) << 10);
      HalpAcpiPmRegisterWrite(4, 0, v36, 2u, 0LL);
    }
    v27 = 0;
    if ( PmRegisters[0] )
    {
      v28 = byte_140F8F310 != 0 ? 3 : 0;
      while ( 1 )
      {
        HalpAcpiPmRegisterRead(0, 0, (__int64)v35, 2u, 0LL);
        if ( (*(_WORD *)v35 & 0x8000) != 0 )
          break;
        HalpAcpiPmRegisterRead(v28, 0, (__int64)v35, 2u, 0LL);
        if ( (*(_WORD *)v35 & 0x8000) != 0 )
          break;
        if ( (++v27 & dword_140FC111C) != 0 || !qword_140FC1120 )
          _mm_pause();
        else
          guard_dispatch_icall_no_overrides(v27, v29);
      }
    }
    goto LABEL_72;
  }
  v9 = HalpHvEnterSleepState();
LABEL_76:
  v43 = -97;
  if ( (v19 & 0x40) != 0 )
    HalSetEnvironmentVariableEx(L"SystemSleepCheckpoint", (int)SYSTEM_SLEEP_ETW_CHECKPOINT_GUID, (__int64)&v43, 1, 1);
  HalpSaveStateSync = 0;
  HalpFlushBarrier = 0;
  HalpAcpiPostSleep(a1);
  v6 = v44;
  v16 = CurrentPrcb;
LABEL_83:
  v31 = a1 >> 12;
  if ( (v31 & 1) != 0 && (v31 & 0x10) == 0 && v16->CpuVendor == 1 )
  {
    KeWriteProtectPAT(0LL);
    __wbinvd();
  }
  HalpPostSleepMP(v6);
  v33 = CurrentIrql;
  if ( KiIrqlFlags )
  {
    LOBYTE(v32) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v32);
  }
  __writecr8(v33);
  if ( v38 )
    _enable();
  return v9;
}

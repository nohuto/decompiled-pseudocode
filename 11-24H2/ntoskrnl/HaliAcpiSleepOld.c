/*
 * XREFs of HaliAcpiSleepOld @ 0x140569940
 * Callers:
 *     <none>
 * Callees:
 *     HalpDisableInterrupts @ 0x140320790 (HalpDisableInterrupts.c)
 *     HalpAcpiPmRegisterWrite @ 0x14041C1F0 (HalpAcpiPmRegisterWrite.c)
 *     HalpAcpiPmRegisterRead @ 0x14041D360 (HalpAcpiPmRegisterRead.c)
 *     HalSetEnvironmentVariableEx @ 0x140443B40 (HalSetEnvironmentVariableEx.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1404A57AC (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpTimerSaveProcessorCounter @ 0x1404D35B0 (HalpTimerSaveProcessorCounter.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     HalReturnToFirmware @ 0x140544920 (HalReturnToFirmware.c)
 *     HalpHvEnterSleepState @ 0x14054B6BC (HalpHvEnterSleepState.c)
 *     HalpCheckWakeupTimeAndAdjust @ 0x14055A494 (HalpCheckWakeupTimeAndAdjust.c)
 *     VslTerminateSecureServices @ 0x14058E92C (VslTerminateSecureServices.c)
 *     HalpFlushAndWait @ 0x1406A5EF0 (HalpFlushAndWait.c)
 *     HalpSetupRealModeResume @ 0x1406A5F20 (HalpSetupRealModeResume.c)
 *     HaliSaveProcessorContextAndSleepOld @ 0x1406A6160 (HaliSaveProcessorContextAndSleepOld.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     HalpCheckLowMemoryPreSleep @ 0x140B4E8F8 (HalpCheckLowMemoryPreSleep.c)
 *     KeWriteProtectPAT @ 0x140B5A790 (KeWriteProtectPAT.c)
 *     HalpPostSleepMP @ 0x140B6886C (HalpPostSleepMP.c)
 *     HalpAcpiPostSleep @ 0x140B6A5BC (HalpAcpiPostSleep.c)
 *     HalpReenableAcpi @ 0x140B6BBD8 (HalpReenableAcpi.c)
 *     HalpAcpiPreSleep @ 0x140B6C5C8 (HalpAcpiPreSleep.c)
 */

__int64 __fastcall HaliAcpiSleepOld(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        volatile signed __int32 *a5)
{
  unsigned int v6; // r15d
  unsigned int v9; // r13d
  bool v10; // al
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  volatile signed __int32 *v15; // rsi
  unsigned int v16; // ebx
  struct _KPRCB *v17; // rbx
  unsigned int Number; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // r15d
  unsigned int v23; // ebx
  unsigned int v24; // esi
  unsigned int v25; // eax
  unsigned __int8 v26; // r14
  unsigned int v27; // ebx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  unsigned int v33; // ebx
  int v34; // r14d
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned int v38; // edi
  unsigned __int8 v39; // bl
  int v41; // ecx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  unsigned int v46; // ebx
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  unsigned int v50; // ebx
  unsigned __int8 v51[4]; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int8 v52[5]; // [rsp+34h] [rbp-2Ch] BYREF
  char v53; // [rsp+39h] [rbp-27h] BYREF
  bool v54; // [rsp+3Ah] [rbp-26h]
  unsigned __int8 v55[4]; // [rsp+3Ch] [rbp-24h] BYREF
  unsigned __int8 v56[8]; // [rsp+40h] [rbp-20h] BYREF
  struct _KPRCB *CurrentPrcb; // [rsp+48h] [rbp-18h]
  __int64 CurrentIrql; // [rsp+50h] [rbp-10h]
  char v59; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v60; // [rsp+B8h] [rbp+58h]

  v60 = a4;
  v6 = a4;
  v59 = 0;
  *(_WORD *)v52 = 0;
  *(_WORD *)v55 = 0;
  *(_WORD *)v51 = 0;
  v53 = 0;
  *(_WORD *)v56 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v9 = 0;
  v10 = HalpDisableInterrupts();
  v15 = a5;
  v16 = v11;
  v54 = v10;
  CurrentPrcb = KeGetCurrentPrcb();
  _InterlockedDecrement(a5);
  while ( *v15 )
  {
    if ( (++v16 & dword_140FC0EBC) != 0 || !qword_140FC0EC0 )
    {
      _mm_pause();
    }
    else
    {
      guard_dispatch_icall_no_overrides(v16, v11, v13, v14);
      v11 = 0LL;
    }
  }
  if ( HalpProfileInterface[6] )
    guard_dispatch_icall_no_overrides(v12, v11, v13, v14);
  HalpTimerSaveProcessorCounter(v12, v11, v13, v14);
  HalpTscOnWake = 0LL;
  if ( !KeGetPcr()->Prcb.Number )
    HalpTscRestoreValue = *(_QWORD *)HalpTimerSavedProcessorCounter;
  v17 = CurrentPrcb;
  Number = CurrentPrcb->Number;
  if ( !Number )
  {
    HalpResumeFromHibernate = 0;
    HalpBarrier = 0;
    HalpAcpiPreSleep(a1);
    if ( byte_140F8F0B0 )
      HalpAcpiPmRegisterRead(1, 0, (__int64)v55, 2u, 0LL);
    if ( byte_140F8F140 )
      HalpAcpiPmRegisterRead(4, 0, (__int64)v56, 2u, 0LL);
    v22 = a1 >> 12;
    if ( ((a1 >> 12) & 2) != 0
      && (unsigned __int8)HalpSetupRealModeResume(HalpLowStub, (unsigned int)HalpLowStubPhysicalAddress) )
    {
      goto LABEL_72;
    }
    HalpInterruptProcessorRestarting = 1;
    _InterlockedIncrement(&HalpSaveStateSync);
    v23 = 0;
    v24 = v60;
    while ( HalpSaveStateSync != v24 )
    {
      if ( (++v23 & dword_140FC0EBC) != 0 || !qword_140FC0EC0 )
        _mm_pause();
      else
        guard_dispatch_icall_no_overrides(v23, v19, v20, v21);
    }
    if ( a2 )
    {
      v25 = guard_dispatch_icall_no_overrides(a3, v19, v20, v21);
      v9 = v25;
      if ( (HalpPlatformFlags & 1) != 0 || v25 != -1073741632 )
      {
        if ( v25 )
        {
          if ( v25 == 1073742484 )
            HalpResumeFromHibernate = 1;
          else
            HalpReenableAcpi();
          goto LABEL_72;
        }
        v26 = 0;
      }
      else
      {
        v26 = 1;
      }
    }
    else
    {
      v26 = 0;
    }
    _InterlockedIncrement(&HalpFlushBarrier);
    v27 = 0;
    while ( HalpFlushBarrier != v24 )
    {
      if ( (++v27 & dword_140FC0EBC) != 0 || !qword_140FC0EC0 )
        _mm_pause();
      else
        guard_dispatch_icall_no_overrides(v27, v19, v20, v21);
    }
    _InterlockedOr(&HalpFlushBarrier, 0);
    HalpCheckWakeupTimeAndAdjust();
    HalpCheckLowMemoryPreSleep(a1);
    *(_WORD *)v51 = 0x8000;
    if ( PmRegisters[0] )
      HalpAcpiPmRegisterWrite(0, 0, v51, 2u, 0LL);
    if ( byte_140F8F110 )
      HalpAcpiPmRegisterWrite(3, 0, v51, 2u, 0LL);
    v59 = -112;
    if ( (v22 & 0x40) != 0 )
      HalSetEnvironmentVariableEx(L"SystemSleepCheckpoint", (int)SYSTEM_SLEEP_ETW_CHECKPOINT_GUID, (__int64)&v59, 1, 1);
    if ( (a1 & 0x1000) != 0 )
    {
      if ( CurrentPrcb->CpuVendor == 1 )
      {
        LOBYTE(v29) = 1;
        KeWriteProtectPAT(v29);
      }
      __wbinvd();
    }
    if ( HalpHvSleepEnlightenedCpuManager )
    {
      v32 = (a1 >> 8) & 0xF;
      if ( (_DWORD)v32 == 1 || (((_DWORD)v32 - 2) & 0xFFFFFFFC) == 0 && (_DWORD)v32 != 4 )
      {
        v9 = HalpHvEnterSleepState(v32, v28, v30, v31);
LABEL_76:
        v59 = -97;
        if ( (v22 & 0x40) != 0 )
          HalSetEnvironmentVariableEx(
            L"SystemSleepCheckpoint",
            (int)SYSTEM_SLEEP_ETW_CHECKPOINT_GUID,
            (__int64)&v59,
            1,
            1);
        HalpSaveStateSync = 0;
        HalpFlushBarrier = 0;
        HalpAcpiPostSleep(a1);
        v6 = v60;
        goto LABEL_79;
      }
    }
    if ( (HalpPlatformFlags & 1) == 0 )
      HalReturnToFirmware(v26 + 1);
    if ( (a1 & 0xF00) == 0x400 || (a1 & 0xF00) == 0x500 )
      VslTerminateSecureServices();
    if ( byte_140F8F0B0 )
    {
      HalpAcpiPmRegisterRead(1, 0, (__int64)v52, 2u, 0LL);
      *(_WORD *)v52 = *(_WORD *)v52 & 0x203 | ((a1 & 7 | 8) << 10);
      HalpAcpiPmRegisterWrite(1, 0, v52, 2u, 0LL);
    }
    if ( byte_140F8F140 )
    {
      HalpAcpiPmRegisterRead(4, 0, (__int64)v52, 2u, 0LL);
      *(_WORD *)v52 = *(_WORD *)v52 & 0x203 | (((a1 >> 4) & 7 | 8) << 10);
      HalpAcpiPmRegisterWrite(4, 0, v52, 2u, 0LL);
    }
    v33 = 0;
    if ( PmRegisters[0] )
    {
      v34 = byte_140F8F110 != 0 ? 3 : 0;
      while ( 1 )
      {
        HalpAcpiPmRegisterRead(0, 0, (__int64)v51, 2u, 0LL);
        if ( (*(_WORD *)v51 & 0x8000) != 0 )
          break;
        HalpAcpiPmRegisterRead(v34, 0, (__int64)v51, 2u, 0LL);
        if ( (*(_WORD *)v51 & 0x8000) != 0 )
          break;
        if ( (++v33 & dword_140FC0EBC) != 0 || !qword_140FC0EC0 )
          _mm_pause();
        else
          guard_dispatch_icall_no_overrides(v33, v35, v36, v37);
      }
    }
LABEL_72:
    if ( byte_140F8F0B0 )
      HalpAcpiPmRegisterWrite(1, 0, v55, 2u, 0LL);
    if ( byte_140F8F140 )
      HalpAcpiPmRegisterWrite(4, 0, v56, 2u, 0LL);
    goto LABEL_76;
  }
  if ( (a1 & 0x8000) != 0 )
    v41 = 0;
  else
    v41 = HalpHiberProcState + 1472 * Number;
  v9 = HaliSaveProcessorContextAndSleepOld(v41, a2, a3, v6, (__int64)&v53);
  if ( v53 )
  {
    v46 = 0;
    while ( HalpFlushBarrier )
    {
      if ( (++v46 & dword_140FC0EBC) != 0 || !qword_140FC0EC0 )
        _mm_pause();
      else
        guard_dispatch_icall_no_overrides(v46, v42, v44, v45);
    }
  }
  else
  {
    if ( v17->CpuVendor == 1 )
    {
      LOBYTE(v43) = 1;
      KeWriteProtectPAT(v43);
    }
    if ( !HalpIsMicrosoftCompatibleHvLoaded() )
    {
      HalpFlushAndWait(&HalpFlushBarrier);
      goto LABEL_80;
    }
    v50 = 0;
    if ( _InterlockedIncrement(&HalpFlushBarrier) )
    {
      do
      {
        if ( (++v50 & dword_140FC0EBC) != 0 || !qword_140FC0EC0 )
          _mm_pause();
        else
          guard_dispatch_icall_no_overrides(v50, v47, v48, v49);
      }
      while ( HalpFlushBarrier );
    }
  }
LABEL_79:
  v17 = CurrentPrcb;
LABEL_80:
  v38 = a1 >> 12;
  if ( (v38 & 1) != 0 && (v38 & 0x10) == 0 && v17->CpuVendor == 1 )
  {
    KeWriteProtectPAT(0LL);
    __wbinvd();
  }
  HalpPostSleepMP(v6);
  v39 = CurrentIrql;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(v39);
  if ( v54 )
    _enable();
  return v9;
}

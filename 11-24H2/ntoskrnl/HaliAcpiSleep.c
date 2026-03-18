/*
 * XREFs of HaliAcpiSleep @ 0x1404D9F00
 * Callers:
 *     <none>
 * Callees:
 *     HalpDisableInterrupts @ 0x140320790 (HalpDisableInterrupts.c)
 *     HalpAcpiPmRegisterWrite @ 0x14041C1F0 (HalpAcpiPmRegisterWrite.c)
 *     HalpAcpiPmRegisterRead @ 0x14041D360 (HalpAcpiPmRegisterRead.c)
 *     HalSetEnvironmentVariableEx @ 0x140443B40 (HalSetEnvironmentVariableEx.c)
 *     HalpTimerSaveProcessorCounter @ 0x1404D35B0 (HalpTimerSaveProcessorCounter.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     HalReturnToFirmware @ 0x140544920 (HalReturnToFirmware.c)
 *     HalpHvEnterSleepState @ 0x14054B6BC (HalpHvEnterSleepState.c)
 *     HalpCheckWakeupTimeAndAdjust @ 0x14055A494 (HalpCheckWakeupTimeAndAdjust.c)
 *     VslTerminateSecureServices @ 0x14058E92C (VslTerminateSecureServices.c)
 *     HalpSetupRealModeResume @ 0x1406A5F20 (HalpSetupRealModeResume.c)
 *     HaliSaveProcessorContextAndSleep @ 0x1406A60C0 (HaliSaveProcessorContextAndSleep.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     HalpCheckLowMemoryPreSleep @ 0x140B4E8F8 (HalpCheckLowMemoryPreSleep.c)
 *     KeWriteProtectPAT @ 0x140B5A790 (KeWriteProtectPAT.c)
 *     HalpPostSleepMP @ 0x140B6886C (HalpPostSleepMP.c)
 *     HalpAcpiPostSleep @ 0x140B6A5BC (HalpAcpiPostSleep.c)
 *     HalpReenableAcpi @ 0x140B6BBD8 (HalpReenableAcpi.c)
 *     HalpAcpiPreSleep @ 0x140B6C5C8 (HalpAcpiPreSleep.c)
 */

__int64 __fastcall HaliAcpiSleep(unsigned int a1, __int64 a2, __int64 a3, unsigned int a4, volatile signed __int32 *a5)
{
  unsigned int v6; // r12d
  unsigned int v9; // r15d
  bool v10; // al
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  volatile signed __int32 *v15; // rsi
  unsigned int v16; // edi
  struct _KPRCB *v17; // rdi
  unsigned int Number; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // r12d
  unsigned int v23; // edi
  unsigned int v24; // esi
  unsigned int v25; // eax
  unsigned __int8 v26; // r14
  unsigned int v27; // edi
  __int64 v28; // rcx
  int v29; // ecx
  unsigned int v30; // edi
  int v31; // r14d
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // ecx
  unsigned int v36; // ebx
  __int64 v37; // rdx
  unsigned __int8 v38; // bl
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
  v15 = a5;
  v16 = v11;
  v43 = v10;
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
  if ( Number )
  {
    if ( (a1 & 0x8000) != 0 )
      v35 = 0;
    else
      v35 = HalpHiberProcState + 1472 * Number;
    v9 = HaliSaveProcessorContextAndSleep(v35, a2, a3, v6, (__int64)&v42);
    goto LABEL_83;
  }
  HalpResumeFromHibernate = 0;
  HalpBarrier = 0;
  HalpAcpiPreSleep(a1);
  if ( byte_140F8F0B0 )
    HalpAcpiPmRegisterRead(1, 0, (__int64)v44, 2u, 0LL);
  if ( byte_140F8F140 )
    HalpAcpiPmRegisterRead(4, 0, (__int64)v45, 2u, 0LL);
  v22 = a1 >> 12;
  if ( ((a1 >> 12) & 2) != 0
    && (unsigned __int8)HalpSetupRealModeResume(HalpLowStub, (unsigned int)HalpLowStubPhysicalAddress) )
  {
    goto LABEL_72;
  }
  HalpInterruptProcessorRestarting = 1;
  _InterlockedIncrement(&HalpSaveStateSync);
  v23 = 0;
  v24 = v49;
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
LABEL_72:
        if ( byte_140F8F0B0 )
          HalpAcpiPmRegisterWrite(1, 0, v44, 2u, 0LL);
        if ( byte_140F8F140 )
          HalpAcpiPmRegisterWrite(4, 0, v45, 2u, 0LL);
        goto LABEL_76;
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
  *(_WORD *)v40 = 0x8000;
  if ( PmRegisters[0] )
    HalpAcpiPmRegisterWrite(0, 0, v40, 2u, 0LL);
  if ( byte_140F8F110 )
    HalpAcpiPmRegisterWrite(3, 0, v40, 2u, 0LL);
  v48 = -112;
  if ( (v22 & 0x40) != 0 )
    HalSetEnvironmentVariableEx(L"SystemSleepCheckpoint", (int)SYSTEM_SLEEP_ETW_CHECKPOINT_GUID, (__int64)&v48, 1, 1);
  if ( (a1 & 0x1000) != 0 )
  {
    if ( CurrentPrcb->CpuVendor == 1 )
    {
      LOBYTE(v28) = 1;
      KeWriteProtectPAT(v28);
    }
    __wbinvd();
  }
  if ( !HalpHvSleepEnlightenedCpuManager
    || (v29 = (a1 >> 8) & 0xF, v29 != 1) && (((v29 - 2) & 0xFFFFFFFC) != 0 || v29 == 4) )
  {
    if ( (HalpPlatformFlags & 1) == 0 )
      HalReturnToFirmware((unsigned int)v26 + 1);
    if ( (a1 & 0xF00) == 0x400 || (a1 & 0xF00) == 0x500 )
      VslTerminateSecureServices();
    if ( byte_140F8F0B0 )
    {
      HalpAcpiPmRegisterRead(1, 0, (__int64)v41, 2u, 0LL);
      *(_WORD *)v41 = *(_WORD *)v41 & 0x203 | ((a1 & 7 | 8) << 10);
      HalpAcpiPmRegisterWrite(1, 0, v41, 2u, 0LL);
    }
    if ( byte_140F8F140 )
    {
      HalpAcpiPmRegisterRead(4, 0, (__int64)v41, 2u, 0LL);
      *(_WORD *)v41 = *(_WORD *)v41 & 0x203 | (((a1 >> 4) & 7 | 8) << 10);
      HalpAcpiPmRegisterWrite(4, 0, v41, 2u, 0LL);
    }
    v30 = 0;
    if ( PmRegisters[0] )
    {
      v31 = byte_140F8F110 != 0 ? 3 : 0;
      while ( 1 )
      {
        HalpAcpiPmRegisterRead(0, 0, (__int64)v40, 2u, 0LL);
        if ( (*(_WORD *)v40 & 0x8000) != 0 )
          break;
        HalpAcpiPmRegisterRead(v31, 0, (__int64)v40, 2u, 0LL);
        if ( (*(_WORD *)v40 & 0x8000) != 0 )
          break;
        if ( (++v30 & dword_140FC0EBC) != 0 || !qword_140FC0EC0 )
          _mm_pause();
        else
          guard_dispatch_icall_no_overrides(v30, v32, v33, v34);
      }
    }
    goto LABEL_72;
  }
  v9 = HalpHvEnterSleepState();
LABEL_76:
  v48 = -97;
  if ( (v22 & 0x40) != 0 )
    HalSetEnvironmentVariableEx(L"SystemSleepCheckpoint", (int)SYSTEM_SLEEP_ETW_CHECKPOINT_GUID, (__int64)&v48, 1, 1);
  HalpSaveStateSync = 0;
  HalpFlushBarrier = 0;
  HalpAcpiPostSleep(a1);
  v6 = v49;
  v17 = CurrentPrcb;
LABEL_83:
  v36 = a1 >> 12;
  if ( (v36 & 1) != 0 && (v36 & 0x10) == 0 && v17->CpuVendor == 1 )
  {
    KeWriteProtectPAT(0LL);
    __wbinvd();
  }
  HalpPostSleepMP(v6);
  v38 = CurrentIrql;
  if ( KiIrqlFlags )
  {
    LOBYTE(v37) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v37);
  }
  __writecr8(v38);
  if ( v43 )
    _enable();
  return v9;
}

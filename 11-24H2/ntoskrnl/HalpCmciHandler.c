/*
 * XREFs of HalpCmciHandler @ 0x140540DF8
 * Callers:
 *     HalpInterruptDeferredErrorService @ 0x140557DC0 (HalpInterruptDeferredErrorService.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     KeIpiGenericCall @ 0x14045F290 (KeIpiGenericCall.c)
 *     HalpGetCpuVendor @ 0x140478774 (HalpGetCpuVendor.c)
 *     HalpCmciSetProcessorConfigAMD @ 0x140478970 (HalpCmciSetProcessorConfigAMD.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     WheaLogInternalEvent @ 0x14065C840 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char HalpCmciHandler()
{
  KPCR *Pcr; // rax
  __int64 i; // rdi
  __int64 v2; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  int v4; // edx
  unsigned int v5; // eax
  unsigned __int8 CurrentIrql; // bp
  __int64 v7; // r14
  int v8; // edx
  unsigned __int8 v9; // si
  __int128 Src; // [rsp+20h] [rbp-48h] BYREF
  __int128 v12; // [rsp+30h] [rbp-38h]

  LOBYTE(Pcr) = HalpMcaWheaReady;
  Src = 0LL;
  v12 = 0LL;
  if ( HalpMcaWheaReady )
  {
    Pcr = KeGetPcr();
    for ( i = *(_QWORD *)&Pcr->HalReserved[6]; i; i = *(_QWORD *)(i + 184) )
    {
      v2 = *(_QWORD *)(i + 172);
      if ( *(_QWORD *)(i + 16) && *(_QWORD *)(i + 24) )
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        ++*(_DWORD *)(i + 124);
        if ( PerformanceCounter.QuadPart - *(_QWORD *)(i + 112) >= HalpCmciThresholdTime )
        {
          *(LARGE_INTEGER *)(i + 112) = PerformanceCounter;
          v5 = 1;
          *(_DWORD *)(i + 120) = 1;
        }
        else
        {
          v5 = *(_DWORD *)(i + 120) + 1;
          *(_DWORD *)(i + 120) = v5;
        }
        if ( v5 > HalpCmciThresholdCount )
        {
          LODWORD(Pcr) = _InterlockedIncrement(&HalpCmciRevertToPolledMode);
          if ( (_DWORD)Pcr == 1 )
          {
            *(_QWORD *)&Src = 0x1674C6857LL;
            *((_QWORD *)&Src + 1) = 0x100000020LL;
            *(_QWORD *)&v12 = 0x80000003204C4148uLL;
            *((_QWORD *)&v12 + 1) = 2LL;
            WheaLogInternalEvent(&Src);
            KeIpiGenericCall(HalpDisableCmciOnProcessor, 0LL);
            LOBYTE(Pcr) = KeInsertQueueDpc((PRKDPC)(i + 48), 0LL, 0LL);
          }
          return (char)Pcr;
        }
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xEuLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v4) = 14;
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v4);
        }
        if ( !*(_BYTE *)(i + 128) )
        {
          v7 = *(_QWORD *)(i + 24);
          if ( HalpGetCpuVendor() == 1 )
          {
            v9 = KeGetCurrentIrql();
            __writecr8(0xFuLL);
            if ( KiIrqlFlags )
            {
              LOBYTE(v8) = 15;
              KiRaiseIrqlProcessIrqlFlags(v9, v8);
            }
            HalpCmciSetProcessorConfigAMD(v7, 1, v2);
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
            __writecr8(v9);
          }
          KeInsertQueueDpc((PRKDPC)(i + 48), 0LL, 0LL);
        }
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        LOBYTE(Pcr) = CurrentIrql;
        __writecr8(CurrentIrql);
      }
    }
  }
  return (char)Pcr;
}

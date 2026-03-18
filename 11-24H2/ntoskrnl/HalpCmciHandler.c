/*
 * XREFs of HalpCmciHandler @ 0x1405434A8
 * Callers:
 *     HalpInterruptDeferredErrorService @ 0x14055A190 (HalpInterruptDeferredErrorService.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     KeIpiGenericCall @ 0x1404677F0 (KeIpiGenericCall.c)
 *     HalpGetCpuVendor @ 0x14047D5E4 (HalpGetCpuVendor.c)
 *     HalpCmciSetProcessorConfigAMD @ 0x14047D7E0 (HalpCmciSetProcessorConfigAMD.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     WheaLogInternalEvent @ 0x14065E070 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
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
  __int64 v9; // r9
  unsigned __int8 v10; // si
  __int128 Src; // [rsp+20h] [rbp-48h] BYREF
  __int128 v13; // [rsp+30h] [rbp-38h]

  LOBYTE(Pcr) = HalpMcaWheaReady;
  Src = 0LL;
  v13 = 0LL;
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
            *(_QWORD *)&v13 = 0x80000003204C4148uLL;
            *((_QWORD *)&v13 + 1) = 2LL;
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
            v10 = KeGetCurrentIrql();
            __writecr8(0xFuLL);
            if ( KiIrqlFlags )
            {
              LOBYTE(v8) = 15;
              KiRaiseIrqlProcessIrqlFlags(v10, v8);
            }
            HalpCmciSetProcessorConfigAMD(v7, 1, v2, v9);
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
            __writecr8(v10);
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

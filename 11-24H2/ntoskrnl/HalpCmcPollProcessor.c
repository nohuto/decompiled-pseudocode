/*
 * XREFs of HalpCmcPollProcessor @ 0x1404784BC
 * Callers:
 *     HalpCmciPollProcessor @ 0x140478818 (HalpCmciPollProcessor.c)
 *     HalpCmcWorkerRoutine @ 0x140A44630 (HalpCmcWorkerRoutine.c)
 * Callees:
 *     KeQueryDpcWatchdogInformation @ 0x1404015B0 (KeQueryDpcWatchdogInformation.c)
 *     HalpMcaReadErrorPresence @ 0x140478664 (HalpMcaReadErrorPresence.c)
 *     HalpGetCpuVendor @ 0x140478774 (HalpGetCpuVendor.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     HalpCmcIsDpcTimeRunningLow @ 0x14053C6C4 (HalpCmcIsDpcTimeRunningLow.c)
 *     HalpCmcLogPollingTimeoutEvent @ 0x14053C71C (HalpCmcLogPollingTimeoutEvent.c)
 *     HalpMcaClearError @ 0x14053D158 (HalpMcaClearError.c)
 *     HalpMcaReadError @ 0x14053D70C (HalpMcaReadError.c)
 *     HalpMcaReportError @ 0x14053D9E4 (HalpMcaReportError.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall HalpCmcPollProcessor(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  unsigned int v5; // r12d
  unsigned __int8 CurrentIrql; // si
  char v9; // r15
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // rdx
  char v13; // r14
  char v14; // bp
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  char v19; // [rsp+30h] [rbp-58h]
  char CpuVendor; // [rsp+31h] [rbp-57h]
  int v21; // [rsp+34h] [rbp-54h] BYREF
  __int64 v22; // [rsp+38h] [rbp-50h]
  _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+40h] [rbp-48h] BYREF

  v21 = 0;
  v22 = a1;
  v4 = 0;
  v19 = a2;
  v5 = 0;
  CurrentIrql = 0;
  v9 = a2;
  memset(&WatchdogInformation, 0, sizeof(WatchdogInformation));
  CpuVendor = HalpGetCpuVendor(0LL, a2);
  while ( 1 )
  {
    result = HalpMcaReadErrorPresence(v10, a3);
    if ( (int)result < 0 )
      break;
    v13 = 0;
    v14 = 0;
    if ( !v9 )
      goto LABEL_4;
    v10 = 2LL;
    v13 = 1;
    if ( KeGetCurrentIrql() < 2u )
    {
      v14 = 1;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v12) = 2;
        LOBYTE(v10) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(v10, v12);
      }
    }
    if ( _InterlockedCompareExchange(&HalpCmcLock, 1, 0) )
    {
      if ( v14 )
      {
        if ( KiIrqlFlags )
        {
          LOBYTE(v12) = CurrentIrql;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
        }
        __writecr8(CurrentIrql);
      }
    }
    else
    {
LABEL_4:
      result = HalpMcaReadError(1LL, v22 + 80, &v21);
      if ( (int)result < 0 )
      {
        if ( v9 )
        {
          if ( v13 )
            result = (unsigned int)_InterlockedExchange(&HalpCmcLock, 0);
          if ( v14 )
          {
            if ( KiIrqlFlags )
            {
              LOBYTE(v15) = CurrentIrql;
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v15);
            }
            result = CurrentIrql;
            __writecr8(CurrentIrql);
          }
        }
        break;
      }
      v16 = v22;
      if ( CpuVendor == 2 )
        v17 = (*(_QWORD *)(v22 + 120) >> 38) & 0x7FFFLL;
      else
        LODWORD(v17) = 1;
      *(_DWORD *)(v22 + 12) = 0;
      v4 += v17;
      *(_DWORD *)(v16 + 20) = v21;
      HalpMcaReportError(v16, v16 + 80, a3);
      HalpMcaClearError(v22 + 80, a3);
      if ( v19 )
      {
        if ( v13 )
          _InterlockedExchange(&HalpCmcLock, 0);
        if ( v14 )
        {
          if ( KiIrqlFlags )
          {
            LOBYTE(v18) = CurrentIrql;
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v18);
          }
          __writecr8(CurrentIrql);
        }
      }
      ++v5;
      if ( HalpCmcPollCount != -1 )
      {
        if ( HalpCmcPollCount )
        {
          result = (unsigned int)HalpCmcPollCount;
          if ( v5 >= HalpCmcPollCount )
            break;
        }
      }
      v9 = v19;
    }
    if ( KeGetCurrentIrql() >= 2u )
    {
      memset(&WatchdogInformation, 0, sizeof(WatchdogInformation));
      if ( !KeQueryDpcWatchdogInformation(&WatchdogInformation) )
      {
        if ( (unsigned __int8)HalpCmcIsDpcTimeRunningLow(&WatchdogInformation) )
        {
          result = HalpCmcLogPollingTimeoutEvent(&WatchdogInformation, v5);
          break;
        }
      }
    }
  }
  *(_DWORD *)(a4 + 164) = v4;
  if ( v4 > *(_DWORD *)(a4 + 168) )
    *(_DWORD *)(a4 + 168) = v4;
  return result;
}

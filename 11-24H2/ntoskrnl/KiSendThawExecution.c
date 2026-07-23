/*
 * XREFs of KiSendThawExecution @ 0x1404D1680
 * Callers:
 *     KeThawExecution @ 0x1404F23F0 (KeThawExecution.c)
 *     KeBugCheck2 @ 0x1405AE6F0 (KeBugCheck2.c)
 *     KiBugCheckRecoveryCleanupFromCrashDump @ 0x1405C31FC (KiBugCheckRecoveryCleanupFromCrashDump.c)
 *     KiUpdateBugcheckRecoveryProgress @ 0x1405C3FAC (KiUpdateBugcheckRecoveryProgress.c)
 *     ExRebootSystemForRecovery @ 0x1406520CC (ExRebootSystemForRecovery.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 *     KeIsBugCheckActive @ 0x140408170 (KeIsBugCheckActive.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KiSendThawExecution(char a1)
{
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 result; // rax
  signed __int32 v4; // eax
  bool v5; // cc
  unsigned int v6; // ecx
  struct _KPRCB *v7; // rcx
  unsigned int v8; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int v9; // [rsp+2Ch] [rbp-DCh] BYREF
  unsigned __int16 *v10[2]; // [rsp+30h] [rbp-D8h] BYREF
  __int16 v11; // [rsp+40h] [rbp-C8h]
  int v12; // [rsp+42h] [rbp-C6h]
  __int16 v13; // [rsp+46h] [rbp-C2h]
  __int64 v14; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v15[33]; // [rsp+50h] [rbp-B8h] BYREF

  v9 = 0;
  v12 = 0;
  v13 = 0;
  memset_0(v15, 0, 0x100uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentPrcb->IpiFrozen = 0;
  KiFreezeStallOwner = 0LL;
  result = _InterlockedExchange64(&KiDebuggerOwner, 0LL);
  if ( ((unsigned int)KeNumberProcessors_0 > 1 || CurrentPrcb->Number) && !PoAllProcIntrDisabled )
  {
    if ( KiResumeForReboot
      || (v4 = _InterlockedExchangeAdd(&KiFreezeNestingLevel, 0xFFFFFFFF),
          v5 = v4 <= 1,
          result = (unsigned int)(v4 - 1),
          v5)
      && (!KeIsBugCheckActive(&v9)
       || (result = (__int64)KeGetCurrentPrcb(), v9 != *(_DWORD *)(result + 36))
       || !KiBugcheckOwnerKeepsOthersFrozen) )
    {
      v14 = 2097153LL;
      memset_0(v15, 0, 0x100uLL);
      v8 = 0;
      if ( (_DWORD)KeNumberProcessors_0 )
      {
        v6 = v8;
        do
        {
          v7 = (struct _KPRCB *)KiProcessorBlock[v6];
          if ( v7 != KeGetCurrentPrcb() )
          {
            if ( (v7->IpiFrozen & 0xF) == 2 )
            {
              v7->IpiFrozen = 3;
              if ( a1 )
                KeAddProcessorAffinityEx((unsigned __int16 *)&v14, v8);
            }
            else
            {
              v7->IpiFrozen = 0;
            }
          }
          v6 = ++v8;
        }
        while ( v8 < (unsigned int)KeNumberProcessors_0 );
      }
      v10[1] = (unsigned __int16 *)v15[0];
      v10[0] = (unsigned __int16 *)&v14;
      v11 = 0;
      while ( 1 )
      {
        result = KeEnumerateNextProcessor(&v8, v10);
        if ( (_DWORD)result )
          break;
        while ( *(_DWORD *)(KiProcessorBlock[v8] + 11656) == 3 )
          _mm_pause();
      }
    }
  }
  return result;
}

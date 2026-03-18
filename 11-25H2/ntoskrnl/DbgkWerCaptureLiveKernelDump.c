/*
 * XREFs of DbgkWerCaptureLiveKernelDump @ 0x140AA4B90
 * Callers:
 *     ExHandleLogBadReference @ 0x14043BEE0 (ExHandleLogBadReference.c)
 *     PopUserPresentSet @ 0x140476860 (PopUserPresentSet.c)
 *     PopIdlePhaseWatchdogCallback @ 0x1404C0D40 (PopIdlePhaseWatchdogCallback.c)
 *     PopFxEnforceDirectedPowerTransition @ 0x1405CCB7C (PopFxEnforceDirectedPowerTransition.c)
 *     PopPowerButtonWorkCallback @ 0x1405D39C0 (PopPowerButtonWorkCallback.c)
 *     CarLiveDump @ 0x14060DB60 (CarLiveDump.c)
 *     ExpResourceTimeoutCaptureLiveDump @ 0x14064F180 (ExpResourceTimeoutCaptureLiveDump.c)
 *     UcpGenerateLiveKernelDump @ 0x1406895FC (UcpGenerateLiveKernelDump.c)
 *     PopWin32CalloutWatchdogCallback @ 0x140752E60 (PopWin32CalloutWatchdogCallback.c)
 *     PopDripsWatchdogCheckHwDivergence @ 0x140753278 (PopDripsWatchdogCheckHwDivergence.c)
 *     PopDeepSleepWatchdogTakeAction @ 0x1407563C8 (PopDeepSleepWatchdogTakeAction.c)
 *     PopDripsWatchdogTakeAction @ 0x1407564A0 (PopDripsWatchdogTakeAction.c)
 *     TtmpCalloutWatchdogCallback @ 0x140759660 (TtmpCalloutWatchdogCallback.c)
 *     ExpIoPoolDeadlockWorker @ 0x1407B03D0 (ExpIoPoolDeadlockWorker.c)
 *     MiForceCrashForInvalidAccess @ 0x140AB2078 (MiForceCrashForInvalidAccess.c)
 *     VfPtGenerateTraceInformation @ 0x140B7BF8C (VfPtGenerateTraceInformation.c)
 * Callees:
 *     DbgkWerCaptureLiveKernelDump2 @ 0x140AA4C10 (DbgkWerCaptureLiveKernelDump2.c)
 */

__int64 __fastcall DbgkWerCaptureLiveKernelDump(
        const wchar_t *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9)
{
  _DWORD v10[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v11; // [rsp+48h] [rbp-30h]
  __int64 v12; // [rsp+50h] [rbp-28h]
  int v13; // [rsp+58h] [rbp-20h]
  __int64 v14; // [rsp+5Ch] [rbp-1Ch]
  int v15; // [rsp+64h] [rbp-14h]

  v14 = 0LL;
  v15 = 0;
  v10[0] = 1;
  v10[1] = 40;
  v11 = a8;
  v12 = a7;
  v13 = a9;
  return DbgkWerCaptureLiveKernelDump2(a1, a5, a6, (__int64)v10);
}

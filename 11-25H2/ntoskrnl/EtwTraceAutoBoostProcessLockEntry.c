/*
 * XREFs of EtwTraceAutoBoostProcessLockEntry @ 0x1402E8C88
 * Callers:
 *     KiAbConvertWaiterToOwnerEntry @ 0x14027E670 (KiAbConvertWaiterToOwnerEntry.c)
 *     KiAbDeferredProcessingWorker @ 0x1402E4D00 (KiAbDeferredProcessingWorker.c)
 *     KiAbProcessThreadLocks @ 0x1402E8D40 (KiAbProcessThreadLocks.c)
 *     KiAbForceProcessLockEntry @ 0x14041A848 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x140310730 (EtwTraceSiloKernelEvent.c)
 *     MmGetMinWsPagePriority @ 0x140311E90 (MmGetMinWsPagePriority.c)
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledWithReporting @ 0x1404F278C (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledWithReporting.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceAutoBoostProcessLockEntry(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  int IsEnabledWithReporting; // eax
  __int64 v6; // rcx
  __int64 v8; // [rsp+30h] [rbp-38h] BYREF
  int v9; // [rsp+38h] [rbp-30h]
  int v10; // [rsp+3Ch] [rbp-2Ch]
  __int64 *v11; // [rsp+40h] [rbp-28h] BYREF
  int v12; // [rsp+48h] [rbp-20h]
  int v13; // [rsp+4Ch] [rbp-1Ch]

  v3 = *(_DWORD *)(a1 + 1296);
  v8 = a2;
  v9 = v3;
  v10 = a3;
  MmGetMinWsPagePriority(0LL);
  IsEnabledWithReporting = Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledWithReporting(0LL);
  v13 = 0;
  v11 = &v8;
  v6 = *(_QWORD *)(a1 + 544);
  v12 = 16;
  return EtwTraceSiloKernelEvent(
           *(_QWORD *)(v6 + 1520),
           (unsigned int)&v11,
           1,
           -1610608640,
           1358,
           IsEnabledWithReporting != 0 ? 6299138 : 6298114);
}

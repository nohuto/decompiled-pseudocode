/*
 * XREFs of EtwTraceAutoBoostConvertWaiterToOwner @ 0x140311EA0
 * Callers:
 *     KiAbConvertWaiterToOwnerEntry @ 0x14027E670 (KiAbConvertWaiterToOwnerEntry.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x140310730 (EtwTraceSiloKernelEvent.c)
 *     MmGetMinWsPagePriority @ 0x140311E90 (MmGetMinWsPagePriority.c)
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledWithReporting @ 0x1404F278C (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledWithReporting.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

void __fastcall EtwTraceAutoBoostConvertWaiterToOwner(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  int IsEnabledWithReporting; // eax
  __int64 v6; // rcx
  __int64 v7; // [rsp+30h] [rbp-38h] BYREF
  int v8; // [rsp+38h] [rbp-30h]
  int v9; // [rsp+3Ch] [rbp-2Ch]
  __int64 *v10; // [rsp+40h] [rbp-28h] BYREF
  int v11; // [rsp+48h] [rbp-20h]
  int v12; // [rsp+4Ch] [rbp-1Ch]

  v3 = *(_DWORD *)(a1 + 1296);
  v7 = a2;
  v8 = v3;
  v9 = a3;
  MmGetMinWsPagePriority();
  IsEnabledWithReporting = Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledWithReporting(0LL);
  v12 = 0;
  v10 = &v7;
  v6 = *(_QWORD *)(a1 + 544);
  v11 = 16;
  EtwTraceSiloKernelEvent(
    *(_QWORD *)(v6 + 1520),
    (struct _KTHREAD *)&v10,
    1u,
    0xA0001000,
    0x54Du,
    IsEnabledWithReporting != 0 ? 6299138 : 6298114);
}

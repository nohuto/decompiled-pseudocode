/*
 * XREFs of EtwTraceAutoBoostSetFloor @ 0x140478FC8
 * Callers:
 *     KiAbSetMinimumThreadPriority @ 0x14024E520 (KiAbSetMinimumThreadPriority.c)
 *     KiAbIoBoostOwners @ 0x14024EA60 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x14024F2F0 (KiAbCpuBoostOwners.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x140348590 (EtwTraceSiloKernelEvent.c)
 *     MmGetMinWsPagePriority @ 0x1404790C0 (MmGetMinWsPagePriority.c)
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledWithReporting @ 0x1404790D0 (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledWithReporting.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

void __fastcall EtwTraceAutoBoostSetFloor(
        __int64 a1,
        __int64 a2,
        char a3,
        char a4,
        char a5,
        char a6,
        char a7,
        char a8,
        int a9,
        char a10)
{
  int IsEnabledWithReporting; // eax
  __int64 v12; // rcx
  __int64 v13; // [rsp+30h] [rbp-30h] BYREF
  int v14; // [rsp+38h] [rbp-28h]
  char v15; // [rsp+3Ch] [rbp-24h]
  char v16; // [rsp+3Dh] [rbp-23h]
  char v17; // [rsp+3Eh] [rbp-22h]
  char v18; // [rsp+3Fh] [rbp-21h]
  __int64 *v19; // [rsp+40h] [rbp-20h] BYREF
  int v20; // [rsp+48h] [rbp-18h]
  int v21; // [rsp+4Ch] [rbp-14h]

  v14 = *(_DWORD *)(a1 + 1296);
  v16 = a6;
  v13 = a2;
  v15 = a3;
  v17 = a4 & 7 | (8 * (a7 & 7 | (8 * ((2 * a8) | a5 & 1))));
  v18 = (4 * (a10 & 3)) | KeGetPcr()->Prcb.DpcRequestSummary & 1;
  MmGetMinWsPagePriority(0LL);
  IsEnabledWithReporting = Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledWithReporting(0LL);
  v21 = 0;
  v19 = &v13;
  v12 = *(_QWORD *)(a1 + 544);
  v20 = 16;
  EtwTraceSiloKernelEvent(
    *(_QWORD *)(v12 + 1520),
    (__int64)&v19,
    1u,
    0xA0001000,
    1346,
    IsEnabledWithReporting != 0 ? 6295042 : 6294018);
}

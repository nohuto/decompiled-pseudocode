/*
 * XREFs of EtwTraceAutoBoostSetFloor @ 0x1403C10AC
 * Callers:
 *     KiAbSetMinimumThreadPriority @ 0x14027EB30 (KiAbSetMinimumThreadPriority.c)
 *     KiAbIoBoostOwners @ 0x14027F070 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x14027F900 (KiAbCpuBoostOwners.c)
 * Callees:
 *     MmGetMinWsPagePriority @ 0x1403C11A0 (MmGetMinWsPagePriority.c)
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledWithReporting @ 0x1403C11B0 (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledWithReporting.c)
 *     EtwTraceSiloKernelEvent @ 0x1403C1FD0 (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceAutoBoostSetFloor(
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
  __int64 v14; // [rsp+30h] [rbp-30h] BYREF
  int v15; // [rsp+38h] [rbp-28h]
  char v16; // [rsp+3Ch] [rbp-24h]
  char v17; // [rsp+3Dh] [rbp-23h]
  char v18; // [rsp+3Eh] [rbp-22h]
  char v19; // [rsp+3Fh] [rbp-21h]
  __int64 *v20; // [rsp+40h] [rbp-20h] BYREF
  int v21; // [rsp+48h] [rbp-18h]
  int v22; // [rsp+4Ch] [rbp-14h]

  v15 = *(_DWORD *)(a1 + 1296);
  v17 = a6;
  v14 = a2;
  v16 = a3;
  v18 = a4 & 7 | (8 * (a7 & 7 | (8 * ((2 * a8) | a5 & 1))));
  v19 = (4 * (a10 & 3)) | KeGetPcr()->Prcb.DpcRequestSummary & 1;
  MmGetMinWsPagePriority(0LL);
  IsEnabledWithReporting = Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledWithReporting(0LL);
  v22 = 0;
  v20 = &v14;
  v12 = *(_QWORD *)(a1 + 544);
  v21 = 16;
  return EtwTraceSiloKernelEvent(
           *(_QWORD *)(v12 + 1520),
           (unsigned int)&v20,
           1,
           -1610608640,
           1346,
           IsEnabledWithReporting != 0 ? 6295042 : 6294018);
}

/*
 * XREFs of MiAllocatePagesForMdl @ 0x14039469C
 * Callers:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140394410 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MmAllocatePagesForMdl @ 0x140395650 (MmAllocatePagesForMdl.c)
 *     MiAllocateZeroCalibrationBuffer @ 0x140694104 (MiAllocateZeroCalibrationBuffer.c)
 *     MmAllocateNonCachedMemory @ 0x1407EB1A0 (MmAllocateNonCachedMemory.c)
 *     MiAllocateUserPhysicalPages @ 0x1407F8C38 (MiAllocateUserPhysicalPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1407FBE14 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     MiInitializeMdlBatchPages @ 0x140393678 (MiInitializeMdlBatchPages.c)
 *     EtwTraceMdlAllocationEvent @ 0x1403948E0 (EtwTraceMdlAllocationEvent.c)
 *     MiValidateMdlAllocationRequest @ 0x1403949C4 (MiValidateMdlAllocationRequest.c)
 *     VfPtIsAptEnabledOnKernel @ 0x140394D00 (VfPtIsAptEnabledOnKernel.c)
 *     MiObtainMdlCharges @ 0x140394D20 (MiObtainMdlCharges.c)
 *     MiFindPagesForMdl @ 0x140394EF4 (MiFindPagesForMdl.c)
 *     VfPtMiscPoolNotification @ 0x1403FA750 (VfPtMiscPoolNotification.c)
 *     MiLogMdlRangeEvent @ 0x140672F78 (MiLogMdlRangeEvent.c)
 *     MiReturnMdlExcess @ 0x1406730E0 (MiReturnMdlExcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiRemoveMdlPages @ 0x1407EBBA8 (MiRemoveMdlPages.c)
 */

PVOID __fastcall MiAllocatePagesForMdl(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        __int64 a9,
        void *a10)
{
  LARGE_INTEGER PerformanceCounter; // r15
  _DWORD *v15; // r13
  unsigned int v16; // r12d
  unsigned int v17; // eax
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  _DWORD *v20; // r13
  int v22; // [rsp+50h] [rbp-B0h]
  __int64 v23; // [rsp+58h] [rbp-A8h]
  _BYTE v24[32]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v25; // [rsp+90h] [rbp-70h]
  __int64 v26; // [rsp+A0h] [rbp-60h]
  int v27; // [rsp+A8h] [rbp-58h]
  PVOID P; // [rsp+B0h] [rbp-50h]
  int v29; // [rsp+104h] [rbp+4h]

  memset_0(v24, 0, 0x98uLL);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( (int)MiValidateMdlAllocationRequest((unsigned int)v24, a1, a2, a3, a4, a5, a6, a7, a8, a9) >= 0 )
  {
    if ( a10 )
    {
      v29 |= 1u;
      P = a10;
    }
    if ( (int)MiObtainMdlCharges(v24) < 0 )
    {
      if ( (v29 & 1) != 0 )
        P = 0LL;
    }
    else
    {
      v15 = P;
      v16 = 0;
      v22 = 0;
      v23 = v25;
      *((_DWORD *)P + 10) = 0;
      MiFindPagesForMdl(v24);
      v17 = v15[10];
      v18 = v23;
      v19 = v26 * ((unsigned __int64)v17 >> 12);
      if ( v19 != v23 )
      {
        while ( (v27 & 0x80u) != 0 )
        {
          if ( v22 == v17 )
          {
            if ( v16 > 3 || KeGetCurrentIrql() >= 2u || (v27 & 8) != 0 )
            {
LABEL_26:
              if ( v19 == v18 )
                goto LABEL_6;
              break;
            }
            KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi10Milliseconds);
            ++v16;
          }
          else
          {
            v16 = 0;
          }
          v27 &= ~0x10000u;
          v22 = v15[10];
          MiFindPagesForMdl(v24);
          v17 = v15[10];
          v18 = v23;
          v19 = v26 * ((unsigned __int64)v17 >> 12);
          if ( v19 == v23 )
            goto LABEL_26;
        }
        MiReturnMdlExcess(v24);
      }
LABEL_6:
      v20 = P;
      if ( P )
      {
        if ( (a8 & 0x40) == 0 )
          MiInitializeMdlBatchPages((__int64)v24, v18);
        if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
          MiLogMdlRangeEvent(a9, (_DWORD)v20 + 48, 632, v20[10] >> 12, v26);
        if ( (v27 & 0x100) != 0 )
          P = (PVOID)MiRemoveMdlPages(v20);
      }
    }
  }
  if ( (unsigned __int8)VfPtIsAptEnabledOnKernel() )
    VfPtMiscPoolNotification(P, a5, 1768189261LL, 0LL);
  EtwTraceMdlAllocationEvent((_DWORD)P, a2, a3, a4, a5, a7, v27, PerformanceCounter.QuadPart);
  return P;
}

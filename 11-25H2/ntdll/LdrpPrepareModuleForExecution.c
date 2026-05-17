/*
 * XREFs of LdrpPrepareModuleForExecution @ 0x180007794
 * Callers:
 *     LdrpLoadDllInternal @ 0x18004A300 (LdrpLoadDllInternal.c)
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpNotifyLoadOfGraph @ 0x1800078D0 (LdrpNotifyLoadOfGraph.c)
 *     LdrpAddNodeServiceTag @ 0x18000796C (LdrpAddNodeServiceTag.c)
 *     LdrpReleaseLoaderLock @ 0x180007A00 (LdrpReleaseLoaderLock.c)
 *     LdrpInitializeGraphRecurse @ 0x180008690 (LdrpInitializeGraphRecurse.c)
 *     LdrpDynamicShimModule @ 0x18000876C (LdrpDynamicShimModule.c)
 *     LdrpAcquireLoaderLock @ 0x180046860 (LdrpAcquireLoaderLock.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     LdrpCondenseGraph @ 0x1800EB790 (LdrpCondenseGraph.c)
 */

__int64 __fastcall LdrpPrepareModuleForExecution(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  char v9; // [rsp+28h] [rbp-10h]
  char v10; // [rsp+50h] [rbp+18h] BYREF

  LODWORD(v2) = 0;
  if ( (void *)qword_1801CE8F0 == NtCurrentTeb()->ClientId.UniqueThread )
    return (unsigned int)v2;
  switch ( *(_DWORD *)(*(_QWORD *)(a1 + 152) + 56LL) )
  {
    case 5:
      LdrpCondenseGraph();
      goto LABEL_4;
    case 6:
LABEL_4:
      if ( (*(_BYTE *)(a1 + 104) & 0x20) == 0 && (unsigned int)NtCurrentTeb()->SubProcessTag )
        LdrpAddNodeServiceTag(*(_QWORD *)(a1 + 152));
      LODWORD(v2) = LdrpNotifyLoadOfGraph(*(_QWORD *)(a1 + 152));
      if ( (int)v2 >= 0 )
      {
        LODWORD(v2) = LdrpDynamicShimModule(*(_QWORD *)(a1 + 152));
        if ( (int)v2 < 0 )
        {
          LdrpLogInternal(
            (int)"minkernel\\ldr\\ldrsnap.c",
            2644,
            (int)"LdrpPrepareModuleForExecution",
            1,
            "Failed to load for appcompat reasons\n",
            v9);
          return (unsigned int)v2;
        }
        goto LABEL_10;
      }
      return (unsigned int)v2;
    case 7:
LABEL_10:
      v5 = *(_QWORD *)(a1 + 176);
      if ( v5 && (*(_BYTE *)(v5 + 32) & 1) == 0 )
      {
        LdrpAcquireLoaderLock();
        v6 = *(_QWORD *)(a1 + 152);
        v10 = 0;
        v2 = (unsigned int)LdrpInitializeGraphRecurse(v6, a2, &v10);
        LdrpReleaseLoaderLock(v7, 2LL, v2);
      }
      return (unsigned int)v2;
  }
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 152) + 56LL) - 8) >= 2 )
    LODWORD(v2) = -1073741595;
  return (unsigned int)v2;
}

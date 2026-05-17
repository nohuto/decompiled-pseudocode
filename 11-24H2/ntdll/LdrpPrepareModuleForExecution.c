/*
 * XREFs of LdrpPrepareModuleForExecution @ 0x180004BA4
 * Callers:
 *     LdrpLoadDllInternal @ 0x18000B460 (LdrpLoadDllInternal.c)
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpNotifyLoadOfGraph @ 0x180004CE0 (LdrpNotifyLoadOfGraph.c)
 *     LdrpAddNodeServiceTag @ 0x180004D7C (LdrpAddNodeServiceTag.c)
 *     LdrpReleaseLoaderLock @ 0x180004E10 (LdrpReleaseLoaderLock.c)
 *     LdrpInitializeGraphRecurse @ 0x180005AA0 (LdrpInitializeGraphRecurse.c)
 *     LdrpDynamicShimModule @ 0x180005B7C (LdrpDynamicShimModule.c)
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 *     LdrpAcquireLoaderLock @ 0x18001CD20 (LdrpAcquireLoaderLock.c)
 *     LdrpCondenseGraph @ 0x1800EA3D0 (LdrpCondenseGraph.c)
 */

__int64 __fastcall LdrpPrepareModuleForExecution(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  char v9; // [rsp+28h] [rbp-10h]
  char v10; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  if ( (void *)qword_1801CC8F0 == NtCurrentTeb()->ClientId.UniqueThread )
    return v2;
  switch ( *(_DWORD *)(*(_QWORD *)(a1 + 152) + 56LL) )
  {
    case 5:
      LdrpCondenseGraph();
      goto LABEL_4;
    case 6:
LABEL_4:
      if ( (*(_BYTE *)(a1 + 104) & 0x20) == 0 && (unsigned int)NtCurrentTeb()->SubProcessTag )
        LdrpAddNodeServiceTag(*(_QWORD *)(a1 + 152));
      v2 = LdrpNotifyLoadOfGraph(*(_QWORD *)(a1 + 152));
      if ( (v2 & 0x80000000) == 0 )
      {
        v2 = LdrpDynamicShimModule(*(_QWORD *)(a1 + 152));
        if ( (v2 & 0x80000000) != 0 )
        {
          LdrpLogInternal(
            (int)"minkernel\\ldr\\ldrsnap.c",
            2644,
            (int)"LdrpPrepareModuleForExecution",
            1,
            "Failed to load for appcompat reasons\n",
            v9);
          return v2;
        }
        goto LABEL_10;
      }
      return v2;
    case 7:
LABEL_10:
      v5 = *(_QWORD *)(a1 + 176);
      if ( v5 && (*(_BYTE *)(v5 + 32) & 1) == 0 )
      {
        LdrpAcquireLoaderLock();
        v6 = *(_QWORD *)(a1 + 152);
        v10 = 0;
        v2 = LdrpInitializeGraphRecurse(v6, a2, &v10);
        LdrpReleaseLoaderLock(v7, 2LL);
      }
      return v2;
  }
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 152) + 56LL) - 8) >= 2 )
    return (unsigned int)-1073741595;
  return v2;
}

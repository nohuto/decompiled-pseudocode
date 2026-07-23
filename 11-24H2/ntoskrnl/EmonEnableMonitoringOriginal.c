/*
 * XREFs of EmonEnableMonitoringOriginal @ 0x140558FF0
 * Callers:
 *     <none>
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x140372268 (HalpReleaseHighLevelLock.c)
 *     HalpAcquireHighLevelLock @ 0x1403729A0 (HalpAcquireHighLevelLock.c)
 *     KeCheckProcessorAffinityEx @ 0x1403A4AD0 (KeCheckProcessorAffinityEx.c)
 *     HalpGetProfileDescriptor @ 0x1404AB874 (HalpGetProfileDescriptor.c)
 *     EmonAllocateCounterOriginal @ 0x1405587FC (EmonAllocateCounterOriginal.c)
 *     EmonConfigureCounter @ 0x140558B40 (EmonConfigureCounter.c)
 */

__int64 __fastcall EmonEnableMonitoringOriginal(int a1, int a2, _DWORD *a3, int *a4, int *a5, int *a6)
{
  unsigned __int8 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rdx
  int ProfileDescriptor; // edi
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rbp
  int v15; // ecx
  int v16; // r10d
  int v17; // r8d
  int v18; // ecx
  int v20; // [rsp+30h] [rbp-58h] BYREF
  __int64 v21; // [rsp+38h] [rbp-50h] BYREF
  __int64 v22[9]; // [rsp+40h] [rbp-48h] BYREF

  v21 = 0LL;
  v22[0] = 0LL;
  v20 = 0;
  v8 = HalpAcquireHighLevelLock(&HalpProfileSourceDescriptorListLock);
  ProfileDescriptor = HalpGetProfileDescriptor(a2, v9, &v21);
  if ( ProfileDescriptor >= 0 )
  {
    v12 = v21;
    v13 = v21;
    v14 = v21;
    v15 = *(_DWORD *)(v21 + 312);
    if ( v15 != 37 && (int)HalpGetProfileDescriptor(v15, v10, v22) >= 0 )
    {
      v12 = v22[0];
      v13 = v22[0];
      v14 = v22[0];
    }
    if ( (unsigned int)KeCheckProcessorAffinityEx((unsigned __int16 *)(v12 + 32), KeGetPcr()->Prcb.Number) )
    {
      ProfileDescriptor = EmonAllocateCounterOriginal(a1, v12, a2, &v20, a6);
      if ( ProfileDescriptor >= 0 )
      {
        v16 = v20;
        v17 = v20;
        if ( *a6 == 1 )
        {
          v17 = v20 | 0x40000000;
          v13 = v14;
        }
        v18 = v20;
        *a5 = v17;
        *a4 = v16;
        *a3 = 1;
        EmonConfigureCounter(v18, *a6, 1, *(unsigned int *)(v13 + 24), *(_DWORD *)(v12 + 304), a1 == 0);
      }
    }
    else
    {
      ProfileDescriptor = -1073741637;
    }
  }
  HalpReleaseHighLevelLock((volatile signed __int64 *)&HalpProfileSourceDescriptorListLock, v8);
  return (unsigned int)ProfileDescriptor;
}

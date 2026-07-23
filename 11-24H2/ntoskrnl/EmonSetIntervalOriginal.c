/*
 * XREFs of EmonSetIntervalOriginal @ 0x14055C560
 * Callers:
 *     <none>
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x140372268 (HalpReleaseHighLevelLock.c)
 *     HalpAcquireHighLevelLock @ 0x1403729A0 (HalpAcquireHighLevelLock.c)
 *     HalpGetProfileDescriptor @ 0x1404AB874 (HalpGetProfileDescriptor.c)
 *     HalpTimerSetProfilingTarget @ 0x1404BA774 (HalpTimerSetProfilingTarget.c)
 *     EmonSetIntervalInternalOriginal @ 0x14055C504 (EmonSetIntervalInternalOriginal.c)
 */

__int64 __fastcall EmonSetIntervalOriginal(int a1, unsigned int *a2)
{
  __int64 v4; // rdx
  int ProfileDescriptor; // ebx
  unsigned __int8 v6; // r9
  __int64 v8; // rdx
  unsigned int v9; // eax
  __int64 v10; // r8
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  __int64 v13; // r8
  unsigned int Number; // ebx
  __int64 v15; // r8
  __int64 v16; // [rsp+40h] [rbp+18h] BYREF

  v16 = 0LL;
  HalpAcquireHighLevelLock(&HalpProfileSourceDescriptorListLock);
  ProfileDescriptor = HalpGetProfileDescriptor(a1, v4, &v16);
  if ( ProfileDescriptor >= 0 )
  {
    v8 = v16;
    v9 = *a2;
    v10 = *(unsigned __int8 *)(v16 + 28);
    v11 = HIDWORD(EmonProfileIntervalLimits[v10]);
    if ( *a2 < v11 )
    {
      *a2 = v11;
      v9 = v11;
    }
    v12 = EmonProfileIntervalLimits[v10];
    if ( v9 > v12 )
    {
      *a2 = v12;
      v9 = v12;
    }
    *(_DWORD *)(v8 + 24) = v9;
    HalpReleaseHighLevelLock((volatile signed __int64 *)&HalpProfileSourceDescriptorListLock, v6);
    if ( !a1 )
      HalpTimerSetProfilingTarget();
    Number = KeGetPcr()->Prcb.Number;
    EmonSetIntervalInternalOriginal(a1, *a2, v13, Number);
    EmonSetIntervalInternalOriginal(a1, *a2, v15, Number);
    return 0LL;
  }
  else
  {
    HalpReleaseHighLevelLock((volatile signed __int64 *)&HalpProfileSourceDescriptorListLock, v6);
    return (unsigned int)ProfileDescriptor;
  }
}

/*
 * XREFs of Amd64EnableMonitoring @ 0x140568470
 * Callers:
 *     <none>
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x140372268 (HalpReleaseHighLevelLock.c)
 *     HalpAcquireHighLevelLock @ 0x1403729A0 (HalpAcquireHighLevelLock.c)
 *     KeCheckProcessorAffinityEx @ 0x1403A4AD0 (KeCheckProcessorAffinityEx.c)
 *     HalpGetProfileDescriptor @ 0x1404AB874 (HalpGetProfileDescriptor.c)
 *     Amd64AllocateCounter @ 0x140567A3C (Amd64AllocateCounter.c)
 *     Amd64ConfigureCounter @ 0x140567F68 (Amd64ConfigureCounter.c)
 */

__int64 __fastcall Amd64EnableMonitoring(
        signed __int32 a1,
        int a2,
        _DWORD *a3,
        unsigned int *a4,
        unsigned int *a5,
        int *a6)
{
  unsigned __int8 v10; // r12
  __int64 v11; // rdx
  int ProfileDescriptor; // ebx
  __int64 v13; // rdi
  unsigned int v14; // ecx
  unsigned int v15; // r10d
  unsigned int v16; // ecx
  char v18[4]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v19; // [rsp+34h] [rbp-24h] BYREF
  __int64 v20[4]; // [rsp+38h] [rbp-20h] BYREF

  v19 = 0;
  v20[0] = 0LL;
  v18[0] = 0;
  v10 = HalpAcquireHighLevelLock(&HalpProfileSourceDescriptorListLock);
  ProfileDescriptor = HalpGetProfileDescriptor(a2, v11, v20);
  if ( ProfileDescriptor >= 0 )
  {
    v13 = v20[0];
    if ( !(unsigned int)KeCheckProcessorAffinityEx((unsigned __int16 *)(v20[0] + 32), KeGetPcr()->Prcb.Number) )
    {
      ProfileDescriptor = -1073741637;
      goto LABEL_21;
    }
    if ( v13 && *(_DWORD *)v13 == 32 && a1 == 1 )
    {
      *a4 = -1;
      *a6 = 2;
      *a5 = -1073741591;
      *a3 = 2;
LABEL_8:
      ProfileDescriptor = 0;
      goto LABEL_21;
    }
    ProfileDescriptor = Amd64AllocateCounter(a1, (_DWORD *)v13, &v19, v18, a6);
    if ( ProfileDescriptor < 0 )
      goto LABEL_21;
    if ( v18[0] )
    {
      v14 = v19;
      *a4 = v19;
      if ( *a6 == 100 )
      {
        v14 += 6;
      }
      else if ( *a6 == 101 )
      {
        v14 += 10;
      }
      *a5 = v14;
      *a3 = *(_DWORD *)(v13 + 316);
      goto LABEL_8;
    }
    v15 = v19;
    *a4 = v19;
    v16 = v15;
    if ( *a6 == 100 )
    {
      v16 = v15 + 6;
    }
    else if ( *a6 == 101 )
    {
      v16 = v15 + 10;
    }
    *a5 = v16;
    *a3 = *(_DWORD *)(v13 + 316);
    Amd64ConfigureCounter(v15, *a6, 1, *(unsigned int *)(v13 + 24), *(_QWORD *)(v13 + 304), a1 == 0);
  }
LABEL_21:
  HalpReleaseHighLevelLock((volatile signed __int64 *)&HalpProfileSourceDescriptorListLock, v10);
  return (unsigned int)ProfileDescriptor;
}

/*
 * XREFs of PpmParkInitialize @ 0x140C35474
 * Callers:
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline @ 0x1405B2224 (Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 PpmParkInitialize()
{
  int v0; // eax
  unsigned int v1; // ebx
  struct _KAFFINITY_EX *Pool2; // rax
  __int64 v3; // rsi
  unsigned int *p_Reserved; // rdi
  void *v5; // rax
  __int64 v6; // rcx

  v0 = PpmHeteroMultiClassParkingRegValue;
  v1 = 0;
  if ( PpmHeteroMultiClassParkingRegValue == -1 )
    v0 = (unsigned __int8)PpmMaxCoreClasses > 2u;
  PpmHeteroMultiClassParkingEnabled = v0;
  PpmParkOldSoftParkRankList = (void *)ExAllocatePool2(0x40uLL, 4LL * (unsigned int)KeMaximumProcessors, 0x704D5050uLL);
  if ( PpmParkOldSoftParkRankList )
  {
    PpmParkNewSoftParkRankList = (void *)ExAllocatePool2(
                                           0x40uLL,
                                           4LL * (unsigned int)KeMaximumProcessors,
                                           0x704D5050uLL);
    if ( PpmParkNewSoftParkRankList )
    {
      if ( !(unsigned int)Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline() )
        goto LABEL_12;
      Pool2 = (struct _KAFFINITY_EX *)ExAllocatePool2(0x40uLL, 0x18C0uLL, 0x704D5050uLL);
      PpmParkPerfCheckAffinities = Pool2;
      if ( Pool2 )
      {
        v3 = 24LL;
        p_Reserved = &Pool2->Reserved;
        do
        {
          *(_QWORD *)(p_Reserved - 1) = 2097153LL;
          memset_0(p_Reserved + 1, 0, 0x100uLL);
          p_Reserved += 66;
          --v3;
        }
        while ( v3 );
        v5 = (void *)ExAllocatePool2(0x40uLL, (unsigned int)(16 * KeMaximumProcessors), 0x704D5050uLL);
        if ( v5 )
        {
          v6 = 4LL * (unsigned int)KeMaximumProcessors;
          PpmHeteroPerfCheckUtilities = v5;
          qword_140F06570 = (__int64)v5 + v6;
          qword_140F06568 = (__int64)v5 + v6 + v6;
          goto LABEL_12;
        }
      }
    }
  }
  v1 = -1073741670;
LABEL_12:
  Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline();
  return v1;
}

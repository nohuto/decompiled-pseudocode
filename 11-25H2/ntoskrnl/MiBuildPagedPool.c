/*
 * XREFs of MiBuildPagedPool @ 0x140C42968
 * Callers:
 *     MiInitNucleus @ 0x140C3E068 (MiInitNucleus.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1404423A0 (MiGetAnyMultiplexedVm.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407DA984 (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeDynamicRegion @ 0x140C43C7C (MiInitializeDynamicRegion.c)
 */

__int64 MiBuildPagedPool()
{
  unsigned __int64 v0; // rbx
  unsigned __int64 v1; // rbx
  char *AnyMultiplexedVm; // rax
  _QWORD *v3; // rcx
  unsigned __int64 v4; // rbx

  v0 = qword_140E38890;
  if ( !(unsigned int)MiInitializeDynamicRegion(5LL, qword_140E38888, qword_140E38890) )
    return 0LL;
  MmSizeOfPagedPoolInBytes = v0;
  v1 = v0 >> 12;
  qword_140E37320 = v1;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
  v3 = &unk_140E38500;
  if ( (*((_DWORD *)AnyMultiplexedVm + 46) & 0xF) != 1 )
    v3 = AnyMultiplexedVm + 192;
  *v3 = &unk_140E2C8C0;
  if ( (int)MiInitializeSystemWorkingSetList((__int64)&MiSystemPartition, (__int64)AnyMultiplexedVm, 2, v1) < 0 )
    return 0LL;
  qword_140E37300 = 0LL;
  qword_140E37308 = qword_140E37320;
  qword_140E2C820 = 7680LL;
  if ( v1 < 0x9600 )
    qword_140E2C820 = v1 / 5;
  v4 = 2 * v1;
  qword_140E2C828 = 15360LL;
  if ( v4 < 0x12C00 )
    qword_140E2C828 = v4 / 5;
  return 1LL;
}

/*
 * XREFs of MiBuildPagedPool @ 0x140C53B98
 * Callers:
 *     MiInitNucleus @ 0x140C4F298 (MiInitNucleus.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140442630 (MiGetAnyMultiplexedVm.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407EA844 (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeDynamicRegion @ 0x140C54EFC (MiInitializeDynamicRegion.c)
 */

__int64 MiBuildPagedPool()
{
  unsigned __int64 v0; // rbx
  unsigned __int64 v1; // rbx
  char *AnyMultiplexedVm; // rax
  _QWORD *v3; // rcx
  unsigned __int64 v4; // rbx

  v0 = qword_140E38AD0;
  if ( !(unsigned int)MiInitializeDynamicRegion(5LL, qword_140E38AC8, qword_140E38AD0) )
    return 0LL;
  MmSizeOfPagedPoolInBytes = v0;
  v1 = v0 >> 12;
  qword_140E37560 = v1;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
  v3 = &unk_140E38740;
  if ( (*((_DWORD *)AnyMultiplexedVm + 46) & 0xF) != 1 )
    v3 = AnyMultiplexedVm + 192;
  *v3 = &unk_140E2CB00;
  if ( (int)MiInitializeSystemWorkingSetList((__int64)&MiSystemPartition, (__int64)AnyMultiplexedVm, 2, v1) < 0 )
    return 0LL;
  qword_140E37540 = 0LL;
  qword_140E37548 = qword_140E37560;
  qword_140E2CA60 = 7680LL;
  if ( v1 < 0x9600 )
    qword_140E2CA60 = v1 / 5;
  v4 = 2 * v1;
  qword_140E2CA68 = 15360LL;
  if ( v4 < 0x12C00 )
    qword_140E2CA68 = v4 / 5;
  return 1LL;
}

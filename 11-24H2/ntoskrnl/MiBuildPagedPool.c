/*
 * XREFs of MiBuildPagedPool @ 0x140C55D28
 * Callers:
 *     MiInitNucleus @ 0x140C51428 (MiInitNucleus.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140439200 (MiGetAnyMultiplexedVm.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407EAE14 (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeDynamicRegion @ 0x140C5708C (MiInitializeDynamicRegion.c)
 */

__int64 MiBuildPagedPool()
{
  unsigned __int64 v0; // rbx
  unsigned __int64 v1; // rbx
  char *AnyMultiplexedVm; // rax
  _QWORD *v3; // rcx
  unsigned __int64 v4; // rbx

  v0 = qword_140E38C10;
  if ( !(unsigned int)MiInitializeDynamicRegion(5LL, qword_140E38C08, qword_140E38C10) )
    return 0LL;
  MmSizeOfPagedPoolInBytes = v0;
  v1 = v0 >> 12;
  qword_140E376A0 = v1;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
  v3 = &unk_140E38880;
  if ( (*((_DWORD *)AnyMultiplexedVm + 46) & 0xF) != 1 )
    v3 = AnyMultiplexedVm + 192;
  *v3 = &unk_140E2CC40;
  if ( (int)MiInitializeSystemWorkingSetList((__int64)&MiSystemPartition, (__int64)AnyMultiplexedVm, 2u, v1) < 0 )
    return 0LL;
  qword_140E37680 = 0LL;
  qword_140E37688 = qword_140E376A0;
  qword_140E2CBA0 = 7680LL;
  if ( v1 < 0x9600 )
    qword_140E2CBA0 = v1 / 5;
  v4 = 2 * v1;
  qword_140E2CBA8 = 15360LL;
  if ( v4 < 0x12C00 )
    qword_140E2CBA8 = v4 / 5;
  return 1LL;
}

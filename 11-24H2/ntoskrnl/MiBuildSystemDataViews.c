/*
 * XREFs of MiBuildSystemDataViews @ 0x140C54094
 * Callers:
 *     MiInitNucleus @ 0x140C4F298 (MiInitNucleus.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140442630 (MiGetAnyMultiplexedVm.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407EA844 (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeDynamicRegion @ 0x140C54EFC (MiInitializeDynamicRegion.c)
 */

__int64 MiBuildSystemDataViews()
{
  unsigned __int64 v0; // rbx
  unsigned int v1; // edi
  __int64 v2; // rbx
  char *AnyMultiplexedVm; // rax
  _QWORD *v4; // rcx

  v0 = qword_140E38BB0;
  v1 = 0;
  if ( !(unsigned int)MiInitializeDynamicRegion(17LL, qword_140E38BA8, qword_140E38BB0) )
    return 0LL;
  v2 = v0 >> 12;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  v4 = &unk_140E38740;
  if ( (*((_DWORD *)AnyMultiplexedVm + 46) & 0xF) != 1 )
    v4 = AnyMultiplexedVm + 192;
  *v4 = &unk_140E36080;
  LOBYTE(v1) = (int)MiInitializeSystemWorkingSetList((__int64)&MiSystemPartition, (__int64)AnyMultiplexedVm, 4, v2) >= 0;
  return v1;
}

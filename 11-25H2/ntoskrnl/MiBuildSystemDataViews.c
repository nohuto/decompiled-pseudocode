/*
 * XREFs of MiBuildSystemDataViews @ 0x140C42E1C
 * Callers:
 *     MiInitNucleus @ 0x140C3E068 (MiInitNucleus.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1404423A0 (MiGetAnyMultiplexedVm.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407DA984 (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeDynamicRegion @ 0x140C43C7C (MiInitializeDynamicRegion.c)
 */

__int64 MiBuildSystemDataViews()
{
  unsigned __int64 v0; // rbx
  unsigned int v1; // edi
  __int64 v2; // rbx
  char *AnyMultiplexedVm; // rax
  _QWORD *v4; // rcx

  v0 = qword_140E38970;
  v1 = 0;
  if ( !(unsigned int)MiInitializeDynamicRegion(17LL, qword_140E38968, qword_140E38970) )
    return 0LL;
  v2 = v0 >> 12;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  v4 = &unk_140E38500;
  if ( (*((_DWORD *)AnyMultiplexedVm + 46) & 0xF) != 1 )
    v4 = AnyMultiplexedVm + 192;
  *v4 = &unk_140E35E40;
  LOBYTE(v1) = (int)MiInitializeSystemWorkingSetList((__int64)&MiSystemPartition, (__int64)AnyMultiplexedVm, 4, v2) >= 0;
  return v1;
}

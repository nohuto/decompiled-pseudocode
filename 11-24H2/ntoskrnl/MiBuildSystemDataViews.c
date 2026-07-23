/*
 * XREFs of MiBuildSystemDataViews @ 0x140C56224
 * Callers:
 *     MiInitNucleus @ 0x140C51428 (MiInitNucleus.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140439200 (MiGetAnyMultiplexedVm.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407EAE14 (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeDynamicRegion @ 0x140C5708C (MiInitializeDynamicRegion.c)
 */

__int64 MiBuildSystemDataViews()
{
  unsigned __int64 v0; // rbx
  unsigned int v1; // edi
  __int64 v2; // rbx
  char *AnyMultiplexedVm; // rax
  _QWORD *v4; // rcx

  v0 = qword_140E38CF0;
  v1 = 0;
  if ( !(unsigned int)MiInitializeDynamicRegion(17LL, qword_140E38CE8, qword_140E38CF0) )
    return 0LL;
  v2 = v0 >> 12;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  v4 = &unk_140E38880;
  if ( (*((_DWORD *)AnyMultiplexedVm + 46) & 0xF) != 1 )
    v4 = AnyMultiplexedVm + 192;
  *v4 = &unk_140E361C0;
  LOBYTE(v1) = (int)MiInitializeSystemWorkingSetList((__int64)&MiSystemPartition, (__int64)AnyMultiplexedVm, 4u, v2) >= 0;
  return v1;
}

/*
 * XREFs of MiInitializeSystemPtes @ 0x140C48C48
 * Callers:
 *     MiInitNucleus @ 0x140C3E068 (MiInitNucleus.c)
 * Callees:
 *     MiObtainSystemVa @ 0x14038EAA4 (MiObtainSystemVa.c)
 *     ExGenRandom @ 0x14041CDD0 (ExGenRandom.c)
 *     MiGetAnyMultiplexedVm @ 0x1404423A0 (MiGetAnyMultiplexedVm.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407DA984 (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeDynamicRegion @ 0x140C43C7C (MiInitializeDynamicRegion.c)
 *     MiInitializePteInfo @ 0x140C48A90 (MiInitializePteInfo.c)
 */

__int64 MiInitializeSystemPtes()
{
  unsigned __int64 v0; // rbp
  unsigned __int64 v1; // rsi
  char *AnyMultiplexedVm; // rax
  __int64 v3; // rdi
  _QWORD *v4; // rax
  char *v5; // rax
  unsigned __int64 v6; // r14
  __int64 result; // rax
  int v8; // [rsp+60h] [rbp+8h]

  v0 = qword_140E388A8;
  v1 = qword_140E388B0;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
  v3 = (__int64)AnyMultiplexedVm;
  if ( (*((_DWORD *)AnyMultiplexedVm + 46) & 0xF) == 1 )
    v4 = &unk_140E38500;
  else
    v4 = AnyMultiplexedVm + 192;
  *v4 = &unk_140E35D40;
  if ( (int)MiInitializeSystemWorkingSetList((__int64)&MiSystemPartition, v3, 5, 0LL) < 0 )
    return 0LL;
  v5 = MiGetAnyMultiplexedVm(5);
  if ( (int)MiInitializeSystemWorkingSetList((__int64)&MiSystemPartition, (__int64)v5, 6, 0LL) < 0 )
    return 0LL;
  KeGetCurrentPrcb()->PteBitCache = -1LL;
  v6 = ((((v1 >> 15) + 4095) & 0xFFFFFFFFFFFFF000uLL) * (dword_140FC41EC & 2 | 1LL) + (v1 >> 24) + 0x1FFFFF) >> 21;
  qword_140E2EC28 = v1 + v0 - ((unsigned __int64)((unsigned int)v6 + (ExGenRandom(1) & 0x3FFF)) << 21);
  if ( !(unsigned int)MiInitializePteInfo(
                        (__int64)&qword_140E37328,
                        8,
                        (v1 >> 24) + qword_140E2EC28,
                        4,
                        v0,
                        v1,
                        1u,
                        qword_140E35AD8) )
    return 0LL;
  v8 = *(_DWORD *)(v3 + 184);
  LOBYTE(v8) = v8 & 0xF0 | 5;
  *(_WORD *)(v3 + 184) = v8;
  if ( !(unsigned int)MiInitializeDynamicRegion(8) )
    return 0LL;
  MiObtainSystemVa((unsigned int)v6, 0xCu);
  MiFlags |= 0x40000000uLL;
  result = 1LL;
  qword_140E35C70 = 0LL;
  return result;
}

/*
 * XREFs of MiInitializeSystemPtes @ 0x140C5C108
 * Callers:
 *     MiInitNucleus @ 0x140C51428 (MiInitNucleus.c)
 * Callees:
 *     MiObtainSystemVa @ 0x14026CAF4 (MiObtainSystemVa.c)
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 *     MiGetAnyMultiplexedVm @ 0x140439200 (MiGetAnyMultiplexedVm.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407EAE14 (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeDynamicRegion @ 0x140C5708C (MiInitializeDynamicRegion.c)
 *     MiInitializePteInfo @ 0x140C5BF50 (MiInitializePteInfo.c)
 */

__int64 MiInitializeSystemPtes()
{
  unsigned __int64 v0; // rbp
  unsigned __int64 v1; // rsi
  char *AnyMultiplexedVm; // rax
  __int64 v3; // rdi
  _QWORD *v4; // rax
  char *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // r14
  __int64 result; // rax
  int v11; // [rsp+60h] [rbp+8h]

  v0 = qword_140E38C28;
  v1 = qword_140E38C30;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
  v3 = (__int64)AnyMultiplexedVm;
  if ( (*((_DWORD *)AnyMultiplexedVm + 46) & 0xF) == 1 )
    v4 = &unk_140E38880;
  else
    v4 = AnyMultiplexedVm + 192;
  *v4 = &unk_140E360C0;
  if ( (int)MiInitializeSystemWorkingSetList((__int64)&MiSystemPartition, v3, 5u, 0LL) < 0 )
    return 0LL;
  v5 = MiGetAnyMultiplexedVm(5);
  if ( (int)MiInitializeSystemWorkingSetList((__int64)&MiSystemPartition, (__int64)v5, 6u, 0LL) < 0 )
    return 0LL;
  KeGetCurrentPrcb()->PteBitCache = -1LL;
  v9 = ((((v1 >> 15) + 4095) & 0xFFFFFFFFFFFFF000uLL) * (dword_140FC51FC & 2 | 1LL) + (v1 >> 24) + 0x1FFFFF) >> 21;
  qword_140E2EFA8 = v1 + v0 - ((unsigned __int64)((unsigned int)v9 + (ExGenRandom(1, v6, v7, v8) & 0x3FFF)) << 21);
  if ( !(unsigned int)MiInitializePteInfo(
                        (__int64)&qword_140E376A8,
                        8,
                        (v1 >> 24) + qword_140E2EFA8,
                        4,
                        v0,
                        v1,
                        1u,
                        qword_140E35E58) )
    return 0LL;
  v11 = *(_DWORD *)(v3 + 184);
  LOBYTE(v11) = v11 & 0xF0 | 5;
  *(_WORD *)(v3 + 184) = v11;
  if ( !(unsigned int)MiInitializeDynamicRegion(8) )
    return 0LL;
  MiObtainSystemVa((unsigned int)v9, 0xCu);
  MiFlags |= 0x40000000uLL;
  result = 1LL;
  qword_140E35FF0 = 0LL;
  return result;
}

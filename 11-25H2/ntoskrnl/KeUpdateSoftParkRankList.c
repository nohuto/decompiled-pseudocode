/*
 * XREFs of KeUpdateSoftParkRankList @ 0x14047B798
 * Callers:
 *     PpmParkReportParkedCores @ 0x1403AD8E0 (PpmParkReportParkedCores.c)
 *     PpmParkApplyPolicy @ 0x1404E9D84 (PpmParkApplyPolicy.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiCompressSoftParkRankList @ 0x14047B970 (KiCompressSoftParkRankList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406AAA20 (RtlCopyVolatileMemory.c)
 *     memcmp @ 0x1406B4C10 (memcmp.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

unsigned __int64 KeUpdateSoftParkRankList()
{
  _DWORD *v0; // r14
  unsigned __int64 result; // rax
  unsigned int i; // edi
  __int64 v3; // rbx
  int v4; // r8d
  unsigned __int64 v5; // r10
  unsigned __int16 v6; // r9
  unsigned int v7; // ecx
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int8 CurrentIrql; // si
  __int64 v11; // rdx
  _BYTE Buf1[64]; // [rsp+30h] [rbp-178h] BYREF
  _DWORD v13[64]; // [rsp+70h] [rbp-138h] BYREF

  v0 = PpmParkNewSoftParkRankList;
  result = (unsigned __int64)memset_0(Buf1, 0, sizeof(Buf1));
  for ( i = 0; i < (unsigned __int16)KiSubNodeCount; ++i )
  {
    v3 = *(_QWORD *)(KiSubNodes + 8LL * i);
    if ( v3 )
    {
      memset_0(v13, 255, sizeof(v13));
      v4 = *(unsigned __int16 *)(v3 + 136);
      v5 = *(_QWORD *)(v3 + 128);
      v6 = *(_WORD *)(v3 + 136);
LABEL_6:
      v7 = v4 + 1;
      while ( 1 )
      {
        if ( v5 )
        {
          _BitScanForward64(&v8, v5);
          v5 &= ~(1LL << v8);
          v13[*(unsigned __int8 *)(KiProcessorBlock[*((unsigned int *)qword_140F216A8
                                                    + 64 * v4
                                                    + (unsigned int)(unsigned __int8)v8)]
                                 + 209)] = v0[*((unsigned int *)qword_140F216A8
                                              + 64 * v4
                                              + (unsigned int)(unsigned __int8)v8)];
          goto LABEL_6;
        }
        v4 = ++v6;
        if ( v6 >= v7 )
          break;
        v5 = *(_QWORD *)(8LL * v6 + 8);
      }
      KiCompressSoftParkRankList(v13, Buf1);
      if ( memcmp(Buf1, (const void *)(v3 + 448), 0x40uLL) )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v9) = CurrentIrql;
          KiRaiseIrqlProcessIrqlFlags(v9);
        }
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v3 + 120));
        RtlCopyVolatileMemory((void *)(v3 + 448), Buf1, 0x40uLL);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 120));
        if ( KiIrqlFlags )
        {
          LOBYTE(v11) = CurrentIrql;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
        }
        __writecr8(CurrentIrql);
      }
    }
    result = (unsigned __int16)KiSubNodeCount;
  }
  return result;
}

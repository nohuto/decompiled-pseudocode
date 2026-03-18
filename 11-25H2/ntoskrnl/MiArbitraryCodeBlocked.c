/*
 * XREFs of MiArbitraryCodeBlocked @ 0x140902858
 * Callers:
 *     MiAllowProtectionChange @ 0x140246230 (MiAllowProtectionChange.c)
 *     MiMapViewOfSection @ 0x1408FC9F0 (MiMapViewOfSection.c)
 *     MiReserveUserMemory @ 0x1409012DC (MiReserveUserMemory.c)
 *     MiMapViewOfImageSection @ 0x1409028FC (MiMapViewOfImageSection.c)
 * Callees:
 *     EtwTraceMemoryAcg @ 0x140457B54 (EtwTraceMemoryAcg.c)
 *     EtwpTimLogMitigationForProcess @ 0x140904814 (EtwpTimLogMitigationForProcess.c)
 *     EtwTimLogProhibitDynamicCode @ 0x140A74BD0 (EtwTimLogProhibitDynamicCode.c)
 */

__int64 __fastcall MiArbitraryCodeBlocked(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rcx
  int v3; // edx

  CurrentThread = KeGetCurrentThread();
  v3 = *(_DWORD *)(a1 + 1872);
  if ( (v3 & 0x100) == 0 || _bittest((const signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x12u) )
  {
    if ( (v3 & 0x800) != 0 && !_bittest((const signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x12u) )
      EtwTimLogProhibitDynamicCode(1LL, a1);
    EtwTraceMemoryAcg(0);
    return 0LL;
  }
  else
  {
    EtwTraceMemoryAcg(0x80000000);
    if ( (*(_DWORD *)(a1 + 1872) & 0x800) != 0 )
    {
      EtwpTimLogMitigationForProcess(0LL, 2LL, MITIGATION_ENFORCE_PROHIBIT_DYNAMIC_CODE, a1, 1);
      _InterlockedAnd((volatile signed __int32 *)(a1 + 1872), 0xFFFFF7FF);
    }
    return 3221227012LL;
  }
}

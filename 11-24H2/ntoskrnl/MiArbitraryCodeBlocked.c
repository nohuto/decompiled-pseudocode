/*
 * XREFs of MiArbitraryCodeBlocked @ 0x140A13140
 * Callers:
 *     MiAllowProtectionChange @ 0x140441E14 (MiAllowProtectionChange.c)
 *     MiMapViewOfSection @ 0x14089A1A0 (MiMapViewOfSection.c)
 *     MiReserveUserMemory @ 0x1408DFE98 (MiReserveUserMemory.c)
 *     MiMapViewOfImageSection @ 0x1408E3418 (MiMapViewOfImageSection.c)
 * Callees:
 *     EtwTraceMemoryAcg @ 0x1404585D0 (EtwTraceMemoryAcg.c)
 *     EtwpTimLogMitigationForProcess @ 0x140A6DB4C (EtwpTimLogMitigationForProcess.c)
 *     EtwTimLogProhibitDynamicCode @ 0x140A76C0C (EtwTimLogProhibitDynamicCode.c)
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

/*
 * XREFs of HalpDmaReferenceDomainObject @ 0x14041119C
 * Callers:
 *     HalpAllocateCommonBufferVectorInternal @ 0x14041011C (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x140410764 (HalpAllocateCommonBufferDmarThin.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x140410E18 (HalpAllocateCommonBufferDmaThin.c)
 *     HalJoinDmaDomain @ 0x1404D8CA0 (HalJoinDmaDomain.c)
 *     HalCreateCommonBufferFromMdl @ 0x14054FDB0 (HalCreateCommonBufferFromMdl.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x140550340 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalpDmaAllocateDomain @ 0x1405507CC (HalpDmaAllocateDomain.c)
 *     HalpDmaIsAutomaticDomain @ 0x1405510F8 (HalpDmaIsAutomaticDomain.c)
 *     HalCreateCommonBufferFromMdlDmaThin @ 0x1405513C0 (HalCreateCommonBufferFromMdlDmaThin.c)
 *     HalCreateCommonBufferFromMdlDmarThin @ 0x140551960 (HalCreateCommonBufferFromMdlDmarThin.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall HalpDmaReferenceDomainObject(__int64 a1)
{
  char v2; // bl
  KIRQL v3; // al
  __int64 *i; // rdx

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&HalpDmaDomainListLock);
  for ( i = (__int64 *)HalpDmaDomainList; i != &HalpDmaDomainList; i = (__int64 *)*i )
  {
    if ( (__int64 *)a1 == i )
    {
      v2 = 1;
      ++*(_DWORD *)(a1 + 112);
      break;
    }
  }
  KeReleaseSpinLock(&HalpDmaDomainListLock, v3);
  return v2 == 0 ? 0xC000000D : 0;
}

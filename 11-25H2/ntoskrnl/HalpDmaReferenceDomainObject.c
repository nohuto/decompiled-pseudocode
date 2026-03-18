/*
 * XREFs of HalpDmaReferenceDomainObject @ 0x1404148C8
 * Callers:
 *     HalpAllocateCommonBufferVectorInternal @ 0x140412974 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x140412D64 (HalpAllocateCommonBufferDmarThin.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x140414548 (HalpAllocateCommonBufferDmaThin.c)
 *     HalJoinDmaDomain @ 0x1404D9CF0 (HalJoinDmaDomain.c)
 *     HalCreateCommonBufferFromMdl @ 0x14054D450 (HalCreateCommonBufferFromMdl.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x14054D9E0 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalpDmaAllocateDomain @ 0x14054DE6C (HalpDmaAllocateDomain.c)
 *     HalpDmaIsAutomaticDomain @ 0x14054E798 (HalpDmaIsAutomaticDomain.c)
 *     HalCreateCommonBufferFromMdlDmaThin @ 0x14054EA60 (HalCreateCommonBufferFromMdlDmaThin.c)
 *     HalCreateCommonBufferFromMdlDmarThin @ 0x14054F060 (HalCreateCommonBufferFromMdlDmarThin.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
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

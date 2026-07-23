/*
 * XREFs of HalpDmaReferenceDomainObject @ 0x140396628
 * Callers:
 *     HalpAllocateCommonBufferDmaThin @ 0x1403962A4 (HalpAllocateCommonBufferDmaThin.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x140397478 (HalpAllocateCommonBufferDmarThin.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x1403976A0 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalJoinDmaDomain @ 0x1404D20F0 (HalJoinDmaDomain.c)
 *     HalCreateCommonBufferFromMdl @ 0x14054D6F0 (HalCreateCommonBufferFromMdl.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x14054DC80 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalpDmaAllocateDomain @ 0x14054E10C (HalpDmaAllocateDomain.c)
 *     HalpDmaIsAutomaticDomain @ 0x14054EA38 (HalpDmaIsAutomaticDomain.c)
 *     HalCreateCommonBufferFromMdlDmaThin @ 0x14054ED00 (HalCreateCommonBufferFromMdlDmaThin.c)
 *     HalCreateCommonBufferFromMdlDmarThin @ 0x14054F2A0 (HalCreateCommonBufferFromMdlDmarThin.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
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

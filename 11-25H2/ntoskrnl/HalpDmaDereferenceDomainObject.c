/*
 * XREFs of HalpDmaDereferenceDomainObject @ 0x1404118D8
 * Callers:
 *     HalFreeCommonBufferVector @ 0x140411520 (HalFreeCommonBufferVector.c)
 *     HalFreeCommonBufferDmarThin @ 0x140411630 (HalFreeCommonBufferDmarThin.c)
 *     HalFreeCommonBufferDmaThin @ 0x140411700 (HalFreeCommonBufferDmaThin.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x140412974 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x140412D64 (HalpAllocateCommonBufferDmarThin.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x140414548 (HalpAllocateCommonBufferDmaThin.c)
 *     HalJoinDmaDomain @ 0x1404D9CF0 (HalJoinDmaDomain.c)
 *     HalCreateCommonBufferFromMdl @ 0x14054D450 (HalCreateCommonBufferFromMdl.c)
 *     HalFreeCommonBufferV3 @ 0x14054D840 (HalFreeCommonBufferV3.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x14054D9E0 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalpDmaAllocateDomain @ 0x14054DE6C (HalpDmaAllocateDomain.c)
 *     HalpDmaIsAutomaticDomain @ 0x14054E798 (HalpDmaIsAutomaticDomain.c)
 *     HalpLeaveDmaDomain @ 0x14054E85C (HalpLeaveDmaDomain.c)
 *     HalCreateCommonBufferFromMdlDmaThin @ 0x14054EA60 (HalCreateCommonBufferFromMdlDmaThin.c)
 *     HalCreateCommonBufferFromMdlDmarThin @ 0x14054F060 (HalCreateCommonBufferFromMdlDmarThin.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     HalpDmaDeleteDomain @ 0x14054E224 (HalpDmaDeleteDomain.c)
 */

__int64 __fastcall HalpDmaDereferenceDomainObject(__int64 *BugCheckParameter3)
{
  char v2; // si
  char v3; // di
  KIRQL v4; // al
  __int64 *v5; // rcx
  KIRQL v6; // dl
  bool v7; // zf
  __int64 v9; // rcx
  __int64 **v10; // rax

  v2 = 0;
  v3 = 0;
  v4 = KeAcquireSpinLockRaiseToDpc(&HalpDmaDomainListLock);
  v5 = (__int64 *)HalpDmaDomainList;
  v6 = v4;
  while ( v5 != &HalpDmaDomainList )
  {
    if ( BugCheckParameter3 == v5 )
    {
      v7 = (*((_DWORD *)BugCheckParameter3 + 28))-- == 1;
      v3 = 1;
      if ( v7 )
      {
        v9 = *BugCheckParameter3;
        if ( *(__int64 **)(*BugCheckParameter3 + 8) != BugCheckParameter3
          || (v10 = (__int64 **)BugCheckParameter3[1], *v10 != BugCheckParameter3) )
        {
          __fastfail(3u);
        }
        *v10 = (__int64 *)v9;
        v2 = 1;
        *(_QWORD *)(v9 + 8) = v10;
      }
      break;
    }
    v5 = (__int64 *)*v5;
  }
  KeReleaseSpinLock(&HalpDmaDomainListLock, v6);
  if ( v2 )
    HalpDmaDeleteDomain((ULONG_PTR)BugCheckParameter3);
  return v3 == 0 ? 0xC000000D : 0;
}

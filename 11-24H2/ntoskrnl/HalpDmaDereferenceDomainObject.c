/*
 * XREFs of HalpDmaDereferenceDomainObject @ 0x1403A92FC
 * Callers:
 *     HalFreeCommonBufferVector @ 0x1403A8F20 (HalFreeCommonBufferVector.c)
 *     HalFreeCommonBufferDmarThin @ 0x1403A9030 (HalFreeCommonBufferDmarThin.c)
 *     HalFreeCommonBufferDmaThin @ 0x1403A9120 (HalFreeCommonBufferDmaThin.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x14041011C (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x140410764 (HalpAllocateCommonBufferDmarThin.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x140410E18 (HalpAllocateCommonBufferDmaThin.c)
 *     HalJoinDmaDomain @ 0x1404D8CA0 (HalJoinDmaDomain.c)
 *     HalCreateCommonBufferFromMdl @ 0x14054FDB0 (HalCreateCommonBufferFromMdl.c)
 *     HalFreeCommonBufferV3 @ 0x1405501A0 (HalFreeCommonBufferV3.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x140550340 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalpDmaAllocateDomain @ 0x1405507CC (HalpDmaAllocateDomain.c)
 *     HalpDmaIsAutomaticDomain @ 0x1405510F8 (HalpDmaIsAutomaticDomain.c)
 *     HalpLeaveDmaDomain @ 0x1405511BC (HalpLeaveDmaDomain.c)
 *     HalCreateCommonBufferFromMdlDmaThin @ 0x1405513C0 (HalCreateCommonBufferFromMdlDmaThin.c)
 *     HalCreateCommonBufferFromMdlDmarThin @ 0x140551960 (HalCreateCommonBufferFromMdlDmarThin.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpDmaDeleteDomain @ 0x140550B84 (HalpDmaDeleteDomain.c)
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
